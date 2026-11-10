/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00497320; name: FUN_00497320
 */


int FUN_00497320(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  iVar1 = FUN_0047e430(*param_2);
  if (0 < iVar1) {
    iVar3 = 0;
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_0047e450(*param_2,iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return 0x31;
        }
        if (puVar4[2] != 0) {
          return 0x31;
        }
        if (iVar3 != 2) {
          iVar3 = FUN_00497a90(param_1);
          if (iVar3 == 0) {
            iVar3 = 2;
          }
          else {
            if (iVar3 != 0x2f) {
              return iVar3;
            }
            iVar3 = 1;
          }
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(*param_2);
    } while (iVar1 < iVar2);
    if (iVar3 == 1) {
      return 0x2f;
    }
  }
  iVar1 = FUN_0047e430(param_2[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = (undefined8 *)FUN_0047e450(param_2[1],iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if ((puVar4[1] != 0) || (puVar4[2] != 0)) {
          return 0x31;
        }
        iVar3 = FUN_00497a90(param_1);
        if (iVar3 != 0x2f) {
          if (iVar3 == 0) {
            return 0x30;
          }
          return iVar3;
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = FUN_0047e430(param_2[1]);
    } while (iVar1 < iVar3);
  }
  return 0;
}


