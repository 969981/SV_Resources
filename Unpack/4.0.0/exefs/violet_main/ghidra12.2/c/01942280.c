/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01942280; name: FUN_01942280
 */


void FUN_01942280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_0142f598();
  *param_1 = &DAT_045927f8;
  param_1[0xc] = 0;
  param_1[4] = &PTR_LAB_04592878;
  param_1[5] = &PTR_LAB_045928c8;
  plVar2 = param_1 + 0xb;
  *plVar2 = 0;
  FUN_018e61dc(plVar2,param_3);
  if ((*plVar2 == 0) || (lVar1 = *(long *)(*plVar2 + 0x10), lVar1 == 0)) {
    return;
  }
  FUN_018e5da0(lVar1 + -0x28,param_2);
  return;
}


