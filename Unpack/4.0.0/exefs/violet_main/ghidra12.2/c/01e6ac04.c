/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6ac04; name: FUN_01e6ac04
 */


undefined8 FUN_01e6ac04(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar1 = *(long **)(param_1 + 0xc0);
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 2;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6ac24;
        }
      } while (*plVar3 != lVar2);
    }
LAB_01e6ac24:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar1 = *(long **)(param_1 + 0xc0);
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 2;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6ac4c;
        }
      } while (*plVar3 != lVar2);
    }
LAB_01e6ac4c:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar1 = *(long **)(param_1 + 0xc0);
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 2;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6ac74;
        }
      } while (*plVar3 != lVar2);
    }
LAB_01e6ac74:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar1 = *(long **)(param_1 + 0xc0);
    if ((plVar3 != plVar1) && (*plVar3 != lVar2)) {
      do {
        plVar3 = plVar3 + 2;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6ac9c;
        }
      } while (*plVar3 != lVar2);
    }
LAB_01e6ac9c:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  return 1;
}


