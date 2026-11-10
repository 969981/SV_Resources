/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00effa04; name: FUN_00effa04
 */


void FUN_00effa04(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  undefined8 uVar17;
  long *plVar18;
  long local_88 [5];
  
  plVar18 = (long *)(param_1 + 0x58);
  lVar14 = *plVar18;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar14) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00effa48:
    if (*plVar18 == 0) goto code_r0x00effa50;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x60));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x60));
          while (*plVar18 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar4) {
              *plVar18 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00effa58;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00effa58:
    bVar4 = false;
    goto LAB_00effa5c;
  }
  bVar4 = true;
LAB_00effa5c:
  if ((((*(char *)(param_1 + 0x50) != '\0') && (*(char *)(param_1 + 0x51) == '\0')) &&
      (*(long *)(param_1 + 0x40) != 0)) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar6 != 0)) {
    plVar18 = (long *)(param_1 + 0xa8);
    lVar7 = *plVar18;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar7) {
      lVar14 = nn::os::GetCurrentThread();
LAB_00effea8:
      if (*plVar18 == 0) goto code_r0x00effeb0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb0));
      do {
        if (*plVar18 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb0));
            while (*plVar18 == 0) {
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00effeb8;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar16) {
          *plVar18 = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00effeb8:
      bVar16 = false;
      goto LAB_00effebc;
    }
    plVar18 = (long *)0x0;
    bVar16 = true;
LAB_00effebc:
    plVar15 = (long *)(lVar6 + 0x400);
    lVar7 = *plVar15;
    lVar14 = nn::os::GetCurrentThread();
    if (lVar14 != lVar7) {
      lVar14 = nn::os::GetCurrentThread();
LAB_00effed8:
      if (*plVar15 == 0) goto code_r0x00effee0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x408));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x408));
            while (*plVar15 == 0) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar13) {
                *plVar15 = lVar14;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_00effee8;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = lVar14;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00effee8:
      bVar13 = false;
      goto LAB_00effeec;
    }
    plVar15 = (long *)0x0;
    bVar13 = true;
LAB_00effeec:
    if (*(char *)(lVar6 + 0x418) == '\x01') {
      local_88[0] = lVar6 + 0x18;
      local_88[3] = 0;
      local_88[4] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      FUN_00f004fc(param_1 + 0xc0,local_88,*param_2);
    }
    if (!bVar13) {
      *plVar15 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
    }
    if (!bVar16) {
      *plVar18 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
    }
  }
  plVar18 = (long *)(param_1 + 0x70);
  lVar14 = *plVar18;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar14) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00effa80:
    if (*plVar18 == 0) goto code_r0x00effa88;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x78));
          while (*plVar18 == 0) {
            cVar3 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar16) {
              *plVar18 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00effa90;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar16) {
        *plVar18 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00effa90:
    bVar16 = false;
    goto LAB_00effa94;
  }
  plVar18 = (long *)0x0;
  bVar16 = true;
LAB_00effa94:
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  if (puVar2 == *(undefined8 **)(param_1 + 0x98)) {
    lVar6 = (long)puVar2 - *(long *)(param_1 + 0x88) >> 4;
    uVar9 = lVar6 + 1;
    if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(undefined8 **)(param_1 + 0x98) - *(long *)(param_1 + 0x88);
    uVar11 = lVar14 >> 3;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if (0x7fffffffffffffe < (ulong)(lVar14 >> 4)) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                         (*(long **)(param_1 + 0xa0),uVar9 << 4,8);
      if (lVar14 == 0) {
        (**(code **)(**(long **)(param_1 + 0xa0) + 0xe8))();
      }
    }
    uVar17 = *(undefined8 *)(param_1 + 0xa0);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00f00124:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar17;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    puVar2 = (undefined8 *)(lVar14 + lVar6 * 0x10);
    *puVar2 = *param_2;
    lVar6 = param_2[1];
    puVar2[1] = lVar6;
    if (lVar6 != 0) {
      plVar15 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar6 = *(long *)(param_1 + 0x88);
    puVar10 = puVar2;
    if (*(long *)(param_1 + 0x90) == lVar6) {
      lVar7 = lVar6;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x90);
      do {
        uVar17 = *(undefined8 *)(param_1 + 0xa0);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00f00124;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar10[-2] = *(undefined8 *)(lVar7 + -0x10);
        puVar10[-1] = *(undefined8 *)(lVar7 + -8);
        puVar10 = puVar10 + -2;
        lVar12 = lVar7 + -0x10;
        *(undefined8 *)(lVar7 + -0x10) = 0;
        *(undefined8 *)(lVar7 + -8) = 0;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = lVar12;
      } while (lVar6 != lVar12);
      lVar6 = *(long *)(param_1 + 0x90);
      lVar7 = *(long *)(param_1 + 0x88);
    }
    lVar8 = *(long *)(param_1 + 0x98);
    *(undefined8 **)(param_1 + 0x88) = puVar10;
    *(undefined8 **)(param_1 + 0x90) = puVar2 + 2;
    *(ulong *)(param_1 + 0x98) = lVar14 + uVar9 * 0x10;
    if (lVar6 != lVar7) {
      plVar15 = *(long **)(lVar6 + -8);
      if (plVar15 != (long *)0x0) {
        plVar1 = plVar15 + 1;
        do {
          lVar14 = *plVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (lVar6 + -0x10 != lVar7) {
        plVar15 = *(long **)(lVar6 + -0x18);
        lVar6 = lVar6 + -0x20;
        if (plVar15 == (long *)0x0) goto LAB_00effcb0;
        plVar1 = plVar15 + 1;
        do {
          lVar14 = *plVar1;
          cVar3 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (lVar14 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            std::__shared_weak_count::__release_weak();
          }
LAB_00effcb0:
          do {
            if (lVar6 == lVar7) goto LAB_00effcdc;
            plVar15 = *(long **)(lVar6 + -8);
            lVar6 = lVar6 + -0x10;
          } while (plVar15 == (long *)0x0);
          plVar1 = plVar15 + 1;
          do {
            lVar14 = *plVar1;
            cVar3 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *plVar1 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
    }
LAB_00effcdc:
    if (lVar7 != 0) {
      lVar8 = lVar8 - lVar7;
      plVar15 = *(long **)(param_1 + 0xa0);
      uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar7,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar15,lVar7,lVar8,8);
      }
    }
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0xa0);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00f00124;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar17;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    *puVar2 = *param_2;
    lVar14 = param_2[1];
    puVar2[1] = lVar14;
    if (lVar14 != 0) {
      plVar15 = (long *)(lVar14 + 8);
      do {
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar13) {
          *plVar15 = *plVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(undefined8 **)(param_1 + 0x90) = puVar2 + 2;
  }
  if (!bVar16) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x60));
  }
  return;
code_r0x00effa50:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar4) {
    *plVar18 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00effa58;
  goto LAB_00effa48;
code_r0x00effeb0:
  cVar3 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar16) {
    *plVar18 = lVar14;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00effeb8;
  goto LAB_00effea8;
code_r0x00effee0:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar13) {
    *plVar15 = lVar14;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00effee8;
  goto LAB_00effed8;
code_r0x00effa88:
  cVar3 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar16) {
    *plVar18 = lVar6;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00effa90;
  goto LAB_00effa80;
}


