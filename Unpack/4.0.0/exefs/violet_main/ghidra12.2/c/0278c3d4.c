/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c3d4; name: FUN_0278c3d4
 */


void FUN_0278c3d4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x20) != '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x28);
    *param_1 = 1;
  }
  return;
}


