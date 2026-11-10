/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e31560; name: FUN_00e31560
 */


void FUN_00e31560(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar1 = param_1 + 0x318;
  lVar2 = param_1 + 0x70;
  (**(code **)(**(long **)(param_1 + 0x318) + 0x28))(*(long **)(param_1 + 0x318),lVar2);
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 800) + 0x40))
            ((long *)**(undefined8 **)(param_1 + 800),lVar2);
  lVar6 = DAT_0485a0e8;
  plVar3 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar3;
    lVar15 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd78) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e315dc:
  while ((lVar18 != 0 && (lVar8 != lVar18))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xd80));
    do {
      lVar18 = *plVar3;
      lVar15 = *(long *)(lVar6 + 0xd78);
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar18;
        *(long *)(lVar6 + 0xd78) = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar16 = *plVar3;
    lVar4 = *(long *)(lVar6 + 0xd78);
    if (lVar16 != lVar18 || lVar4 != lVar15) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00e3160c;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd74) = lVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00e3160c:
  if (!bVar11) {
    lVar18 = lVar16;
    lVar15 = lVar4;
    goto LAB_00e315dc;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  lVar18 = *(long *)(lVar6 + 0x40);
  if (lVar18 != lVar8) {
    lVar15 = 0;
    lVar16 = 0;
    uVar17 = 0;
    do {
      lVar4 = lVar8 + lVar15;
      lVar19 = *(long *)(lVar8 + (lVar16 >> 0x20) * 0x1d0 + 0x1c8);
      iVar7 = strcmp(*(char **)(lVar4 + 0x30),PTR_s_Directional_047e12e8);
      if ((iVar7 == 0) &&
         (iVar7 = strcmp(*(char **)(lVar4 + 0x10),PTR_s_DirectionalMain_047d8bd0), iVar7 == 0)) {
        if (lVar19 == 0) {
          (**(code **)(**(long **)(param_1 + 0x318) + 0x38))(*(long **)(param_1 + 0x318),lVar4);
          puVar13 = *(undefined8 **)(param_1 + 800);
        }
        else {
          puVar13 = (undefined8 *)(*(long *)(param_1 + 800) + lVar19 * 8);
        }
        (**(code **)(*(long *)*puVar13 + 0x48))((long *)*puVar13,lVar4);
        lVar8 = *(long *)(lVar6 + 0x38);
        lVar18 = *(long *)(lVar6 + 0x40);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x100000000;
      lVar15 = lVar15 + 0x1d0;
    } while (uVar17 < (ulong)((lVar18 - lVar8 >> 4) * 0x34f72c234f72c235));
  }
  do {
    lVar8 = *plVar3;
    lVar18 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd78) = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar15 = *plVar3;
    lVar16 = *(long *)(lVar6 + 0xd78);
    if (lVar15 != lVar8 || lVar16 != lVar18) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x00e31754;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd74) = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
joined_r0x00e31754:
  if (!bVar11) {
    do {
      lVar8 = *plVar3;
      lVar18 = *(long *)(lVar6 + 0xd78);
      if (lVar8 != lVar15 || lVar18 != lVar16) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar15 = lVar8;
        lVar16 = lVar18;
        goto joined_r0x00e31754;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar15;
        *(long *)(lVar6 + 0xd74) = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
    lVar15 = lVar8;
    lVar16 = lVar18;
    goto joined_r0x00e31754;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xd80));
  lVar6 = DAT_0485a0e8;
  plVar3 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar3;
    lVar15 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd78) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e317bc:
  while ((lVar18 != 0 && (lVar8 != lVar18))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xd80));
    do {
      lVar18 = *plVar3;
      lVar15 = *(long *)(lVar6 + 0xd78);
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar18;
        *(long *)(lVar6 + 0xd78) = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar16 = *plVar3;
    lVar4 = *(long *)(lVar6 + 0xd78);
    if (lVar16 != lVar18 || lVar4 != lVar15) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00e317ec;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd74) = lVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00e317ec:
  if (!bVar11) {
    lVar18 = lVar16;
    lVar15 = lVar4;
    goto LAB_00e317bc;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (*(long *)(lVar6 + 0x40) != lVar8) {
    lVar18 = 0;
    lVar15 = 0;
    uVar17 = 0;
    do {
      if (*(long *)(lVar8 + (lVar15 >> 0x20) * 0x1d0 + 0x1c8) != 0) goto LAB_00e31868;
      lVar8 = lVar8 + lVar18;
      pcVar14 = *(char **)(lVar8 + 0x30);
      iVar7 = strcmp(pcVar14,PTR_s_Global_047e12f0);
      if (iVar7 == 0) {
        plVar9 = *(long **)(param_1 + 0x318);
        pcVar10 = *(code **)(*plVar9 + 0x30);
LAB_00e31860:
        (*pcVar10)(plVar9,lVar8);
      }
      else {
        iVar7 = strcmp(pcVar14,PTR_s_Selectable_047e12f8);
        if (iVar7 == 0) {
          if (*(char *)(lVar8 + 0x1b8) == '\0') goto LAB_00e31868;
          plVar9 = *(long **)(param_1 + 0x318);
          pcVar10 = *(code **)(*plVar9 + 0x48);
          goto LAB_00e31860;
        }
        iVar7 = strcmp(pcVar14,PTR_s_RefSpecular_047e1300);
        if (iVar7 == 0) {
          plVar9 = *(long **)(param_1 + 0x318);
          pcVar10 = *(code **)(*plVar9 + 0x40);
          goto LAB_00e31860;
        }
        iVar7 = strcmp(pcVar14,PTR_DAT_047e1308);
        if (iVar7 == 0) {
          plVar9 = *(long **)(param_1 + 0x318);
          pcVar10 = *(code **)(*plVar9 + 0x50);
          goto LAB_00e31860;
        }
        iVar7 = strcmp(pcVar14,PTR_DAT_047e1310);
        if (iVar7 == 0) {
          iVar7 = strcmp(*(char **)(lVar8 + 0x10),PTR_DAT_047e1328);
          if (iVar7 != 0) goto LAB_00e31868;
          plVar9 = *(long **)(param_1 + 0x318);
          pcVar10 = *(code **)(*plVar9 + 0x58);
          goto LAB_00e31860;
        }
        iVar7 = strcmp(pcVar14,PTR_DAT_047e1318);
        if (iVar7 == 0) {
          iVar7 = strcmp(*(char **)(lVar8 + 0x10),PTR_DAT_047e1330);
          if (iVar7 == 0) {
            plVar9 = *(long **)(param_1 + 0x318);
            pcVar10 = *(code **)(*plVar9 + 0x60);
            goto LAB_00e31860;
          }
        }
        else {
          iVar7 = strcmp(pcVar14,PTR_s_DirectionalForWater_047e1320);
          if (iVar7 == 0) {
            plVar9 = *(long **)(param_1 + 0x318);
            pcVar10 = *(code **)(*plVar9 + 0x68);
            goto LAB_00e31860;
          }
        }
      }
LAB_00e31868:
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0x100000000;
      lVar18 = lVar18 + 0x1d0;
    } while (uVar17 < (ulong)((*(long *)(lVar6 + 0x40) - lVar8 >> 4) * 0x34f72c234f72c235));
  }
  do {
    lVar8 = *plVar3;
    lVar18 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd78) = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar15 = *plVar3;
    lVar16 = *(long *)(lVar6 + 0xd78);
    if (lVar15 != lVar8 || lVar16 != lVar18) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x00e31a0c;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd74) = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
