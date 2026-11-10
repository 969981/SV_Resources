/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b7a9c; name: FUN_029b7a9c
 */


void FUN_029b7a9c(long param_1,long param_2)

{
  if (param_1 != param_2) {
    FUN_029b7d28();
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    FUN_029b7e18(param_1,*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


