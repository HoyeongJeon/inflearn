윈도우 파일의 pe파일 구조 (PEview)

PE 헤더 중 ImageBase → 파일데이터가 메모리에 올라갈 때 어디에 올라가는지 그 주소 정보를 말해줌.
![Untitled](https://user-images.githubusercontent.com/78394999/209777348-9e2d9153-be5d-4f52-9eeb-e3f23efc0fdc.png)
PEview로 확인한 정보

1. ImageBase → 0x00400000 → 메모리에서 sample1 파일의 위치주소! 
2. ImageBase + AddressOfEntryPoint = 0x0041030 → 코드의 시작 주소