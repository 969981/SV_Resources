/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f86c70; name: FUN_00f86c70
 */


void FUN_00f86c70(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  long *local_28;
  
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar4 = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_78 = 0x302ee6d5ddb8605e;
  local_90 = 0x45e24506a4634ddf;
  pcStack_88 = "Event";
  local_70 = "EventSystem";
  uStack_68 = 0xb;
  local_80 = 5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_60 = uVar3;
  uStack_58 = uVar5;
  local_50 = uVar4;
  plStack_48 = plVar6;
  FUN_00f86124(&local_28,&local_78,&local_90,&local_60);
  plVar7 = local_28;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 6;
  }
  plVar2 = (long *)PTR_PTR_047d4508;
  if (local_28 != (long *)0x0) {
    plVar2 = local_28 + 7;
  }
  lVar8 = *plVar2;
  if (local_28 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = local_28[8];
  }
  *param_1 = *plVar1;
  param_1[1] = lVar8;
  param_1[2] = lVar9;
  param_1[3] = 0;
  if (local_28 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    param_1[3] = (long)plVar7;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


