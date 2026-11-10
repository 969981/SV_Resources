/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc03c8; name: FUN_00fc03c8
 */


void FUN_00fc03c8(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1a) = 0x7fffffffffffffff;
  param_1[0x1c] = 0;
  std::string::resize((ulong)(param_1 + 2),'\0');
  std::string::resize((ulong)(param_1 + 8),'\0');
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 6;
  *(undefined1 *)(param_1 + 0x12) = param_2;
  *(undefined8 *)(param_1 + 0x13) = 0x1002;
  param_1[0x15] = 0;
  return;
}


