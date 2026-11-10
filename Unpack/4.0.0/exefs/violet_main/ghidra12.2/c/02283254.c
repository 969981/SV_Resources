/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02283254; name: FUN_02283254
 */


void FUN_02283254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  
  local_70 = *param_5;
  uStack_68 = param_5[1];
  bVar3 = *param_4;
  local_60 = param_5[2];
  plVar1 = (long *)param_5[3];
  plStack_58 = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_90 = *param_6;
  uStack_88 = param_6[1];
  local_80 = param_6[2];
  plVar2 = (long *)param_6[3];
  plStack_78 = plVar2;
  if (plVar2 == (long *)0x0) {
    bVar4 = FUN_02283494(param_1 + 1,param_2,param_3,&local_70,&local_90);
    *param_4 = bVar4 & 1;
  }
  else {
    (**(code **)(*plVar2 + 0x18))(plVar2);
    bVar4 = FUN_02283494(param_1 + 1,param_2,param_3,&local_70,&local_90);
    *param_4 = bVar4 & 1;
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02283318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(*param_4,bVar3 != 0);
  return;
}


