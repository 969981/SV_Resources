/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027031bc; name: FUN_027031bc
 */


int FUN_027031bc(long param_1)

{
  short *psVar1;
  long lVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  int unaff_w19;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    return 0;
  }
  if (*(short *)(lVar6 + 0x1a) == 0) {
    return 0;
  }
  psVar1 = (short *)(lVar6 + 0x1a);
  sVar10 = *(short *)(lVar6 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar10) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0270321c;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0270321c:
      bVar9 = false;
    }
    if (bVar9) {
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = FUN_00c8c7b4(*(undefined8 *)(lVar6 + 0x148));
      if ((lVar5 == 0) || (lVar7 = *(long *)(lVar5 + 0x18), lVar7 == 0)) goto LAB_027032c4;
      lVar2 = lVar7 + 0x20;
      lVar8 = *(long *)(lVar7 + 0x28);
      lVar7 = lVar8;
      if ((lVar2 == lVar8) || (lVar5 == lVar8 + -8)) goto LAB_02703298;
      break;
    }
    sVar10 = sVar3;
    if (sVar3 == 0) {
      return 0;
    }
  } while( true );
  while (lVar5 != lVar7 + -8) {
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar2 == lVar7) goto LAB_027032c4;
  }
LAB_02703298:
  if (lVar2 == lVar7) {
LAB_027032c4:
    bVar9 = true;
  }
  else if (lVar8 == lVar7) {
    bVar9 = false;
    unaff_w19 = 0;
  }
  else {
    unaff_w19 = 0;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      unaff_w19 = unaff_w19 + 1;
    } while (lVar8 != lVar7);
    bVar9 = false;
  }
  (**(code **)(*(long *)(lVar6 + -0x28) + 0x60))((long *)(lVar6 + -0x28));
  if (!bVar9) {
    return unaff_w19;
  }
  return 0;
}


