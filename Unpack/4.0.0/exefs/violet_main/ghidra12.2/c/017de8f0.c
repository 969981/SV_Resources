/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017de8f0; name: FUN_017de8f0
 */


void FUN_017de8f0(long param_1)

{
  if (*(char *)(param_1 + 0x89) != '\0') {
    nn::fs::FlushFile(*(undefined8 *)(param_1 + 0x70));
    nn::fs::CloseFile(*(undefined8 *)(param_1 + 0x70));
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  return;
}


