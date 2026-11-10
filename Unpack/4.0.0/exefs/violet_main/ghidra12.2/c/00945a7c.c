/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00945a7c; name: FUN_00945a7c
 */


void FUN_00945a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04523da0;
  if (*(char *)((long)param_1 + 9) != '\0') {
    param_1[3] = 0;
    FUN_0226f4a0(3);
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  return;
}


