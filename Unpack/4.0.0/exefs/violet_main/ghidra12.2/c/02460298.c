/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02460298; name: FUN_02460298
 */


void FUN_02460298(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '\x01') {
    FUN_0245c8e4(param_2 + 8);
  }
  FUN_024623e4(param_1,param_2);
  return;
}


