/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ae704; name: FUN_021ae704
 */


long * FUN_021ae704(long *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long local_110;
  long lStack_108;
  long local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *aplStack_70 [2];
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_98 = (undefined8 *)0x0;
    if (uVar13 != 0) {
      puVar2 = (uint *)((long)param_2 + uVar13);
      local_98 = (undefined8 *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  FUN_00cf95c4(&local_e8,&local_98);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_98 = (undefined8 *)0x0;
    if (uVar13 != 0) {
      puVar2 = (uint *)((long)param_2 + uVar13);
      local_98 = (undefined8 *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  FUN_00ea0a7c(&local_f0,&local_98);
  plVar6 = local_f0;
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (local_f0 != (long *)0x0) {
    plVar3 = local_f0 + 6;
  }
  local_110 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (local_f0 != (long *)0x0) {
    plVar3 = local_f0 + 7;
  }
  lStack_108 = *plVar3;
  if (local_f0 == (long *)0x0) {
    local_100 = 0;
  }
  else {
    local_100 = local_f0[8];
  }
  local_f8 = (long *)0x0;
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x18))(local_f0);
  }
  plVar3 = local_e8;
  local_f8 = plVar6;
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x18))(local_e8);
  }
  plVar6 = local_c8;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))(local_c8);
  }
  uVar10 = (**(code **)(*param_1 + 0x138))(param_1);
  FUN_021aee20(&local_98,uVar10,&local_110);
  puVar7 = local_98;
  pcVar14 = (code *)local_98[0x11];
  if (pcVar14 != (code *)0x0) {
    local_98[0x12] = 0;
    local_98[0x13] = 0;
    local_98[0x10] = 0;
    local_98[0x11] = 0;
    (*pcVar14)(local_98 + 0x14);
  }
  *(undefined1 *)(puVar7 + 0x14) = 0;
  puVar7[0x10] = &LAB_021affb0;
  puVar7[0x11] = &LAB_02b57ddc;
  pcVar14 = (code *)puVar7[0x21];
  puVar7[0x12] = &LAB_02b58180;
  puVar7[0x13] = &LAB_02b5818c;
  if (pcVar14 != (code *)0x0) {
    puVar7[0x22] = 0;
    puVar7[0x23] = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    (*pcVar14)(puVar7 + 0x24);
  }
  *(undefined1 *)(puVar7 + 0x24) = 0;
  puVar7[0x20] = &LAB_021b1b8c;
  puVar7[0x21] = &LAB_02b58198;
  puVar7[0x22] = &LAB_02b5819c;
  puVar7[0x23] = &LAB_02b581a8;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar14 = (code *)puVar7[0x31];
  if (pcVar14 != (code *)0x0) {
    puVar7[0x32] = 0;
    puVar7[0x33] = 0;
    puVar7[0x30] = 0;
    puVar7[0x31] = 0;
    (*pcVar14)(puVar7 + 0x34);
  }
  puVar7[0x38] = plVar6;
  *(undefined4 *)(puVar7 + 0x39) = local_c0;
  puVar7[0x30] = &LAB_021b1e84;
  puVar7[0x31] = &LAB_02b581b4;
  pcVar14 = (code *)puVar7[0x41];
  puVar7[0x34] = plVar3;
  puVar7[0x35] = local_e0;
  puVar7[0x36] = uStack_d8;
  puVar7[0x37] = local_d0;
  puVar7[0x32] = &LAB_02b58204;
  puVar7[0x33] = &LAB_02b58274;
  if (pcVar14 != (code *)0x0) {
    puVar7[0x43] = 0;
    puVar7[0x42] = 0;
    puVar7[0x41] = 0;
    puVar7[0x40] = 0;
    (*pcVar14)(puVar7 + 0x44);
  }
  pcVar14 = (code *)puVar7[0x51];
  if (pcVar14 != (code *)0x0) {
    puVar7[0x53] = 0;
    puVar7[0x52] = 0;
    puVar7[0x51] = 0;
    puVar7[0x50] = 0;
    (*pcVar14)(puVar7 + 0x54);
  }
  local_b8 = puVar7;
  local_b0 = local_90;
  local_98 = (undefined8 *)0x0;
  local_a8 = uStack_88;
  local_a0 = local_80;
  FUN_00e767a8(param_1,&local_b8);
  puVar7 = local_b8;
  local_b8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar5 = *(int *)(lVar11 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
      *(int *)(lVar11 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar7)(puVar7);
    uVar8 = local_a0;
    uVar10 = local_a8;
    plVar12 = local_b0;
    uVar13 = (**(code **)(*local_b0 + 0xf8))(local_b0);
    if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar7,uVar10,uVar8);
    }
    else {
      FUN_00c48fe8(plVar12,puVar7,uVar10,uVar8);
    }
    lVar11 = FUN_00c4e600();
    iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
    *(int *)(lVar11 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar12 = (long *)FUN_00c4e600();
      if (plVar12[600] != 0) {
        local_78 = plVar12 + plVar12[600] * 3;
        aplStack_70[0] = plVar12;
        FUN_00c4ea30(aplStack_70,&local_78);
        plVar15 = (long *)*plVar12;
        plVar4 = plVar12;
        if (plVar12[600] != 0) {
          plVar4 = plVar12 + plVar12[600] * 3;
        }
        if (plVar4 == plVar12) {
          uVar17 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar12 + 0xd0))();
          if ((long *)*plVar12 != plVar15) {
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar12,plVar12);
            plVar15 = (long *)*plVar12;
          }
          plVar16 = plVar12 + 3;
          if (plVar4 == plVar16) {
            uVar17 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar16 + 0xd0))();
            bVar9 = (long *)*plVar16 != plVar15;
            if (bVar9) {
              (**(code **)(*plVar15 + 0x100))(plVar15,plVar12,plVar12 + 3);
              plVar15 = (long *)plVar12[3];
            }
            uVar17 = (ulong)bVar9;
            plVar16 = plVar12 + 6;
            if (plVar4 == plVar16) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              if ((long *)*plVar16 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar12 + 6);
                plVar15 = (long *)plVar12[6];
                uVar17 = 2;
              }
              plVar16 = plVar12 + 9;
              if (plVar4 == plVar16) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                if ((long *)*plVar16 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar12 + 9);
                  plVar15 = (long *)plVar12[9];
                  uVar17 = 3;
                }
                plVar16 = plVar12 + 0xc;
                if (plVar4 == plVar16) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar15) {
                    (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar12 + 0xc);
                    plVar15 = (long *)plVar12[0xc];
                    uVar17 = 4;
                  }
                  plVar16 = plVar12 + 0xf;
                  if (plVar4 == plVar16) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar16 + 0xd0))();
                    if ((long *)*plVar16 != plVar15) {
                      (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar12 + 0xf);
                      plVar15 = (long *)plVar12[0xf];
                      uVar17 = 5;
                    }
                    uVar13 = 6;
                    for (plVar16 = plVar12 + 0x12; plVar4 != plVar16; plVar16 = plVar16 + 3) {
                      (**(code **)(*(long *)*plVar16 + 0xd0))();
                      if ((long *)*plVar16 != plVar15) {
                        (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar16);
                        plVar15 = (long *)*plVar16;
                        uVar17 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar15 + 0x100))(plVar15,plVar12 + uVar17 * 3,plVar12 + uVar13 * 3);
        plVar12[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  return param_1;
}


