/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297f114; name: FUN_0297f114
 */


void FUN_0297f114(long param_1,undefined4 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_0167ebc0(uVar2,0xcb,param_2,0x48,uVar1,0xffff0000);
  return;
}


