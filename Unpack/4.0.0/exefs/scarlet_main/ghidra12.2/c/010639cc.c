/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010639cc; name: FUN_010639cc
 */


bool FUN_010639cc(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *unaff_x28;
  undefined4 uVar20;
  ulong local_98;
  long *local_78;
  long *local_68;
  
  FUN_01064488();
  uVar4 = (**(code **)(*param_2 + 0x188))(param_2);
  if ((uVar4 & 1) == 0) goto LAB_01063c34;
  nn::os::LockMutex((MutexType *)(param_2 + 0x31));
  plVar14 = (long *)param_2[0x4f];
  if (plVar14 == (long *)0x0) {
    plVar16 = (long *)param_2[1];
    plVar14 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x68,8);
    if (plVar14 == (long *)0x0) {
      lVar6 = 0;
      lVar9 = 0;
      plVar16 = (long *)0x0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_010643dc;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar16;
      lVar6 = 0x68;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      memset(plVar14,0,0x68);
      FUN_010645f0(plVar14);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      lVar9 = 8;
    }
    lVar17 = param_2[0x4f];
    param_2[0x4f] = (long)plVar14;
    if (lVar17 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar5 = FUN_00c4e600();
      iVar1 = *(int *)(lVar5 + 0x12c8);
      iVar3 = iVar1 + 1;
      *(int *)(lVar5 + 0x12c8) = iVar3;
      if (*(int *)(lVar5 + 0x12cc) <= iVar1) {
        *(int *)(lVar5 + 0x12cc) = iVar3;
      }
      FUN_013edb88(lVar17);
      unaff_x28 = (long *)param_2[0x50];
      lVar5 = param_2[0x51];
      lVar19 = param_2[0x52];
      uVar4 = (**(code **)(*unaff_x28 + 0xf8))(unaff_x28);
      if (((uVar4 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*unaff_x28 + 0x18))(unaff_x28,lVar17,lVar5,lVar19);
      }
      else {
        FUN_00c48fe8(unaff_x28,lVar17,lVar5,lVar19);
      }
      lVar17 = FUN_00c4e600();
      iVar3 = *(int *)(lVar17 + 0x12c8) + -1;
      *(int *)(lVar17 + 0x12c8) = iVar3;
      if (iVar3 == 0) {
        plVar14 = (long *)FUN_00c4e600();
        if (plVar14[600] != 0) {
          local_78 = plVar14 + plVar14[600] * 3;
          local_68 = plVar14;
          FUN_00c4ea30(&local_68,&local_78);
          plVar11 = (long *)*plVar14;
          plVar18 = plVar14;
          if (plVar14[600] != 0) {
            plVar18 = plVar14 + plVar14[600] * 3;
          }
          if (plVar18 == plVar14) {
            local_98 = 0;
            uVar4 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar14 + 0xd0))();
            if ((long *)*plVar14 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar14,plVar14);
              plVar11 = (long *)*plVar14;
            }
            plVar12 = plVar14 + 3;
            if (plVar18 == plVar12) {
              local_98 = 0;
              uVar4 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              bVar2 = (long *)*plVar12 != plVar11;
              if (bVar2) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar14,plVar14 + 3);
                plVar11 = (long *)plVar14[3];
              }
              local_98 = (ulong)bVar2;
              plVar12 = plVar14 + 6;
              if (plVar18 == plVar12) {
                uVar4 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar12 + 0xd0))();
                if ((long *)*plVar12 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar14 + local_98 * 3,plVar14 + 6);
                  plVar11 = (long *)plVar14[6];
                  local_98 = 2;
                }
                plVar12 = plVar14 + 9;
                if (plVar18 == plVar12) {
                  uVar4 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar12 + 0xd0))();
                  if ((long *)*plVar12 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar14 + local_98 * 3,plVar14 + 9);
                    plVar11 = (long *)plVar14[9];
                    local_98 = 3;
                  }
                  plVar12 = plVar14 + 0xc;
                  if (plVar18 == plVar12) {
                    uVar4 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar12 + 0xd0))();
                    if ((long *)*plVar12 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar14 + local_98 * 3,plVar14 + 0xc);
                      plVar11 = (long *)plVar14[0xc];
                      local_98 = 4;
                    }
                    plVar12 = plVar14 + 0xf;
                    if (plVar18 == plVar12) {
                      uVar4 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar12 + 0xd0))();
                      if ((long *)*plVar12 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))
                                  (plVar11,plVar14 + local_98 * 3,plVar14 + 0xf);
                        plVar11 = (long *)plVar14[0xf];
                        local_98 = 5;
                      }
                      uVar4 = 6;
                      for (plVar12 = plVar14 + 0x12; plVar18 != plVar12; plVar12 = plVar12 + 3) {
                        (**(code **)(*(long *)*plVar12 + 0xd0))();
                        if ((long *)*plVar12 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))(plVar11,plVar14 + local_98 * 3,plVar12);
                          plVar11 = (long *)*plVar12;
                          local_98 = uVar4;
                        }
                        uVar4 = uVar4 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar14 + local_98 * 3,plVar14 + uVar4 * 3);
          plVar14[600] = 0;
          unaff_x28 = plVar14;
        }
        *(undefined4 *)(lVar17 + 0x12cc) = 0;
      }
      plVar14 = (long *)param_2[0x4f];
    }
    param_2[0x50] = (long)plVar16;
    param_2[0x51] = lVar6;
    param_2[0x52] = lVar9;
  }
  plVar18 = (long *)*param_3;
  plVar16 = (long *)plVar14[1];
  uVar20 = (undefined4)param_1;
  if (plVar16 == (long *)0x0) {
LAB_01063d58:
    plVar11 = (long *)(**(code **)(*(long *)plVar14[7] + 0x10))((long *)plVar14[7],0x20,8);
    if (plVar11 == (long *)0x0) {
      (**(code **)(*(long *)plVar14[7] + 0xe8))();
    }
    lVar9 = plVar14[7];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      plVar11[2] = *param_3;
      *(undefined4 *)(plVar11 + 3) = uVar20;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010643dc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar9;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar11[2] = *param_3;
      *(undefined4 *)(plVar11 + 3) = uVar20;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *plVar11 = 0;
    plVar11[1] = (long)plVar18;
    if ((plVar16 == (long *)0x0) ||
       (*(float *)(plVar14 + 0xc) * (float)plVar16 < (float)(plVar14[0xb] + 1))) {
      uVar4 = (ulong)(plVar16 < (long *)0x3 || ((ulong)plVar16 & (long)plVar16 - 1U) != 0) |
              (long)plVar16 << 1;
      uVar10 = (ulong)((float)(plVar14[0xb] + 1) / *(float *)(plVar14 + 0xc));
      if (uVar10 <= uVar4) {
        uVar10 = uVar4;
      }
      FUN_01064844(plVar14,uVar10);
      plVar16 = (long *)plVar14[1];
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        unaff_x28 = (long *)((long)plVar16 - 1U & (ulong)plVar18);
      }
      else if (plVar18 < plVar16) {
        unaff_x28 = plVar18;
      }
      else {
        uVar4 = 0;
        if (plVar16 != (long *)0x0) {
          uVar4 = (ulong)plVar18 / (ulong)plVar16;
        }
        unaff_x28 = (long *)((long)plVar18 - uVar4 * (long)plVar16);
      }
    }
    plVar18 = *(long **)(*plVar14 + (long)unaff_x28 * 8);
    if (plVar18 == (long *)0x0) {
      plVar18 = plVar14 + 6;
      *plVar11 = *plVar18;
      *plVar18 = (long)plVar11;
      *(long **)(*plVar14 + (long)unaff_x28 * 8) = plVar18;
      if (*plVar11 != 0) {
        plVar18 = *(long **)(*plVar11 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar18 = (long *)((ulong)plVar18 & (long)plVar16 - 1U);
        }
        else if (plVar16 <= plVar18) {
          uVar4 = 0;
          if (plVar16 != (long *)0x0) {
            uVar4 = (ulong)plVar18 / (ulong)plVar16;
          }
          plVar18 = (long *)((long)plVar18 - uVar4 * (long)plVar16);
        }
        plVar18 = (long *)(*plVar14 + (long)plVar18 * 8);
        goto LAB_01063eac;
      }
    }
    else {
      *plVar11 = *plVar18;
LAB_01063eac:
      *plVar18 = (long)plVar11;
    }
    plVar14[0xb] = plVar14[0xb] + 1;
  }
  else {
    uVar4 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      plVar11 = (long *)((long)plVar16 - 1U & (ulong)plVar18);
    }
    else {
      plVar11 = plVar18;
      if (plVar16 <= plVar18) {
        uVar10 = 0;
        if (plVar16 != (long *)0x0) {
          uVar10 = (ulong)plVar18 / (ulong)plVar16;
        }
        plVar11 = (long *)((long)plVar18 - uVar10 * (long)plVar16);
      }
    }
    lVar9 = *plVar14;
    plVar12 = *(long **)(lVar9 + (long)plVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if ((long *)plVar12[1] == plVar18) {
            if ((long *)plVar12[2] == plVar18) goto LAB_01063c28;
          }
          else if ((long *)((ulong)plVar12[1] & (long)plVar16 - 1U) != plVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          plVar13 = (long *)plVar12[1];
          if (plVar13 == plVar18) {
            if ((long *)plVar12[2] == plVar18) goto LAB_01063c28;
          }
          else {
            if (plVar16 <= plVar13) {
              uVar10 = 0;
              if (plVar16 != (long *)0x0) {
                uVar10 = (ulong)plVar13 / (ulong)plVar16;
              }
              plVar13 = (long *)((long)plVar13 - uVar10 * (long)plVar16);
            }
            if (plVar13 != plVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    if (uVar4 < 2) {
      unaff_x28 = (long *)((long)plVar16 - 1U & (ulong)plVar18);
      plVar11 = *(long **)(lVar9 + (long)unaff_x28 * 8);
      if (plVar11 == (long *)0x0) goto LAB_01063d58;
      do {
        plVar11 = (long *)*plVar11;
        if ((plVar11 == (long *)0x0) ||
           ((long *)plVar11[1] != plVar18 &&
            (long *)((ulong)plVar11[1] & (long)plVar16 - 1U) != unaff_x28)) goto LAB_01063d58;
      } while ((long *)plVar11[2] != plVar18);
    }
    else {
      unaff_x28 = plVar18;
      if (plVar16 <= plVar18) {
        uVar4 = 0;
        if (plVar16 != (long *)0x0) {
          uVar4 = (ulong)plVar18 / (ulong)plVar16;
        }
        unaff_x28 = (long *)((long)plVar18 - uVar4 * (long)plVar16);
      }
      plVar11 = *(long **)(lVar9 + (long)unaff_x28 * 8);
      if (plVar11 == (long *)0x0) goto LAB_01063d58;
      do {
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_01063d58;
        plVar12 = (long *)plVar11[1];
        if (plVar12 != plVar18) {
          if (plVar16 <= plVar12) {
            uVar4 = 0;
            if (plVar16 != (long *)0x0) {
              uVar4 = (ulong)plVar12 / (ulong)plVar16;
            }
            plVar12 = (long *)((long)plVar12 - uVar4 * (long)plVar16);
          }
          if (plVar12 != unaff_x28) goto LAB_01063d58;
        }
      } while ((long *)plVar11[2] != plVar18);
    }
  }
  pcVar15 = (char *)param_3[1];
  local_78 = (long *)0x0;
  if (*pcVar15 == '\0') {
    plVar14 = (long *)FUN_00d44228();
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_78 = plVar14;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(&local_68,uVar7,pcVar15);
    plVar14 = local_78;
    local_78 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    local_78 = local_68;
  }
  FUN_01064c84(param_2 + 0x5a,&local_78);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  goto LAB_01063c2c;
LAB_01063c28:
  *(undefined4 *)(plVar12 + 3) = uVar20;
LAB_01063c2c:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x31));
LAB_01063c34:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar9 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar9;
  plVar14 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
  iVar3 = (**(code **)(*plVar14 + 0x98))(param_1,plVar14,param_3[1],param_2[99],param_4,4,0);
  return iVar3 == 1;
}


