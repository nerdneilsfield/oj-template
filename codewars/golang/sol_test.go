package sol

import (
	"testing"
)

func TestSol(t *testing.T){
	if Sol() != 1 {
		t.Error()
	}
}
