/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015183e0; name: FUN_015183e0
 */


void FUN_015183e0(long param_1,int *param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong local_b0;
  long *local_98;
  long *local_90;
  long local_88;
  long *local_80;
  ulong local_78;
  undefined1 auStack_70 [8];
  long *local_68;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)param_2;
    plVar9 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x20,8);
    if (plVar9 == (long *)0x0) {
      plVar11 = (long *)0x0;
      uVar22 = 0;
      uVar18 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01518d30;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *(undefined4 *)(plVar9 + 3) = 0;
      *plVar9 = (long)param_3;
      plVar9[1] = 0x666666666666666;
      plVar9[2] = 0;
      uVar18 = 8;
      uVar22 = 0x20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar11 = param_3;
    }
    lVar10 = *(long *)(param_1 + 0x20);
    *(long **)(param_1 + 0x20) = plVar9;
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar6 = *(int *)(lVar12 + 0x12c8);
      iVar7 = iVar6 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar7;
      if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
        *(int *)(lVar12 + 0x12cc) = iVar7;
      }
      plVar9 = *(long **)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      uVar23 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar23 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar2,uVar15);
      }
      else {
        FUN_00c48fe8(plVar9,lVar10,uVar2,uVar15);
      }
      lVar10 = FUN_00c4e600();
      iVar7 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar7;
      if (iVar7 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_68 = plVar9 + plVar9[600] * 3;
          local_98 = plVar9;
          FUN_00c4ea30(&local_98,&local_68);
          plVar17 = (long *)*plVar9;
          plVar1 = plVar9;
          if (plVar9[600] != 0) {
            plVar1 = plVar9 + plVar9[600] * 3;
          }
          if (plVar1 == plVar9) {
            local_b0 = 0;
            uVar23 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar9,plVar9);
              plVar17 = (long *)*plVar9;
            }
            plVar21 = plVar9 + 3;
            if (plVar1 == plVar21) {
              local_b0 = 0;
              uVar23 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar21 + 0xd0))();
              bVar5 = (long *)*plVar21 != plVar17;
              if (bVar5) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar9,plVar9 + 3);
                plVar17 = (long *)plVar9[3];
              }
              local_b0 = (ulong)bVar5;
              plVar21 = plVar9 + 6;
              if (plVar1 == plVar21) {
                uVar23 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar21 + 0xd0))();
                if ((long *)*plVar21 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar9 + 6);
                  plVar17 = (long *)plVar9[6];
                  local_b0 = 2;
                }
                plVar21 = plVar9 + 9;
                if (plVar1 == plVar21) {
                  uVar23 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar21 + 0xd0))();
                  if ((long *)*plVar21 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar9 + 9);
                    plVar17 = (long *)plVar9[9];
                    local_b0 = 3;
                  }
                  plVar21 = plVar9 + 0xc;
                  if (plVar1 == plVar21) {
                    uVar23 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar21 + 0xd0))();
                    if ((long *)*plVar21 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar9 + 0xc);
                      plVar17 = (long *)plVar9[0xc];
                      local_b0 = 4;
                    }
                    plVar21 = plVar9 + 0xf;
                    if (plVar1 == plVar21) {
                      uVar23 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar21 + 0xd0))();
                      if ((long *)*plVar21 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar9 + 0xf);
                        plVar17 = (long *)plVar9[0xf];
                        local_b0 = 5;
                      }
                      uVar23 = 6;
                      for (plVar21 = plVar9 + 0x12; plVar1 != plVar21; plVar21 = plVar21 + 3) {
                        (**(code **)(*(long *)*plVar21 + 0xd0))();
                        if ((long *)*plVar21 != plVar17) {
                          (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar21);
                          plVar17 = (long *)*plVar21;
                          local_b0 = uVar23;
                        }
                        uVar23 = uVar23 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar9 + local_b0 * 3,plVar9 + uVar23 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
      plVar9 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x28) = plVar11;
    *(undefined8 *)(param_1 + 0x30) = uVar22;
    *(undefined8 *)(param_1 + 0x38) = uVar18;
    iVar7 = *(int *)(param_1 + 0xc);
    iVar6 = *(int *)(param_1 + 0x10);
    plVar11 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
    if (plVar11 == (long *)0x0) {
      local_88 = 0;
      local_80 = (long *)0x0;
      local_90 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_01518d30:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      uVar23 = (long)iVar6 * (long)iVar7;
      lVar12 = *plVar9;
      lVar19 = plVar9[1];
      lVar16 = plVar9[2];
      lVar20 = plVar9[3];
      plVar11[6] = 0;
      plVar11[2] = lVar16;
      plVar11[3] = lVar20;
      *plVar11 = lVar12;
      plVar11[1] = lVar19;
      plVar11[4] = 0;
      plVar11[5] = 0;
      if ((int)uVar23 != 0) {
        if ((ulong)plVar11[1] < uVar23) goto LAB_01518d30;
        lVar12 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar23 * 0x28,8);
        if (lVar12 == 0) {
          (**(code **)(*(long *)*plVar11 + 0xe8))();
        }
        lVar19 = plVar11[4];
        lVar16 = lVar12;
        if (lVar19 != 0) {
          lVar16 = lVar19 + plVar11[5] * 0x28;
          uVar18 = FUN_01518fb0(plVar11,lVar19,lVar16,lVar12);
          lVar16 = FUN_01518fb0(plVar11,lVar16,lVar19 + plVar11[5] * 0x28,uVar18);
          lVar20 = plVar11[5];
          if (lVar20 != 0) {
            if (*(long **)(lVar19 + 0x18) != (long *)0x0) {
              (**(code **)(**(long **)(lVar19 + 0x18) + 0x20))();
            }
            if (lVar20 != 1) {
              if (*(long **)(lVar19 + 0x40) != (long *)0x0) {
                (**(code **)(**(long **)(lVar19 + 0x40) + 0x20))();
              }
              if (lVar20 != 2) {
                lVar20 = lVar20 + -3;
                if (*(long **)(lVar19 + 0x68) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar19 + 0x68) + 0x20))();
                }
                if (lVar20 != 0) {
                  plVar9 = (long *)(lVar19 + 0x90);
                  do {
                    lVar20 = lVar20 + -1;
                    if ((long *)*plVar9 != (long *)0x0) {
                      (**(code **)(*(long *)*plVar9 + 0x20))();
                    }
                    plVar9 = plVar9 + 5;
                  } while (lVar20 != 0);
                }
              }
            }
          }
          lVar19 = plVar11[6];
          plVar9 = (long *)*plVar11;
          lVar20 = plVar11[4];
          uVar13 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar20,lVar19 * 0x28,8);
          }
          else {
            FUN_00c48fe8(plVar9,lVar20,lVar19 * 0x28,8);
          }
        }
        plVar11[6] = uVar23;
        plVar11[4] = lVar12;
        plVar11[5] = (lVar16 - lVar12 >> 3) * -0x3333333333333333;
      }
      local_88 = 0x38;
      local_80 = (long *)&DAT_00000008;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      local_90 = param_3;
    }
    local_98 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x40);
    *(long **)(param_1 + 0x40) = plVar11;
    if (lVar10 == 0) {
      *(long *)(param_1 + 0x50) = local_88;
      *(long **)(param_1 + 0x58) = local_80;
      *(long **)(param_1 + 0x48) = local_90;
    }
    else {
      FUN_017a157c(param_1 + 0x48);
      *(long *)(param_1 + 0x50) = local_88;
      *(long **)(param_1 + 0x58) = local_80;
      *(long **)(param_1 + 0x48) = local_90;
      plVar11 = *(long **)(param_1 + 0x40);
    }
    local_98 = (long *)0x0;
    lVar10 = plVar11[5];
    if (lVar10 != 0) {
      lVar12 = plVar11[4];
      if (*(long **)(lVar12 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar12 + 0x18) + 0x20))();
      }
      if (lVar10 != 1) {
        if (*(long **)(lVar12 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar12 + 0x40) + 0x20))();
        }
        if (lVar10 != 2) {
          lVar10 = lVar10 + -3;
          if (*(long **)(lVar12 + 0x68) != (long *)0x0) {
            (**(code **)(**(long **)(lVar12 + 0x68) + 0x20))();
          }
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar12 + 0x90);
            do {
              lVar10 = lVar10 + -1;
              if ((long *)*plVar9 != (long *)0x0) {
                (**(code **)(*(long *)*plVar9 + 0x20))();
              }
              plVar9 = plVar9 + 5;
            } while (lVar10 != 0);
          }
        }
      }
    }
    plVar11[5] = 0;
    puVar4 = PTR_DAT_047d3e30;
    puVar3 = PTR_DAT_047d3e28;
    if (0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      do {
        puVar24 = *(undefined8 **)(param_1 + 0x40);
        if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,puVar4,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar3);
        }
        local_98 = *(long **)puVar4;
        local_90 = *(long **)(puVar4 + 8);
        local_88 = *(long *)(puVar4 + 0x10);
        local_80 = *(long **)(puVar4 + 0x18);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x18))();
        }
        local_78 = local_78 & 0xfffffffffffffffc;
        uVar23 = puVar24[5];
        if (uVar23 < (ulong)puVar24[6]) {
          lVar10 = puVar24[4];
          uVar18 = *puVar24;
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar12 = nn::os::GetTlsValue(DAT_04865a30);
          plVar9 = local_80;
          if (lVar12 != 0) {
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01518d30;
            *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          }
          plVar11 = (long *)(lVar10 + uVar23 * 0x28);
          *plVar11 = (long)local_98;
          plVar11[1] = (long)local_90;
          plVar11[2] = local_88;
          local_80 = (long *)0x0;
          plVar11[3] = (long)plVar9;
          *(undefined1 *)(plVar11 + 4) = (undefined1)local_78;
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          puVar24[5] = puVar24[5] + 1;
        }
        else {
          local_68 = (long *)(puVar24[4] + uVar23 * 0x28);
          FUN_015190e8(auStack_70,puVar24,&local_68,&local_98);
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc));
    }
  }
  return;
}


