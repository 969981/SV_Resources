/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f4bc4; name: FUN_001f4bc4
 */


undefined8 FUN_001f4bc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -9;
  FUN_001f4614();
  FUN_001ed53c(*(undefined8 *)(lVar1 + 0x20),*(undefined4 *)(param_2 + 0x10));
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 4;
  return 0;
}


