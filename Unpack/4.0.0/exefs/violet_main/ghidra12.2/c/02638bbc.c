/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02638bbc; name: FUN_02638bbc
 */


undefined1  [16]
FUN_02638bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  long local_28;
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_3;
  FUN_02638c9c(&local_28);
  if (local_28 != 0) {
    local_60 = *param_4;
    uStack_58 = param_4[1];
    local_50 = param_4[2];
    plVar1 = (long *)param_4[3];
    param_4[3] = 0;
    local_80 = *param_5;
    uStack_78 = param_5[1];
    local_70 = param_5[2];
    plVar2 = (long *)param_5[3];
    param_5[3] = 0;
    plStack_68 = plVar2;
    plStack_48 = plVar1;
    auVar3 = FUN_02638ce8(&local_28,param_2,param_3,&local_60,&local_80);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  FUN_02638788(&local_28);
  return auVar3;
}


