/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189b3c0; name: FUN_0189b3c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0189b3c0(long param_1,char *param_2,uint param_3,byte param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  char *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x30) == *(long *)(param_2 + 8)) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b8) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x1c0);
LAB_0189b420:
  while ((lVar13 != 0 && (lVar7 != lVar13))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar13 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x1b8);
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar13;
        *(long *)(param_1 + 0x1b8) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar13 || *(long *)(param_1 + 0x1b8) != lVar8) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_0189b450;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar13;
      *(long *)(param_1 + 0x1b4) = lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_0189b450:
  if (!bVar10) {
    lVar13 = lVar4;
    lVar8 = *(long *)(param_1 + 0x1b8);
    goto LAB_0189b420;
  }
  pcVar12 = *(char **)(param_1 + 0xb0);
  pcVar15 = *(char **)(param_1 + 0xb8);
  if (pcVar12 == pcVar15) {
    bVar10 = true;
  }
  else if (*param_2 == '\0') {
    bVar10 = true;
    do {
      pcVar18 = pcVar12 + 0x28;
      if (*pcVar12 == '\0') goto LAB_0189ba74;
      pcVar12 = pcVar18;
    } while (pcVar15 != pcVar18);
  }
  else {
    bVar10 = true;
    do {
      if ((*pcVar12 != '\0') && (*(long *)(pcVar12 + 8) == *(long *)(param_2 + 8)))
      goto LAB_0189ba74;
      pcVar12 = pcVar12 + 0x28;
    } while (pcVar15 != pcVar12);
  }
