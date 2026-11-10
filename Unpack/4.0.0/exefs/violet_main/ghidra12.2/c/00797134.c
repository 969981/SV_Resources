/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00797134; name: FUN_00797134
 */


void FUN_00797134(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x32ab9864;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0xb;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  memset((void *)(param_1 + 0x15),0,8);
  memset((void *)(param_1 + 0x1d),0,0x10);
  *(undefined4 *)(param_1 + 0x5f8) = 0x1c;
  memset((void *)(param_1 + 0x5fc),0,4);
  FUN_007965d8(param_1 + 0x600);
  *(undefined2 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0x1000000;
  FUN_007965d8(param_1 + 0x628);
  *(undefined1 *)(param_1 + 0x648) = 0;
  return;
}


