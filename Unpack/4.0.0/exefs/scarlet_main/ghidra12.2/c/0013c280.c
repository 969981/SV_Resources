/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013c280; name: FUN_0013c280
 */


uint FUN_0013c280(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((*(char *)(param_1 + 10) < '\0') &&
     (uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555),
     uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
     1 < (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
  }
  return uVar2;
}


