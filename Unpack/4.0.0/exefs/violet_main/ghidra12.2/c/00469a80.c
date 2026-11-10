/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469a80; name: FUN_00469a80
 */


void FUN_00469a80(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  FUN_003eb520(*param_1);
  FUN_003eb520(param_1[1]);
  FUN_003eb520(param_1[2]);
  FUN_003eb520(param_1[3]);
  FUN_0047e620(param_1[9]);
  FUN_00452f80(param_1,"external/openssl/crypto/bn/bn_blind.c",0x5a);
  return;
}


