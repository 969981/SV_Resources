/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ecaae8; name: FUN_02ecaae8
 */


void FUN_02ecaae8(long *param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (param_2 < iVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    param_2 = param_2 - iVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x02ecab4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}


