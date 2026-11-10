/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e60f40; name: FUN_00e60f40
 */


/* WARNING: Removing unreachable block (ram,0x00e61578) */
/* WARNING: Removing unreachable block (ram,0x00e6188c) */

void FUN_00e60f40(long param_1,long param_2)

{
  LightEventType *pLVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  size_t sVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  void *__src;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  int *piVar24;
  long *plVar25;
  undefined4 *puVar26;
  void *pvVar27;
  int *piVar28;
  undefined8 uVar29;
  int *piVar30;
  bool bVar31;
  undefined8 *puVar32;
  long *plVar33;
  undefined8 *puVar34;
  long *local_b8;
  long *local_a8;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 *local_68;
  
  plVar33 = (long *)(param_1 + 0x138);
  lVar19 = *plVar33;
  local_90 = param_2;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar19) {
    lVar9 = nn::os::GetCurrentThread();
    bVar5 = false;
LAB_00e61f14:
    if (*plVar33 == 0) goto code_r0x00e61f1c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
    bVar5 = false;
    do {
      if (*plVar33 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
          while (*plVar33 == 0) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar5) {
              *plVar33 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            bVar5 = false;
            if (cVar4 == '\0') goto LAB_00e60f80;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar31) {
        *plVar33 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    goto LAB_00e60f80;
  }
  bVar5 = true;
LAB_00e60f80:
  lVar9 = local_90;
  plVar33 = (long *)(local_90 + 0x508);
  lVar20 = *plVar33;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 != lVar20) {
    lVar19 = nn::os::GetCurrentThread();
LAB_00e60fa0:
    if (*plVar33 == 0) goto code_r0x00e60fa8;
    pLVar1 = (LightEventType *)(lVar9 + 0x510);
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar1);
    do {
      if (*plVar33 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          while (*plVar33 == 0) {
            cVar4 = '\x01';
            bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar31) {
              *plVar33 = lVar19;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00e60fb0;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar31) {
        *plVar33 = lVar19;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00e60fb0:
    bVar31 = false;
    goto LAB_00e60fb4;
  }
  plVar33 = (long *)0x0;
  bVar31 = true;
LAB_00e60fb4:
  lVar19 = local_90;
  *(undefined1 *)(lVar9 + 0x520) = 0;
  plVar22 = *(long **)(param_1 + 0x90);
  plVar23 = *(long **)(param_1 + 0x98);
  if (plVar22 == plVar23) {
LAB_00e613e0:
    if ((plVar22 != plVar23) && (plVar15 = plVar22 + 2, plVar15 != plVar23)) {
      do {
        lVar9 = 0;
        if (*plVar15 != 0) {
          lVar20 = *(long *)(*plVar15 + 0x10);
          lVar9 = 0;
          if (lVar20 != 0) {
            lVar9 = lVar20 + -0x28;
          }
        }
        if (lVar9 != lVar19) {
          FUN_00d0a34c(plVar22,plVar15);
          plVar22 = plVar22 + 2;
        }
        plVar15 = plVar15 + 2;
      } while (plVar23 != plVar15);
      plVar23 = *(long **)(param_1 + 0x98);
    }
  }
  else {
    do {
      lVar9 = 0;
      if (*plVar22 != 0) {
        lVar20 = *(long *)(*plVar22 + 0x10);
        lVar9 = 0;
        if (lVar20 != 0) {
          lVar9 = lVar20 + -0x28;
        }
      }
      if (lVar9 == local_90) goto LAB_00e613e0;
      plVar22 = plVar22 + 2;
    } while (plVar23 != plVar22);
    plVar22 = plVar23;
  }
  if (plVar23 != plVar22) {
    FUN_00d38414((undefined8 *)(param_1 + 0x90),plVar22,plVar23);
  }
  plVar22 = *(long **)(param_1 + 0x58);
  plVar23 = *(long **)(param_1 + 0x60);
  if ((plVar22 != plVar23) && (*plVar22 != local_90)) {
    do {
      plVar22 = plVar22 + 1;
      if (plVar23 == plVar22) {
        plVar22 = plVar23;
        goto LAB_00e61080;
      }
    } while (*plVar22 != local_90);
  }
  if ((plVar22 != plVar23) && (plVar22 + 1 != plVar23)) {
    plVar15 = plVar22 + 2;
    while( true ) {
      plVar13 = plVar22;
      if (plVar15[-1] != local_90) {
        plVar13 = plVar22 + 1;
        *plVar22 = plVar15[-1];
      }
      plVar22 = plVar13;
      if (plVar23 == plVar15) break;
      plVar15 = plVar15 + 1;
    }
    plVar23 = *(long **)(param_1 + 0x60);
  }
LAB_00e61080:
  if (plVar23 == plVar22) {
    plVar22 = *(long **)(param_1 + 200);
    plVar23 = *(long **)(param_1 + 0xd0);
    if ((plVar22 != plVar23) && (*plVar22 != local_90)) {
      do {
        plVar22 = plVar22 + 1;
        if (plVar23 == plVar22) {
          plVar22 = plVar23;
          goto LAB_00e61100;
        }
      } while (*plVar22 != local_90);
    }
    if ((plVar22 != plVar23) && (plVar22 + 1 != plVar23)) {
      plVar15 = plVar22 + 2;
      while( true ) {
        plVar13 = plVar22;
        if (plVar15[-1] != local_90) {
          plVar13 = plVar22 + 1;
          *plVar22 = plVar15[-1];
        }
        plVar22 = plVar13;
        if (plVar23 == plVar15) break;
        plVar15 = plVar15 + 1;
      }
      plVar23 = *(long **)(param_1 + 0xd0);
    }
LAB_00e61100:
    if (plVar23 != plVar22) {
      *(long **)(param_1 + 0xd0) = plVar22;
    }
    FUN_00da01d0(param_1 + 0x100,&local_90);
  }
  else {
    *(long **)(param_1 + 0x60) = plVar22;
  }
  if (!bVar31) {
    *plVar33 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar33 + 1));
  }
  lVar9 = local_90;
  lVar19 = *(long *)(param_1 + 0x280);
  uVar11 = lVar19 + *(int *)(local_90 + 0x468);
  lVar20 = *(long *)(param_1 + 0x248);
  puVar2 = (undefined8 *)
           (*(long *)(lVar20 + (uVar11 >> 2 & 0x3ffffffffffffff8)) + (uVar11 & 0x1f) * 0x80);
  puVar32 = puVar2 + 7;
  puVar34 = puVar2 + 8;
  piVar28 = (int *)*puVar34;
  piVar21 = (int *)*puVar32;
  if ((int *)*puVar32 != piVar28) {
    do {
      uVar11 = lVar19 + *piVar21 & 0x1f;
      lVar19 = *(long *)(lVar20 + ((ulong)(lVar19 + *piVar21) >> 2 & 0x3ffffffffffffff8));
      piVar24 = *(int **)(lVar19 + uVar11 * 0x80);
      plVar33 = (long *)(lVar19 + uVar11 * 0x80 + 8);
      piVar12 = (int *)*plVar33;
      if (piVar24 != piVar12) {
        if (*piVar24 != *(int *)(lVar9 + 0x468)) {
          do {
            if (piVar12 + -1 == piVar24) {
              piVar24 = piVar12;
              goto LAB_00e620d8;
            }
            piVar30 = piVar24 + 1;
            piVar24 = piVar24 + 1;
          } while (*piVar30 != *(int *)(lVar9 + 0x468));
        }
      }
LAB_00e620d8:
      if (piVar12 == piVar24) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("it != child.parentIds.cend()","UnregisterObject",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
                   ,0x203);
      }
      sVar6 = (long)piVar12 - (long)(piVar24 + 1);
      if (sVar6 != 0) {
        memmove(piVar24,piVar24 + 1,sVar6);
      }
      *plVar33 = (long)piVar24 + sVar6;
      FUN_00c5a744(param_1,*piVar21);
      if (piVar21 + 1 == piVar28) break;
      lVar19 = *(long *)(param_1 + 0x280);
      lVar20 = *(long *)(param_1 + 0x248);
      piVar21 = piVar21 + 1;
    } while( true );
  }
  piVar21 = (int *)*puVar2;
  piVar28 = (int *)puVar2[1];
  if (piVar21 != piVar28) {
    do {
      uVar11 = *(long *)(param_1 + 0x280) + (long)*piVar21;
      lVar19 = *(long *)(*(long *)(param_1 + 0x248) + (uVar11 >> 2 & 0x3ffffffffffffff8)) +
               (uVar11 & 0x1f) * 0x80;
      puVar18 = (undefined8 *)(lVar19 + 0x38);
      piVar24 = (int *)*puVar18;
      plVar33 = (long *)(lVar19 + 0x40);
      piVar12 = (int *)*plVar33;
      if (piVar24 != piVar12) {
        if (*piVar24 != *(int *)(lVar9 + 0x468)) {
          do {
            if (piVar12 + -1 == piVar24) {
              piVar24 = piVar12;
              goto LAB_00e614d8;
            }
            piVar30 = piVar24 + 1;
            piVar24 = piVar24 + 1;
          } while (*piVar30 != *(int *)(lVar9 + 0x468));
        }
      }
LAB_00e614d8:
      if (piVar12 == piVar24) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("it != parent.childIds.cend()","UnregisterObject",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/engine/game/game_object_manager.cpp"
                   ,0x20b);
      }
      sVar6 = (long)piVar12 - (long)(piVar24 + 1);
      if (sVar6 != 0) {
        memmove(piVar24,piVar24 + 1,sVar6);
      }
      *plVar33 = (long)piVar24 + sVar6;
      piVar24 = (int *)*puVar32;
      piVar12 = (int *)*puVar34;
      if (piVar24 != piVar12) {
        uVar11 = *(long *)(param_1 + 0x280) + (long)*piVar24;
        FUN_00ee7bb4(*(long *)(*(long *)(param_1 + 0x248) + (uVar11 >> 2 & 0x3ffffffffffffff8)) +
                     (uVar11 & 0x1f) * 0x80,piVar21);
        FUN_00ee7bb4(puVar18,piVar24);
        if (piVar24 + 1 != piVar12) {
          piVar24 = piVar24 + 1;
          do {
            piVar30 = piVar24 + 1;
            uVar11 = *(long *)(param_1 + 0x280) + (long)*piVar24;
            FUN_00ee7bb4(*(long *)(*(long *)(param_1 + 0x248) + (uVar11 >> 2 & 0x3ffffffffffffff8))
                         + (uVar11 & 0x1f) * 0x80,piVar21);
            FUN_00ee7bb4(puVar18,piVar24);
            piVar24 = piVar30;
          } while (piVar12 != piVar30);
        }
      }
      piVar21 = piVar21 + 1;
    } while (piVar21 != piVar28);
    piVar21 = (int *)*puVar2;
  }
  puVar2[1] = piVar21;
  *puVar34 = *puVar32;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0xffffffff;
  if (*(int *)(lVar9 + 0x468) < *(int *)(param_1 + 0x150)) {
LAB_00e6139c:
    *(undefined1 *)(param_1 + 0x3e4) = 1;
    *(undefined4 *)(local_90 + 0x468) = 0xffffffff;
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
      return;
    }
    return;
  }
  plVar33 = (long *)(param_1 + 0x220);
  lVar19 = nn::os::GetCurrentThread();
  while (*plVar33 == 0 && *(long *)(param_1 + 0x228) == 0) {
    cVar4 = '\x01';
    bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar31) {
      *plVar33 = lVar19;
      *(undefined8 *)(param_1 + 0x228) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00e611c8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x230));
  do {
    if (*plVar33 != 0 || *(long *)(param_1 + 0x228) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x230));
        while (*plVar33 == 0 && *(long *)(param_1 + 0x228) == 0) {
          cVar4 = '\x01';
          bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar31) {
            *plVar33 = lVar19;
            *(undefined8 *)(param_1 + 0x228) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00e611c8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar31) {
      *plVar33 = lVar19;
      *(undefined8 *)(param_1 + 0x228) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00e611c8:
  uVar11 = (long)*(int *)(lVar9 + 0x468) - (long)*(int *)(param_1 + 0x150);
  if ((*(ulong *)(*(long *)(param_1 + 0x1d8) + (uVar11 >> 3 & 0x1ffffffffffffff8)) >>
       (uVar11 & 0x3f) & 1) != 0) {
    puVar14 = *(ulong **)(param_1 + 0x168);
    puVar16 = *(ulong **)(param_1 + 0x170);
    lVar19 = (long)puVar16 - (long)puVar14;
    uVar11 = 0;
    if (lVar19 != 0) {
      uVar11 = lVar19 * 0x80 - 1;
    }
    uVar3 = *(ulong *)(param_1 + 0x1a0);
    uVar17 = *(long *)(param_1 + 0x1a8) + uVar3;
    if (uVar11 == uVar17) {
      if (uVar3 < 0x400) {
        uVar11 = lVar19 >> 3;
        lVar19 = (long)*(ulong **)(param_1 + 0x178) - *(long *)(param_1 + 0x160);
        if (uVar11 < (ulong)(lVar19 >> 3)) {
          if (*(ulong **)(param_1 + 0x178) == puVar16) {
            local_88 = (long *)(**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))
                                         (*(long **)(param_1 + 0x1b0),0x1000,4);
            if (local_88 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x1b0) + 0xe8))();
            }
            FUN_00e623cc(param_1 + 0x160,&local_88);
            puVar14 = *(ulong **)(param_1 + 0x168);
            goto LAB_00e6199c;
          }
          lVar19 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))
                             (*(long **)(param_1 + 0x1b0),0x1000,4);
          if (lVar19 == 0) {
            (**(code **)(**(long **)(param_1 + 0x1b0) + 0xe8))();
          }
          plVar22 = *(long **)(param_1 + 0x170);
          if (plVar22 == *(long **)(param_1 + 0x178)) {
            pvVar27 = *(void **)(param_1 + 0x160);
            __src = *(void **)(param_1 + 0x168);
            if (__src < pvVar27 || (long)__src - (long)pvVar27 == 0) {
              lVar20 = (long)*(long **)(param_1 + 0x178) - (long)pvVar27;
              uVar11 = lVar20 >> 2;
              if (lVar20 == 0) {
                uVar11 = 1;
              }
              local_70 = (long *)0x0;
              local_68 = (undefined8 *)(param_1 + 0x180);
              local_88 = (long *)(**(code **)(**(long **)(param_1 + 0x180) + 0x10))
                                           (*(long **)(param_1 + 0x180),uVar11 << 3,4);
              if (local_88 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x180) + 0xe8))();
              }
              local_80 = local_88 + (uVar11 >> 2);
              local_70 = local_88 + uVar11;
              local_78 = local_80;
              FUN_028f3fbc(&local_88,*(undefined8 *)(param_1 + 0x168),
                           *(undefined8 *)(param_1 + 0x170));
              plVar22 = *(long **)(param_1 + 0x160);
              plVar23 = *(long **)(param_1 + 0x168);
              plVar13 = *(long **)(param_1 + 0x170);
              *(long **)(param_1 + 0x160) = local_88;
              *(long **)(param_1 + 0x168) = local_80;
              *(long **)(param_1 + 0x170) = local_78;
              plVar15 = *(long **)(param_1 + 0x178);
              *(long **)(param_1 + 0x178) = local_70;
              local_78 = plVar13;
              if ((long)plVar13 - (long)plVar23 != 0) {
                local_78 = plVar13 + (((long)plVar13 - (long)plVar23) - 8U >> 3 ^ 0xffffffffffffffff
                                     );
              }
              local_88 = plVar22;
              local_80 = plVar23;
              local_70 = plVar15;
              if (plVar22 != (long *)0x0) {
                plVar23 = (long *)*local_68;
                uVar11 = (**(code **)(*plVar23 + 0xf8))(plVar23);
                if (((uVar11 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar23 + 0x18))(plVar23,plVar22,(long)plVar15 - (long)plVar22,4);
                }
                else {
                  FUN_00c48fe8(plVar23,plVar22,(long)plVar15 - (long)plVar22,4);
                }
              }
              plVar22 = *(long **)(param_1 + 0x170);
            }
            else {
              lVar10 = (long)__src - (long)pvVar27 >> 3;
              lVar20 = lVar10 + 2;
              if (-1 < lVar10 + 1) {
                lVar20 = lVar10 + 1;
              }
              sVar6 = (long)plVar22 - (long)__src;
              pvVar27 = (void *)((long)__src + (lVar20 >> 1) * -8);
              if (sVar6 != 0) {
                memmove(pvVar27,__src,sVar6);
                __src = *(void **)(param_1 + 0x168);
              }
              plVar22 = (long *)((long)pvVar27 + sVar6);
              *(void **)(param_1 + 0x168) = (void *)((long)__src + (lVar20 >> 1) * -8);
              *(long **)(param_1 + 0x170) = plVar22;
            }
          }
          uVar29 = *(undefined8 *)(param_1 + 0x180);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar20 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar20 == 0) {
            *plVar22 = lVar19;
          }
          else {
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00e61f28;
            *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar29;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *plVar22 = lVar19;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          }
          *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + 8;
        }
        else {
          uVar17 = lVar19 >> 2;
          if (lVar19 == 0) {
            uVar17 = 1;
          }
          puVar2 = (undefined8 *)(param_1 + 0x180);
          plVar22 = (long *)(**(code **)(**(long **)(param_1 + 0x180) + 0x10))
                                      (*(long **)(param_1 + 0x180),uVar17 << 3,4);
          if (plVar22 == (long *)0x0) {
            (**(code **)(*(long *)*puVar2 + 0xe8))();
          }
          plVar23 = plVar22 + uVar11;
          plVar15 = plVar22 + uVar17;
          lVar19 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x10))
                             (*(long **)(param_1 + 0x1b0),0x1000,4);
          if (lVar19 == 0) {
            (**(code **)(**(long **)(param_1 + 0x1b0) + 0xe8))();
          }
          if (uVar11 == uVar17) {
            if (plVar22 <= plVar23 && (long)plVar23 - (long)plVar22 != 0) {
              lVar20 = (long)plVar23 - (long)plVar22 >> 3;
              uVar11 = lVar20 + 2;
              if (-1 < lVar20 + 1) {
                uVar11 = lVar20 + 1;
              }
              plVar13 = (long *)((long)plVar23 + (uVar11 & 0x3ffffffffffffffe) * -4);
              goto LAB_00e61620;
            }
            lVar20 = (long)plVar15 - (long)plVar22;
            uVar11 = lVar20 >> 2;
            if (lVar20 == 0) {
              uVar11 = 1;
            }
            local_70 = (long *)0x0;
            local_68 = puVar2;
            local_88 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar11 << 3,4)
            ;
            if (local_88 == (long *)0x0) {
              (**(code **)(*(long *)*puVar2 + 0xe8))();
            }
            local_80 = local_88 + (uVar11 >> 2);
            local_70 = local_88 + uVar11;
            local_78 = local_80;
            FUN_028f3fbc(&local_88,plVar23,plVar23);
            plVar25 = local_78;
            plVar13 = local_80;
            local_a8 = local_88;
            local_b8 = local_70;
            local_88 = plVar22;
            local_80 = plVar23;
            local_78 = plVar23;
            local_70 = plVar15;
            if (plVar22 != (long *)0x0) {
              plVar23 = (long *)*local_68;
              uVar11 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,plVar22,lVar20,4);
              }
              else {
                FUN_00c48fe8(plVar23,plVar22,lVar20,4);
              }
            }
          }
          else {
            plVar13 = plVar23;
LAB_00e61620:
            plVar25 = plVar13;
            local_b8 = plVar15;
            local_a8 = plVar22;
          }
          uVar29 = *puVar2;
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar20 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar20 == 0) {
            *plVar25 = lVar19;
          }
          else {
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00e61f28;
            *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar29;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *plVar25 = lVar19;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          }
          plVar25 = plVar25 + 1;
          lVar19 = *(long *)(param_1 + 0x170);
          plVar22 = plVar25;
          if (lVar19 != *(long *)(param_1 + 0x168)) {
            do {
              plVar23 = plVar13;
              plVar25 = plVar22;
              if (plVar13 == local_a8) {
                if (plVar22 < local_b8) {
                  lVar20 = (long)local_b8 - (long)plVar22 >> 3;
                  uVar11 = lVar20 + 2;
                  if (-1 < lVar20 + 1) {
                    uVar11 = lVar20 + 1;
                  }
                  sVar6 = (long)plVar22 - (long)plVar13;
                  plVar25 = (long *)((long)plVar22 + (uVar11 & 0x3ffffffffffffffe) * 4);
                  plVar23 = plVar25;
                  if (sVar6 != 0) {
                    plVar23 = (long *)((long)plVar25 - sVar6);
                    memmove(plVar23,plVar13,sVar6);
                  }
                }
                else {
                  lVar10 = (long)local_b8 - (long)local_a8;
                  lVar20 = lVar10 >> 2;
                  if (lVar10 == 0) {
                    lVar20 = 1;
                  }
                  local_70 = (long *)0x0;
                  local_68 = puVar2;
                  plVar23 = (long *)(**(code **)(*(long *)*puVar2 + 0x10))
                                              ((long *)*puVar2,lVar20 << 3,4);
                  if (plVar23 == (long *)0x0) {
                    (**(code **)(*(long *)*puVar2 + 0xe8))();
                  }
                  local_80 = plVar23 + (lVar20 + 3U >> 2);
                  local_70 = plVar23 + lVar20;
                  local_88 = plVar23;
                  local_78 = local_80;
                  FUN_028f3fbc(&local_88,plVar13,plVar22);
                  plVar7 = local_70;
                  plVar25 = local_78;
                  plVar23 = local_80;
                  plVar15 = local_88;
                  local_88 = local_a8;
                  local_70 = local_b8;
                  local_78 = plVar22;
                  if ((long)plVar22 - (long)plVar13 != 0) {
                    local_78 = plVar22 + (((long)plVar22 - (long)plVar13) - 8U >> 3 ^
                                         0xffffffffffffffff);
                  }
                  local_80 = plVar13;
                  if (local_a8 != (long *)0x0) {
                    plVar22 = (long *)*local_68;
                    uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar11 & 1) == 0) ||
                       (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,local_a8,lVar10,4);
                    }
                    else {
                      FUN_00c48fe8(plVar22,local_a8,lVar10,4);
                    }
                  }
                  local_a8 = plVar15;
                  local_b8 = plVar7;
                }
              }
              uVar29 = *puVar2;
              plVar13 = plVar23 + -1;
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar20 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar20 == 0) {
                *plVar13 = *(long *)(lVar19 + -8);
              }
              else {
                if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00e61f28;
                *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar29;
                *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                *plVar13 = *(long *)(lVar19 + -8);
                *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
              }
              lVar19 = lVar19 + -8;
              plVar22 = plVar25;
            } while (lVar19 != *(long *)(param_1 + 0x168));
          }
          lVar20 = *(long *)(param_1 + 0x160);
          *(long **)(param_1 + 0x160) = local_a8;
          *(long **)(param_1 + 0x168) = plVar13;
          lVar19 = *(long *)(param_1 + 0x178);
          *(long **)(param_1 + 0x170) = plVar25;
          *(long **)(param_1 + 0x178) = local_b8;
          if (lVar20 != 0) {
            plVar22 = (long *)*puVar2;
            lVar19 = lVar19 - lVar20;
            uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar20,lVar19,4);
            }
            else {
              FUN_00c48fe8(plVar22,lVar20,lVar19,4);
            }
          }
        }
      }
      else {
        *(ulong *)(param_1 + 0x1a0) = uVar3 - 0x400;
LAB_00e6199c:
        local_88 = (long *)*puVar14;
        *(ulong **)(param_1 + 0x168) = puVar14 + 1;
        FUN_00e62150(param_1 + 0x160,&local_88);
      }
      uVar17 = *(long *)(param_1 + 0x1a0) + *(long *)(param_1 + 0x1a8);
      puVar14 = *(ulong **)(param_1 + 0x168);
      puVar16 = *(ulong **)(param_1 + 0x170);
    }
    if (puVar16 == puVar14) {
      puVar26 = (undefined4 *)0x0;
    }
    else {
      puVar26 = (undefined4 *)
                (*(long *)((long)puVar14 + (uVar17 >> 7 & 0x1fffffffffffff8)) + (uVar17 & 0x3ff) * 4
                );
    }
    uVar29 = *(undefined8 *)(param_1 + 0x1b0);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar19 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar19 == 0) {
      *puVar26 = *(undefined4 *)(lVar9 + 0x468);
    }
    else {
      if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_00e61f28:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
      *puVar26 = *(undefined4 *)(lVar9 + 0x468);
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    }
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 1;
    uVar11 = (long)*(int *)(lVar9 + 0x468) - (long)*(int *)(param_1 + 0x150);
    uVar17 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x1d8) + uVar17) =
         *(ulong *)(*(long *)(param_1 + 0x1d8) + uVar17) &
         (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
    *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
  }
  do {
    lVar9 = *plVar33;
    lVar19 = *(long *)(param_1 + 0x228);
    cVar4 = '\x01';
    bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar31) {
      *plVar33 = lVar9;
      *(long *)(param_1 + 0x228) = lVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar20 = *plVar33;
    lVar10 = *(long *)(param_1 + 0x228);
    if (lVar20 != lVar9 || lVar10 != lVar19) {
      bVar31 = false;
      ClearExclusiveLocal();
      goto LAB_00e61390;
    }
    cVar4 = '\x01';
    bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
    if (bVar31) {
      *plVar33 = 0;
      *(long *)(param_1 + 0x224) = lVar19;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar31 = true;
LAB_00e61390:
  if (!bVar31) {
    do {
      lVar9 = *plVar33;
      lVar19 = *(long *)(param_1 + 0x228);
      if (lVar9 != lVar20 || lVar19 != lVar10) {
        bVar31 = false;
        ClearExclusiveLocal();
        goto joined_r0x00e61e5c;
      }
      cVar4 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar31) {
        *plVar33 = 0;
        *(long *)(param_1 + 0x224) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar31 = true;
joined_r0x00e61e5c:
    if (!bVar31) {
      do {
        lVar20 = *plVar33;
        lVar10 = *(long *)(param_1 + 0x228);
        if (lVar20 != lVar9 || lVar10 != lVar19) {
          bVar31 = false;
          ClearExclusiveLocal();
          lVar9 = lVar20;
          lVar19 = lVar10;
          goto joined_r0x00e61e5c;
        }
        cVar4 = '\x01';
        bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar31) {
          *plVar33 = 0;
          *(long *)(param_1 + 0x224) = lVar19;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar31 = true;
      lVar9 = lVar20;
      lVar19 = lVar10;
      goto joined_r0x00e61e5c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x230));
  goto LAB_00e6139c;
code_r0x00e61f1c:
  cVar4 = '\x01';
  bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar31) {
    *plVar33 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e60f80;
  goto LAB_00e61f14;
code_r0x00e60fa8:
  cVar4 = '\x01';
  bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar31) {
    *plVar33 = lVar19;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00e60fb0;
  goto LAB_00e60fa0;
}


