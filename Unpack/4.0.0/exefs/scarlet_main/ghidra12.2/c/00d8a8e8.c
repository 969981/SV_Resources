/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8a8e8; name: FUN_00d8a8e8
 */


void FUN_00d8a8e8(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  
  if (param_4 != param_5) {
    param_5 = (long *)*param_5;
    if (param_1 != param_3) {
      lVar1 = 1;
      if (param_5 != param_4) {
        plVar2 = param_4;
        do {
          plVar2 = (long *)plVar2[1];
          lVar1 = lVar1 + 1;
        } while (plVar2 != param_5);
      }
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - lVar1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar1;
    }
    *(long *)(*param_4 + 8) = param_5[1];
    *(long *)param_5[1] = *param_4;
    *(long **)(*param_2 + 8) = param_4;
    *param_4 = *param_2;
    *param_2 = (long)param_5;
    param_5[1] = (long)param_2;
  }
  return;
}


