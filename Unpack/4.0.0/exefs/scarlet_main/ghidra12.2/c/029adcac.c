/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029adcac; name: FUN_029adcac
 */


void FUN_029adcac(long param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  plVar4 = (long *)FUN_00f351bc();
  lVar9 = *plVar4;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x20) + 0x10))();
  }
  local_a8 = 0x79d34e3a53d40de4;
  pcStack_a0 = "AtmosphericScattering";
  local_98 = 0x15;
  local_90 = (long *)0x0;
  FUN_02713760(&local_88,lVar9,&local_a8,1,0);
  plVar4 = local_68;
  pcVar10 = (char *)(param_1 + 0x10);
  if (*pcVar10 == '\0') {
    if ((char)local_88 != '\0') {
      *(ulong *)(param_1 + 0x18) = local_80;
      *(ulong *)(param_1 + 0x20) = local_78;
      local_68 = (long *)0x0;
      *(long **)(param_1 + 0x28) = local_70;
      *(long **)(param_1 + 0x30) = plVar4;
      *(undefined1 *)(param_1 + 0x10) = 1;
      goto LAB_029add68;
    }
  }
  else {
    if ((char)local_88 == '\0') {
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
      }
      *pcVar10 = '\0';
    }
    else {
      plVar4 = *(long **)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x18) = local_80;
      *(ulong *)(param_1 + 0x20) = local_78;
      *(long **)(param_1 + 0x28) = local_70;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
      plVar4 = local_68;
      local_68 = (long *)0x0;
      *(long **)(param_1 + 0x30) = plVar4;
    }
LAB_029add68:
    if ((char)local_88 != '\0') {
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      local_88 = local_88 & 0xffffffffffffff00;
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0xf6073c5286cb8069;
  pcStack_a0 = "AtmoSctrSky";
  local_98 = 0xb;
  local_90 = (long *)0x0;
  puVar5 = (ulong *)FUN_00ddd388(lVar9,&local_a8);
  local_88 = *puVar5;
  local_80 = puVar5[1];
  local_78 = puVar5[2];
  local_70 = (long *)puVar5[3];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_c8 = 0xf6073c5286cb8069;
  pcStack_c0 = "AtmoSctrSky";
  local_b8 = 0xb;
  local_b0 = (long *)0x0;
  puVar6 = (undefined8 *)FUN_00ddd19c(lVar9,&local_c8);
  local_a8 = *puVar6;
  pcStack_a0 = (char *)puVar6[1];
  local_98 = puVar6[2];
  local_90 = (long *)puVar6[3];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  uVar7 = *param_2;
  plVar4 = local_70;
  if (uVar7 != *(ulong *)PTR_DAT_047d3e30) {
    local_80 = param_2[1];
    local_78 = param_2[2];
    plVar4 = (long *)param_2[3];
    local_88 = uVar7;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (local_70 != (long *)0x0) {
      lVar8 = *local_70;
      local_70 = plVar4;
      (**(code **)(lVar8 + 0x20))();
      plVar4 = local_70;
    }
  }
  local_70 = plVar4;
  local_c8 = 0xe2b935f8903c4573;
  pcStack_c0 = "Tech0";
  local_b8 = 5;
  local_b0 = (long *)0x0;
  FUN_029ae9b4(pcVar10,&local_c8,&local_88,&local_a8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  FUN_029aeb94(param_1,param_2 + 8,param_2[0xb]);
  local_a8 = 0x1f1602238b8e27a7;
  pcStack_a0 = "AtmosphericScatteringComposite";
  local_98 = 0x1e;
  local_90 = (long *)0x0;
  FUN_02713760(&local_88,lVar9,&local_a8,1,0);
  plVar4 = local_68;
  pcVar10 = (char *)(param_1 + 0x38);
  if (*pcVar10 == '\0') {
    if ((char)local_88 == '\0') goto LAB_029adf38;
    *(ulong *)(param_1 + 0x40) = local_80;
    *(ulong *)(param_1 + 0x48) = local_78;
    local_68 = (long *)0x0;
    *(long **)(param_1 + 0x50) = local_70;
    *(long **)(param_1 + 0x58) = plVar4;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else if ((char)local_88 == '\0') {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
    }
    *pcVar10 = '\0';
  }
  else {
    plVar4 = *(long **)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x40) = local_80;
    *(ulong *)(param_1 + 0x48) = local_78;
    *(long **)(param_1 + 0x50) = local_70;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    plVar4 = local_68;
    local_68 = (long *)0x0;
    *(long **)(param_1 + 0x58) = plVar4;
  }
  if ((char)local_88 != '\0') {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_88 = local_88 & 0xffffffffffffff00;
  }
LAB_029adf38:
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_a8 = 0x9c06f95e80139498;
  pcStack_a0 = "AtmoSctrSkyComposite";
  local_98 = 0x14;
  local_90 = (long *)0x0;
  puVar5 = (ulong *)FUN_00ddd388(lVar9,&local_a8);
  local_88 = *puVar5;
  local_80 = puVar5[1];
  local_78 = puVar5[2];
  local_70 = (long *)puVar5[3];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_c8 = 0x9c06f95e80139498;
  pcStack_c0 = "AtmoSctrSkyComposite";
  local_b8 = 0x14;
  local_b0 = (long *)0x0;
  puVar6 = (undefined8 *)FUN_00ddd19c(lVar9,&local_c8);
  local_a8 = *puVar6;
  pcStack_a0 = (char *)puVar6[1];
  local_98 = puVar6[2];
  local_90 = (long *)puVar6[3];
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  uVar7 = param_2[4];
  plVar4 = local_70;
  if (uVar7 != *(ulong *)puVar2) {
    local_80 = param_2[5];
    local_78 = param_2[6];
    plVar4 = (long *)param_2[7];
    local_88 = uVar7;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (local_70 != (long *)0x0) {
      lVar8 = *local_70;
      local_70 = plVar4;
      (**(code **)(lVar8 + 0x20))();
      plVar4 = local_70;
    }
  }
  local_70 = plVar4;
  local_c8 = 0xe2b935f8903c4573;
  pcStack_c0 = "Tech0";
  local_b8 = 5;
  local_b0 = (long *)0x0;
  FUN_029ae9b4(pcVar10,&local_c8,&local_88,&local_a8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x20) + 0x18))((long *)(lVar9 + 0x20));
  }
  return;
}


