/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dd860; name: FUN_029dd860
 */


void FUN_029dd860(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  
  pcVar2 = (code *)param_1[1];
  if (pcVar2 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar2)(param_1 + 4);
  }
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  param_1[6] = param_2[2];
  plVar1 = (long *)param_2[3];
  param_1[7] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 4);
  *param_1 = FUN_029e4ce8;
  param_1[1] = &LAB_02e62f60;
  param_1[2] = &LAB_02e62f78;
  param_1[3] = &LAB_02e62fd0;
  return;
}


