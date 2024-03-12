# embedded-system-2024
IoT 개발자 임베디드시스템 학습 리포지토

## 1일차
- 라즈베리파이
	- 1.sudo apt update
	- 2.sudo apt upgrade -y
	- 3.clear
	- 4. 환경설정
	편집기 : 코드 작업할 때 사용하는 프로그램(nano)
	한글
	- 5. 기본명령어(C)
		- 기존 Pc같이 사용하면 안된다.
		- 순서에 맞추어서 사용(동작중에 다른 명령어 처리 안됨)
    ls : 현재 있는 목록
    pwd : 현재 내가 있는 위치
    mkdir Work
    ls
     : 작업할 폴더 생성
    rm - fr Work
    ls
    : 삭제
    ls -a
    : 숨겨진 파일 보기
    ls -l
    : 상세히 보여주기
    cd Work
    : Work로 들어가기
    cd ..
    : 상위 디렉터리로 빠져나가기
    ls /etc
    :
    nano /etc/nanorc