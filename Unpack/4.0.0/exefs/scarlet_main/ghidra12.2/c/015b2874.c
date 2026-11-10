/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015b2874; name: FUN_015b2874
 */


void FUN_015b2874(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_18 = lVar1 + 0x10;
  local_28 = *(undefined8 *)(lVar1 + 8);
  uStack_20 = *(undefined8 *)(lVar1 + 0x6098);
  FUN_015b28b8(*(undefined8 *)(lVar1 + 0x6260),&local_28,param_2,1);
  return;
}


