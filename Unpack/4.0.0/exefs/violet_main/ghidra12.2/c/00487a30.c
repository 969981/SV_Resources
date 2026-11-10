/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00487a30; name: FUN_00487a30
 */


void FUN_00487a30(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))(param_1);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0xd8) == 0) {
      FUN_00489d50();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_0048d180(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_0047e3b0(*(undefined8 *)(param_1 + 0x98),PTR_FUN_047cd0a0);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_00444c10(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_00452f80(param_1,"external/openssl/crypto/x509/x509_vfy.c",0x8e1);
  return;
}


