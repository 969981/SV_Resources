/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170af00; name: FUN_0170af00
 */


uint FUN_0170af00(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x9e) >> 3 & 1) == 0) {
    uVar1 = FUN_0170af84(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x270));
    uVar2 = *(uint *)(param_1 + 0x80);
    if (1 < uVar1) {
      uVar2 = uVar2 * uVar1;
      *(uint *)(param_1 + 0x80) = uVar2;
    }
    uVar2 = (uint)(*(float *)(*(long *)(param_1 + 0x38) + 0x4a0) * (float)uVar2);
    if (0xf423e < uVar2) {
      uVar2 = 999999;
    }
    *(uint *)(param_1 + 0x80) = uVar2;
    *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 8;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
  }
  return uVar2;
}


