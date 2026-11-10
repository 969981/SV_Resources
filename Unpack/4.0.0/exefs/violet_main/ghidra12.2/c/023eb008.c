/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023eb008; name: FUN_023eb008
 */


undefined8
FUN_023eb008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            undefined4 *param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  
  FUN_023dbb80(&local_48);
  if (local_48 == 0) {
    uVar2 = 0;
  }
  else {
    local_68 = *param_4;
    uStack_60 = param_4[1];
    local_58 = param_4[2];
    plVar1 = (long *)param_4[3];
    param_4[3] = 0;
    plStack_50 = plVar1;
    uVar2 = FUN_023eb0bc(*param_5,&local_48,param_2,param_3,&local_68,*param_6);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  FUN_018eb3a8(&local_48);
  return uVar2;
}


