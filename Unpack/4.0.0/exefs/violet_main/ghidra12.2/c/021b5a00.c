/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b5a00; name: FUN_021b5a00
 */


undefined1  [16] FUN_021b5a00(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  long local_e8;
  long lStack_e0;
  long local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_a0;
  long *local_98;
  undefined8 *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  plVar15 = *(long **)(param_2 + 0x10);
  piVar2 = (int *)((long)*param_3 + (ulong)*(uint *)*param_3);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    local_c8 = (long *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
    local_c8 = (long *)0x0;
    if (uVar13 != 0) {
      puVar3 = (uint *)((long)piVar2 + uVar13);
      local_c8 = (long *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00ea0a7c(&local_98,&local_c8);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 7) {
    local_90 = (undefined8 *)0x0;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    local_90 = (undefined8 *)0x0;
    if (uVar13 != 0) {
      puVar3 = (uint *)((long)piVar2 + uVar13);
      local_90 = (undefined8 *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  FUN_00cf95c4(&local_c8,&local_90);
  plVar7 = local_98;
  if (*local_b8 == '\0') {
    FUN_0156c684(plVar15,plVar15[1]);
  }
  else {
    plVar4 = (long *)PTR_DAT_047d8b70;
    if (local_98 != (long *)0x0) {
      plVar4 = local_98 + 6;
    }
    local_e8 = *plVar4;
    plVar4 = (long *)PTR_PTR_047d4508;
    if (local_98 != (long *)0x0) {
      plVar4 = local_98 + 7;
    }
    lStack_e0 = *plVar4;
    if (local_98 == (long *)0x0) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_98[8];
    }
    local_d0 = (long *)0x0;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))(local_98);
    }
    plVar4 = local_c8;
    local_d0 = plVar7;
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x18))(local_c8);
    }
    plVar7 = local_a8;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x18))(local_a8);
    }
    plVar10 = (long *)(**(code **)(*plVar15 + 0x138))();
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x340,0x10);
    if (puVar11 == (undefined8 *)0x0) {
      uVar17 = 0;
      uVar16 = 0;
      plVar10 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar10;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      FUN_00e76b9c(puVar11,&local_e8);
      puVar11[0x40] = 0;
      *puVar11 = &PTR_FUN_045a21a8;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      uVar16 = 0x340;
      puVar11[0x41] = 0;
      puVar11[0x42] = 0;
      puVar11[0x43] = 0;
      puVar11[0x53] = 0;
      puVar11[0x52] = 0;
      puVar11[0x51] = 0;
      puVar11[0x50] = 0;
      puVar11[0x67] = 0;
      puVar11[0x66] = 0;
      puVar11[0x65] = 0;
      puVar11[100] = 0;
      puVar11[99] = 0;
      puVar11[0x62] = 0;
      puVar11[0x61] = 0;
      puVar11[0x60] = &PTR_FUN_045a21f8;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x20] = 0;
      puVar11[0x21] = 0;
      puVar11[0x22] = 0;
      puVar11[0x23] = 0;
      puVar11[0x30] = 0;
      puVar11[0x31] = 0;
      puVar11[0x32] = 0;
      puVar11[0x33] = 0;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      uVar17 = 0x10;
    }
    pcVar14 = (code *)puVar11[0x11];
    if (pcVar14 != (code *)0x0) {
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      (*pcVar14)(puVar11 + 0x14);
    }
    *(undefined1 *)(puVar11 + 0x14) = 0;
    puVar11[0x10] = FUN_0156c3e4;
    puVar11[0x11] = &LAB_02b58c24;
    pcVar14 = (code *)puVar11[0x21];
    puVar11[0x12] = &LAB_02b58c28;
    puVar11[0x13] = &LAB_02b58c34;
    if (pcVar14 != (code *)0x0) {
      puVar11[0x22] = 0;
      puVar11[0x23] = 0;
      puVar11[0x20] = 0;
      puVar11[0x21] = 0;
      (*pcVar14)(puVar11 + 0x24);
    }
    *(undefined1 *)(puVar11 + 0x24) = 0;
    puVar11[0x20] = &LAB_021b641c;
    puVar11[0x21] = &LAB_02b58c40;
    puVar11[0x22] = &LAB_02b58c44;
    puVar11[0x23] = &LAB_02b58c50;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    pcVar14 = (code *)puVar11[0x31];
    if (pcVar14 != (code *)0x0) {
      puVar11[0x32] = 0;
      puVar11[0x33] = 0;
      puVar11[0x30] = 0;
      puVar11[0x31] = 0;
      (*pcVar14)(puVar11 + 0x34);
    }
    puVar11[0x38] = plVar7;
    *(undefined4 *)(puVar11 + 0x39) = local_a0;
    puVar11[0x30] = FUN_021b66d0;
    puVar11[0x31] = &LAB_02b58c5c;
    pcVar14 = (code *)puVar11[0x41];
    puVar11[0x34] = plVar4;
    puVar11[0x35] = local_c0;
    puVar11[0x36] = local_b8;
    puVar11[0x37] = local_b0;
    puVar11[0x32] = &LAB_02b58cac;
    puVar11[0x33] = &LAB_02b58d1c;
    if (pcVar14 != (code *)0x0) {
      puVar11[0x43] = 0;
      puVar11[0x42] = 0;
      puVar11[0x41] = 0;
      puVar11[0x40] = 0;
      (*pcVar14)(puVar11 + 0x44);
    }
    pcVar14 = (code *)puVar11[0x51];
    if (pcVar14 != (code *)0x0) {
      puVar11[0x53] = 0;
      puVar11[0x52] = 0;
      puVar11[0x51] = 0;
      puVar11[0x50] = 0;
      (*pcVar14)(puVar11 + 0x54);
    }
    local_90 = puVar11;
    local_88 = plVar10;
    local_80 = uVar16;
    local_78 = uVar17;
    FUN_00e767a8(plVar15,&local_90);
    puVar11 = local_90;
    local_90 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar6 = *(int *)(lVar12 + 0x12c8);
      iVar9 = iVar6 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar9;
      if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
        *(int *)(lVar12 + 0x12cc) = iVar9;
      }
      (**(code **)*puVar11)(puVar11);
      uVar17 = local_78;
      uVar16 = local_80;
      plVar10 = local_88;
      uVar13 = (**(code **)(*local_88 + 0xf8))(local_88);
      if (((uVar13 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar16,uVar17);
      }
      else {
        FUN_00c48fe8(plVar10,puVar11,uVar16,uVar17);
      }
      lVar12 = FUN_00c4e600();
      iVar9 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar9;
      if (iVar9 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          plStack_68 = plVar10;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar18 = (long *)*plVar10;
          plVar5 = plVar10;
          if (plVar10[600] != 0) {
            plVar5 = plVar10 + plVar10[600] * 3;
          }
          if (plVar5 == plVar10) {
            uVar19 = 0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar18) {
              (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10);
              plVar18 = (long *)*plVar10;
            }
            plVar1 = plVar10 + 3;
            if (plVar5 == plVar1) {
              uVar19 = 0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar8 = (long *)*plVar1 != plVar18;
              if (bVar8) {
                (**(code **)(*plVar18 + 0x100))(plVar18,plVar10,plVar10 + 3);
                plVar18 = (long *)plVar10[3];
              }
              uVar19 = (ulong)bVar8;
              plVar1 = plVar10 + 6;
              if (plVar5 == plVar1) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar18) {
                  (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar10 + 6);
                  plVar18 = (long *)plVar10[6];
                  uVar19 = 2;
                }
                plVar1 = plVar10 + 9;
                if (plVar5 == plVar1) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar18) {
                    (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar10 + 9);
                    plVar18 = (long *)plVar10[9];
                    uVar19 = 3;
                  }
                  plVar1 = plVar10 + 0xc;
                  if (plVar5 == plVar1) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar18) {
                      (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar10 + 0xc);
                      plVar18 = (long *)plVar10[0xc];
                      uVar19 = 4;
                    }
                    plVar1 = plVar10 + 0xf;
                    if (plVar5 == plVar1) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar18) {
                        (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar10 + 0xf);
                        plVar18 = (long *)plVar10[0xf];
                        uVar19 = 5;
                      }
                      uVar13 = 6;
                      for (plVar1 = plVar10 + 0x12; plVar5 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar18) {
                          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar1);
                          plVar18 = (long *)*plVar1;
                          uVar19 = uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar18 + 0x100))(plVar18,plVar10 + uVar19 * 3,plVar10 + uVar13 * 3);
          plVar10[600] = 0;
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
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  auVar20._8_8_ = plVar15;
  auVar20._0_8_ = 2;
  return auVar20;
}


