# 220830 `printf()` `scanf()` 문자 입출력

* `<stdio.h>` 헤더파일이 필요하다.
* `printf()` 는 출력한다.
* `scanf()` 는 첫 번째 매개변수의 형식에 맞게 데이터를 입력받고, 그 데이터를 n번째 매개변수에 저장한다.

<br/>

### 사용 예시

#### `printf()`
```cpp
printf("/*출력내용*/");

printf("abcdef %d   \n", 10); // %d자리에 두번째 매개변수가 출력된다.
```
<br/>

#### `scanf()`
```cpp
scanf("/*입력받을 문자의 서식*/", "/*변수의 주소*/")

scanf("%d", &num); // num에 숫자1개를 입력받는다.
```
<br/>

```cpp
	// printf
	printf("abcdef %d   \n", 10);
	printf("abcdef %f   \n", 3.14f);

	for (int i = 0; i < 10; ++i) {

		printf("Output i : %d \n", i);
	}

	// scanf
	int iInput = 0;
	scanf_s("%d", &iInput);
```

<br/>

|   |   |
|---|---|
| `%d` |  **정수** 데이터타입  |
| `%f` |  **실수** 데이터타입  |