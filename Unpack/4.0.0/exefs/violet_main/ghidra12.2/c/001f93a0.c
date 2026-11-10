/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f93a0; name: FUN_001f93a0
 */


void FUN_001f93a0(undefined8 *param_1)

{
  if (param_1[2] == 0) {
    return;
  }
  *(undefined8 *)*param_1 = ((undefined8 *)*param_1)[param_1[2] + -1];
  **(undefined8 **)*param_1 = 0;
  param_1[2] = param_1[2] + -1;
  FUN_001f93dc(param_1,0);
  return;
}


