/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003bb370; name: FUN_003bb370
 */


undefined8 FUN_003bb370(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x870) = 0;
    FUN_00452f80(*(undefined8 *)(param_1 + 0x700),"external/openssl/ssl/statem/extensions.c",0x3b5);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  return 1;
}


