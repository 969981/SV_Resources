/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01930084; name: FUN_01930084
 */


void FUN_01930084(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  ulong local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  char *local_70;
  undefined8 uStack_68;
  long *local_60;
  long *local_58;
  
  puVar2 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar3 = PTR_DAT_047d3e30;
  local_70 = *(char **)PTR_DAT_047d3e30;
  uStack_68 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  local_60 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  plVar15 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  local_58 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_01340a44(&local_98,param_1,1);
  plVar4 = local_78;
  if ((char)local_98 != '\0') {
    local_70 = local_90;
    uStack_68 = local_88;
    local_60 = local_80;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))(local_78);
      plVar15 = local_58;
    }
    local_58 = plVar4;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if ((char)local_98 != '\0') {
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      local_98 = local_98 & 0xffffffffffffff00;
    }
  }
  if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_b8 = *(char **)puVar3;
  uStack_b0 = *(undefined8 *)(puVar3 + 8);
  local_a8 = *(long **)(puVar3 + 0x10);
  local_a0 = *(long **)(puVar3 + 0x18);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x18))();
  }
  FUN_01340a44(&local_98,param_1,0x100000001);
  plVar15 = local_78;
  if ((char)local_98 != '\0') {
    local_b8 = local_90;
    uStack_b0 = local_88;
    local_a8 = local_80;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))(local_78);
    }
    plVar4 = local_a0;
    local_a0 = plVar15;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    if ((char)local_98 != '\0') {
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      local_98 = local_98 & 0xffffffffffffff00;
    }
  }
  piVar10 = (int *)*param_1;
  if (((*(ushort *)((long)piVar10 - (long)*piVar10) < 0x17) ||
      (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0xb], uVar12 == 0)) ||
     (puVar11 = (uint *)((long)piVar10 + uVar12),
     puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11), *puVar11 < 3)) {
LAB_01930210:
    uVar16 = 0;
  }
  else {
    puVar11 = puVar11 + 3;
    piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
    puVar11 = (uint *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (8 - (long)*piVar10)));
    piVar10 = (int *)((long)puVar11 + (ulong)*puVar11);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar12 == 0))
    goto LAB_01930210;
    uVar16 = *(undefined4 *)((long)piVar10 + uVar12);
  }
  uVar12 = param_1[0x2c];
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xc9d1cc274aa2535a;
    }
    else {
      uVar14 = 0xc9d1cc274aa2535a;
      if (uVar12 < 0xc9d1cc274aa2535b) {
        uVar14 = 0;
        if (uVar12 != 0) {
          uVar14 = 0xc9d1cc274aa2535a / uVar12;
        }
        uVar14 = 0xc9d1cc274aa2535a - uVar14 * uVar12;
      }
    }
    plVar15 = *(long **)(param_1[0x2b] + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == 0xc9d1cc274aa2535a) {
            if (plVar15[2] == -0x362e33d8b55daca6) goto LAB_01930400;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == 0xc9d1cc274aa2535a) {
            if (plVar15[2] == -0x362e33d8b55daca6) goto LAB_01930400;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar1 = 0;
              if (uVar12 != 0) {
                uVar1 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar1 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01930408:
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar17 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar17;
  local_98 = 0x9df1499ee8007e8e;
  local_90 = "IsStreamText";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  uVar5 = FUN_0141f968(param_1,&local_98);
  local_d8 = 0x46fa3430f937329d;
  pcStack_d0 = "IsPause";
  local_c8 = 7;
  local_c0 = (long *)0x0;
  uVar6 = FUN_0141f968(param_1,&local_d8);
  local_f8 = 0x2ff0d39da79c1a86;
  pcStack_f0 = "IsUserInput";
  local_e8 = 0xb;
  local_e0 = (long *)0x0;
  uVar7 = FUN_0141f968(param_1,&local_f8);
  FUN_01930634(uVar17,param_1,param_1 + 0x22,&local_70,&local_b8,uVar16,
               (uVar5 & 0xff) != 0 && 0xff < uVar5,(uVar6 & 0xff) != 0 && 0xff < uVar6,
               (uVar7 & 0xff) != 0 && 0xff < uVar7);
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  local_98 = 0xc9d1cc274aa2535a;
  puVar9 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&local_98);
  *(undefined1 *)(puVar9 + 2) = 1;
  *puVar9 = PTR_LAB_047dcd90;
LAB_01930570:
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
LAB_01930400:
  if ((char)plVar15[6] != '\0') goto LAB_01930570;
  goto LAB_01930408;
}


