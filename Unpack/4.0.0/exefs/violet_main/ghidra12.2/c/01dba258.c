/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dba258; name: FUN_01dba258
 */


void FUN_01dba258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04540808;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_0159a808(*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),param_1 + 2);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_00db239c(param_1 + 2);
  return;
}


