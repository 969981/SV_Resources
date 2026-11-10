/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021669c4; name: FUN_021669c4
 */


void FUN_021669c4(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  
  if (4 < *(uint *)(param_1 + 0x100)) {
    return;
  }
  if (*(uint *)(param_1 + 0x10) == param_2) {
    lVar1 = 0;
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      FUN_02166b84(param_1,0);
      return;
    }
    if (*(uint *)(param_1 + 0x40) == param_2) {
      lVar1 = 1;
    }
    else {
      if (param_2 < *(uint *)(param_1 + 0x40)) {
        FUN_02166b84(param_1,1);
        return;
      }
      if (*(uint *)(param_1 + 0x70) == param_2) {
        lVar1 = 2;
      }
      else {
        if (param_2 < *(uint *)(param_1 + 0x70)) {
          FUN_02166b84(param_1,2);
          return;
        }
        if (*(uint *)(param_1 + 0xa0) == param_2) {
          lVar1 = 3;
        }
        else {
          if (param_2 < *(uint *)(param_1 + 0xa0)) {
            FUN_02166b84(param_1,3);
            return;
          }
          if (*(uint *)(param_1 + 0xd0) != param_2) {
            if (param_2 < *(uint *)(param_1 + 0xd0)) {
              FUN_02166b84(param_1,4);
              return;
            }
            return;
          }
          lVar1 = 4;
        }
      }
    }
  }
  param_1 = param_1 + lVar1 * 0x30;
  *(undefined8 *)(param_1 + 0x28) = param_3[1];
  *(undefined8 *)(param_1 + 0x20) = *param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4[1];
  *(undefined8 *)(param_1 + 0x30) = *param_4;
  return;
}


