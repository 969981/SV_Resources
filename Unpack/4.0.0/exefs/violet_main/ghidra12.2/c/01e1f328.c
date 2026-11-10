/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1f328; name: FUN_01e1f328
 */


void FUN_01e1f328(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  *(undefined8 *)(param_3 + 0x4e0) = 0;
  *(undefined8 *)(param_3 + 0x4d0) = 0x100000000;
  *(undefined8 *)(param_3 + 0x4d8) = 0x100000000;
  *(undefined4 *)(param_3 + 0x510) = 0x3f800000;
  *(undefined2 *)(param_3 + 0x4ac) = 1;
  *(undefined4 *)(param_3 + 0x540) = 0;
  *(long *)(param_3 + 0x4b8) = param_1._8_8_;
  *(long *)(param_3 + 0x4b0) = param_1._0_8_;
  *(long *)(param_3 + 0x4c8) = param_2._8_8_;
  *(long *)(param_3 + 0x4c0) = param_2._0_8_;
  if (*(char *)(param_3 + 0x14f) != '\0') {
    *(undefined4 *)(param_3 + 0x4e0) = 0x22;
  }
  *(long *)(param_3 + 0x4f8) = param_1._8_8_;
  *(long *)(param_3 + 0x4f0) = param_1._0_8_;
  *(undefined1 *)(param_3 + 0x4ae) = 1;
  *(long *)(param_3 + 0x508) = param_2._8_8_;
  *(long *)(param_3 + 0x500) = param_2._0_8_;
  return;
}


