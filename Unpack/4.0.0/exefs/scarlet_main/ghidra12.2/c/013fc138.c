/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fc138; name: FUN_013fc138
 */


undefined1 FUN_013fc138(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x170);
  puVar1 = *(undefined1 **)(param_1 + 0x178);
  if (puVar2 != puVar1) {
    while (*(long *)(param_1 + 0x168) != *(long *)(puVar2 + 8)) {
      puVar2 = puVar2 + 0x10;
      if (puVar1 == puVar2) {
        return 0xfd;
      }
    }
  }
  if (puVar2 == puVar1) {
    return 0xfd;
  }
  return *puVar2;
}


