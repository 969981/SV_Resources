/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01995b3c; name: FUN_01995b3c
 */


long * FUN_01995b3c(undefined8 *param_1,long *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  code *pcVar15;
  undefined4 uVar16;
  long *plVar17;
  ulong uVar18;
  long local_130;
  long lStack_128;
  long local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *aplStack_70 [2];
  
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_d8 = (undefined8 *)0x0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_d8 = (undefined8 *)0x0;
    if (uVar14 != 0) {
      puVar3 = (uint *)((long)param_3 + uVar14);
      local_d8 = (undefined8 *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00cf95c4(&local_108,&local_d8);
  if (*(ushort *)((long)param_3 - (long)*param_3) < 5) {
    local_d8 = (undefined8 *)0x0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2];
    local_d8 = (undefined8 *)0x0;
    if (uVar14 != 0) {
      puVar3 = (uint *)((long)param_3 + uVar14);
      local_d8 = (undefined8 *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_110,&local_d8);
  plVar7 = local_110;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 7) ||
     (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3], uVar14 == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined4 *)((long)param_3 + uVar14);
  }
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_110 != (long *)0x0) {
    plVar4 = local_110 + 6;
  }
  local_130 = *plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_110 != (long *)0x0) {
    plVar4 = local_110 + 7;
  }
  lStack_128 = *plVar4;
  if (local_110 == (long *)0x0) {
    local_120 = 0;
  }
  else {
    local_120 = local_110[8];
  }
  local_118 = (long *)0x0;
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x18))(local_110);
  }
  plVar4 = local_108;
  local_118 = plVar7;
  param_1 = (undefined8 *)*param_1;
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x18))(local_108);
  }
  plVar7 = local_e8;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  uVar11 = (**(code **)(*param_2 + 0x138))();
  FUN_01451ec0(&local_98,uVar11,&local_130);
  pcVar15 = (code *)local_98[0x11];
  if (pcVar15 != (code *)0x0) {
    local_98[0x12] = 0;
    local_98[0x13] = 0;
    local_98[0x10] = 0;
    local_98[0x11] = 0;
    (*pcVar15)(local_98 + 0x14);
  }
  *(undefined4 *)(local_98 + 0x15) = uVar16;
  local_98[0x16] = param_3;
  local_98[0x10] = &LAB_01921ee4;
  local_98[0x11] = &LAB_02b5ab40;
  pcVar15 = (code *)local_98[0x21];
  local_98[0x12] = &LAB_02b5ab44;
  local_98[0x13] = &LAB_02b5ab58;
  local_98[0x14] = param_1;
  if (pcVar15 != (code *)0x0) {
    local_98[0x22] = 0;
    local_98[0x23] = 0;
    local_98[0x20] = 0;
    local_98[0x21] = 0;
    (*pcVar15)(local_98 + 0x24);
  }
  *(undefined1 *)(local_98 + 0x24) = 0;
  local_98[0x20] = &LAB_021b8f00;
  local_98[0x21] = &LAB_02b5ab6c;
  local_98[0x22] = &LAB_02b5ab70;
  local_98[0x23] = &LAB_02b5ab7c;
  local_d0 = plVar4;
  local_d8 = param_1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_c8 = local_100;
  local_c0 = uStack_f8;
  local_b8 = local_f0;
  local_b0 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_a8 = local_e0;
  local_a0 = uVar16;
  FUN_0199629c(local_98 + 0x30,&local_d8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 0x20))();
  }
  pcVar15 = (code *)local_98[0x41];
  if (pcVar15 != (code *)0x0) {
    local_98[0x43] = 0;
    local_98[0x42] = 0;
    local_98[0x41] = 0;
    local_98[0x40] = 0;
    (*pcVar15)(local_98 + 0x44);
  }
  pcVar15 = (code *)local_98[0x51];
  if (pcVar15 != (code *)0x0) {
    local_98[0x53] = 0;
    local_98[0x52] = 0;
    local_98[0x51] = 0;
    local_98[0x50] = 0;
    (*pcVar15)(local_98 + 0x54);
  }
  local_d8 = local_98;
  local_d0 = local_90;
  local_98 = (undefined8 *)0x0;
  local_c8 = uStack_88;
  local_c0 = local_80;
  FUN_00e767a8(param_2,&local_d8);
  puVar8 = local_d8;
  local_d8 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar6 = *(int *)(lVar12 + 0x12c8);
    iVar1 = iVar6 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
      *(int *)(lVar12 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    uVar9 = local_c0;
    uVar11 = local_c8;
    plVar13 = local_d0;
    uVar14 = (**(code **)(*local_d0 + 0xf8))(local_d0);
    if (((uVar14 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar8,uVar11,uVar9);
    }
    else {
      FUN_00c48fe8(plVar13,puVar8,uVar11,uVar9);
    }
    lVar12 = FUN_00c4e600();
    iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
    *(int *)(lVar12 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_78 = plVar13 + plVar13[600] * 3;
        aplStack_70[0] = plVar13;
        FUN_00c4ea30(aplStack_70,&local_78);
        plVar17 = (long *)*plVar13;
        plVar5 = plVar13;
        if (plVar13[600] != 0) {
          plVar5 = plVar13 + plVar13[600] * 3;
        }
        if (plVar5 == plVar13) {
          uVar18 = 0;
          uVar14 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar17) {
            (**(code **)(*plVar17 + 0x100))(plVar17,plVar13,plVar13);
            plVar17 = (long *)*plVar13;
          }
          plVar2 = plVar13 + 3;
          if (plVar5 == plVar2) {
            uVar18 = 0;
            uVar14 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar10 = (long *)*plVar2 != plVar17;
            if (bVar10) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar13,plVar13 + 3);
              plVar17 = (long *)plVar13[3];
            }
            uVar18 = (ulong)bVar10;
            plVar2 = plVar13 + 6;
            if (plVar5 == plVar2) {
              uVar14 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar17) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar13 + 6);
                plVar17 = (long *)plVar13[6];
                uVar18 = 2;
              }
              plVar2 = plVar13 + 9;
              if (plVar5 == plVar2) {
                uVar14 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar13 + 9);
                  plVar17 = (long *)plVar13[9];
                  uVar18 = 3;
                }
                plVar2 = plVar13 + 0xc;
                if (plVar5 == plVar2) {
                  uVar14 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar13 + 0xc);
                    plVar17 = (long *)plVar13[0xc];
                    uVar18 = 4;
                  }
                  plVar2 = plVar13 + 0xf;
                  if (plVar5 == plVar2) {
                    uVar14 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar13 + 0xf);
                      plVar17 = (long *)plVar13[0xf];
                      uVar18 = 5;
                    }
                    uVar14 = 6;
                    for (plVar2 = plVar13 + 0x12; plVar5 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar2);
                        plVar17 = (long *)*plVar2;
                        uVar18 = uVar14;
                      }
                      uVar14 = uVar14 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar17 + 0x100))(plVar17,plVar13 + uVar18 * 3,plVar13 + uVar14 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar12 + 0x12cc) = 0;
    }
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  return param_2;
}


