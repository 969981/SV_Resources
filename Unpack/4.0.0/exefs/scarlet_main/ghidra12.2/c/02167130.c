/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02167130; name: FUN_02167130
 */


byte FUN_02167130(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00c8c7b4(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x170));
  return *(byte *)(lVar1 + 0x58) & 1;
}


