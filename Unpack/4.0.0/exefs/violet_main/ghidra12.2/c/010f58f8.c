/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f58f8; name: FUN_010f58f8
 */


undefined8 FUN_010f58f8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  
  lVar10 = *(long *)(param_2 + 0x10);
  puVar13 = (uint *)*param_3;
  uVar4 = *puVar13;
  FUN_010f5c50(lVar10,*(undefined8 *)(lVar10 + 8));
  plVar7 = (long *)(lVar10 + 0x110);
  lVar11 = *plVar7;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar11) {
    bVar12 = true;
LAB_010f5954:
    plVar7 = (long *)FUN_010f5b40(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
    if ((*(long **)(lVar10 + 0x130) == plVar7) || (*plVar7 == 0)) {
      plVar7 = (long *)FUN_010f5b40(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168))
      ;
      if (*(long **)(lVar10 + 0x168) == plVar7) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*plVar7 != 0) {
          lVar6 = *plVar7 + -0x20;
        }
      }
    }
    else {
      lVar6 = *plVar7 + -0x20;
    }
    if (!bVar12) {
      *(undefined8 *)(lVar10 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
    }
    if (lVar6 != 0) {
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
          (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar8 == 0)) ||
         (*(char *)((long)piVar1 + uVar8) == '\0')) {
        puVar9 = (undefined8 *)(lVar6 + 0x154);
        bVar12 = true;
        *(undefined1 *)(lVar6 + 0x13b) = 0;
      }
      else {
        bVar12 = false;
        *(undefined1 *)(lVar6 + 0x13b) = 1;
        puVar9 = (undefined8 *)(lVar6 + 0x168);
        *(float *)(lVar6 + 0x178) = ABS(*(float *)(lVar6 + 0x16c) - *(float *)(lVar6 + 0x174));
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      fVar14 = 0.0;
      fVar15 = 0.0;
      *(undefined4 *)(lVar6 + 0x150) = *(undefined4 *)(puVar9 + 2);
      *(undefined8 *)(lVar6 + 0x140) = uVar2;
      *(undefined8 *)(lVar6 + 0x148) = uVar3;
      if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        fVar15 = 0.0;
        if (uVar8 != 0) {
          fVar15 = *(float *)((long)piVar1 + uVar8);
        }
      }
      *(float *)(lVar6 + 0x168) = fVar15;
      fVar15 = fVar15 * fVar15;
      *(float *)(lVar6 + 0x16c) = fVar15;
      puVar9 = (undefined8 *)(lVar6 + 0x154);
      if (!bVar12) {
        puVar9 = (undefined8 *)(lVar6 + 0x168);
      }
      *(float *)(lVar6 + 0x178) = ABS(fVar15 - *(float *)(lVar6 + 0x174));
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      *(undefined4 *)(lVar6 + 0x150) = *(undefined4 *)(puVar9 + 2);
      *(undefined8 *)(lVar6 + 0x140) = uVar2;
      *(undefined8 *)(lVar6 + 0x148) = uVar3;
      if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 != 0)) {
        fVar14 = *(float *)((long)piVar1 + uVar8);
      }
      *(float *)(lVar6 + 0x170) = fVar14;
      *(float *)(lVar6 + 0x174) = fVar14 * fVar14;
      *(float *)(lVar6 + 0x178) = ABS(fVar15 - fVar14 * fVar14);
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      *(undefined4 *)(lVar6 + 0x150) = *(undefined4 *)(puVar9 + 2);
      *(undefined8 *)(lVar6 + 0x140) = uVar2;
      *(undefined8 *)(lVar6 + 0x148) = uVar3;
    }
    return 2;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar12) {
      *plVar7 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_010f5950;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
        while (*plVar7 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar12) {
            *plVar7 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_010f5950;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar12) {
      *plVar7 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010f5950:
  bVar12 = false;
  goto LAB_010f5954;
}


