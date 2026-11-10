/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01231fb4; name: FUN_01231fb4
 */


void FUN_01231fb4(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != param_1 + 0x68) {
    do {
      *(byte *)(*(long *)(lVar1 + 0x10) + 0x240) = param_2 & 1;
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1 + 0x68);
  }
  return;
}


