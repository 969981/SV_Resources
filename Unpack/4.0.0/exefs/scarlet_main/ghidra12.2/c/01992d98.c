/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01992d98; name: FUN_01992d98
 */


uint FUN_01992d98(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *local_8;
  
  local_8 = *(long **)(param_1 + 0x30);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x58))();
  }
  uVar1 = FUN_01992df4(&local_8,param_2);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 0x60))();
  }
  return uVar1 & 1;
}


