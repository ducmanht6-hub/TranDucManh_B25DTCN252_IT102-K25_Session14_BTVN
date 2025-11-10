#include<stdio.h>
#include<stdlib.h>

void insertElement(int numbers[], int size){
	for(int i = 0; i < size; i++){
		printf("[%d] = ",i);
		scanf("%d", &numbers[i]);
	}
} 

void printElement(int numbers[], int size){
	printf("Cac phan tu trong mang: ");
	for(int i = 0; i < size; i++){
		printf("%d ",numbers[i]);
	}
}

int addElement(int numbers[], int size) {
    int pos, value;
    printf("Nhap vi tri them (0-%d): ", size);
    scanf("%d", &pos);
    if(pos < 0 || pos > size) {
        printf("Vi tri khong hop le\n");
        return size;
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    for(int i = pos; i > size; i--) {
        numbers[i] = numbers[i-1];
    }
    numbers[pos] = value;
    return size + 1;
}

void updateElement(int numbers[], int size) {
    int pos, value;
    printf("Nhap vi tri muon cap nhat (0-%d): ", size-1);
    scanf("%d", &pos);

    if(pos < 0 || pos >= size) {
        printf("Vi tri khong hop le\n");
        return;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &value);

    numbers[pos] = value;
}

int deleteElement(int numbers[], int size) {
    int pos;
    printf("Nhap vi tri xoa (0-%d): ", size-1);
    scanf("%d", &pos);
    if(pos < 0 || pos >= size) {
        printf("Vi tri khong hop le\n");
        return size;
    }

    for(int i = pos; i < size - 1; i++) {
        numbers[i] = numbers[i+1];
    }
    return size - 1;
}

void  sortAscending(int numbers[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(numbers[j] > numbers[j + 1]){
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
}

void  sortDescending(int numbers[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(numbers[j] < numbers[j + 1]){
				int temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
}

int searchLinear(int numbers[], int size, int searchValue){
	for(int i = 0; i < size; i++){
		if(numbers[i] == searchValue){
			return i;
		}
	}				
	return -1; 
}

int searchBinary(int numbers[], int size, int searchValue){
	int left = 0, right = size - 1, mid;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(numbers[mid] == searchValue) return mid;
        if(numbers[mid] < searchValue) {
        	left = mid + 1;
		} else{
			right = mid - 1;
		}
    }
    return -1;
} 

int main(){
	int i, size, numbers[100], choice, sortChoice, searchChoice, searchValue, result;
	
	do{
		printf("\n***************MENU*******************\n");
		printf("1. Nhap phan tu\n");
		printf("2. Hien thi cac gia tri\n");
		printf("3. Them phan tu\n");
		printf("4. Sua phan tu\n");
		printf("5. Xoa phan tu\n");
		printf("6. Sap xep\n");
		printf("7. Tim kiem\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				printf("Nhap so luong phan tu: ");
				scanf("%d", &size);
				
				insertElement(numbers, size);
				 
				printf("\n");
				break;
				
			case 2:
				printElement(numbers, size);
				
				printf("\n");
				break;
				
			case 3:
				size = addElement(numbers, size);
				
				printf("\n");
				break;
				
			case 4:
				updateElement(numbers, size);
				
				printf("\n");
				break;
				
			case 5:
				size = deleteElement(numbers, size);
				
				printf("\n");
				break;
				
			case 6:
				printf("1. Tang dan\n");
				printf("2. Giam dan\n");
				printf("Lua chon cua ban: ");
		        scanf("%d", &sortChoice);
		        
				switch(sortChoice){
					case 1:
						sortAscending(numbers, size);
						break;
					case 2:
						sortDescending(numbers, size); 
						break;
					default:
						printf("Vui long chon tu 1-2");
				}
				printf("\n");
				break;
				
			case 7:
				printf("Nhap gia tri can tim: ");
                scanf("%d", &searchValue);
                
				printf("1. Linear search\n");
				printf("2. Binary search\n");
				printf("Lua chon cua ban: ");
		        scanf("%d", &searchChoice);
		        
				switch(searchChoice){
					case 1:
						result = searchLinear(numbers, size, searchValue);
						break;
						
					case 2:
						sortAscending(numbers, size);
						result = searchBinary(numbers, size, searchValue);
						break;
						
					default:
						printf("Vui long chon tu 1-2");
				}
				
				if(result == -1){
					printf("Khong tim thay");
				}
                else{
                	printf("Tim thay %d o vi tri %d", searchValue, result);
				}
				
				printf("\n");
				break;
			
			case 8:
				printf("Ket thuc chuong trinh");
				break;
			
			default:
				printf("Vui long chon tu 1-8\n");
		}
    } while(choice != 8);
    
	return 0;
}
