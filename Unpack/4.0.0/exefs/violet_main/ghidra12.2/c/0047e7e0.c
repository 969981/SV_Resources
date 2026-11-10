/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e7e0; name: FUN_0047e7e0
 */


void FUN_0047e7e0(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 4) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_1[2]);
  }
  FUN_0047e3b0(param_1[1],&LAB_0047e850);
  FUN_00444c10(0xb,param_1,param_1 + 3);
  FUN_0047e620(param_1[5]);
  FUN_00452f80(param_1,"external/openssl/crypto/ui/ui_lib.c",0x53);
  return;
}


