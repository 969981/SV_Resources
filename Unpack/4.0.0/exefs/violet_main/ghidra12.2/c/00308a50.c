/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00308a50; name: FUN_00308a50
 */


void FUN_00308a50(long param_1)

{
  if (*(char *)(param_1 + 0xc48) == '\0') {
    *(undefined8 *)(param_1 + 0xee8) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 0xef0) = 0;
    *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe48);
    return;
  }
  *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe48);
  return;
}


