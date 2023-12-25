@echo off
for /d %%i in (*) do (
    cd "%%i"
    ren main.cpp answer.cpp 2>nul
	(
		echo #include ^<iostream^> >> "main.cpp"
		echo #include "solution.h" >> "main.cpp"
		echo int main^(^) ^{ >> "main.cpp"
		echo ^} >> "main.cpp"
	)
    (
		echo #include ^<gtest/gtest.h^> >> "%%i_test.cpp"
		echo #include "solution.h" >> "%%i_test.cpp"
		echo TEST^(ProblemTest, TEST1^) ^{ >> "%%i_test.cpp"
		echo ^} >> "%%i_test.cpp"

	)
    (
        echo void solution^(^) ^{ >> solution.h
        echo ^}>> solution.h
    )
    cd ..
)