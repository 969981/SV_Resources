/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eccf0; name: FUN_003eccf0
 */


void FUN_003eccf0(long param_1)

{
  if (param_1 != 0) {
    FUN_003eb490(param_1 + 8);
    FUN_003eb490(param_1 + 0x20);
    FUN_003eb490(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_mont.c",0x104);
      return;
    }
  }
  return;
}


