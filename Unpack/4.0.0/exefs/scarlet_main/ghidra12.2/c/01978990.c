/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01978990; name: FUN_01978990
 */


void FUN_01978990(long param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_019789f0(*(undefined8 *)(param_1 + 0x20),uVar1,param_3 & 1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x4f,uVar1,param_3 & 1);
  return;
}


