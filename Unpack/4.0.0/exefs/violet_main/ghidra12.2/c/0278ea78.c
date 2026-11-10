/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278ea78; name: FUN_0278ea78
 */


void FUN_0278ea78(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_LAB_045e0ef8;
  param_1[1] = param_2;
  if (*param_3 != '\0') {
    *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


