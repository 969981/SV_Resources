/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a08408; name: FUN_01a08408
 */


void FUN_01a08408(long param_1)

{
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x206) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    *(undefined1 *)(param_1 + 0x1f8) = 0;
  }
  if (*(char *)(param_1 + 0x1fe) != '\0') {
    *(undefined1 *)(param_1 + 0x1fe) = 0;
  }
  if (*(char *)(param_1 + 0x204) != '\0') {
    *(undefined1 *)(param_1 + 0x204) = 0;
  }
  if (*(char *)(param_1 + 0x20a) != '\0') {
    *(undefined1 *)(param_1 + 0x20a) = 0;
  }
  *(undefined1 *)(param_1 + 0x210) = 0;
  return;
}


