/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ae640; name: FUN_028ae640
 */


undefined8 FUN_028ae640(long *param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 != param_4) {
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (*param_5 != 0) {
      plVar1 = (long *)(*param_5 + 0x30);
    }
    do {
      plVar2 = (long *)PTR_DAT_047d8b70;
      if (*(long *)(*param_2 + 0x40) != 0) {
        plVar2 = (long *)(*(long *)(*param_2 + 0x40) + 0x30);
      }
      if (*plVar2 == *plVar1) {
        return 1;
      }
      param_2 = param_2 + 3;
      if ((long)param_2 - *param_1 == 0xff0) {
        param_1 = param_1 + 1;
        param_2 = (long *)*param_1;
      }
    } while (param_2 != param_4);
  }
  return 0;
}


