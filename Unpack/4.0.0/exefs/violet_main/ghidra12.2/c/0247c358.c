/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247c358; name: FUN_0247c358
 */


void FUN_0247c358(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') && (*(long **)(param_2 + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  }
  FUN_0247e2d4(param_1,param_2);
  return;
}


