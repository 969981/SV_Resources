/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012822f8; name: FUN_012822f8
 */


void FUN_012822f8(float param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  long local_90;
  char *local_88;
  long *local_78;
  
  if (((param_4 & 1) == 0) && (*(char *)(param_2 + 0xe8) != '\0')) {
    plVar12 = (long *)(param_2 + 0x48);
    lVar5 = nn::os::GetCurrentThread();
LAB_012824d8:
    if (*plVar12 == 0) goto code_r0x012824e0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_012824e8;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_012824e8:
    plVar12 = (long *)(param_2 + 0xb0);
    lVar5 = *plVar12;
    plVar16 = *(long **)(param_2 + 0xb8);
    uVar17 = *(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78) >> 3;
    uVar14 = (long)plVar16 - lVar5 >> 3;
    uVar8 = uVar17 + uVar14;
    if (uVar14 < uVar8) {
      if ((ulong)(*(long *)(param_2 + 0xc0) - (long)plVar16 >> 3) < uVar17) {
        uVar13 = *(ulong *)(param_2 + 0xd0);
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = *(long *)(param_2 + 0xc0) - lVar5;
        uVar11 = lVar5 >> 2;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar13 >> 1 <= (ulong)(lVar5 >> 3)) {
          uVar8 = uVar13;
        }
        if (uVar8 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (**(code **)(**(long **)(param_2 + 200) + 0x10))
                            (*(long **)(param_2 + 200),uVar8 << 3,8);
          if (lVar5 == 0) {
            (**(code **)(**(long **)(param_2 + 200) + 0xe8))();
          }
        }
        puVar15 = (undefined8 *)(lVar5 + uVar14 * 8);
        lVar20 = uVar17 << 3;
        puVar1 = puVar15 + uVar17;
        puVar18 = puVar15;
        do {
          uVar10 = *(undefined8 *)(param_2 + 200);
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar6 == 0) {
            *puVar18 = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01282ca8;
            *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            *puVar18 = 0;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
          puVar18 = puVar18 + 1;
          lVar20 = lVar20 + -8;
        } while (lVar20 != 0);
        plVar16 = *(long **)(param_2 + 0xb0);
        plVar19 = *(long **)(param_2 + 0xb8);
        if (plVar19 == plVar16) {
          plVar19 = plVar16;
        }
        else {
          do {
            uVar10 = *(undefined8 *)(param_2 + 200);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar20 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar20 == 0) {
              lVar20 = plVar19[-1];
              plVar19[-1] = 0;
              puVar15[-1] = lVar20;
            }
            else {
              if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_01282ca8:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar10;
              *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
              lVar6 = plVar19[-1];
              plVar19[-1] = 0;
              puVar15[-1] = lVar6;
              *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
            }
            plVar19 = plVar19 + -1;
            puVar15 = puVar15 + -1;
          } while (plVar16 != plVar19);
          plVar16 = *(long **)(param_2 + 0xb0);
          plVar19 = *(long **)(param_2 + 0xb8);
        }
        *(undefined8 **)(param_2 + 0xb0) = puVar15;
        *(undefined8 **)(param_2 + 0xb8) = puVar1;
        lVar20 = *(long *)(param_2 + 0xc0);
        *(ulong *)(param_2 + 0xc0) = lVar5 + uVar8 * 8;
        if (plVar19 != plVar16) {
          plVar7 = (long *)plVar19[-1];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))();
          }
          if (plVar19 + -1 != plVar16) {
            plVar7 = (long *)plVar19[-2];
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))();
            }
            if (plVar19 + -2 != plVar16) {
              do {
                if ((long *)plVar19[-3] != (long *)0x0) {
                  (**(code **)(*(long *)plVar19[-3] + 0x18))();
                }
                plVar19 = plVar19 + -1;
              } while (plVar16 + 2 != plVar19);
            }
          }
        }
        if (plVar16 != (long *)0x0) {
          plVar19 = *(long **)(param_2 + 200);
          lVar20 = lVar20 - (long)plVar16;
          uVar8 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar8 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,plVar16,lVar20,8);
          }
          else {
            FUN_00c48fe8(plVar19,plVar16,lVar20,8);
          }
        }
      }
      else {
        FUN_01283cdc(plVar12,uVar17);
      }
    }
    else if (uVar14 != uVar8) {
      plVar19 = (long *)(lVar5 + uVar8 * 8);
      if (plVar19 != plVar16) {
        plVar7 = (long *)plVar16[-1];
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        if (plVar16 + -1 != plVar19) {
          plVar7 = (long *)plVar16[-2];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))();
          }
          if (plVar16 + -2 != plVar19) {
            plVar7 = (long *)plVar16[-3];
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))();
            }
            if (plVar16 + -3 != plVar19) {
              do {
                if ((long *)plVar16[-4] != (long *)0x0) {
                  (**(code **)(*(long *)plVar16[-4] + 0x18))();
                }
                plVar16 = plVar16 + -1;
              } while ((long *)(lVar5 + (uVar17 + uVar14) * 8 + 0x18) != plVar16);
            }
          }
        }
      }
      *(long **)(param_2 + 0xb8) = plVar19;
    }
    plVar16 = *(long **)(param_2 + 0x78);
    plVar19 = *(long **)(param_2 + 0x80);
    if (plVar16 != plVar19) {
      plVar7 = (long *)(*plVar12 + uVar14 * 8);
      plVar9 = (long *)*plVar7;
      *plVar7 = 0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      lVar5 = *plVar16;
      *plVar16 = 0;
      *plVar7 = lVar5;
      if (plVar16 + 1 != plVar19) {
        plVar9 = (long *)plVar7[1];
        plVar7[1] = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))();
        }
        lVar5 = plVar16[1];
        plVar16[1] = 0;
        plVar7[1] = lVar5;
        if (plVar16 + 2 != plVar19) {
          plVar9 = (long *)plVar7[2];
          plVar7[2] = 0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))();
          }
          lVar5 = plVar16[2];
          plVar16[2] = 0;
          plVar7[2] = lVar5;
          if (plVar16 + 3 != plVar19) {
            plVar9 = (long *)plVar7[3];
            plVar7[3] = 0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))();
            }
            lVar5 = plVar16[3];
            plVar16[3] = 0;
            plVar7[3] = lVar5;
            if (plVar16 + 4 != plVar19) {
              plVar9 = (long *)plVar7[4];
              plVar7[4] = 0;
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x18))();
              }
              lVar5 = plVar16[4];
              plVar16[4] = 0;
              plVar7[4] = lVar5;
              if (plVar16 + 5 != plVar19) {
                plVar9 = (long *)plVar7[5];
                plVar7[5] = 0;
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x18))();
                }
                lVar5 = plVar16[5];
                plVar16[5] = 0;
                plVar7[5] = lVar5;
                if (plVar16 + 6 != plVar19) {
                  plVar16 = plVar16 + 6;
                  plVar7 = plVar7 + 6;
                  do {
                    plVar9 = (long *)*plVar7;
                    *plVar7 = 0;
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x18))();
                    }
                    lVar5 = *plVar16;
                    plVar9 = plVar16 + 1;
                    *plVar16 = 0;
                    *plVar7 = lVar5;
                    plVar16 = plVar9;
                    plVar7 = plVar7 + 1;
                  } while (plVar19 != plVar9);
                }
              }
            }
          }
        }
      }
      plVar16 = *(long **)(param_2 + 0x78);
      plVar19 = *(long **)(param_2 + 0x80);
      if (plVar19 != plVar16) {
        plVar7 = (long *)plVar19[-1];
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        if (plVar19 + -1 != plVar16) {
          plVar7 = (long *)plVar19[-2];
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))();
          }
          if (plVar19 + -2 != plVar16) {
            plVar7 = (long *)plVar19[-3];
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))();
            }
            if (plVar19 + -3 != plVar16) {
              do {
                if ((long *)plVar19[-4] != (long *)0x0) {
                  (**(code **)(*(long *)plVar19[-4] + 0x18))();
                }
                plVar19 = plVar19 + -1;
              } while (plVar16 + 3 != plVar19);
            }
          }
        }
      }
    }
    *(long **)(param_2 + 0x80) = plVar16;
    *(undefined1 *)(param_2 + 0xe8) = 0;
    FUN_01282cd0(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
    (**(code **)(**(long **)(param_2 + 0x38) + 0x58))(&local_90);
    if (*local_88 != '\0') {
      plVar16 = *(long **)(*(long *)(param_2 + 0x30) + 0x178);
      plVar19 = *(long **)(*(long *)(param_2 + 0x30) + 0x180);
      if (plVar16 != plVar19) {
        while (*(long *)(*plVar16 + 0x1d0) != local_90) {
          plVar16 = plVar16 + 1;
          if (plVar19 == plVar16) goto LAB_0128280c;
        }
      }
      if (((plVar16 != plVar19) && (lVar5 = *plVar16, lVar5 != 0)) && (lVar5 != param_2)) {
        lVar5 = FUN_012839bc(lVar5 + 0xb0);
        lVar20 = FUN_012839bc(plVar12);
        if ((lVar5 != 0) && (lVar20 != 0)) {
          *(long *)(lVar20 + 0x268) = lVar5;
        }
      }
    }
LAB_0128280c:
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  }
  if (*(char *)(param_2 + 0xea) == '\0') {
    plVar12 = (long *)(param_2 + 0x60);
    lVar5 = nn::os::GetCurrentThread();
LAB_01282348:
    if (*plVar12 == 0) goto code_r0x01282350;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_01282358;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_01282358:
    puVar18 = *(undefined8 **)(param_2 + 0xb0);
    puVar15 = *(undefined8 **)(param_2 + 0xb8);
    if (puVar18 != puVar15) {
      param_1 = *(float *)(param_2 + 0xf0) * param_1;
      (**(code **)(*(long *)*puVar18 + 0x48))(param_1,(long *)*puVar18,param_4 & 1);
      if ((puVar18 + 1 != puVar15) &&
         ((**(code **)(*(long *)puVar18[1] + 0x48))(param_1,(long *)puVar18[1],param_4 & 1),
         puVar18 + 2 != puVar15)) {
        (**(code **)(*(long *)puVar18[2] + 0x48))(param_1,(long *)puVar18[2],param_4 & 1);
        if ((puVar18 + 3 != puVar15) &&
           ((**(code **)(*(long *)puVar18[3] + 0x48))(param_1,(long *)puVar18[3],param_4 & 1),
           puVar18 + 4 != puVar15)) {
          (**(code **)(*(long *)puVar18[4] + 0x48))(param_1,(long *)puVar18[4],param_4 & 1);
          for (puVar18 = puVar18 + 5; puVar18 != puVar15; puVar18 = puVar18 + 1) {
            (**(code **)(*(long *)*puVar18 + 0x48))(param_1,(long *)*puVar18,param_4 & 1);
          }
        }
      }
    }
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  }
  if (*(char *)(param_2 + 0xe9) == '\0') {
    return;
  }
  plVar12 = (long *)(param_2 + 0x48);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01282af8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01282af8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01282af8:
  uVar10 = FUN_01283c00(*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xb8));
  FUN_01283ad4((undefined8 *)(param_2 + 0xb0),uVar10,*(undefined8 *)(param_2 + 0xb8));
  *(undefined1 *)(param_2 + 0xe9) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x50));
  return;
code_r0x012824e0:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar3) {
    *plVar12 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_012824e8;
  goto LAB_012824d8;
code_r0x01282350:
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar3) {
    *plVar12 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01282358;
  goto LAB_01282348;
}


