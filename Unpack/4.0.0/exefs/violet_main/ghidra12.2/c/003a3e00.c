/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a3e00; name: FUN_003a3e00
 */


undefined8 FUN_003a3e00(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if (param_4 < 0x4001) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar1 = FUN_003a3e50();
    return uVar1;
  }
  FUN_003c3950(param_1,0x50,0x221,0x44,"external/openssl/ssl/record/rec_layer_d1.c",0x318);
  return 0xffffffff;
}


