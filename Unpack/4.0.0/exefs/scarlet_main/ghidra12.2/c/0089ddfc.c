/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089ddfc; name: FUN_0089ddfc
 */


void FUN_0089ddfc(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_0088f738(param_2);
  if (param_4 < (int)(uVar1 & 0xffff)) {
    lVar2 = FUN_0088f750(param_2);
    lVar2 = FUN_00894bb8(param_3,lVar2 + (long)param_4 * 0x24);
    (**(code **)(*param_1 + 0x58))(param_1,lVar2);
    param_1[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0089de94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
    return;
  }
  return;
}


