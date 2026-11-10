/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c76ba4; name: FUN_00c76ba4
 */


undefined1  [16] FUN_00c76ba4(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  LightEventType *pLVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x24;
  ulong uVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_64;
  
  plVar1 = param_1 + 8;
  local_64 = param_4;
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar14 = param_1[9];
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar9;
      param_1[9] = lVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 10);
LAB_00c76bf0:
  while ((lVar9 != 0 && (lVar8 != lVar9))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar9 = *plVar1;
      lVar14 = param_1[9];
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar9;
        param_1[9] = lVar14;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    lVar10 = *plVar1;
    if (lVar10 != lVar9 || param_1[9] != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c76c20;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar9;
      *(long *)((long)param_1 + 0x44) = lVar14 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
LAB_00c76c20:
  if (!bVar12) {
    lVar9 = lVar10;
    lVar14 = param_1[9];
    goto LAB_00c76bf0;
  }
  puVar20 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar20 == puVar3) {
    uVar18 = 0;
    bVar12 = true;
  }
  else {
    uVar19 = (ulong)local_64;
    if (local_64 == 0) {
      uVar16 = 0;
      bVar12 = true;
      do {
        if (((long *)*puVar20)[1] - *(long *)*puVar20 >> 3 == 0) goto LAB_00c76d44;
        puVar20 = puVar20 + 4;
        uVar18 = 0;
        uVar16 = uVar16 + 1;
      } while (puVar3 != puVar20);
    }
    else {
      uVar16 = 0;
      do {
        unaff_x24 = (long *)*puVar20;
        lVar8 = *unaff_x24;
        if ((uVar19 == unaff_x24[1] - lVar8 >> 3) &&
           (lVar14 = *param_3, lVar9 = (**(code **)PTR_DAT_047e19c0)(lVar8), lVar14 == lVar9)) {
          lVar9 = 0;
          lVar14 = 0;
          plVar11 = param_3;
          do {
            lVar10 = plVar11[1];
            iVar7 = (**(code **)PTR_DAT_047e19c8)(lVar8);
            if ((int)lVar10 != iVar7) break;
            if (uVar19 << 3 == lVar14 + 8) goto LAB_00c76d44;
            lVar9 = lVar9 + 1;
            lVar8 = *unaff_x24 + lVar9 * 8;
            lVar15 = plVar11[2];
            lVar10 = (**(code **)PTR_DAT_047e19c0)(*unaff_x24 + lVar14 + 8);
            lVar14 = lVar14 + 8;
            plVar11 = plVar11 + 2;
          } while (lVar15 == lVar10);
        }
        puVar20 = puVar20 + 4;
        uVar16 = uVar16 + 1;
      } while (puVar20 != puVar3);
      uVar18 = 0;
      bVar12 = true;
    }
  }
LAB_00c76d50:
  do {
    auVar21._8_8_ = unaff_x24;
    auVar21._0_8_ = uVar18;
    lVar8 = *plVar1;
    lVar9 = param_1[9];
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar8;
      param_1[9] = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar14 = *plVar1;
    lVar10 = param_1[9];
    if (lVar14 != lVar8 || lVar10 != lVar9) {
      bVar13 = false;
      ClearExclusiveLocal();
      goto LAB_00c76d8c;
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *plVar1 = lVar8;
      *(long *)((long)param_1 + 0x44) = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar13 = true;
LAB_00c76d8c:
  if (!bVar13) {
    do {
      lVar8 = *plVar1;
      lVar9 = param_1[9];
      if (lVar8 != lVar14 || lVar9 != lVar10) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c77078;
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar14;
        *(long *)((long)param_1 + 0x44) = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar13 = true;
joined_r0x00c77078:
    if (!bVar13) {
      do {
        lVar14 = *plVar1;
        lVar10 = param_1[9];
        if (lVar14 != lVar8 || lVar10 != lVar9) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar8 = lVar14;
          lVar9 = lVar10;
          goto joined_r0x00c77078;
        }
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar8;
          *(long *)((long)param_1 + 0x44) = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar13 = true;
      lVar8 = lVar14;
      lVar9 = lVar10;
      goto joined_r0x00c77078;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  if (!bVar12) {
    uVar19 = 0;
LAB_00c76fc8:
    auVar22._0_8_ = uVar19 | auVar21._0_8_ & 0xff;
    auVar22._8_8_ = auVar21._8_8_;
    return auVar22;
  }
  plVar17 = (long *)*param_2;
  plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  FUN_00c77208(plVar11,param_2,&local_64);
  local_78 = 0x40;
  uStack_70 = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  puVar5 = PTR_DAT_047e19d0;
  lVar8 = *plVar11;
  lVar9 = plVar11[1] - lVar8;
  local_88 = plVar11;
  plStack_80 = plVar17;
  if (lVar9 != 0) {
    (**(code **)PTR_DAT_047e19d0)(lVar8,*param_3);
    puVar6 = PTR_DAT_047e19d8;
    (**(code **)PTR_DAT_047e19d8)(lVar8,(int)param_3[1]);
    if (lVar9 != 8) {
      (**(code **)puVar5)(lVar8 + 8,param_3[2]);
      (**(code **)puVar6)(lVar8 + 8,(int)param_3[3]);
      if (lVar9 != 0x10) {
        (**(code **)puVar5)(lVar8 + 0x10,param_3[4]);
        (**(code **)puVar6)(lVar8 + 0x10,(int)param_3[5]);
        if (lVar9 != 0x18) {
          (**(code **)puVar5)(lVar8 + 0x18,param_3[6]);
          (**(code **)puVar6)(lVar8 + 0x18,(int)param_3[7]);
          if (lVar9 != 0x20) {
            param_3 = param_3 + 8;
            lVar8 = lVar8 + 0x20;
            lVar9 = (lVar9 >> 3) + -4;
            do {
              (**(code **)puVar5)(lVar8,*param_3);
              (**(code **)puVar6)(lVar8,(int)param_3[1]);
              lVar9 = lVar9 + -1;
              lVar8 = lVar8 + 8;
              param_3 = param_3 + 2;
            } while (lVar9 != 0);
          }
        }
      }
    }
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[9] == 0) {
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00c76f0c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || param_1[9] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[9] == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar8;
            param_1[9] = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00c76f0c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      param_1[9] = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00c76f0c:
  auVar21 = FUN_00c778e0(param_1,&local_88);
  do {
    lVar8 = *plVar1;
    lVar9 = param_1[9];
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      param_1[9] = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar14 = *plVar1;
    lVar10 = param_1[9];
    if (lVar14 != lVar8 || lVar10 != lVar9) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00c76fac;
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x44) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar12 = true;
LAB_00c76fac:
  if (!bVar12) {
    do {
      lVar8 = *plVar1;
      lVar9 = param_1[9];
      if (lVar8 != lVar14 || lVar9 != lVar10) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c771b4;
      }
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x44) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar12 = true;
joined_r0x00c771b4:
    if (!bVar12) {
      do {
        lVar14 = *plVar1;
        lVar10 = param_1[9];
        if (lVar14 != lVar8 || lVar10 != lVar9) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar8 = lVar14;
          lVar9 = lVar10;
          goto joined_r0x00c771b4;
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x44) = lVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar12 = true;
      lVar8 = lVar14;
      lVar9 = lVar10;
      goto joined_r0x00c771b4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = local_88;
  uVar19 = auVar21._0_8_ & 0xffffffffffffff00;
  local_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_00c788e4(&plStack_80);
  }
  goto LAB_00c76fc8;
LAB_00c76d44:
  bVar12 = false;
  unaff_x24 = (long *)(ulong)uVar16;
  uVar18 = 1;
  goto LAB_00c76d50;
}


