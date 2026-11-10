/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f1600; name: FUN_005f1600
 */


void FUN_005f1600(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  param_1[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x005f1620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar1,param_1[2] - lVar1,0x10);
  return;
}


