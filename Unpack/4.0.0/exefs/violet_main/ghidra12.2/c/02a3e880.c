/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3e880; name: FUN_02a3e880
 */


void FUN_02a3e880(float param_1,long param_2)

{
  if (*(char *)(param_2 + 9) == '\0') {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 8) = 0;
    *(long *)(param_2 + 0x10) = (long)(param_1 * 1000.0);
    FUN_0226f404(3);
    *(undefined1 *)(param_2 + 9) = 1;
  }
  return;
}


