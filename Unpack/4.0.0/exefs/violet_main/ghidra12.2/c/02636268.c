/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02636268; name: FUN_02636268
 */


void FUN_02636268(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  long local_28;
  
  FUN_02636318(&local_28);
  if (local_28 == 0) {
    FUN_02635d94(&local_28);
    *param_1 = 0;
  }
  else {
    local_60 = *param_5;
    uStack_58 = param_5[1];
    local_50 = param_5[2];
    plVar1 = (long *)param_5[3];
    param_5[3] = 0;
    plStack_48 = plVar1;
    FUN_02636364(param_1,&local_28,param_3,param_4,&local_60);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    FUN_02635d94(&local_28);
  }
  return;
}


