## 220830 `print` `scanf` 문자 입출력

```cpp
	printf("abcdef %d   \n", 10);
	printf("abcdef %f   \n", 3.14f);

	for (int i = 0; i < 10; ++i) {

		printf("Output i : %d \n", i);
	}

	// scanf
	int iInput = 0;
	scanf_s("%d", &iInput);
```

`%d` : `정수` 데이터타입을 입력받는다.  
`%f` : `실수` 데이터타입을 입력받는다.


구체적인 작동방식을 이해하려면 꽤 높은 수준의 cpp이해도가 필요하다.