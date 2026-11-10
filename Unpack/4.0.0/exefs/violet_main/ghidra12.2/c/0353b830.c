/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353b830; name: FUN_0353b830
 */


ulong FUN_0353b830(int param_1,long param_2,ulong param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 local_68;
  
  iVar15 = (int)param_3;
  if (param_3 <= *(uint *)(param_2 + 0x1880)) {
    uVar8 = *(ulong *)(param_2 + 0x1870);
    lVar17 = (&DAT_048d2168)[(long)param_1 * 199];
    *(uint *)(param_2 + 0x1880) = *(uint *)(param_2 + 0x1880) - iVar15;
    uVar7 = uVar8 - *(long *)(param_2 + 0x1878);
    *(ulong *)(param_2 + 0x1870) = uVar8 + lVar17 * param_3;
    if (uVar7 != 0) {
      *(undefined4 *)(uVar8 + 0x28) = 2;
      uVar11 = *(ulong *)(&DAT_048d2170 + (long)param_1 * 0x638);
      *(undefined4 *)(uVar8 + 0x3c) = 0;
      *(int *)(uVar8 + 0x34) = (int)(uVar7 >> (uVar11 & 0x3f));
    }
    *(int *)(uVar8 + 0x2c) = iVar15;
    return uVar8;
  }
  lVar17 = (long)param_1;
  uVar8 = *(ulong *)(&DAT_048d2150 + (long)param_1 * 0x638);
  puVar18 = &DAT_048d2168 + (long)param_1 * 199;
  uVar7 = *puVar18;
  if ((uVar8 <= uVar7) &&
     (uVar11 = *(ulong *)(&DAT_048d2180 + lVar17 * 0x638),
     uVar11 <= *(ulong *)(&DAT_048d2188 + lVar17 * 0x638))) {
    bVar4 = false;
LAB_0353ba20:
    uVar13 = param_3;
    if (param_3 <= uVar11) {
      uVar13 = uVar11;
    }
    if (uVar7 < uVar8) {
      uVar14 = 0;
      if (uVar8 != 0) {
        uVar14 = (uVar13 * uVar7) / uVar8;
      }
      if (uVar13 * uVar7 != uVar14 * uVar8) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar13 / uVar11;
        }
        uVar13 = uVar11 + uVar8 * uVar11;
      }
    }
    uVar8 = uVar13 * uVar7;
    local_68 = 0;
    uVar11 = 0;
    if (uVar7 <= uVar8) {
      if (uVar7 <= *(ulong *)(&DAT_048d2160 + lVar17 * 0x638)) {
        uVar7 = 0;
      }
      uVar11 = uVar7;
    }
    lVar16 = uVar11 + uVar8;
    while (uVar8 = DAT_048d2d80, uVar7 = DAT_048d2d80 + lVar16,
          DAT_048d2d78 == 0 || uVar7 <= DAT_048d2d78) {
      while (DAT_048d2d80 == uVar8) {
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x48d2d80,0x10);
        if (bVar2) {
          cVar3 = ExclusiveMonitorsStatus();
          DAT_048d2d80 = uVar7;
        }
        if (cVar3 == '\0') {
          uVar8 = (**(code **)(&DAT_048d2108 + lVar17 * 0x638))(lVar16,&local_68);
          uVar6 = 0;
          if ((uVar11 != 0) && (uVar8 != 0)) {
            uVar11 = uVar11 - (uVar8 & (*(ulong *)(&DAT_048d2178 + lVar17 * 0x638) ^
                                       0xffffffffffffffff));
            uVar8 = uVar8 + uVar11;
            uVar6 = (undefined4)(uVar11 >> 3);
          }
          if (uVar8 != 0) {
            *(undefined4 *)(uVar8 + 0x3c) = uVar6;
            *(undefined4 *)(uVar8 + 0x28) = 1;
            uVar7 = uVar13 - param_3;
            *(int *)(uVar8 + 0x2c) = iVar15;
            *(int *)(uVar8 + 0x30) = (int)uVar13;
            *(undefined8 *)(uVar8 + 0x58) = local_68;
            *(int *)(uVar8 + 0x38) = (int)uVar13;
            if (param_3 <= uVar13 && uVar7 != 0) {
              lVar16 = uVar8 + *puVar18 * param_3;
              iVar15 = *(int *)(param_2 + 0x1880);
              if (iVar15 != 0) {
                lVar9 = *(long *)(param_2 + 0x1870);
                uVar11 = lVar9 - *(long *)(param_2 + 0x1878);
                if (uVar11 != 0) {
                  *(undefined4 *)(lVar9 + 0x28) = 2;
                  uVar13 = *(ulong *)(&DAT_048d2170 + lVar17 * 0x638);
                  *(undefined4 *)(lVar9 + 0x3c) = 0;
                  *(int *)(lVar9 + 0x34) = (int)(uVar11 >> (uVar13 & 0x3f));
                }
                *(int *)(lVar9 + 0x2c) = iVar15;
                FUN_0353b410(param_1,param_2,*(undefined8 *)(param_2 + 0x1870));
              }
              uVar11 = *(ulong *)(&DAT_048d2188 + lVar17 * 0x638);
              if (uVar11 <= uVar7 && uVar7 - uVar11 != 0) {
                uVar13 = *puVar18;
                lVar9 = *(long *)(&DAT_048d2590 + lVar17 * 0x638);
                if (lVar9 != 0) {
                  lVar12 = *(long *)(&DAT_048d25a0 + lVar17 * 0x638);
                  uVar10 = *(undefined8 *)(&DAT_048d2598 + lVar17 * 0x638);
                  if (lVar9 - lVar12 != 0) {
                    *(undefined4 *)(lVar9 + 0x28) = 2;
                    uVar14 = *(ulong *)(&DAT_048d2170 + lVar17 * 0x638);
                    *(undefined4 *)(lVar9 + 0x3c) = 0;
                    *(int *)(lVar9 + 0x34) = (int)((ulong)(lVar9 - lVar12) >> (uVar14 & 0x3f));
                  }
                  *(int *)(lVar9 + 0x2c) = (int)uVar10;
                  FUN_0353b6c0(param_1,*(long *)(&DAT_048d2590 + lVar17 * 0x638));
                }
                *(ulong *)(&DAT_048d25a0 + lVar17 * 0x638) = uVar8;
                *(ulong *)(&DAT_048d2598 + lVar17 * 0x638) = uVar7 - uVar11;
                *(ulong *)(&DAT_048d2590 + lVar17 * 0x638) = lVar16 + uVar13 * uVar11;
                uVar7 = uVar11;
              }
              *(ulong *)(param_2 + 0x1878) = uVar8;
              *(long *)(param_2 + 0x1870) = lVar16;
              *(int *)(param_2 + 0x1880) = (int)uVar7;
            }
          }
          if (!bVar4) {
            return uVar8;
          }
          goto LAB_0353bca0;
        }
      }
      ClearExclusiveLocal();
    }
    uVar8 = 0;
    if (!bVar4) {
      return 0;
    }
