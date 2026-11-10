/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03539580; name: FUN_03539580
 */


void FUN_03539580(int param_1,ulong param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  
  iVar7 = *(int *)(param_2 + 0x189c);
  *(int *)(param_2 + 0x189c) = iVar7 + 1;
  if (iVar7 < 2) {
    if (*(int *)(param_2 + 0x1880) != 0) {
      uVar5 = FUN_0353b830(param_1,param_2);
      FUN_0353b6c0(param_1,uVar5);
      *(undefined4 *)(param_2 + 0x1880) = 0;
    }
    FUN_0353b230(param_1,param_2,0);
    lVar16 = 0;
    puVar1 = (ulong *)(&DAT_048d2178 + (long)param_1 * 0x638);
    do {
      plVar14 = (long *)(param_2 + lVar16 * 0x18 + 0x18);
      if (*plVar14 != 0) {
        FUN_0353b6c0(param_1);
      }
      *plVar14 = 0;
      puVar17 = (ulong *)(param_2 + lVar16 * 0x18 + 0x10);
      if ((ulong *)*puVar17 != (ulong *)0x0) {
        puVar11 = (ulong *)(param_2 + lVar16 * 0x18 + 8);
        puVar6 = (ulong *)*puVar17;
        do {
          puVar8 = (ulong *)*puVar11;
          puVar15 = (ulong *)puVar6[9];
          if (puVar6 == (ulong *)(*puVar1 & (ulong)puVar8)) {
            puVar13 = (ulong *)*puVar6;
            if ((ulong *)*puVar6 == (ulong *)0x0) {
              puVar12 = (ulong *)0x0;
            }
            else {
              do {
                puVar12 = puVar13;
                puVar13 = (ulong *)*puVar12;
              } while ((ulong *)*puVar12 != (ulong *)0x0);
            }
            iVar7 = 0;
            if (puVar8 != (ulong *)0x0) {
              puVar13 = puVar8;
              do {
                puVar13 = (ulong *)*puVar13;
                iVar7 = iVar7 + 1;
              } while (puVar13 != (ulong *)0x0);
            }
            puVar13 = puVar6;
            if (puVar12 != (ulong *)0x0) {
              puVar13 = puVar12;
            }
            *puVar13 = (ulong)puVar8;
            *puVar11 = 0;
            iVar7 = *(int *)((long)puVar6 + 0x14) - iVar7;
            *(int *)((long)puVar6 + 0x14) = iVar7;
          }
          else {
            iVar7 = *(int *)((long)puVar6 + 0x14);
          }
          if ((int)puVar6[4] == iVar7) {
            if ((ulong *)*puVar17 == puVar6) {
              *puVar17 = puVar6[9];
            }
            else {
              uVar18 = puVar6[9];
              uVar9 = puVar6[10];
              *(ulong *)(uVar9 + 0x48) = uVar18;
              if (uVar18 != 0) {
                *(ulong *)(uVar18 + 0x50) = uVar9;
              }
            }
            FUN_0353b6c0(param_1);
          }
          puVar6 = puVar15;
        } while (puVar15 != (ulong *)0x0);
      }
      puVar11 = (ulong *)(param_2 + lVar16 * 0x18 + 8);
      if (*puVar11 != 0) {
        puVar8 = (ulong *)(*puVar1 & *puVar11);
        *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + -1;
        puVar15 = (ulong *)*puVar11;
        puVar6 = (ulong *)(param_2 + lVar16 * 8 + 0x7a80);
        if ((ulong *)(*puVar1 & (ulong)puVar15) == puVar8) {
          puVar13 = (ulong *)*puVar8;
          if ((ulong *)*puVar8 == (ulong *)0x0) {
            puVar12 = (ulong *)0x0;
          }
          else {
            do {
              puVar12 = puVar13;
              puVar13 = (ulong *)*puVar12;
            } while ((ulong *)*puVar12 != (ulong *)0x0);
          }
          iVar7 = 0;
          if (puVar15 != (ulong *)0x0) {
            puVar13 = puVar15;
            do {
              puVar13 = (ulong *)*puVar13;
              iVar7 = iVar7 + 1;
            } while (puVar13 != (ulong *)0x0);
          }
          puVar13 = puVar8;
          if (puVar12 != (ulong *)0x0) {
            puVar13 = puVar12;
          }
          *puVar13 = (ulong)puVar15;
          *puVar11 = 0;
          iVar7 = *(int *)((long)puVar8 + 0x14) - iVar7;
          *(int *)((long)puVar8 + 0x14) = iVar7;
        }
        else {
          iVar7 = *(int *)((long)puVar8 + 0x14);
        }
        if ((int)puVar8[4] == iVar7) {
          if ((ulong *)*puVar6 == puVar8) {
            *puVar6 = puVar8[9];
          }
          else {
            uVar18 = puVar8[9];
            uVar9 = puVar8[10];
            *(ulong *)(uVar9 + 0x48) = uVar18;
            if (uVar18 != 0) {
              *(ulong *)(uVar18 + 0x50) = uVar9;
            }
          }
          FUN_0353b6c0(param_1);
        }
        else {
          if ((ulong *)*puVar6 == puVar8) {
            *puVar6 = puVar8[9];
          }
          else {
            uVar18 = puVar8[9];
            uVar9 = puVar8[10];
            *(ulong *)(uVar9 + 0x48) = uVar18;
            if (uVar18 != 0) {
              *(ulong *)(uVar18 + 0x50) = uVar9;
            }
          }
          uVar18 = 0;
          if (*puVar17 != 0) {
            *(ulong **)(*puVar17 + 0x50) = puVar8;
            uVar18 = *puVar17;
          }
          puVar8[9] = uVar18;
          *puVar17 = (ulong)puVar8;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x7e);
    lVar16 = 0;
    do {
      puVar17 = (ulong *)(param_2 + 0xbd8);
      if (lVar16 != 0) {
        puVar17 = (ulong *)(param_2 + lVar16 * 0x328 + 0x1580);
      }
      if (*puVar17 != 0) {
        uVar18 = 0;
        do {
          FUN_0353b6c0(param_1,puVar17[uVar18 + 1]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar17);
      }
      lVar16 = lVar16 + 1;
      *puVar17 = 0;
    } while (lVar16 != 0x20);
    lVar16 = 0;
    do {
      puVar17 = (ulong *)(param_2 + 0xbd8);
      if (lVar16 != 0) {
        puVar17 = (ulong *)(param_2 + lVar16 * 0x328 + 0x1580);
      }
      if (*puVar17 != 0) {
        uVar18 = 0;
        do {
          FUN_0353b6c0(param_1,puVar17[uVar18 + 1]);
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar17);
      }
      lVar16 = lVar16 + 1;
      *puVar17 = 0;
    } while (lVar16 != 0x20);
    lVar16 = 0;
    if (*(long *)(param_2 + 0x1868) == 0) {
      while ((*(long *)(param_2 + lVar16 + 8) == 0 && (*(long *)(param_2 + lVar16 + 0x10) == 0))) {
        lVar16 = lVar16 + 0x18;
        if (lVar16 == 0xbd0) {
          lVar16 = ((ulong)(long)*(int *)(param_2 + 0x1898) % 0x2f) * 8 + (long)param_1 * 0x638;
          uVar18 = *(ulong *)(&DAT_048d2100 + lVar16 + 0x4a8);
          if (uVar18 == param_2) {
            puVar10 = (undefined8 *)(&DAT_048d2100 + lVar16 + 0x4a8);
          }
          else {
            do {
              uVar9 = uVar18;
              uVar18 = *(ulong *)(uVar9 + 0x1888);
            } while (uVar18 != param_2);
            puVar10 = (undefined8 *)(uVar9 + 0x1888);
          }
          *puVar10 = *(undefined8 *)(param_2 + 0x1888);
          lVar16 = *(long *)(param_2 + 0x18a0);
          while (lVar16 != 0) {
            piVar2 = (int *)(lVar16 + 0x1884);
            do {
              iVar7 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar7 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 + -1 != 0) {
              return;
            }
            param_2 = *(ulong *)(param_2 + 0x18a0);
            lVar16 = *(long *)(param_2 + 0x18a0);
          }
          if (*(int *)(param_2 + 0x189c) < 2) {
            return;
          }
          if (*(int *)(param_2 + 0x1884) == 0) {
            FUN_0353b6c0(param_1,*puVar1 & param_2);
            return;
          }
          return;
        }
      }
    }
    iVar7 = *(int *)(param_2 + 0x189c) + -1;
  }
  *(int *)(param_2 + 0x189c) = iVar7;
  return;
}


