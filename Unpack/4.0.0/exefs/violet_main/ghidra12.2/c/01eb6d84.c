/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb6d84; name: FUN_01eb6d84
 */


void FUN_01eb6d84(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char local_b0 [24];
  undefined1 auStack_98 [120];
  
  FUN_00dc03ec(local_b0);
  if (local_b0[0] == '\0') {
    FUN_01c5e29c(param_1,param_3);
    if (local_b0[0] == '\0') {
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  FUN_00d8e444(auStack_98);
  return;
}


