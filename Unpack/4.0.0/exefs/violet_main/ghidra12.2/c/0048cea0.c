/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048cea0; name: FUN_0048cea0
 */


void FUN_0048cea0(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return;
  }
  FUN_003dffa0(*(undefined8 *)(param_1 + 8));
  if ((*param_1 >> 2 & 1) == 0) {
    FUN_0047e3b0(*(undefined8 *)(param_1 + 0x10),PTR_LAB_047cd5d0);
  }
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x18),PTR_FUN_047cd538);
  FUN_00452f80(param_1,"external/openssl/crypto/x509v3/pcy_data.c",0x1b);
  return;
}


