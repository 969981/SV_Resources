/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e3fcc; name: FUN_012e3fcc
 */


void FUN_012e3fcc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  *(long *)(param_1 + 0x3a0) = lVar2;
  FUN_012e46a0(&local_60,lVar2,param_1 + 0x3a0,param_2 + 8);
  plVar7 = local_60;
  local_60 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x360);
  *(long **)(param_1 + 0x360) = plVar7;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x378) = local_48;
  }
  else {
    FUN_028a1ee0(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x378) = local_48;
    plVar7 = *(long **)(param_1 + 0x360);
  }
  *(undefined8 *)(param_1 + 0x370) = uStack_50;
  *(undefined8 *)(param_1 + 0x368) = local_58;
  pcVar5 = (code *)plVar7[0x67];
  if (pcVar5 != (code *)0x0) {
    plVar7[0x68] = 0;
    plVar7[0x69] = 0;
    plVar7[0x66] = 0;
    plVar7[0x67] = 0;
    (*pcVar5)(plVar7 + 0x6a);
  }
  plVar7[0x66] = (long)&LAB_028a3f60;
  plVar7[0x67] = (long)&LAB_02c758a0;
  plVar7[0x68] = (long)&LAB_02c758a4;
  plVar7[0x69] = (long)&LAB_02c758a8;
  FUN_012e4580(&local_60,*(undefined8 *)(param_1 + 0x3a0),param_1 + 0x3a0);
  plVar7 = local_60;
  local_60 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x380);
  *(long **)(param_1 + 0x380) = plVar7;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x398) = local_48;
  }
  else {
    FUN_028a229c(param_1 + 0x388);
    *(undefined8 *)(param_1 + 0x398) = local_48;
    plVar7 = *(long **)(param_1 + 0x380);
  }
  *(undefined8 *)(param_1 + 0x390) = uStack_50;
  *(undefined8 *)(param_1 + 0x388) = local_58;
  local_80 = "arc/data.trpfs";
  FUN_00e52f24(&local_60,&local_80);
  FUN_012e68e4(plVar7,&local_60);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  uVar3 = FUN_012e48d0(*(undefined8 *)(param_1 + 0x3a0),param_2);
  FUN_012e44b8(&local_80,uVar3);
  local_60 = *(long **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_012e4320(&local_60);
  pcVar6 = local_80;
  local_80 = (char *)0x0;
  *(char **)(param_1 + 0x308) = pcVar6;
  FUN_012e4320(&local_80);
  FUN_012e4398(*(undefined8 *)(param_1 + 0x308),"FileLoaderFromStorage",1,0x10);
  lVar2 = *(long *)(param_1 + 0x308);
  nn::os::ChangeThreadPriority((ThreadType *)(lVar2 + 0x40),0xf);
  nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar2 + 0x460) + 0x40),0x11);
  nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar2 + 0x468) + 0x40),0xf);
  nn::os::ChangeThreadPriority((ThreadType *)(*(long *)(lVar2 + 0x470) + 0x40),0xf);
  *(undefined4 *)(param_1 + 0x310) = 1;
  local_80 = "data:/arc/data.trpfd";
  FUN_00e52f24(&local_60,&local_80);
  iVar1 = FUN_0172bf60(&local_60);
  if (iVar1 == 1) {
    FUN_012e47c0(&local_80,*(undefined8 *)(param_1 + 0x3a0));
    pcVar6 = local_80;
    FUN_00dc5c18(local_80,0,&local_60,0,0);
    local_80 = (char *)0x0;
    lVar2 = *(long *)(param_1 + 800);
    *(char **)(param_1 + 800) = pcVar6;
    if (lVar2 != 0) {
      FUN_028a2658(param_1 + 0x328);
      pcVar6 = *(char **)(param_1 + 800);
    }
    *(undefined8 *)(param_1 + 0x338) = local_68;
    *(undefined8 *)(param_1 + 0x330) = uStack_70;
    *(undefined8 *)(param_1 + 0x328) = local_78;
    uVar3 = *(undefined8 *)(param_1 + 0x360);
    if ((*(long *)(pcVar6 + 8) == 0) || ((*(byte *)(*(long *)(pcVar6 + 8) + 0x1e8) & 1) == 0)) {
      lVar2 = 0;
    }
    else {
      puVar4 = (uint *)(**(code **)(**(long **)(pcVar6 + 8) + 0x70))();
      lVar2 = (long)puVar4 + (ulong)*puVar4;
    }
    FUN_012e5eec(uVar3,lVar2);
    pcVar6 = local_80;
    local_80 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      FUN_028a2658(&local_78);
    }
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  FUN_012e4cd0(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x318) = 1;
  return;
}


