/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320a6dc; name: FUN_0320a6dc
 */


void FUN_0320a6dc(long *param_1)

{
  int *piVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  
  cVar2 = (char)param_1[1];
  if (cVar2 == '\x02') {
    plVar4 = (long *)param_1[2];
  }
  else if (cVar2 == '\x01') {
    plVar4 = param_1 + 2;
  }
  else {
    if (cVar2 == '\0') goto LAB_0320a864;
    plVar4 = (long *)0x0;
  }
  puVar6 = (ulong *)*param_1;
  if (puVar6 != (ulong *)0x0) {
    puVar8 = puVar6;
LAB_0320a728:
    uVar10 = *puVar8;
    if (((uint)uVar10 >> 2 & 1) == 0) goto code_r0x0320a730;
    uVar10 = puVar8[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
    if ((uVar10 & 1) != 0) {
      piVar1 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar12 = false;
      goto joined_r0x0320a794;
    }
    goto LAB_0320a73c;
  }
LAB_0320a738:
  uVar10 = 0;
LAB_0320a73c:
  bVar12 = true;
joined_r0x0320a794:
  if (plVar4 != (long *)0x0) {
    puVar8 = puVar6;
    while (uVar11 = *puVar8, ((uint)uVar11 >> 8 & 1) == 0) {
      if (((uVar11 & 1) != 0) || (puVar8 = (ulong *)puVar8[1], puVar8 == (ulong *)0x0))
      goto LAB_0320a7cc;
    }
    if ((puVar8 != (ulong *)0x0) &&
       ((code *)puVar8[(ulong)(byte)POPCOUNT((char)uVar11) + 2] != (code *)0x0)) {
      (*(code *)puVar8[(ulong)(byte)POPCOUNT((char)uVar11) + 2])(plVar4,puVar6,1);
    }
  }
LAB_0320a7cc:
  if (!bVar12) {
    plVar5 = (long *)(uVar10 & 0xfffffffffffffffe);
    plVar4 = plVar5 + 1;
    do {
      lVar3 = *plVar4;
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *(int *)plVar4 = (int)lVar3 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar3 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (((char)param_1[1] == '\x02') && (param_1[3] != 0)) {
    puVar7 = (undefined8 *)*param_1;
    uVar9 = (uint)*puVar7;
    if ((uVar9 >> 0x13 & 1) == 0) {
      do {
        puVar7 = (undefined8 *)puVar7[1];
        uVar9 = (uint)*puVar7;
      } while ((uVar9 >> 0x13 & 1) == 0);
    }
    uVar10 = CONCAT44(uVar9,uVar9) & 0x7ffff0007ffff;
    (**(code **)(*(long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                               POPCOUNT((char)(uVar10 >> 8)) +
                                              POPCOUNT((char)(uVar10 >> 0x10))) + 2] + 0x20))
              ((long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                           POPCOUNT((char)(uVar10 >> 0x10))) + 2],param_1[2]);
  }
LAB_0320a864:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
code_r0x0320a730:
  puVar8 = (ulong *)puVar8[1];
  if (puVar8 == (ulong *)0x0) goto LAB_0320a738;
  goto LAB_0320a728;
}


