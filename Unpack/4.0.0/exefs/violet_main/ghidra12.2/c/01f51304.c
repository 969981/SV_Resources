/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f51304; name: FUN_01f51304
 */


void FUN_01f51304(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x44) != '\0') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x48);
    *param_1 = 1;
  }
  return;
}


