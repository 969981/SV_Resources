/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124abe8; name: FUN_0124abe8
 */


void FUN_0124abe8(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 auStack_8 [8];
  
  local_28 = (**(code **)(*param_2 + 0x98))(param_2);
  local_24 = 1;
  uVar1 = FUN_018776d0(*(undefined8 *)(param_1 + 0x78));
  FUN_018776d8(uVar1,auStack_8,&local_28);
  return;
}


