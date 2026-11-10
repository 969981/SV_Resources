/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b1d0f8; name: FUN_01b1d0f8
 */


void FUN_01b1d0f8(undefined1 *param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_01b1d324(param_2 + 8);
    return;
  }
  if (*param_2 == '\0') {
    FUN_01b1d2b4(*(undefined8 *)(param_2 + 8));
    return;
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1000000;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  return;
}


