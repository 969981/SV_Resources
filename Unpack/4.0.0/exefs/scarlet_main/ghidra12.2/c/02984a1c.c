/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02984a1c; name: FUN_02984a1c
 */


void FUN_02984a1c(long param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*param_2 + 0x2f0))(param_2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),4,uVar1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x9d,uVar1,param_5);
  uVar2 = (**(code **)(*param_2 + 0x200))(param_2);
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02984ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x480))(param_2,param_4,param_3);
  return;
}


