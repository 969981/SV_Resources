/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026b1f00; name: FUN_026b1f00
 */


void FUN_026b1f00(undefined1 *param_1,code *param_2,ulong param_3)

{
  switch(*param_1) {
  case 0:
  case 1:
    if (*(long *)(param_1 + 8) != 0) {
      if ((param_3 & 1) != 0) {
        param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
      }
      (*param_2)();
    }
    break;
  case 2:
    FUN_026b6430(param_1 + 8);
    return;
  case 3:
    FUN_026b646c(0,param_1 + 8);
    return;
  }
  return;
}


