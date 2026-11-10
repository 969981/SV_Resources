/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01242114; name: FUN_01242114
 */


undefined1 FUN_01242114(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 local_38 [8];
  undefined8 local_30;
  byte local_28;
  
  local_30 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
  local_28 = *(byte *)((long)param_2 + 0x23) | *(byte *)(param_2 + 9);
  uVar1 = FUN_01242178(*(undefined8 *)(param_1 + 0x78));
  FUN_0124cd84(uVar1,local_38,&local_30);
  return local_38[0];
}


