/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df5a08; name: FUN_01df5a08
 */


void FUN_01df5a08(undefined8 *param_1,undefined8 param_2)

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
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00ca1ea4(param_1 + 4,param_2);
  *param_1 = &LAB_01df6000;
  param_1[1] = &LAB_01df6148;
  param_1[2] = &LAB_01df6260;
  param_1[3] = &LAB_01df6274;
  return;
}


