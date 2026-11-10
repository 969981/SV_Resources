/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0231c208; name: FUN_0231c208
 */


void FUN_0231c208(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_0231c3d8(param_1 + 8);
    return;
  }
  if (*param_1 == '\0') {
    FUN_0231c3b4(*(undefined8 *)(param_1 + 8));
    return;
  }
  FUN_0231c400();
  return;
}


