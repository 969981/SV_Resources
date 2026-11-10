/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7508c; name: FUN_00e7508c
 */


undefined8 FUN_00e7508c(long *param_1,int *param_2)

{
  uint *puVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ushort *puVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  
  lVar10 = *param_1;
  plVar5 = (long *)(lVar10 + 0x110);
  lVar8 = *plVar5;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar8) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00e750c8:
    if (*plVar5 == 0) goto code_r0x00e750d0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x118));
          while (*plVar5 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar9) {
              *plVar5 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00e750d8;
          }
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar9) {
        *plVar5 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_00e750d8:
    bVar9 = false;
    goto LAB_00e750dc;
  }
  bVar9 = true;
LAB_00e750dc:
  plVar5 = (long *)FUN_00e75250(*(undefined8 *)(lVar10 + 0x128),*(undefined8 *)(lVar10 + 0x130));
  if ((*(long **)(lVar10 + 0x130) == plVar5) || (*plVar5 == 0)) {
    plVar5 = (long *)FUN_00e75250(*(undefined8 *)(lVar10 + 0x160),*(undefined8 *)(lVar10 + 0x168));
    if (*(long **)(lVar10 + 0x168) == plVar5) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      if (*plVar5 != 0) {
        lVar4 = *plVar5 + -0x20;
      }
    }
  }
  else {
    lVar4 = *plVar5 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar10 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x118));
  }
  if (lVar4 == 0) {
    lVar4 = FUN_00e75364(*param_1,*(undefined8 *)(*param_1 + 8));
  }
  puVar7 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar7;
  if ((uVar2 < 5) || ((ulong)puVar7[2] == 0)) {
LAB_00e75234:
    uVar6 = 0;
  }
  else {
    cVar3 = *(char *)((long)param_2 + (ulong)puVar7[2]);
    if (cVar3 == '\x01') {
      if ((uVar2 < 7) || ((ulong)puVar7[3] == 0)) {
        lVar8 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar7[3]);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
      FUN_00e756f0(lVar4,lVar8);
    }
    else {
      if (cVar3 != '\x02') goto LAB_00e75234;
      if ((uVar2 < 7) || ((ulong)puVar7[3] == 0)) {
        lVar8 = 0;
      }
      else {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar7[3]);
        lVar8 = (long)puVar1 + (ulong)*puVar1;
      }
      FUN_00e78f30(lVar4,lVar8);
    }
    uVar6 = 1;
  }
  return uVar6;
code_r0x00e750d0:
  cVar3 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar9) {
    *plVar5 = lVar4;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00e750d8;
  goto LAB_00e750c8;
}