joined_r0x00e31a0c:
  if (!bVar11) {
    do {
      lVar8 = *plVar3;
      lVar18 = *(long *)(lVar6 + 0xd78);
      if (lVar8 != lVar15 || lVar18 != lVar16) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar15 = lVar8;
        lVar16 = lVar18;
        goto joined_r0x00e31a0c;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar15;
        *(long *)(lVar6 + 0xd74) = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
    lVar15 = lVar8;
    lVar16 = lVar18;
    goto joined_r0x00e31a0c;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xd80));
  lVar6 = DAT_0485a0e8;
  plVar3 = (long *)(DAT_0485a0e8 + 0xd70);
  lVar8 = nn::os::GetCurrentThread();
  do {
    lVar18 = *plVar3;
    lVar15 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd78) = lVar15;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e31a74:
  while ((lVar18 != 0 && (lVar8 != lVar18))) {
    nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0xd80));
    do {
      lVar18 = *plVar3;
      lVar15 = *(long *)(lVar6 + 0xd78);
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar18;
        *(long *)(lVar6 + 0xd78) = lVar15;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar16 = *plVar3;
    lVar4 = *(long *)(lVar6 + 0xd78);
    if (lVar16 != lVar18 || lVar4 != lVar15) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00e31aa4;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar18;
      *(long *)(lVar6 + 0xd74) = lVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00e31aa4:
  if (!bVar11) {
    lVar18 = lVar16;
    lVar15 = lVar4;
    goto LAB_00e31a74;
  }
  lVar8 = *(long *)(lVar6 + 0x38);
  if (*(long *)(lVar6 + 0x40) != lVar8) {
    lVar18 = 0;
    lVar15 = 0;
    uVar17 = 0;
    do {
      lVar16 = lVar8 + lVar18;
      pcVar14 = *(char **)(lVar16 + 0x30);
      lVar8 = *(long *)(lVar8 + (lVar15 >> 0x20) * 0x1d0 + 0x1c8);
      iVar7 = strcmp(pcVar14,PTR_s_Selectable_047e12f8);
      if (iVar7 == 0) {
        if (*(char *)(lVar16 + 0x1b8) != '\0') {
          plVar9 = *(long **)(*(long *)(param_1 + 800) + lVar8 * 8);
          pcVar10 = *(code **)(*plVar9 + 0x50);
          goto LAB_00e31b20;
        }
      }
      else {
        iVar7 = strcmp(pcVar14,PTR_DAT_047e1310);
        if (iVar7 == 0) {
          iVar7 = strcmp(*(char **)(lVar16 + 0x10),PTR_DAT_047e1328);
          if (iVar7 == 0) {
            plVar9 = *(long **)(*(long *)(param_1 + 800) + lVar8 * 8);
            pcVar10 = *(code **)(*plVar9 + 0x58);
            goto LAB_00e31b20;
          }
        }
        else {
          iVar7 = strcmp(pcVar14,PTR_s_GILightCommon_047e1338);
          if (iVar7 == 0) {
            if (*(char *)(lVar16 + 0x1b8) != '\0') {
              plVar9 = *(long **)(*(long *)(param_1 + 800) + lVar8 * 8);
              pcVar10 = *(code **)(*plVar9 + 0x60);
              goto LAB_00e31b20;
            }
          }
          else {
            iVar7 = strcmp(pcVar14,PTR_s_Probe_047e1340);
            if (iVar7 == 0) {
              if (*(char *)(lVar16 + 0x1b8) != '\0') {
                plVar9 = *(long **)(*(long *)(param_1 + 800) + lVar8 * 8);
                pcVar10 = *(code **)(*plVar9 + 0x68);
                goto LAB_00e31b20;
              }
            }
            else {
              iVar7 = strcmp(pcVar14,PTR_DAT_047e1318);
              if ((iVar7 == 0) &&
                 (iVar7 = strcmp(*(char **)(lVar16 + 0x10),PTR_DAT_047e1330), iVar7 == 0)) {
                plVar9 = *(long **)(*(long *)(param_1 + 800) + lVar8 * 8);
                pcVar10 = *(code **)(*plVar9 + 0x70);
LAB_00e31b20:
                (*pcVar10)(plVar9,lVar16);
              }
            }
          }
        }
      }
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0x100000000;
      lVar18 = lVar18 + 0x1d0;
    } while (uVar17 < (ulong)((*(long *)(lVar6 + 0x40) - lVar8 >> 4) * 0x34f72c234f72c235));
  }
  do {
    lVar8 = *plVar3;
    lVar18 = *(long *)(lVar6 + 0xd78);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd78) = lVar18;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar15 = *plVar3;
    lVar16 = *(long *)(lVar6 + 0xd78);
    if (lVar15 != lVar8 || lVar16 != lVar18) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x00e31c98;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar8;
      *(long *)(lVar6 + 0xd74) = lVar18 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
joined_r0x00e31c98:
  do {
    if (bVar11) {
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0xd80));
      puVar13 = *(undefined8 **)(param_1 + 0x358);
      puVar12 = *(undefined8 **)(param_1 + 0x360);
      if (((puVar13 != puVar12) &&
          ((**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,lVar2,lVar1),
          puVar13 + 1 != puVar12)) &&
         ((**(code **)(*(long *)puVar13[1] + 0x28))((long *)puVar13[1],lVar2,lVar1),
         puVar13 + 2 != puVar12)) {
        (**(code **)(*(long *)puVar13[2] + 0x28))((long *)puVar13[2],lVar2,lVar1);
        for (puVar13 = puVar13 + 3; puVar13 != puVar12; puVar13 = puVar13 + 1) {
          (**(code **)(*(long *)*puVar13 + 0x28))((long *)*puVar13,lVar2,lVar1);
        }
      }
      local_80 = 0x825cb20777c363e6;
      puStack_78 = PTR_s_RT_PfxCompositeFeedback_047e1348;
      local_70 = 0x1f;
      local_68 = (long *)0x0;
      FUN_00e31eac(lVar2,&local_80,param_1 + (ulong)*(uint *)(param_1 + 0x440) * 8 + 0x448,0);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      uVar17 = (ulong)~*(uint *)(param_1 + 0x440) & 1;
      *(int *)(param_1 + 0x440) = (int)uVar17;
      local_80 = 0xf39050034a80aa09;
      puStack_78 = PTR_s_RT_PfxComposite_047e1350;
      local_70 = 0x1f;
      local_68 = (long *)0x0;
      FUN_00e31eac(lVar2,&local_80,param_1 + uVar17 * 8 + 0x448,0);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      DAT_0485ac18 = 0;
      return;
    }
    do {
      lVar8 = *plVar3;
      lVar18 = *(long *)(lVar6 + 0xd78);
      if (lVar8 != lVar15 || lVar18 != lVar16) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar15 = lVar8;
        lVar16 = lVar18;
        goto joined_r0x00e31c98;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar15;
        *(long *)(lVar6 + 0xd74) = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
    lVar15 = lVar8;
    lVar16 = lVar18;
  } while( true );
}


