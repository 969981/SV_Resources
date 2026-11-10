/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d2e9c; name: FUN_031d2e9c
 */


ulong FUN_031d2e9c(undefined8 *param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    *(undefined1 *)*param_1 = 1;
    iVar8 = *(int *)((long)param_1 + 0x1c);
    if ((int)(param_3 & 1) < iVar8) {
      uVar12 = 0;
      lVar7 = tpidr_el0;
      do {
        iVar2 = *(int *)((long)param_1 + 0x14);
        lVar10 = *(long *)(param_1[1] + (long)iVar2 * 8);
        *(int *)((long)param_1 + 0x1c) = iVar8 + -1;
        iVar8 = 0;
        if (iVar2 + 1 != *(int *)(param_1 + 2)) {
          iVar8 = iVar2 + 1;
        }
        *(int *)((long)param_1 + 0x14) = iVar8;
        lVar13 = *(long *)(lVar10 + 0x20);
        uVar11 = *(ulong *)(lVar10 + 0x10) & 0xfffffffffffffffc;
        uVar3 = *(ushort *)(lVar13 + 0x18);
        uVar4 = *(ushort *)(uVar11 + 8);
        *(ulong *)(lVar10 + 0x10) = *(ulong *)(lVar10 + 0x10) | 2;
        uVar11 = (ulong)*(byte *)(uVar11 + 0x18);
        lVar10 = ((ulong)uVar4 & 0x7fff) + ((ulong)uVar3 & 0x3fff);
        lVar9 = *(long *)(lVar7 + 0x1000b8);
        if (lVar9 == 0) {
          lVar9 = FUN_00e5d3b4();
          *(long *)(lVar7 + 0x1000b8) = lVar9;
        }
        if ((int)lVar10 != 0) {
          lVar9 = *(long *)(lVar9 + 0x3d8);
          plVar1 = (long *)(DAT_04883ee8 + uVar11 * 0x210 + 0xf0);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = *plVar1 - lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          lVar9 = lVar9 + 0x28 + uVar11 * 0xe8;
          *(long *)(lVar9 + 0x98) = *(long *)(lVar9 + 0x98) - lVar10;
        }
        FUN_031d1828(lVar13);
        uVar12 = uVar12 + lVar10;
      } while ((uVar12 < param_2) &&
              (iVar8 = *(int *)((long)param_1 + 0x1c), (int)(param_3 & 1) < iVar8));
    }
    else {
      uVar12 = 0;
    }
    *(undefined1 *)*param_1 = 0;
  }
  return uVar12;
}


