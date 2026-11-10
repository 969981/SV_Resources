/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d1d20; name: FUN_031d1d20
 */


void FUN_031d1d20(ulong param_1,ulong param_2,ulong *param_3)

{
  ulong *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  bVar4 = *(byte *)((long)param_3 + 0xe);
  bVar5 = *(byte *)((long)param_3 + 0xf);
  if (bVar5 != 0 || bVar4 != 0) {
    uVar11 = *param_3;
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    }
    if (uVar11 != 0) {
      param_1 = uVar11;
    }
    lVar9 = tpidr_el0;
    if (bVar4 != 0) {
      lVar12 = *(long *)(lVar9 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar12;
      }
      lVar10 = DAT_04883ee8;
      uVar3 = (uint)param_3[1];
      if (uVar3 != 0) {
        lVar12 = *(long *)(lVar12 + 0x3d8);
        uVar13 = param_2 & 0xff;
        uVar11 = (ulong)(bVar4 - 1) & 0xff;
        puVar1 = (ulong *)(DAT_04883ee8 + uVar11 * 0x210 + uVar13 * 0x18 + 0x60);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *puVar1 + (ulong)uVar3 * -0x10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar14 = (long *)(lVar10 + uVar11 * 0x210 + uVar13 * 0x18 + 0x58);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = *plVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar14 = (long *)(lVar12 + 0x28 + uVar11 * 0xe8 + uVar13 * 0x18);
        plVar14[1] = plVar14[1] + (ulong)uVar3 * -0x10;
        *plVar14 = *plVar14 + -1;
        if (*puVar1 <= *(ulong *)(lVar10 + uVar11 * 0x210 + uVar13 * 8 + 0x18)) {
          pbVar2 = (byte *)(lVar10 + uVar11 * 0x210 + uVar13 + 0x21c);
          do {
            bVar6 = *pbVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
            if (bVar8) {
              *pbVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((bVar6 & 1) != 0) {
            uVar3 = bVar4 - 1 & 0xff;
            uVar11 = DAT_04883ef8;
            if (uVar3 == 0x1f) {
              uVar3 = 0xffffffff;
            }
            while (plVar14 = (long *)(uVar11 & 0xfffffffffffffffc), plVar14 != (long *)0x0) {
              uVar11 = plVar14[1];
              if ((uVar11 & 3) == 0) {
                (**(code **)(*plVar14 + 0x20))(plVar14,uVar3,param_1,param_2 & 0xffffffff);
              }
            }
          }
        }
      }
    }
    if (bVar5 != 0) {
      lVar12 = *(long *)(lVar9 + 0x1000b8);
      if (lVar12 == 0) {
        lVar12 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar12;
      }
      lVar9 = DAT_04883ee8;
      uVar3 = (uint)param_3[1];
      if (uVar3 != 0) {
        lVar12 = *(long *)(lVar12 + 0x3d8);
        uVar13 = param_2 & 0xff;
        uVar11 = (ulong)(bVar5 - 1) & 0xff;
        puVar1 = (ulong *)(DAT_04883ee8 + uVar11 * 0x210 + uVar13 * 0x18 + 0x60);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar8) {
            *puVar1 = *puVar1 + (ulong)uVar3 * -0x10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar14 = (long *)(lVar9 + uVar11 * 0x210 + uVar13 * 0x18 + 0x58);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = *plVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        plVar14 = (long *)(lVar12 + 0x28 + uVar11 * 0xe8 + uVar13 * 0x18);
        plVar14[1] = plVar14[1] + (ulong)uVar3 * -0x10;
        *plVar14 = *plVar14 + -1;
        if (*puVar1 <= *(ulong *)(lVar9 + uVar11 * 0x210 + uVar13 * 8 + 0x18)) {
          pbVar2 = (byte *)(lVar9 + uVar11 * 0x210 + uVar13 + 0x21c);
          do {
            bVar4 = *pbVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
            if (bVar8) {
              *pbVar2 = 0;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if ((bVar4 & 1) != 0) {
            uVar3 = bVar5 - 1 & 0xff;
            uVar11 = DAT_04883ef8;
            if (uVar3 == 0x1f) {
              uVar3 = 0xffffffff;
            }
            while (plVar14 = (long *)(uVar11 & 0xfffffffffffffffc), plVar14 != (long *)0x0) {
              uVar11 = plVar14[1];
              if ((uVar11 & 3) == 0) {
                (**(code **)(*plVar14 + 0x20))(plVar14,uVar3,param_1,param_2 & 0xffffffff);
              }
            }
          }
        }
      }
    }
  }
  return;
}


