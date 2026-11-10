/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db5a24; name: FUN_00db5a24
 */


void FUN_00db5a24(undefined1 *param_1,long *param_2,char *param_3,ulong *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  LightEventType *pLVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  ulong local_68;
  
  if (*param_3 == '\0') {
    *param_1 = 0;
    return;
  }
  uVar14 = *(ulong *)(param_3 + 8) >> 0x37;
  plVar6 = param_2 + uVar14 * 4 + 0x1a0a;
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar6;
    lVar17 = param_2[uVar14 * 4 + 0x1a0b];
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar13) {
      *plVar6 = lVar15;
      param_2[uVar14 * 4 + 0x1a0b] = lVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar3 = (LightEventType *)(param_2 + uVar14 * 4 + 0x1a0c);
LAB_00db5a90:
  while ((lVar15 != 0 && (lVar11 != lVar15))) {
    nn::os::WaitLightEvent(pLVar3);
    do {
      lVar15 = *plVar6;
      lVar17 = param_2[uVar14 * 4 + 0x1a0b];
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar15;
        param_2[uVar14 * 4 + 0x1a0b] = lVar17;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar4 = *plVar6;
    lVar5 = param_2[uVar14 * 4 + 0x1a0b];
    if (lVar4 != lVar15 || lVar5 != lVar17) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00db5ac0;
    }
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar13) {
      *plVar6 = lVar15;
      *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar17 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar13 = true;
LAB_00db5ac0:
  if (!bVar13) {
    lVar15 = lVar4;
    lVar17 = lVar5;
    goto LAB_00db5a90;
  }
  uVar16 = *(ulong *)(param_3 + 8);
  uVar19 = param_2[(uVar16 >> 0x37) * 0xd + 10];
  if (uVar19 != 0) {
    uVar21 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar20 = uVar19 - 1 & uVar16;
    }
    else if (uVar16 < uVar19) {
      uVar20 = uVar16;
    }
    else {
      uVar20 = 0;
      if (uVar19 != 0) {
        uVar20 = uVar16 / uVar19;
      }
      uVar20 = uVar16 - uVar20 * uVar19;
    }
    plVar18 = *(long **)(param_2[(uVar16 >> 0x37) * 0xd + 9] + uVar20 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar21 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (plVar18[2] == uVar16) goto LAB_00db5b70;
          }
          else if ((plVar18[1] & uVar19 - 1) != uVar20) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar18[1];
          if (uVar21 == uVar16) {
            if (plVar18[2] == uVar16) goto LAB_00db5b70;
          }
          else {
            if (uVar19 <= uVar21) {
              uVar10 = 0;
              if (uVar19 != 0) {
                uVar10 = uVar21 / uVar19;
              }
              uVar21 = uVar21 - uVar10 * uVar19;
            }
            if (uVar21 != uVar20) break;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  goto LAB_00db5e30;
LAB_00db5b70:
  plVar22 = (long *)plVar18[3];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 5;
    do {
      lVar11 = *plVar1;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((int)lVar11 == -1) {
LAB_00db60d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    uVar7 = *(undefined1 *)(plVar18[4] + 0x1a6);
    do {
      lVar11 = *plVar6;
      lVar15 = param_2[uVar14 * 4 + 0x1a0b];
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar11;
        param_2[uVar14 * 4 + 0x1a0b] = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar17 = *plVar6;
      lVar4 = param_2[uVar14 * 4 + 0x1a0b];
      if (lVar17 != lVar11 || lVar4 != lVar15) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00db5bd8;
      }
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar11;
        *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar13 = true;
LAB_00db5bd8:
    if (!bVar13) {
      do {
        lVar11 = *plVar6;
        lVar15 = param_2[uVar14 * 4 + 0x1a0b];
        if (lVar11 != lVar17 || lVar15 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x00db6124;
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar13) {
          *plVar6 = lVar17;
          *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar4 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar13 = true;
joined_r0x00db6124:
      if (!bVar13) {
        do {
          lVar17 = *plVar6;
          lVar4 = param_2[uVar14 * 4 + 0x1a0b];
          if (lVar17 != lVar11 || lVar4 != lVar15) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar11 = lVar17;
            lVar15 = lVar4;
            goto joined_r0x00db6124;
          }
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar13) {
            *plVar6 = lVar11;
            *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar13 = true;
        lVar11 = lVar17;
        lVar15 = lVar4;
        goto joined_r0x00db6124;
      }
    }
    nn::os::SignalLightEvent(pLVar3);
    uVar14 = *param_4;
    uVar19 = param_4[1];
    uVar16 = param_4[2];
    plVar6 = (long *)param_4[3];
    local_68 = uVar14;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      local_68 = *param_4;
    }
    *(ulong *)(param_1 + 8) = uVar14;
    *(ulong *)(param_1 + 0x10) = uVar19;
    uVar14 = local_68 >> 0x37;
    *param_1 = 1;
    *(ulong *)(param_1 + 0x18) = uVar16;
    *(long **)(param_1 + 0x20) = plVar6;
    plVar6 = param_2 + uVar14 * 4 + 0x1a0a;
    lVar11 = nn::os::GetCurrentThread();
    while (*plVar6 == 0 && param_2[uVar14 * 4 + 0x1a0b] == 0) {
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar11;
        param_2[uVar14 * 4 + 0x1a0b] = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') goto LAB_00db5c48;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + uVar14 * 4 + 0x1a0c));
    do {
      if (*plVar6 != 0 || param_2[uVar14 * 4 + 0x1a0b] != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + uVar14 * 4 + 0x1a0c));
          while (*plVar6 == 0 && param_2[uVar14 * 4 + 0x1a0b] == 0) {
            cVar8 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar13) {
              *plVar6 = lVar11;
              param_2[uVar14 * 4 + 0x1a0b] = 0;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_00db5c48;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar11;
        param_2[uVar14 * 4 + 0x1a0b] = 0;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_00db5c48:
    uVar16 = *(ulong *)(param_1 + 8);
    uVar19 = param_2[(uVar16 >> 0x37) * 0xd + 10];
    if (uVar19 == 0) {
LAB_00db5e88:
      if (param_5 == 0) {
        param_5 = param_2[1];
      }
      local_80 = param_2;
      plVar18 = (long *)FUN_00ec69e4(param_5,&local_80);
      if (plVar18 != (long *)0x0) {
        plVar12 = plVar18 + 5;
        do {
          lVar11 = *plVar12;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar13) {
            *(int *)plVar12 = (int)lVar11 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar11 == -1) goto LAB_00db60d4;
      }
      do {
        lVar11 = *plVar1;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *(int *)plVar1 = (int)lVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)lVar11 == -1) goto LAB_00db60d4;
      plVar12 = (long *)plVar18[0x15];
      plVar18[0x15] = (long)plVar22;
      if (plVar12 != (long *)0x0) {
        plVar2 = plVar12 + 5;
        do {
          lVar11 = *plVar2;
          iVar9 = (int)lVar11 + -1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *(int *)plVar2 = iVar9;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_00db5fa4;
      }
      *(undefined2 *)(plVar18 + 0x34) = 0x101;
      *(undefined2 *)((long)plVar18 + 0x1a3) = 0x101;
      plVar18[0x1d] = 0;
      *(undefined1 *)((long)plVar18 + 0x1a6) = uVar7;
      do {
        lVar11 = *plVar1;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *(int *)plVar1 = (int)lVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_80 = plVar22;
      if ((int)lVar11 == -1) goto LAB_00db60d4;
      plVar12 = plVar18 + 5;
      do {
        lVar11 = *plVar12;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *(int *)plVar12 = (int)lVar11 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      local_78 = plVar18;
      if ((int)lVar11 == -1) goto LAB_00db60d4;
      local_70 = 1;
      FUN_00ed5c78(param_2 + uVar14 * 0xd + 9,&local_68,&local_80);
      if (local_78 != (long *)0x0) {
        plVar2 = local_78 + 5;
        do {
          lVar11 = *plVar2;
          iVar9 = (int)lVar11 + -1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *(int *)plVar2 = iVar9;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_00db5fa4;
      }
      if (local_80 != (long *)0x0) {
        plVar2 = local_80 + 5;
        do {
          lVar11 = *plVar2;
          iVar9 = (int)lVar11 + -1;
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *(int *)plVar2 = iVar9;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_80 + 0x10))();
        }
        else if ((int)lVar11 == 0) goto LAB_00db5fa4;
      }
      do {
        lVar11 = *plVar12;
        iVar9 = (int)lVar11 + -1;
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar13) {
          *(int *)plVar12 = iVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      else if ((int)lVar11 == 0) goto LAB_00db5fa4;
    }
    else {
      uVar21 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar20 = uVar19 - 1 & uVar16;
      }
      else if (uVar16 < uVar19) {
        uVar20 = uVar16;
      }
      else {
        uVar20 = 0;
        if (uVar19 != 0) {
          uVar20 = uVar16 / uVar19;
        }
        uVar20 = uVar16 - uVar20 * uVar19;
      }
      plVar18 = *(long **)(param_2[(uVar16 >> 0x37) * 0xd + 9] + uVar20 * 8);
      if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
      goto LAB_00db5e88;
      if (uVar21 < 2) {
        do {
          if (plVar18[1] == uVar16) {
            if (plVar18[2] == uVar16) goto LAB_00db5ce4;
          }
          else if ((plVar18[1] & uVar19 - 1) != uVar20) break;
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
        goto LAB_00db5e88;
      }
      while( true ) {
        uVar21 = plVar18[1];
        if (uVar21 != uVar16) {
          if (uVar19 <= uVar21) {
            uVar10 = 0;
            if (uVar19 != 0) {
              uVar10 = uVar21 / uVar19;
            }
            uVar21 = uVar21 - uVar10 * uVar19;
          }
          if (uVar21 == uVar20) goto LAB_00db5e80;
          goto LAB_00db5e88;
        }
        if (plVar18[2] == uVar16) break;
LAB_00db5e80:
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_00db5e88;
      }
    }
LAB_00db5ce4:
    do {
      lVar11 = *plVar6;
      lVar15 = param_2[uVar14 * 4 + 0x1a0b];
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar11;
        param_2[uVar14 * 4 + 0x1a0b] = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar17 = *plVar6;
      lVar4 = param_2[uVar14 * 4 + 0x1a0b];
      if (lVar17 != lVar11 || lVar4 != lVar15) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00db5d70;
      }
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = 0;
        *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar13 = true;
LAB_00db5d70:
    if (!bVar13) {
      do {
        lVar11 = *plVar6;
        lVar15 = param_2[uVar14 * 4 + 0x1a0b];
        if (lVar11 != lVar17 || lVar15 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x00db6264;
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar13) {
          *plVar6 = 0;
          *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar13 = true;
joined_r0x00db6264:
      if (!bVar13) {
        do {
          lVar17 = *plVar6;
          lVar4 = param_2[uVar14 * 4 + 0x1a0b];
          if (lVar17 != lVar11 || lVar4 != lVar15) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar11 = lVar17;
            lVar15 = lVar4;
            goto joined_r0x00db6264;
          }
          cVar8 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar13) {
            *plVar6 = 0;
            *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar13 = true;
        lVar11 = lVar17;
        lVar15 = lVar4;
        goto joined_r0x00db6264;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_2 + uVar14 * 4 + 0x1a0c));
    do {
      lVar11 = *plVar1;
      iVar9 = (int)lVar11 + -1;
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = iVar9;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00db6094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar22 + 0x10))(plVar22);
      return;
    }
    if ((int)lVar11 != 0) {
      return;
    }
LAB_00db5fa4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_00db5e30:
  *param_1 = 0;
  do {
    lVar11 = *plVar6;
    lVar15 = param_2[uVar14 * 4 + 0x1a0b];
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar13) {
      *plVar6 = lVar11;
      param_2[uVar14 * 4 + 0x1a0b] = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar17 = *plVar6;
    lVar4 = param_2[uVar14 * 4 + 0x1a0b];
    if (lVar17 != lVar11 || lVar4 != lVar15) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00db5fe4;
    }
    cVar8 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar13) {
      *plVar6 = lVar11;
      *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar13 = true;
LAB_00db5fe4:
  if (!bVar13) {
    do {
      lVar11 = *plVar6;
      lVar15 = param_2[uVar14 * 4 + 0x1a0b];
      if (lVar11 != lVar17 || lVar15 != lVar4) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00db61dc;
      }
      cVar8 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar13) {
        *plVar6 = lVar17;
        *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar4 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar13 = true;
joined_r0x00db61dc:
    if (!bVar13) {
      do {
        lVar17 = *plVar6;
        lVar4 = param_2[uVar14 * 4 + 0x1a0b];
        if (lVar17 != lVar11 || lVar4 != lVar15) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar11 = lVar17;
          lVar15 = lVar4;
          goto joined_r0x00db61dc;
        }
        cVar8 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar13) {
          *plVar6 = lVar11;
          *(long *)((long)param_2 + uVar14 * 0x20 + 0xd054) = lVar15 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar13 = true;
      lVar11 = lVar17;
      lVar15 = lVar4;
      goto joined_r0x00db61dc;
    }
  }
  nn::os::SignalLightEvent(pLVar3);
  return;
}


