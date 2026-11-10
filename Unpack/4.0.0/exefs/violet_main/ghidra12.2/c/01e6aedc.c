/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6aedc; name: FUN_01e6aedc
 */


undefined8 FUN_01e6aedc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x80);
    plVar1 = *(long **)(param_1 + 0x88);
    if ((plVar3 != plVar1) && (lVar2 != *plVar3)) {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6aefc;
        }
      } while (lVar2 != *plVar3);
    }
LAB_01e6aefc:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x80);
    plVar1 = *(long **)(param_1 + 0x88);
    if ((plVar3 != plVar1) && (lVar2 != *plVar3)) {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6af24;
        }
      } while (lVar2 != *plVar3);
    }
LAB_01e6af24:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x68);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x80);
    plVar1 = *(long **)(param_1 + 0x88);
    if ((plVar3 != plVar1) && (lVar2 != *plVar3)) {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6af4c;
        }
      } while (lVar2 != *plVar3);
    }
LAB_01e6af4c:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x80);
    plVar1 = *(long **)(param_1 + 0x88);
    if ((plVar3 != plVar1) && (lVar2 != *plVar3)) {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01e6af74;
        }
      } while (lVar2 != *plVar3);
    }
LAB_01e6af74:
    if (plVar1 == plVar3) {
      return 0;
    }
  }
  return 1;
}


