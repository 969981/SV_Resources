/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c374; name: FUN_0278c374
 */


void FUN_0278c374(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x30) != '\0') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x34);
    *param_1 = 1;
  }
  return;
}


