/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c444; name: FUN_0298c444
 */


void FUN_0298c444(long param_1,long *param_2,uint param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*param_2 + 0x368))(param_2,param_3,param_4);
  FUN_0184ae20(*(undefined8 *)(param_1 + 0x18),uVar1,param_3,param_4);
  if ((param_3 & 0xffff) < 6) {
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x90,uVar1,param_3);
    return;
  }
  return;
}


