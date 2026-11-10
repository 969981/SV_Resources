/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e02da4; name: FUN_01e02da4
 */


ulong FUN_01e02da4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  double dVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  bool bVar19;
  
  plVar1 = (long *)(param_1 + 0x80);
  do {
    lVar10 = *plVar1;
    cVar3 = '\x01';
    bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar19) {
      *plVar1 = lVar10;
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar10) {
    bVar19 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar9 = *plVar1;
      lVar18 = *(long *)(param_1 + 0x88);
      cVar3 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar19) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x88) = lVar18;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar9 != 0 && (lVar10 != lVar9))) {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x90));
        do {
          lVar9 = *plVar1;
          lVar18 = *(long *)(param_1 + 0x88);
          cVar3 = '\x01';
          bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar19) {
            *plVar1 = lVar9;
            *(long *)(param_1 + 0x88) = lVar18;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        lVar2 = *plVar1;
        if (lVar2 != lVar9 || *(long *)(param_1 + 0x88) != lVar18) {
          bVar19 = false;
          ClearExclusiveLocal();
          goto LAB_01e02e38;
        }
        cVar3 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar19) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x84) = lVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar19 = true;
LAB_01e02e38:
      lVar9 = lVar2;
      lVar18 = *(long *)(param_1 + 0x88);
    } while (!bVar19);
    bVar19 = false;
  }
  puVar5 = PTR_DAT_047d38f8;
  lVar18 = *(long *)(param_1 + 0x100);
  lVar9 = *(long *)PTR_DAT_047d38f8;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar9) {
    uVar15 = nn::os::GetCurrentThread();
LAB_01e03004:
    if (*(long *)puVar5 == 0) goto code_r0x01e0300c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
    do {
      if (*(long *)puVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
          while (*(long *)puVar5 == 0) {
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
            if (bVar12) {
              *(undefined8 *)puVar5 = uVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar12 = false;
              goto LAB_01e02e7c;
            }
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar12) {
        *(undefined8 *)puVar5 = uVar15;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01e03014:
    bVar12 = false;
    goto LAB_01e02e7c;
  }
  bVar12 = true;
LAB_01e02e7c:
  lVar10 = *(long *)(lVar18 + 0x80);
  if (-1 < *(int *)(lVar10 + 0x58)) {
    uVar15 = *(undefined8 *)(lVar18 + 0x70);
    uVar16 = *(undefined8 *)(param_1 + 0xc0);
    lVar18 = *(long *)puVar5;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar18) {
      uVar11 = nn::os::GetCurrentThread();
LAB_01e03024:
      if (*(long *)puVar5 == 0) goto code_r0x01e0302c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar3 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar13) {
                *(undefined8 *)puVar5 = uVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01e03034;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar13) {
          *(undefined8 *)puVar5 = uVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01e03034:
      bVar13 = false;
      goto LAB_01e02ea8;
    }
    bVar13 = true;
LAB_01e02ea8:
    iVar6 = FUN_00c5fc50(uVar15,0xfff0b9d8,(long)*(int *)(lVar10 + 0x5c));
    iVar7 = *(int *)(lVar10 + 0x58);
    if (!bVar13) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    if ((iVar6 == iVar7) && (iVar7 = FUN_00c5d9a0(uVar15,0xffffffff,uVar16), iVar7 == 5)) {
      uVar8 = FUN_00c5d9a0(uVar15,0xffffffff,param_2);
      uVar14 = 0;
      if (uVar8 < 5) {
        uVar17 = 0;
        if ((1 << (ulong)(uVar8 & 0x1f) & 0x1aU) != 0) {
          dVar4 = (double)FUN_00c41790(uVar15,0xffffffff,0);
          uVar17 = (ulong)(uint)(float)dVar4 << 0x20;
          uVar14 = 1;
        }
      }
      else {
        uVar17 = 0;
      }
      goto LAB_01e02f3c;
    }
  }
  uVar14 = 0;
  uVar17 = 0;
LAB_01e02f3c:
  if (!bVar12) {
    *(undefined8 *)puVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
  }
  if (!bVar19) {
    do {
      lVar10 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x88);
      cVar3 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar19) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x88) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar18 = *plVar1;
      lVar2 = *(long *)(param_1 + 0x88);
      if (lVar18 != lVar10 || lVar2 != lVar9) {
        bVar19 = false;
        ClearExclusiveLocal();
        goto joined_r0x01e02f80;
      }
      cVar3 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar19) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x84) = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar19 = true;
joined_r0x01e02f80:
    if (!bVar19) {
      do {
        lVar10 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x88);
        if (lVar10 != lVar18 || lVar9 != lVar2) {
          bVar19 = false;
          ClearExclusiveLocal();
          lVar18 = lVar10;
          lVar2 = lVar9;
          goto joined_r0x01e02f80;
        }
        cVar3 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar19) {
          *plVar1 = lVar18;
          *(long *)(param_1 + 0x84) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar19 = true;
      lVar18 = lVar10;
      lVar2 = lVar9;
      goto joined_r0x01e02f80;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x90));
  }
  return uVar17 | uVar14;
code_r0x01e0300c:
  cVar3 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar12) {
    *(undefined8 *)puVar5 = uVar15;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e03014;
  goto LAB_01e03004;
code_r0x01e0302c:
  cVar3 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar13) {
    *(undefined8 *)puVar5 = uVar11;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01e03034;
  goto LAB_01e03024;
}


