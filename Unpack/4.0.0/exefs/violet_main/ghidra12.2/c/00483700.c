/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483700; name: FUN_00483700
 */


void FUN_00483700(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_003e55b0(*(undefined8 *)(param_1 + 8));
  thunk_FUN_003df2e0(*(undefined8 *)(param_1 + 0x10));
  FUN_0043e1f0(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00452f80(*(undefined8 *)(param_1 + 0x28),"external/openssl/crypto/asn1/x_pkey.c",0x2d);
  }
  FUN_00452f80(param_1,"external/openssl/crypto/asn1/x_pkey.c",0x2e);
  return;
}


