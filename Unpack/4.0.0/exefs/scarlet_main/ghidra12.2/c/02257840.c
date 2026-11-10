/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02257840; name: FUN_02257840
 */


long * FUN_02257840(long *param_1,int *param_2)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 auStack_f8 [24];
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_80 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_80 = 0;
    if (uVar7 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar7);
      local_80 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00cf95c4(&local_d0,&local_80);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_80 = 0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_80 = 0;
    if (uVar7 != 0) {
      puVar1 = (uint *)((long)param_2 + uVar7);
      local_80 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  FUN_00ea0a7c(&local_d8,&local_80);
  FUN_0135d26c(auStack_f8,&local_d8);
  plVar2 = local_d8;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x18))(local_d8);
  }
  plVar3 = local_d0;
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x18))(local_d0);
  }
  plVar4 = local_b0;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x18))(local_b0);
  }
  uVar6 = (**(code **)(*param_1 + 0x138))(param_1);
  FUN_02257bc0(&local_80,uVar6,auStack_f8);
  lVar5 = local_80;
  pcVar8 = *(code **)(local_80 + 0x88);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(local_80 + 0x90) = 0;
    *(undefined8 *)(local_80 + 0x98) = 0;
    *(undefined8 *)(local_80 + 0x80) = 0;
    *(undefined8 *)(local_80 + 0x88) = 0;
    (*pcVar8)(local_80 + 0xa0);
  }
  *(undefined1 **)(lVar5 + 0x80) = &LAB_0225840c;
  *(undefined1 **)(lVar5 + 0x88) = &LAB_02b7b398;
  *(undefined1 **)(lVar5 + 0x90) = &LAB_02b7b39c;
  *(undefined1 **)(lVar5 + 0x98) = &LAB_02b7b3a8;
  *(int **)(lVar5 + 0xa0) = param_2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  pcVar8 = *(code **)(lVar5 + 0x108);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x110) = 0;
    *(undefined8 *)(lVar5 + 0x118) = 0;
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(undefined8 *)(lVar5 + 0x108) = 0;
    (*pcVar8)(lVar5 + 0x120);
  }
  *(undefined1 **)(lVar5 + 0x100) = &LAB_022585b8;
  *(undefined1 **)(lVar5 + 0x108) = &LAB_02b7b3b4;
  *(undefined1 **)(lVar5 + 0x110) = &LAB_02b7b3cc;
  *(undefined1 **)(lVar5 + 0x118) = &LAB_02b7b3e8;
  *(long **)(lVar5 + 0x120) = plVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  pcVar8 = *(code **)(lVar5 + 0x188);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 400) = 0;
    *(undefined8 *)(lVar5 + 0x198) = 0;
    *(undefined8 *)(lVar5 + 0x180) = 0;
    *(undefined8 *)(lVar5 + 0x188) = 0;
    (*pcVar8)(lVar5 + 0x1a0);
  }
  *(long **)(lVar5 + 0x1c0) = plVar4;
  *(undefined4 *)(lVar5 + 0x1c8) = local_a8;
  *(undefined1 **)(lVar5 + 0x180) = &LAB_022588b8;
  *(undefined1 **)(lVar5 + 0x188) = &LAB_02b7b3f8;
  pcVar8 = *(code **)(lVar5 + 0x208);
  *(long **)(lVar5 + 0x1a0) = plVar3;
  *(undefined8 *)(lVar5 + 0x1a8) = local_c8;
  *(undefined8 *)(lVar5 + 0x1b0) = uStack_c0;
  *(undefined8 *)(lVar5 + 0x1b8) = local_b8;
  *(undefined1 **)(lVar5 + 400) = &LAB_02b7b448;
  *(undefined1 **)(lVar5 + 0x198) = &LAB_02b7b4b8;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x218) = 0;
    *(undefined8 *)(lVar5 + 0x210) = 0;
    *(undefined8 *)(lVar5 + 0x208) = 0;
    *(undefined8 *)(lVar5 + 0x200) = 0;
    (*pcVar8)(lVar5 + 0x220);
  }
  pcVar8 = *(code **)(lVar5 + 0x288);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    (*pcVar8)(lVar5 + 0x2a0);
  }
  local_a0 = lVar5;
  uStack_98 = local_78;
  local_90 = uStack_70;
  uStack_88 = local_68;
  FUN_00e767a8(param_1,&local_a0);
  FUN_02257d44(&local_a0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  return param_1;
}


