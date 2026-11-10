/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00453350; name: FUN_00453350
 */


void FUN_00453350(void *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((DAT_047f19bc == 1) && (iVar1 = FUN_0049dcf0(param_1), iVar1 == 1)) {
    return;
  }
  if ((PTR_FUN_044aa1b0 == (undefined *)0x0) || (PTR_FUN_044aa1b0 == PTR_FUN_047cd440)) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00452ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_044aa1b0)(param_1,param_2,param_3);
  return;
}


