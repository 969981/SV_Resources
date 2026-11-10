/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f0fd0; name: FUN_008f0fd0
 */


void FUN_008f0fd0(undefined8 param_1,long param_2,long param_3,undefined4 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  (**(code **)PTR_DAT_047d28b0)(*(undefined8 *)(param_2 + 0xb0),0,0,0x7fffffff,0x7fffffff);
  (**(code **)PTR_DAT_047d2848)(*(undefined8 *)(param_2 + 0xb0),0,0,0,uVar1,uVar2);
  if (param_5 == 3) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 1;
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 1) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl("","",0);
      }
      uVar1 = *(undefined8 *)(param_2 + 0xb0);
      uVar2 = 1;
      uVar3 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047d28b8;
      goto LAB_008f10c0;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 0;
  }
  uVar3 = 0xffffffff;
  UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_047d28b8;
LAB_008f10c0:
                    /* WARNING: Could not recover jumptable at 0x008f10d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,uVar2,param_4,uVar3);
  return;
}


