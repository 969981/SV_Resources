/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2fc0; name: FUN_003a2fc0
 */


void FUN_003a2fc0(long param_1)

{
  if (*(long *)(param_1 + 0xfb0) != 0) {
    FUN_003a3020();
    FUN_003a2d40(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x30));
    FUN_003a2d40(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x40));
    FUN_003a2d40(*(undefined8 *)(*(long *)(param_1 + 0xfb0) + 0x50));
    FUN_00452f80(*(undefined8 *)(param_1 + 0xfb0),"external/openssl/ssl/record/rec_layer_d1.c",0x38)
    ;
    *(undefined8 *)(param_1 + 0xfb0) = 0;
  }
  return;
}


