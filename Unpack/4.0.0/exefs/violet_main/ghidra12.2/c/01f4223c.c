/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f4223c; name: FUN_01f4223c
 */


void FUN_01f4223c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  FUN_01f424b8(param_1 + 4,param_2);
  *param_1 = &LAB_01f425f0;
  param_1[1] = &LAB_00b48618;
  param_1[2] = &LAB_01f42a94;
  param_1[3] = &LAB_00b486e0;
  return;
}


