/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c8f6c; name: FUN_001c8f6c
 */


void FUN_001c8f6c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = lVar1 + -1;
  if (lVar1 + -1 == 0) {
    FUN_001c7e00(*param_1);
    FUN_001ec308(param_1);
    return;
  }
  return;
}


