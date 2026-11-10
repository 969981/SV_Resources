/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3ec6c; name: FUN_00d3ec6c
 */


void FUN_00d3ec6c(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x38) = param_2;
  if ((lVar2 == 0) || (*(char *)(param_2 + 0x14) != '\0')) {
    *(long *)(param_1 + 0x30) = param_2;
    if (*(char *)(param_2 + 0x14) == '\0') {
      if (*(char *)(param_2 + 0x10) == '\0') {
        puVar3 = &LAB_02b6181c;
      }
      else {
        puVar3 = &LAB_02b61328;
      }
    }
    else {
      puVar3 = &LAB_02b610f4;
    }
    *(undefined1 **)(param_1 + 0x48) = puVar3;
    puVar4 = (undefined8 *)(param_1 + 0x50);
    puVar1 = puVar4;
    if (*(long *)(param_1 + 0x70) != 0) {
      puVar1 = puVar4 + *(long *)(param_1 + 0x70);
    }
    if (puVar1 != puVar4) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),param_1,param_2);
      if (puVar1 != (undefined8 *)(param_1 + 0x58)) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
                  (*(long **)(param_1 + 0x58),param_1,*(undefined8 *)(param_1 + 0x30));
        for (puVar4 = (undefined8 *)(param_1 + 0x60); puVar1 != puVar4; puVar4 = puVar4 + 1) {
          (**(code **)(*(long *)*puVar4 + 0x18))
                    ((long *)*puVar4,param_1,*(undefined8 *)(param_1 + 0x30));
        }
      }
    }
  }
  else {
    *(long *)(param_1 + 0x30) = lVar2;
    if (*(char *)(lVar2 + 0x14) == '\0') {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        puVar3 = &LAB_02b6181c;
      }
      else {
        puVar3 = &LAB_02b61328;
      }
    }
    else {
      puVar3 = &LAB_02b610f4;
    }
    *(undefined1 **)(param_1 + 0x48) = puVar3;
    puVar4 = (undefined8 *)(param_1 + 0x50);
    puVar1 = puVar4;
    if (*(long *)(param_1 + 0x70) != 0) {
      puVar1 = puVar4 + *(long *)(param_1 + 0x70);
    }
    if (puVar1 != puVar4) {
      (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),param_1);
      if (puVar1 != (undefined8 *)(param_1 + 0x58)) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
                  (*(long **)(param_1 + 0x58),param_1,*(undefined8 *)(param_1 + 0x30));
        for (puVar4 = (undefined8 *)(param_1 + 0x60); puVar1 != puVar4; puVar4 = puVar4 + 1) {
          (**(code **)(*(long *)*puVar4 + 0x18))
                    ((long *)*puVar4,param_1,*(undefined8 *)(param_1 + 0x30));
        }
      }
    }
  }
  return;
}


