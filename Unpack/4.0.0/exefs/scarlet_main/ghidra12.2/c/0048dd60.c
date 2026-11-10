/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048dd60; name: FUN_0048dd60
 */


undefined8 FUN_0048dd60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = 0x20;
    if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
      lVar1 = 0x18;
    }
    uVar2 = *(undefined8 *)(param_1 + lVar1);
  }
  return uVar2;
}


