/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e32f0; name: FUN_031e32f0
 */


void FUN_031e32f0(long *param_1,long *param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  uint uVar12;
  
  lVar5 = *param_2;
  if (lVar5 == 0 || param_3 < (ulong *)0x2) {
LAB_031e3314:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  uVar7 = *param_3;
  uVar6 = (uint)uVar7;
  if (((uVar6 >> 0x11 & 1) == 0) ||
     (uVar9 = CONCAT44(uVar6,uVar6) & 0x1ffff0001ffff,
     (param_3[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                           POPCOUNT((char)(uVar9 >> 0x10))) + 2] & 0x300000) == 0))
  goto LAB_031e3314;
  if (((param_2[2] & 1U) == 0) &&
     (((puVar10 = (undefined8 *)param_2[1], puVar10 < (undefined8 *)0x2 ||
       (uVar12 = (uint)*puVar10, (uVar12 >> 0x11 & 1) == 0)) ||
      (uVar9 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff,
      (puVar10[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                            POPCOUNT((char)(uVar9 >> 0x10))) + 2] & 0x300000) == 0 ||
      (puVar10[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                            POPCOUNT((char)(uVar9 >> 0x10))) + 2] & 0x500000) == 0)))) {
    puVar11 = param_3;
    if ((uVar6 >> 2 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
        if (puVar11 == (ulong *)0x0) {
          uVar7 = 0;
          goto LAB_031e3428;
        }
        uVar7 = *puVar11;
      } while (((uint)uVar7 >> 2 & 1) == 0);
    }
    uVar7 = puVar11[(uVar7 >> 1 & 1) + (uVar7 & 1) + 2];
LAB_031e3428:
    uVar9 = 0;
  }
  else {
    plVar4 = (long *)(param_2[2] & 0xfffffffffffffffe);
    uVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    lVar5 = *param_2;
    uVar9 = 1;
    uVar6 = (uint)*param_3;
    if ((uVar6 >> 0x11 & 1) == 0) {
      uVar8 = 0;
      goto LAB_031e3450;
    }
  }
  uVar6 = uVar6 & 0x1ffff;
  uVar8 = (ulong)(ushort)param_3[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))
                                              + POPCOUNT((char)(uVar6 >> 0x10))) + 2];
LAB_031e3450:
  *param_1 = uVar8 + lVar5;
  param_1[1] = (long)param_3;
  param_1[2] = uVar9 | uVar7;
  if (uVar9 == 0 && (uVar7 & 1) == 0) {
    return;
  }
  piVar1 = (int *)((uVar7 & 0xfffffffffffffffe) + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