LAB_0353bca0:
    *(undefined4 *)(&DAT_048d2720 + lVar17 * 0x638) = 0;
    return uVar8;
  }
  piVar1 = (int *)(&DAT_048d2720 + lVar17 * 0x638);
LAB_0353b8b4:
  if (*piVar1 == 0) goto code_r0x0353b8bc;
  iVar5 = 1000;
  ClearExclusiveLocal();
  do {
    Yield();
    iVar5 = iVar5 + -1;
    do {
      if (*piVar1 != 0) {
        bVar4 = false;
        ClearExclusiveLocal();
        break;
      }
      bVar4 = true;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while ((iVar5 != 0) && (!bVar4));
  if (iVar5 == 0) {
    do {
      nn::os::SleepThread(100000);
      while (*piVar1 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_0353b960;
      }
      ClearExclusiveLocal();
    } while( true );
  }
LAB_0353b960:
  uVar7 = *(ulong *)(&DAT_048d2598 + lVar17 * 0x638);
  if (param_3 <= uVar7) {
    uVar8 = param_3;
    if (*(int *)(param_2 + 0x1880) == 0) {
      uVar8 = *(ulong *)(&DAT_048d2188 + lVar17 * 0x638);
    }
    lVar16 = lVar17 * 0x638;
    if (uVar8 <= uVar7) {
      uVar7 = uVar8;
    }
    uVar8 = *(ulong *)(&DAT_048d2590 + lVar16);
    lVar9 = *(long *)(&DAT_048d25a0 + lVar16);
    if (uVar8 - lVar9 != 0) {
      *(undefined4 *)(uVar8 + 0x28) = 2;
      uVar11 = *(ulong *)(&DAT_048d2170 + lVar17 * 0x638);
      *(undefined4 *)(uVar8 + 0x3c) = 0;
      *(int *)(uVar8 + 0x34) = (int)(uVar8 - lVar9 >> (uVar11 & 0x3f));
    }
    *(int *)(uVar8 + 0x2c) = (int)uVar7;
    lVar9 = *(long *)(&DAT_048d2598 + lVar17 * 0x638) - uVar7;
    *(long *)(&DAT_048d2598 + lVar17 * 0x638) = lVar9;
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = uVar8 + (uVar7 << (*(ulong *)(&DAT_048d2170 + lVar17 * 0x638) & 0x3f));
    }
    *(long *)(&DAT_048d2590 + lVar16) = lVar9;
    if (param_3 < uVar7) {
      uVar11 = *(ulong *)(&DAT_048d2170 + lVar17 * 0x638);
      *(undefined8 *)(param_2 + 0x1878) = *(undefined8 *)(&DAT_048d25a0 + lVar16);
      *(ulong *)(param_2 + 0x1870) = uVar8 + (param_3 << (uVar11 & 0x3f));
      *(int *)(param_2 + 0x1880) = (int)uVar7 - iVar15;
    }
    *(int *)(uVar8 + 0x2c) = iVar15;
    goto LAB_0353bca0;
  }
  uVar11 = *(ulong *)(&DAT_048d2180 + lVar17 * 0x638);
  uVar8 = *(ulong *)(&DAT_048d2150 + (long)param_1 * 0x638);
  uVar7 = *puVar18;
  bVar4 = true;
  goto LAB_0353ba20;
code_r0x0353b8bc:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
  if (bVar4) {
    *piVar1 = 1;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_0353b960;
  goto LAB_0353b8b4;
}


