/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b9180; name: FUN_034b9180
 */


void FUN_034b9180(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x40);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x40))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x48);
        }
        *(uint *)(param_1 + 0x48) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x50);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x50))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x58);
        }
        *(uint *)(param_1 + 0x58) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x60);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x60))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x68) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x70);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x70))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x78);
        }
        *(uint *)(param_1 + 0x78) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x80);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x80))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x88);
        }
        *(uint *)(param_1 + 0x88) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0x90);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0x90))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0x98) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0xa0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xa0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0xb0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xb0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar1 - 1;
        break;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 2;
    piVar2 = *(int **)(param_1 + 0xc0);
    do {
      if (*piVar2 == param_2) {
        if (1 < uVar1) {
          *piVar2 = (*(int **)(param_1 + 0xc0))[(ulong)uVar1 - 1];
          uVar1 = *(uint *)(param_1 + 200);
        }
        *(uint *)(param_1 + 200) = uVar1 - 1;
        return;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  return;
}


