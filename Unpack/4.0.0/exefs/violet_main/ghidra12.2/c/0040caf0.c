/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040caf0; name: FUN_0040caf0
 */


void FUN_0040caf0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  FUN_00452f80(param_1,"external/openssl/crypto/ec/ec_lib.c",0x2af);
  return;
}


