/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030864e8; name: FUN_030864e8
 */


undefined4 FUN_030864e8(long param_1,long param_2,undefined8 param_3)

{
  undefined **local_30;
  long lStack_28;
  long local_20;
  undefined4 local_18;
  
  local_20 = *(long *)(param_1 + 0x18);
  local_30 = &PTR_LAB_0464c990;
  local_18 = 0xffffffff;
  lStack_28 = param_2;
  FUN_008701cc(*(undefined8 *)(local_20 + 0x20),param_2 + 0x30,param_2 + 0x40,&local_30,param_3);
  return local_18;
}


