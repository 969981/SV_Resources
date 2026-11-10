/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988b50; name: FUN_02988b50
 */


undefined1 FUN_02988b50(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_3;
  uVar1 = FUN_01907c28(*(undefined8 *)(param_1 + 0x78));
  FUN_01907c30(uVar1,local_28,&local_20);
  return local_28[0];
}


