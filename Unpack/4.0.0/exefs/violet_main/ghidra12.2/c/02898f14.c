/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02898f14; name: FUN_02898f14
 */


void FUN_02898f14(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)param_1[1];
  if (pcVar1 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  uVar2 = param_2[3];
  param_2[3] = 0;
  param_1[7] = uVar2;
  FUN_0284b430(param_1 + 8,param_2 + 4);
  *param_1 = FUN_02899108;
  param_1[1] = FUN_02899284;
  param_1[2] = FUN_028992c4;
  param_1[3] = &LAB_0289931c;
  return;
}