LAB_0189b47c:
  do {
    lVar7 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x1b8);
    if (lVar8 != lVar7 || lVar4 != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_0189b4b8;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b4) = lVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_0189b4b8:
  if (!bVar11) {
    do {
      lVar7 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != lVar8 || lVar13 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x0189b9b4;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x1b4) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
joined_r0x0189b9b4:
    if (!bVar11) {
      do {
        lVar8 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x1b8);
        if (lVar8 != lVar7 || lVar4 != lVar13) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar7 = lVar8;
          lVar13 = lVar4;
          goto joined_r0x0189b9b4;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x1b4) = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar11 = true;
      lVar7 = lVar8;
      lVar13 = lVar4;
      goto joined_r0x0189b9b4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar10) {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0189b4e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0189b4e4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0189b4e4:
  puVar20 = *(undefined1 **)(param_1 + 0xb8);
  if (puVar20 == *(undefined1 **)(param_1 + 0xc0)) {
    uVar17 = *(ulong *)(param_1 + 0xd0);
    lVar7 = (long)puVar20 - *(long *)(param_1 + 0xb0) >> 3;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar3 = lVar7 * -0x3333333333333333 + 1;
    if (uVar17 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (long)*(undefined1 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
    uVar16 = lVar13 * -0x6666666666666666;
    if (uVar3 <= uVar16) {
      uVar3 = uVar16;
    }
    if (uVar17 >> 1 <= (ulong)(lVar13 * -0x3333333333333333)) {
      uVar3 = uVar17;
    }
    if (uVar3 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(**(long **)(param_1 + 200) + 0x10))
                         (*(long **)(param_1 + 200),uVar3 * 0x28,8);
      if (lVar13 == 0) {
        (**(code **)(**(long **)(param_1 + 200) + 0xe8))();
      }
    }
    uVar19 = *(undefined8 *)(param_1 + 200);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 != 0) {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_0189bc20;
      *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    }
    puVar20 = (undefined1 *)(lVar13 + lVar7 * 8);
    *puVar20 = 0;
    if (*param_2 != '\0') {
      lVar7 = lVar13 + lVar7 * 8;
      *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      plVar9 = *(long **)(param_2 + 0x20);
      *(long **)(lVar7 + 0x20) = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      *puVar20 = 1;
    }
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    pcVar12 = *(char **)(param_1 + 0xb0);
    pcVar15 = *(char **)(param_1 + 0xb8);
    if (pcVar15 == pcVar12) {
      puVar14 = puVar20;
      pcVar15 = pcVar12;
    }
    else {
      lVar7 = 0;
      do {
        uVar19 = *(undefined8 *)(param_1 + 200);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_0189bc20:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar19;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        puVar20[lVar7 + -0x28] = 0;
        if (pcVar15[lVar7 + -0x28] != '\0') {
          *(undefined8 *)(puVar20 + lVar7 + -0x20) = *(undefined8 *)(pcVar15 + lVar7 + -0x20);
          *(undefined8 *)(puVar20 + lVar7 + -0x18) = *(undefined8 *)(pcVar15 + lVar7 + -0x18);
          *(undefined8 *)(puVar20 + lVar7 + -0x10) = *(undefined8 *)(pcVar15 + lVar7 + -0x10);
          uVar19 = *(undefined8 *)(pcVar15 + lVar7 + -8);
          pcVar18 = pcVar15 + lVar7 + -8;
          pcVar18[0] = '\0';
          pcVar18[1] = '\0';
          pcVar18[2] = '\0';
          pcVar18[3] = '\0';
          pcVar18[4] = '\0';
          pcVar18[5] = '\0';
          pcVar18[6] = '\0';
          pcVar18[7] = '\0';
          puVar20[lVar7 + -0x28] = 1;
          *(undefined8 *)(puVar20 + lVar7 + -8) = uVar19;
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0x28;
      } while ((long)pcVar12 - (long)pcVar15 != lVar7);
      puVar14 = puVar20 + lVar7;
      pcVar15 = *(char **)(param_1 + 0xb0);
      pcVar12 = *(char **)(param_1 + 0xb8);
    }
    lVar7 = *(long *)(param_1 + 0xc0);
    *(undefined1 **)(param_1 + 0xb0) = puVar14;
    *(undefined1 **)(param_1 + 0xb8) = puVar20 + 0x28;
    *(ulong *)(param_1 + 0xc0) = lVar13 + uVar3 * 0x28;
    if (pcVar12 != pcVar15) {
      pcVar18 = pcVar12 + -0x28;
      if (*pcVar18 != '\0') {
        if (*(long **)(pcVar12 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar12 + -8) + 0x20))();
        }
        *pcVar18 = '\0';
      }
      if (pcVar18 != pcVar15) {
        pcVar18 = pcVar12 + -0x50;
        if (*pcVar18 != '\0') {
          if (*(long **)(pcVar12 + -0x30) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar12 + -0x30) + 0x20))();
          }
          *pcVar18 = '\0';
        }
        if (pcVar18 != pcVar15) {
          do {
            if (pcVar12[-0x78] != '\0') {
              if (*(long **)(pcVar12 + -0x58) != (long *)0x0) {
                (**(code **)(**(long **)(pcVar12 + -0x58) + 0x20))();
              }
              pcVar12[-0x78] = '\0';
            }
            pcVar12 = pcVar12 + -0x28;
          } while (pcVar15 + 0x50 != pcVar12);
        }
      }
    }
    if (pcVar15 != (char *)0x0) {
      plVar9 = *(long **)(param_1 + 200);
      lVar7 = lVar7 - (long)pcVar15;
      uVar17 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar17 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,pcVar15,lVar7,8);
      }
      else {
        FUN_00c48fe8(plVar9,pcVar15,lVar7,8);
      }
    }
  }
  else {
    uVar19 = *(undefined8 *)(param_1 + 200);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_0189bc20;
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar19;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    *puVar20 = 0;
    if (*param_2 != '\0') {
      *(undefined8 *)(puVar20 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(puVar20 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      plVar9 = *(long **)(param_2 + 0x20);
      *(long **)(puVar20 + 0x20) = plVar9;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))();
      }
      *puVar20 = 1;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    *(undefined1 **)(param_1 + 0xb8) = puVar20 + 0x28;
  }
  *(byte *)(param_1 + 0x1a0) = param_4 & 1;
  *(undefined1 *)(param_1 + 0x1a1) = 1;
  *(undefined1 *)(param_1 + 0x1a4) = 1;
  do {
    lVar7 = *plVar1;
    lVar13 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar8 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x1b8);
    if (lVar8 != lVar7 || lVar4 != lVar13) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_0189b7a4;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_0189b7a4:
  if (!bVar10) {
    do {
      lVar7 = *plVar1;
      lVar13 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != lVar8 || lVar13 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x0189bbcc;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x0189bbcc:
    if (!bVar10) {
      do {
        lVar8 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x1b8);
        if (lVar8 != lVar7 || lVar4 != lVar13) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar8;
          lVar13 = lVar4;
          goto joined_r0x0189bbcc;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar7 = lVar8;
      lVar13 = lVar4;
      goto joined_r0x0189bbcc;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_00eaabc4(param_1);
  return;
LAB_0189ba74:
  bVar10 = false;
  goto LAB_0189b47c;
}


