/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ca4c8; name: FUN_006ca4c8
 */


void FUN_006ca4c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)param_1[1];
  FUN_002723e4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x006ca508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,0x198,8);
  return;
}


