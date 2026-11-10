/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d77a0; name: FUN_031d77a0
 */


void FUN_031d77a0(ulong *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar6 = PTR_DAT_047e5b88;
  uVar9 = *param_1;
  if ((int)uVar9 < 1) {
    return;
  }
  uVar15 = 0;
  uVar16 = uVar9 & 0xffffffff;
  do {
    lVar5 = uVar9 * 0x10 + 8;
    if (*(char *)((long)param_1 + uVar15 + lVar5) == '\x01') {
      uVar9 = param_1[uVar15 * 2 + 1];
      puVar14 = (ulong *)param_1[uVar15 * 2 + 2];
      if (puVar14 != (ulong *)0x0) {
        puVar10 = puVar14;
LAB_031d7808:
        uVar12 = *puVar10;
        if (((uint)uVar12 >> 2 & 1) == 0) break;
        uVar12 = puVar10[(uVar12 >> 1 & 1) + (uVar12 & 1) + 2];
        if ((uVar12 & 1) != 0) {
          piVar1 = (int *)((uVar12 & 0xfffffffffffffffe) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar9 != 0) goto LAB_031d785c;
          plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
          plVar2 = plVar7 + 1;
          do {
            iVar8 = (int)*plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_031d7938;
        }
        goto LAB_031d7820;
      }
LAB_031d7818:
      uVar12 = 0;
LAB_031d7820:
      if (uVar9 != 0) {
LAB_031d785c:
        puVar10 = puVar14;
        while (uVar13 = *puVar10, ((uint)uVar13 >> 8 & 1) == 0) {
          if (((uVar13 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
          goto LAB_031d78b0;
        }
        if ((puVar10 != (ulong *)0x0) &&
           ((code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar13) + 2] != (code *)0x0)) {
          (*(code *)puVar10[(ulong)(byte)POPCOUNT((char)uVar13) + 2])(uVar9,puVar14,1);
        }
LAB_031d78b0:
        uVar11 = (uint)*puVar14;
        puVar10 = puVar14;
        if ((uVar11 >> 0x13 & 1) == 0) {
          do {
            puVar10 = (ulong *)puVar10[1];
            uVar11 = (uint)*puVar10;
          } while ((uVar11 >> 0x13 & 1) == 0);
        }
        uVar13 = CONCAT44(uVar11,uVar11) & 0x7ffff0007ffff;
        (**(code **)(*(long *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                    POPCOUNT((char)(uVar13 >> 8)) +
                                                   POPCOUNT((char)(uVar13 >> 0x10))) + 2] + 0x20))
                  ((long *)puVar10[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                 POPCOUNT((char)(uVar13 >> 8)) +
                                                POPCOUNT((char)(uVar13 >> 0x10))) + 2],uVar9,puVar14
                  );
        if ((uVar12 & 1) != 0) {
          plVar7 = (long *)(uVar12 & 0xfffffffffffffffe);
          plVar2 = plVar7 + 1;
          do {
            iVar8 = (int)*plVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_031d7938:
          if ((plVar7 != (long *)0x0) && (iVar8 == 1)) {
            (**(code **)(*plVar7 + 8))();
          }
        }
      }
      param_1[uVar15 * 2 + 1] = 0;
      param_1[uVar15 * 2 + 2] = (ulong)puVar6;
      *(undefined1 *)((long)param_1 + uVar15 + lVar5) = 0;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == uVar16) {
      return;
    }
    uVar9 = *param_1;
  } while( true );
  puVar10 = (ulong *)puVar10[1];
  if (puVar10 == (ulong *)0x0) goto LAB_031d7818;
  goto LAB_031d7808;
}


