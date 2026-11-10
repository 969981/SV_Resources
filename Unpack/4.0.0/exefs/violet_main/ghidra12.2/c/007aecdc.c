/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007aecdc; name: FUN_007aecdc
 */


void FUN_007aecdc(long param_1)

{
  FUN_007981d8();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  memset((void *)(param_1 + 0x40),0,0x40);
  *(undefined4 *)(param_1 + 0x20) = 0x5c;
  *(undefined2 *)(param_1 + 0x202) = 0;
  return;
}


