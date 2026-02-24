# C 프로젝트 빌드 및 실행 가이드

## 환경 구성

| 항목 | 내용 |
|------|------|
| 컴파일러 | GCC 15.2.0 (w64devkit) |
| 설치 경로 | `C:\w64devkit\bin\gcc.exe` |
| 디버거 | GDB (`C:\w64devkit\bin\gdb.exe`) |
| IDE | Visual Studio Code |

## VSCode에서 빌드 (Ctrl+Shift+B)

1. 컴파일할 `.c` 파일을 VSCode에서 연다
2. `Ctrl+Shift+B` 를 누른다
3. 같은 폴더에 `.exe` 파일이 생성된다

예시: `1/1.c` → `1/1.exe`

## VSCode에서 디버그 실행 (F5)

1. 컴파일할 `.c` 파일을 VSCode에서 연다
2. `F5` 를 누른다
3. 자동으로 컴파일 후 외부 콘솔에서 실행된다
4. 중단점(breakpoint)을 설정하면 해당 위치에서 멈춘다

## 터미널에서 직접 빌드 및 실행

```bash
# 컴파일
C:\w64devkit\bin\gcc.exe -g 파일명.c -o 파일명.exe

# 실행
.\파일명.exe
```

### 예시

```bash
# 1/1.c 컴파일
C:\w64devkit\bin\gcc.exe -g 1\1.c -o 1\1.exe

# 실행
.\1\1.exe
```

## 설정 파일 위치

- 빌드 설정: `.vscode/tasks.json`
- 디버그 설정: `.vscode/launch.json`
