/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190e714; name: FUN_0190e714
 */


bool FUN_0190e714(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar13 = (long *)(param_1 + 0x30);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar10 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar3;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB_0190e758;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar13 == 0) {
          cVar10 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar3;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB_0190e758;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar3;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB_0190e758:
  lVar11 = *(long *)(param_1 + 0x198);
  lVar7 = *(long *)(param_1 + 0x1b8);
  lVar3 = *(long *)(param_1 + 0x1d8);
  lVar12 = *(long *)(param_1 + 0x1f8);
  cVar10 = '\0';
  if (lVar11 != 0) {
    uVar5 = *(ulong *)(lVar11 + 0xb0);
    if (((lVar7 == 0) && (lVar3 == 0)) && (lVar12 == 0)) {
      if (uVar5 != 0) {
        if ((*(long *)(lVar11 + 0x48) == 0) || ((**(byte **)(lVar11 + 0x40) & 1) == 0)) {
          bVar2 = (*(code *)**(undefined8 **)(lVar11 + 8))
                            (*(undefined8 **)(lVar11 + 8) + 4,param_2,param_3);
          *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
          uVar5 = *(ulong *)(lVar11 + 0xb0);
        }
        if (1 < uVar5) {
          if ((*(ulong *)(lVar11 + 0x48) < 2) || ((**(byte **)(lVar11 + 0x40) >> 1 & 1) == 0)) {
            bVar2 = (**(code **)(*(long *)(lVar11 + 8) + 0x80))
                              (*(long *)(lVar11 + 8) + 0xa0,param_2,param_3);
            *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
            uVar5 = *(ulong *)(lVar11 + 0xb0);
          }
          if (2 < uVar5) {
            uVar15 = 2;
            lVar17 = 0x100;
            do {
              if ((uVar15 < uVar5) &&
                 ((*(ulong *)(lVar11 + 0x48) <= uVar15 ||
                  ((*(ulong *)(*(long *)(lVar11 + 0x40) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar15 & 0x3f) & 1) == 0)))) {
                puVar4 = (undefined8 *)(*(long *)(lVar11 + 8) + lVar17);
                bVar2 = (*(code *)*puVar4)(puVar4 + 4,param_2,param_3);
                *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
                uVar5 = *(ulong *)(lVar11 + 0xb0);
              }
              uVar15 = uVar15 + 1;
              lVar17 = lVar17 + 0x80;
            } while (uVar15 < uVar5);
          }
        }
      }
    }
    else if (uVar5 != 0) {
      if ((*(long *)(lVar11 + 0x48) == 0) || ((**(byte **)(lVar11 + 0x40) & 1) == 0)) {
        bVar2 = (*(code *)**(undefined8 **)(lVar11 + 8))
                          (*(undefined8 **)(lVar11 + 8) + 4,param_2,param_3);
        *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
        uVar5 = *(ulong *)(lVar11 + 0xb0);
      }
      if (1 < uVar5) {
        if ((*(ulong *)(lVar11 + 0x48) < 2) || ((**(byte **)(lVar11 + 0x40) >> 1 & 1) == 0)) {
          bVar2 = (**(code **)(*(long *)(lVar11 + 8) + 0x80))
                            (*(long *)(lVar11 + 8) + 0xa0,param_2,param_3);
          *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
          uVar5 = *(ulong *)(lVar11 + 0xb0);
        }
        if (2 < uVar5) {
          uVar15 = 2;
          lVar17 = 0x100;
          do {
            if ((uVar15 < uVar5) &&
               ((*(ulong *)(lVar11 + 0x48) <= uVar15 ||
                ((*(ulong *)(*(long *)(lVar11 + 0x40) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar15 & 0x3f) & 1) == 0)))) {
              puVar4 = (undefined8 *)(*(long *)(lVar11 + 8) + lVar17);
              bVar2 = (*(code *)*puVar4)(puVar4 + 4,param_2,param_3);
              *(byte *)(lVar11 + 0xc0) = bVar2 & 1;
              uVar5 = *(ulong *)(lVar11 + 0xb0);
            }
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + 0x80;
          } while (uVar15 < uVar5);
        }
      }
    }
    cVar10 = *(char *)(lVar11 + 0xc0);
  }
  if (lVar7 != 0) {
    FUN_0190edd4(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_0190ee3c(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3);
  }
  if (lVar12 != 0) {
    FUN_0190eec0(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3);
  }
  plVar13 = (long *)(param_1 + 0x48);
  lVar7 = *plVar13;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar7) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0190e794:
    if (*plVar13 == 0) goto code_r0x0190e79c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar13 == 0) {
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0190e7a4;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *plVar13 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0190e7a4:
    bVar9 = false;
    goto LAB_0190e7a8;
  }
  plVar13 = (long *)0x0;
  bVar9 = true;
LAB_0190e7a8:
  plVar8 = (long *)(param_1 + 0x60);
  puVar4 = (undefined8 *)*plVar8;
  puVar16 = *(undefined8 **)(param_1 + 0x68);
  puVar14 = puVar4;
  if (puVar4 != puVar16) {
    do {
      (*(code *)*puVar4)(puVar4 + 4);
      puVar4 = puVar4 + 0x20;
    } while (puVar4 != puVar16);
    puVar14 = *(undefined8 **)(param_1 + 0x60);
    puVar16 = *(undefined8 **)(param_1 + 0x68);
    puVar4 = puVar14;
    if (puVar16 == puVar14) {
      puVar14 = puVar16;
    }
    else {
      if (puVar14 != puVar16) {
        do {
          pcVar6 = (code *)puVar16[-0x1f];
          puVar4 = puVar16 + -0x20;
          if (pcVar6 != (code *)0x0) {
            puVar16[-0x1e] = 0;
            puVar16[-0x1d] = 0;
            puVar16[-0x20] = 0;
            puVar16[-0x1f] = 0;
            (*pcVar6)(puVar16 + -0x1c);
          }
          puVar16 = puVar4;
        } while (puVar14 != puVar4);
        puVar4 = (undefined8 *)*plVar8;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar14;
    }
  }
  lVar3 = (long)puVar14 - (long)puVar4;
  if ((ulong)(lVar3 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar4 >> 8)) {
    puVar4 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar4;
    if (lVar3 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar4 + 0x10))((long *)*puVar4,lVar3,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar4 + 0xe8))();
      }
    }
    lStack_70 = local_78 + (lVar3 >> 8) * 0x100;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar8,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar9) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  plVar13 = (long *)(param_1 + 0x98);
  lVar7 = *plVar13;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar7) {
    plVar13 = (long *)0x0;
    bVar9 = true;
LAB_0190e818:
    lVar3 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar3 != 0) {
      lVar3 = lVar3 >> 3;
      puVar4 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_0190ecbc(param_1,*puVar4);
        lVar3 = lVar3 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar9) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return cVar10 != '\0';
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0190e814;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar13 == 0) {
          cVar1 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar9) {
            *plVar13 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0190e814;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar9) {
      *plVar13 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0190e814:
  bVar9 = false;
  goto LAB_0190e818;
code_r0x0190e79c:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar9) {
    *plVar13 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0190e7a4;
  goto LAB_0190e794;
}


