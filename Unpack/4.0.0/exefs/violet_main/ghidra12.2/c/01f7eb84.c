/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7eb84; name: FUN_01f7eb84
 */


void FUN_01f7eb84(long param_1,long *param_2)

{
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(*param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*param_2 + 0x4c);
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(*param_2 + 0x50);
  }
  return;
}


