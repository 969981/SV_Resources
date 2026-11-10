/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02058050; name: FUN_02058050
 */


void FUN_02058050(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  if (*(char *)(param_3 + 0xc0) == '\0') {
    *(undefined1 *)(param_3 + 0xc0) = 1;
  }
  else {
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_3 + 0xd0);
    *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_3 + 0xd8);
  }
  *(long *)(param_3 + 0xd8) = param_1._8_8_;
  *(long *)(param_3 + 0xd0) = param_1._0_8_;
  *(undefined4 *)(param_3 + 0x160) = param_2;
  return;
}


