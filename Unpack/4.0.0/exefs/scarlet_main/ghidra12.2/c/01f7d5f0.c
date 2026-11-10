/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7d5f0; name: FUN_01f7d5f0
 */


void FUN_01f7d5f0(long param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_24;
  
  plVar7 = *(long **)(param_1 + 0x230);
  if (plVar7 == (long *)0x0) {
    fVar9 = 1.0;
    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  }
  else {
    bVar3 = (char)plVar7[9] != '\0';
    if ((char)plVar7[9] == '\0') {
      fVar10 = *(float *)(plVar7 + 7);
    }
    else {
      fVar9 = *(float *)((long)plVar7 + 0x3c);
      if (fVar9 == 0.0) {
        fVar10 = *(float *)((long)plVar7 + 0x34);
        *(undefined1 *)(plVar7 + 9) = 0;
        *(float *)(plVar7 + 7) = fVar10;
      }
      else {
        local_24 = *(float *)(plVar7 + 8) + 0.0;
        pfVar5 = (float *)((long)plVar7 + 0x3c);
        if (*(float *)(plVar7 + 8) + 0.0 <= fVar9) {
          pfVar5 = &local_24;
        }
        fVar9 = *pfVar5 / fVar9;
        *(float *)(plVar7 + 8) = *pfVar5;
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
          *(undefined1 *)(plVar7 + 9) = 0;
        }
        fVar10 = *(float *)(plVar7 + 6);
        fVar11 = *(float *)((long)plVar7 + 0x34);
        fVar9 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)((long)plVar7 + 0x44) * 8))
                                 (fVar9);
        fVar10 = fVar10 + (fVar11 - fVar10) * fVar9;
        *(float *)(plVar7 + 7) = fVar10;
      }
    }
    puVar2 = PTR_PTR_047d9248;
    fVar9 = (float)NEON_fminnm(fVar10,0x3f800000);
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      do {
        bVar3 = (char)plVar7[9] != '\0' || bVar3;
        if ((char)plVar7[9] == '\0') {
          fVar11 = *(float *)(plVar7 + 7);
        }
        else {
          fVar10 = *(float *)((long)plVar7 + 0x3c);
          if (fVar10 == 0.0) {
            fVar11 = *(float *)((long)plVar7 + 0x34);
            *(undefined1 *)(plVar7 + 9) = 0;
            *(float *)(plVar7 + 7) = fVar11;
          }
          else {
            local_24 = *(float *)(plVar7 + 8) + 0.0;
            pfVar5 = (float *)((long)plVar7 + 0x3c);
            if (*(float *)(plVar7 + 8) + 0.0 <= fVar10) {
              pfVar5 = &local_24;
            }
            fVar10 = *pfVar5 / fVar10;
            *(float *)(plVar7 + 8) = *pfVar5;
            if (1.0 <= fVar10) {
              fVar10 = 1.0;
              *(undefined1 *)(plVar7 + 9) = 0;
            }
            fVar11 = *(float *)(plVar7 + 6);
            fVar12 = *(float *)((long)plVar7 + 0x34);
            fVar10 = (float)(**(code **)(puVar2 + (ulong)*(uint *)((long)plVar7 + 0x44) * 8))
                                      (fVar10);
            fVar11 = fVar11 + (fVar12 - fVar11) * fVar10;
            *(float *)(plVar7 + 7) = fVar11;
          }
        }
        plVar7 = (long *)*plVar7;
        if (fVar9 <= fVar11) {
          fVar11 = fVar9;
        }
        fVar9 = fVar11;
      } while (plVar7 != (long *)0x0);
    }
    *(float *)(param_1 + 0x1ac) = fVar9;
    if (bVar3) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
    }
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    if (*(char *)(param_1 + 0x139) == '\0') {
      fVar9 = *(float *)(param_1 + 0x1b0);
      pfVar5 = (float *)(param_1 + 0x1a0);
    }
    else {
      pfVar5 = (float *)(param_1 + 0x1b0);
      fVar10 = *(float *)(param_1 + 0x1a8);
      if (*(float *)(param_1 + 0x1a0) <= *(float *)(param_1 + 0x1a8)) {
        fVar10 = *(float *)(param_1 + 0x1a0);
      }
      if (fVar10 <= fVar9) {
        fVar9 = fVar10;
      }
    }
    FUN_00d2f610(*pfVar5 * fVar9,param_1);
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
  }
  plVar7 = (long *)(lVar8 + 0x110);
  lVar6 = *plVar7;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar6) {
    bVar3 = true;
LAB_01f7d688:
    plVar7 = (long *)FUN_00d2fa80(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130));
    if ((*(long **)(lVar8 + 0x130) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_00d2fa80(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168));
      if (*(long **)(lVar8 + 0x168) == plVar7) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if (*plVar7 != 0) {
          lVar4 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar4 = *plVar7 + -0x20;
    }
    if (!bVar3) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x120) != 0)) {
      *(bool *)(*(long *)(lVar4 + 0x120) + 0x210) = 0.0 < *(float *)(param_1 + 0x1a4);
    }
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01f7d684;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01f7d684;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01f7d684:
  bVar3 = false;
  goto LAB_01f7d688;
}


