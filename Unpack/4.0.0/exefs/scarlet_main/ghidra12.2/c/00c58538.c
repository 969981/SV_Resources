/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c58538; name: FUN_00c58538
 */


undefined1  [16] FUN_00c58538(long *param_1,long *param_2,char *param_3)

{
  ulong *puVar1;
  LightEventType *pLVar2;
  ulong *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong *puVar21;
  long *plVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  long local_90;
  long *local_88;
  long local_80;
  long local_78;
  char local_6c [4];
  char local_68 [4];
  char local_64 [4];
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar8 = nn::os::GetCurrentThread();
  do {
    uVar16 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar16;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c58580:
  while ((uVar16 != 0 && (uVar8 != uVar16))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      uVar16 = *puVar1;
      lVar9 = param_1[9];
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar16;
        param_1[9] = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    uVar13 = *puVar1;
    if (uVar13 != uVar16 || param_1[9] != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c585b0;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar16;
      *(long *)((long)param_1 + 0x44) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar6 = true;
LAB_00c585b0:
  puVar4 = PTR_DAT_047e1b68;
  if (!bVar6) {
    uVar16 = uVar13;
    lVar9 = param_1[9];
    goto LAB_00c58580;
  }
  puVar21 = (ulong *)*param_1;
  puVar3 = (ulong *)param_1[1];
  if (puVar21 != puVar3) {
    uVar23 = 0;
    do {
      uVar8 = *puVar21;
      (**(code **)puVar4)(uVar8,0,&local_90,local_64,local_68,local_6c);
      if ((((bool)*param_3 == ((char)local_90 != '\0')) &&
          ((bool)param_3[1] == (local_64[0] != '\0'))) &&
         ((bool)param_3[2] == (local_68[0] != '\0'))) {
        cVar5 = (bool)param_3[3] == (local_6c[0] != '\0');
      }
      else {
        cVar5 = false;
      }
      if ((bool)cVar5 != false) {
        (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
        if ((((bool)param_3[4] == ((char)local_90 != '\0')) &&
            ((bool)param_3[5] == (local_64[0] != '\0'))) &&
           ((bool)param_3[6] == (local_68[0] != '\0'))) {
          bVar6 = (bool)param_3[7] == (local_6c[0] != '\0');
          if (bVar6) {
            cVar5 = cVar5 + '\x01';
          }
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
          if ((((bool)param_3[8] == ((char)local_90 != '\0')) &&
              ((bool)param_3[9] == (local_64[0] != '\0'))) &&
             ((bool)param_3[10] == (local_68[0] != '\0'))) {
            bVar6 = (bool)param_3[0xb] == (local_6c[0] != '\0');
            if (bVar6) {
              cVar5 = cVar5 + '\x01';
            }
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
            if ((((bool)param_3[0xc] == ((char)local_90 != '\0')) &&
                ((bool)param_3[0xd] == (local_64[0] != '\0'))) &&
               ((bool)param_3[0xe] == (local_68[0] != '\0'))) {
              bVar6 = (bool)param_3[0xf] == (local_6c[0] != '\0');
              if (bVar6) {
                cVar5 = cVar5 + '\x01';
              }
            }
            else {
              bVar6 = false;
            }
            if (bVar6) {
              (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
              if ((((bool)param_3[0x10] == ((char)local_90 != '\0')) &&
                  ((bool)param_3[0x11] == (local_64[0] != '\0'))) &&
                 ((bool)param_3[0x12] == (local_68[0] != '\0'))) {
                bVar6 = (bool)param_3[0x13] == (local_6c[0] != '\0');
                if (bVar6) {
                  cVar5 = cVar5 + '\x01';
                }
              }
              else {
                bVar6 = false;
              }
              if (bVar6) {
                (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
                if ((((bool)param_3[0x14] == ((char)local_90 != '\0')) &&
                    ((bool)param_3[0x15] == (local_64[0] != '\0'))) &&
                   ((bool)param_3[0x16] == (local_68[0] != '\0'))) {
                  bVar6 = (bool)param_3[0x17] == (local_6c[0] != '\0');
                  if (bVar6) {
                    cVar5 = cVar5 + '\x01';
                  }
                }
                else {
                  bVar6 = false;
                }
                if (bVar6) {
                  (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
                  if ((((bool)param_3[0x18] == ((char)local_90 != '\0')) &&
                      ((bool)param_3[0x19] == (local_64[0] != '\0'))) &&
                     ((bool)param_3[0x1a] == (local_68[0] != '\0'))) {
                    bVar6 = (bool)param_3[0x1b] == (local_6c[0] != '\0');
                    if (bVar6) {
                      cVar5 = cVar5 + '\x01';
                    }
                  }
                  else {
                    bVar6 = false;
                  }
                  if (bVar6) {
                    (**(code **)puVar4)(uVar8,cVar5,&local_90,local_64,local_68,local_6c);
                    if ((((bool)param_3[0x1c] == ((char)local_90 != '\0')) &&
                        ((bool)param_3[0x1d] == (local_64[0] != '\0'))) &&
                       (((bool)param_3[0x1e] == (local_68[0] != '\0') &&
                        ((bool)param_3[0x1f] == (local_6c[0] != '\0'))))) {
                      bVar6 = false;
                      uVar8 = (ulong)uVar23;
                      uVar19 = 1;
                      goto LAB_00c58a3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar21 = puVar21 + 4;
      uVar23 = uVar23 + 1;
    } while (puVar3 != puVar21);
  }
  uVar19 = 0;
  bVar6 = true;
LAB_00c58a3c:
  do {
    uVar16 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar16;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    uVar13 = *puVar1;
    lVar10 = param_1[9];
    if (uVar13 != uVar16 || lVar10 != lVar9) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c58a78;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar12) {
      *puVar1 = uVar16;
      *(long *)((long)param_1 + 0x44) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_00c58a78:
  if (!bVar12) {
    do {
      uVar16 = *puVar1;
      lVar9 = param_1[9];
      if (uVar16 != uVar13 || lVar9 != lVar10) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c5903c;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar12) {
        *puVar1 = uVar13;
        *(long *)((long)param_1 + 0x44) = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
joined_r0x00c5903c:
    if (!bVar12) {
      do {
        uVar13 = *puVar1;
        lVar10 = param_1[9];
        if (uVar13 != uVar16 || lVar10 != lVar9) {
          bVar12 = false;
          ClearExclusiveLocal();
          uVar16 = uVar13;
          lVar9 = lVar10;
          goto joined_r0x00c5903c;
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar12) {
          *puVar1 = uVar16;
          *(long *)((long)param_1 + 0x44) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar12 = true;
      uVar16 = uVar13;
      lVar9 = lVar10;
      goto joined_r0x00c5903c;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar6) {
LAB_00c58ec4:
    auVar24._8_8_ = uVar8;
    auVar24._0_8_ = uVar19;
    return auVar24;
  }
  param_2 = (long *)*param_2;
  lVar9 = (**(code **)(*param_2 + 0x10))(param_2,8,4);
  if (lVar9 == 0) {
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00c59204:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    (**(code **)PTR_DAT_047e1b70)(lVar9);
    *(undefined1 *)(lVar9 + 5) = 1;
    local_80 = 8;
    local_78 = 4;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    local_90 = lVar9;
    local_88 = param_2;
  }
  puVar4 = PTR_DAT_047e1b78;
  (**(code **)PTR_DAT_047e1b78)(lVar9,0,*param_3,param_3[1],param_3[2],param_3[3]);
  (**(code **)puVar4)(lVar9,1,param_3[4],param_3[5],param_3[6],param_3[7]);
  (**(code **)puVar4)(lVar9,2,param_3[8],param_3[9],param_3[10],param_3[0xb]);
  (**(code **)puVar4)(lVar9,3,param_3[0xc],param_3[0xd],param_3[0xe],param_3[0xf]);
  (**(code **)puVar4)(lVar9,4,param_3[0x10],param_3[0x11],param_3[0x12],param_3[0x13]);
  (**(code **)puVar4)(lVar9,5,param_3[0x14],param_3[0x15],param_3[0x16],param_3[0x17]);
  (**(code **)puVar4)(lVar9,6,param_3[0x18],param_3[0x19],param_3[0x1a],param_3[0x1b]);
  (**(code **)puVar4)(lVar9,7,param_3[0x1c],param_3[0x1d],param_3[0x1e],param_3[0x1f]);
  uVar8 = nn::os::GetCurrentThread();
  while (*puVar1 == 0 && param_1[9] == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar8;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00c58c4c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*puVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*puVar1 == 0 && param_1[9] == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = uVar8;
            param_1[9] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c58c4c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar8;
      param_1[9] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c58c4c:
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00c59c58(param_1,&local_90);
  }
  else {
    uVar16 = param_1[4];
    lVar9 = param_1[1] - *param_1 >> 5;
    uVar8 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar13 = lVar10 >> 4;
    if (uVar8 <= uVar13) {
      uVar8 = uVar13;
    }
    if (uVar16 >> 1 <= (ulong)(lVar10 >> 5)) {
      uVar8 = uVar16;
    }
    if (uVar8 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 5,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    plVar18 = (long *)(lVar10 + lVar9 * 0x20);
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *plVar18 = local_90;
      plVar18[2] = local_80;
      plVar18[3] = local_78;
      plVar18[1] = (long)local_88;
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c59204;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar9;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *plVar18 = local_90;
      plVar18[1] = (long)local_88;
      plVar18[2] = local_80;
      plVar18[3] = local_78;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    local_90 = 0;
    plVar17 = (long *)*param_1;
    plVar22 = (long *)param_1[1];
    if (plVar22 == plVar17) {
      plVar15 = plVar18;
      plVar22 = plVar17;
    }
    else {
      plVar20 = plVar18;
      do {
        lVar9 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar11 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00c59204;
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar9;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar9 = plVar22[-4];
        plVar22[-4] = 0;
        plVar20[-4] = lVar9;
        lVar9 = plVar22[-3];
        lVar14 = plVar22[-1];
        plVar20[-2] = plVar22[-2];
        plVar20[-1] = lVar14;
        plVar15 = plVar20 + -4;
        plVar22 = plVar22 + -4;
        plVar20[-3] = lVar9;
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        plVar20 = plVar15;
      } while (plVar17 != plVar22);
      plVar17 = (long *)*param_1;
      plVar22 = (long *)param_1[1];
    }
    lVar9 = param_1[2];
    param_1[2] = lVar10 + uVar8 * 0x20;
    *param_1 = (long)plVar15;
    param_1[1] = (long)(plVar18 + 4);
    if (plVar22 != plVar17) {
      plVar18 = plVar22 + -4;
      lVar10 = *plVar18;
      *plVar18 = 0;
      if (lVar10 != 0) {
        FUN_00c59ea4(plVar22 + -3);
      }
      if (plVar18 != plVar17) {
        plVar18 = plVar22 + -8;
        lVar10 = *plVar18;
        *plVar18 = 0;
        if (lVar10 != 0) {
          FUN_00c59ea4(plVar22 + -7);
        }
        if (plVar18 != plVar17) {
          do {
            lVar10 = plVar22[-0xc];
            plVar22[-0xc] = 0;
            if (lVar10 != 0) {
              FUN_00c59ea4(plVar22 + -0xb);
            }
            plVar22 = plVar22 + -4;
          } while (plVar17 + 8 != plVar22);
        }
      }
    }
    if (plVar17 != (long *)0x0) {
      plVar18 = (long *)param_1[3];
      uVar8 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar17,lVar9 - (long)plVar17,8);
      }
      else {
        FUN_00c48fe8(plVar18,plVar17,lVar9 - (long)plVar17,8);
      }
    }
  }
  uVar8 = (param_1[1] - *param_1 >> 5) - 1;
  do {
    uVar16 = *puVar1;
    lVar9 = param_1[9];
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar16;
      param_1[9] = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    uVar13 = *puVar1;
    lVar10 = param_1[9];
    if (uVar13 != uVar16 || lVar10 != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c58ea8;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar6 = true;
LAB_00c58ea8:
  if (!bVar6) {
    do {
      uVar16 = *puVar1;
      lVar9 = param_1[9];
      if (uVar16 != uVar13 || lVar9 != lVar10) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c591b4;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
joined_r0x00c591b4:
    if (!bVar6) {
      do {
        uVar13 = *puVar1;
        lVar10 = param_1[9];
        if (uVar13 != uVar16 || lVar10 != lVar9) {
          bVar6 = false;
          ClearExclusiveLocal();
          uVar16 = uVar13;
          lVar9 = lVar10;
          goto joined_r0x00c591b4;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar6 = true;
      uVar16 = uVar13;
      lVar9 = lVar10;
      goto joined_r0x00c591b4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar9 = local_90;
  local_90 = 0;
  if (lVar9 != 0) {
    FUN_00c59ea4(&local_88);
  }
  uVar19 = 1;
  goto LAB_00c58ec4;
}


