/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b95f0; name: FUN_021b95f0
 */


long * FUN_021b95f0(long *param_1,int *param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *plStack_68;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    local_90 = (long *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    local_90 = (long *)0x0;
    if (uVar11 != 0) {
      puVar2 = (uint *)((long)param_2 + uVar11);
      local_90 = (long *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  FUN_00ea0a7c(&local_b8,&local_90);
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    local_90 = (long *)0x0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    local_90 = (long *)0x0;
    if (uVar11 != 0) {
      puVar2 = (uint *)((long)param_2 + uVar11);
      local_90 = (long *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  FUN_00ea0a7c(&local_c0,&local_90);
  plVar8 = local_b8;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar11 == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined4 *)((long)param_2 + uVar11);
  }
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (local_b8 != (long *)0x0) {
    plVar3 = local_b8 + 6;
  }
  local_e0 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (local_b8 != (long *)0x0) {
    plVar3 = local_b8 + 7;
  }
  lStack_d8 = *plVar3;
  if (local_b8 == (long *)0x0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_b8[8];
  }
  local_c8 = (long *)0x0;
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x18))(local_b8);
  }
  plVar3 = local_c0;
  local_c8 = plVar8;
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x18))(local_c0);
  }
  plVar8 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x300,0x10);
  if (plVar9 == (long *)0x0) {
    uVar16 = 0;
    uVar15 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_00e76b9c(plVar9,&local_e0);
    puVar5 = PTR_DAT_047db030;
    plVar9[0x40] = 0;
    plVar9[0x10] = 0;
    plVar9[0x11] = 0;
    uVar15 = 0x300;
    uVar16 = 0x10;
    plVar9[0x41] = 0;
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x42] = 0;
    plVar9[0x43] = 0;
    plVar9[0x53] = 0;
    plVar9[0x52] = 0;
    plVar9[0x51] = 0;
    plVar9[0x50] = 0;
    *plVar9 = (long)(puVar5 + 0x10);
    plVar9[0x20] = 0;
    plVar9[0x21] = 0;
    plVar9[0x22] = 0;
    plVar9[0x23] = 0;
    plVar9[0x30] = 0;
    plVar9[0x31] = 0;
    plVar9[0x32] = 0;
    plVar9[0x33] = 0;
    local_80 = 0x300;
    uStack_78 = 0x10;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_90 = plVar9;
    plStack_88 = plVar8;
  }
  plVar8 = plStack_88;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  pcVar12 = (code *)plVar9[0x11];
  if (pcVar12 != (code *)0x0) {
    plVar9[0x12] = 0;
    plVar9[0x13] = 0;
    plVar9[0x10] = 0;
    plVar9[0x11] = 0;
    (*pcVar12)(plVar9 + 0x14);
  }
  *(undefined4 *)(plVar9 + 0x15) = uVar14;
  plVar9[0x10] = (long)&LAB_021b9db4;
  plVar9[0x11] = (long)&LAB_02b5b65c;
  pcVar12 = (code *)plVar9[0x21];
  plVar9[0x12] = (long)&LAB_02b5b674;
  plVar9[0x13] = (long)&LAB_02b5b6b4;
  plVar9[0x14] = (long)plVar3;
  if (pcVar12 != (code *)0x0) {
    plVar9[0x22] = 0;
    plVar9[0x23] = 0;
    plVar9[0x20] = 0;
    plVar9[0x21] = 0;
    (*pcVar12)(plVar9 + 0x24);
  }
  pcVar12 = (code *)plVar9[0x31];
  if (pcVar12 != (code *)0x0) {
    plVar9[0x32] = 0;
    plVar9[0x33] = 0;
    plVar9[0x30] = 0;
    plVar9[0x31] = 0;
    (*pcVar12)(plVar9 + 0x34);
  }
  pcVar12 = (code *)plVar9[0x41];
  if (pcVar12 != (code *)0x0) {
    plVar9[0x43] = 0;
    plVar9[0x42] = 0;
    plVar9[0x41] = 0;
    plVar9[0x40] = 0;
    (*pcVar12)(plVar9 + 0x44);
  }
  pcVar12 = (code *)plVar9[0x51];
  if (pcVar12 != (code *)0x0) {
    plVar9[0x53] = 0;
    plVar9[0x52] = 0;
    plVar9[0x51] = 0;
    plVar9[0x50] = 0;
    (*pcVar12)(plVar9 + 0x54);
  }
  local_90 = (long *)0x0;
  local_b0 = plVar9;
  local_a8 = plVar8;
  local_a0 = uVar15;
  local_98 = uVar16;
  FUN_00e767a8(param_1,&local_b0);
  plVar8 = local_b0;
  local_b0 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar7;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar7;
    }
    (**(code **)*plVar8)(plVar8);
    uVar16 = local_98;
    uVar15 = local_a0;
    plVar9 = local_a8;
    uVar11 = (**(code **)(*local_a8 + 0xf8))(local_a8);
    if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,uVar15,uVar16);
    }
    else {
      FUN_00c48fe8(plVar9,plVar8,uVar15,uVar16);
    }
    lVar10 = FUN_00c4e600();
    iVar7 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar8 = (long *)FUN_00c4e600();
      if (plVar8[600] != 0) {
        local_70 = plVar8 + plVar8[600] * 3;
        plStack_68 = plVar8;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar13 = (long *)*plVar8;
        plVar9 = plVar8;
        if (plVar8[600] != 0) {
          plVar9 = plVar8 + plVar8[600] * 3;
        }
        if (plVar9 == plVar8) {
          uVar17 = 0;
          uVar11 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar13) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
            plVar13 = (long *)*plVar8;
          }
          plVar1 = plVar8 + 3;
          if (plVar9 == plVar1) {
            uVar17 = 0;
            uVar11 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar6 = (long *)*plVar1 != plVar13;
            if (bVar6) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
              plVar13 = (long *)plVar8[3];
            }
            uVar17 = (ulong)bVar6;
            plVar1 = plVar8 + 6;
            if (plVar9 == plVar1) {
              uVar11 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar8 + 6);
                plVar13 = (long *)plVar8[6];
                uVar17 = 2;
              }
              plVar1 = plVar8 + 9;
              if (plVar9 == plVar1) {
                uVar11 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar8 + 9);
                  plVar13 = (long *)plVar8[9];
                  uVar17 = 3;
                }
                plVar1 = plVar8 + 0xc;
                if (plVar9 == plVar1) {
                  uVar11 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar8 + 0xc);
                    plVar13 = (long *)plVar8[0xc];
                    uVar17 = 4;
                  }
                  plVar1 = plVar8 + 0xf;
                  if (plVar9 == plVar1) {
                    uVar11 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar8 + 0xf);
                      plVar13 = (long *)plVar8[0xf];
                      uVar17 = 5;
                    }
                    uVar11 = 6;
                    for (plVar1 = plVar8 + 0x12; plVar9 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar1);
                        plVar13 = (long *)*plVar1;
                        uVar17 = uVar11;
                      }
                      uVar11 = uVar11 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar17 * 3,plVar8 + uVar11 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
    plVar8 = local_90;
    local_90 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      FUN_01e2e474(&plStack_88);
    }
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return param_1;
}


