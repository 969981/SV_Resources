/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fc18c; name: FUN_026fc18c
 */


void FUN_026fc18c(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  *(undefined8 *)param_1[1] = 0;
  auVar1 = FUN_026fc1c0();
  *param_1 = auVar1;
  return;
}


