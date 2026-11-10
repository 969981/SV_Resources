/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbc15c; name: FUN_01dbc15c
 */


void FUN_01dbc15c(long param_1)

{
  FUN_0192cbc0(param_1 + 0x88);
  if (*(undefined4 **)(param_1 + 0x90) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x90) = 0;
  }
  FUN_0192cbc0(param_1 + 0xa8);
  if (*(undefined4 **)(param_1 + 0xb0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xb0) = 0;
  }
  FUN_0192cbc0(param_1 + 200);
  if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xd0) = 0;
  }
  return;
}


