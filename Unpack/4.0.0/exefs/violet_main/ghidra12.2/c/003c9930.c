/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c9930; name: FUN_003c9930
 */


void FUN_003c9930(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00439e00(*(undefined8 *)(param_1 + 0x30));
    FUN_0042bbe0(*(undefined8 *)(param_1 + 0x38));
  }
  FUN_00452f80(*(undefined8 *)(param_1 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",0x67);
  FUN_00452f80(*(undefined8 *)(param_1 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",0x68);
  FUN_00452f80(param_1,"external/openssl/ssl/statem/statem_dtls.c",0x69);
  return;
}


