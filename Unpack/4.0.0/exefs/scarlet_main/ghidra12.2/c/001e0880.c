/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e0880; name: FUN_001e0880
 */


undefined8 FUN_001e0880(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = 1;
  if ((param_1 != 0) && (param_2 != (long *)0x0)) {
    if ((param_2[4] == -1) && ((int)param_2[5] == -1)) {
      if ((long *)param_2[2] == param_2) {
        uVar2 = 3;
      }
      else {
        *(long **)(param_2[3] + 0x10) = (long *)param_2[2];
        uVar2 = 0;
        *(long *)(param_2[2] + 0x18) = param_2[3];
        param_2[2] = (long)param_2;
        *param_3 = param_1;
      }
    }
    else {
      plVar3 = (long *)FUN_001e05e8(param_2[4],param_2[5]);
      if (plVar3 == param_2) {
        plVar3 = (long *)param_2[2];
        if (plVar3 == param_2) {
          if (*param_2 == 0) {
            plVar3 = (long *)param_2[1];
          }
          else {
            plVar3 = (long *)FUN_001e05e8(param_2[4],param_2[5]);
            plVar3[1] = param_2[1];
          }
        }
        else {
          lVar1 = param_2[5];
          plVar3[4] = param_2[4];
          plVar3[5] = lVar1;
          plVar3[1] = param_2[1];
          *plVar3 = *param_2;
          plVar3[3] = param_2[3];
          *(long **)(param_2[3] + 0x10) = plVar3;
        }
        uVar2 = 0;
        *param_3 = (long)plVar3;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}


