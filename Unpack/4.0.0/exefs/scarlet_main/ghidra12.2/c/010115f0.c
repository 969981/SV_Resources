/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010115f0; name: FUN_010115f0
 */


long * FUN_010115f0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    do {
      if (((*param_1 != 0) && (lVar1 = FUN_011c8920(*param_1 + 8), lVar1 != 0)) &&
         (uVar2 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar2 & 1) == 0)) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


