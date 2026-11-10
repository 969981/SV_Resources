/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec52e8; name: FUN_00ec52e8
 */


bool FUN_00ec52e8(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  short sVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  lVar7 = *param_2;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) {
    return false;
  }
  psVar1 = (short *)(lVar7 + 0x1a);
  sVar12 = *(short *)(lVar7 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar12) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00ec5340;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00ec5340:
      bVar4 = false;
    }
    if (bVar4) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) {
        return false;
      }
      if (((*PTR_DAT_047d88d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar13 = *(long *)PTR_DAT_047d88d8;
      *(long *)PTR_DAT_047d88e0 = lVar13;
      uVar9 = *(ulong *)(lVar13 + 0x4c0);
      if (uVar9 == 0) goto LAB_00ec5488;
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar8 = *(ulong *)(lVar7 + 0x340);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & uVar8;
      }
      else if (uVar8 < uVar9) {
        uVar11 = uVar8;
      }
      else {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar8 / uVar9;
        }
        uVar11 = uVar8 - uVar11 * uVar9;
      }
      plVar14 = *(long **)(*(long *)(lVar13 + 0x4b8) + uVar11 * 8);
      if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0))
      goto LAB_00ec5488;
      if (1 < uVar10) break;
      goto LAB_00ec5450;
    }
    sVar12 = sVar2;
    if (sVar2 == 0) {
      return false;
    }
  } while( true );
  do {
    uVar10 = plVar14[1];
    if (uVar10 == uVar8) {
      if (plVar14[2] == uVar8) goto LAB_00ec5438;
    }
    else {
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar5 * uVar9;
      }
      if (uVar10 != uVar11) break;
    }
    plVar14 = (long *)*plVar14;
  } while (plVar14 != (long *)0x0);
LAB_00ec5488:
  plVar15 = (long *)0x0;
  goto LAB_00ec548c;
LAB_00ec5438:
  plVar15 = plVar14;
  goto LAB_00ec548c;
  while( true ) {
    plVar14 = (long *)*plVar14;
    plVar15 = (long *)0x0;
    if (plVar14 == (long *)0x0) break;
LAB_00ec5450:
    if (plVar14[1] == uVar8) {
      if (plVar14[2] == uVar8) goto LAB_00ec5438;
    }
    else if ((plVar14[1] & uVar9 - 1) != uVar11) goto LAB_00ec5488;
  }
LAB_00ec548c:
  (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
  return plVar15 != (long *)0x0;
}


