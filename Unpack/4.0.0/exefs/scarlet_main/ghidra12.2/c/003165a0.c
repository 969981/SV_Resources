/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003165a0; name: FUN_003165a0
 */


undefined8 FUN_003165a0(uint *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  byte local_88 [16];
  ulong local_78;
  undefined1 auStack_70 [32];
  ulong local_50;
  undefined *puStack_48;
  ulong local_40;
  undefined *puStack_38;
  
  plVar15 = (long *)(param_2 & 0xfffffffffffffffc);
  if (*plVar15 == 0) {
    uVar11 = (ulong)*(byte *)(plVar15 + 1);
    lVar12 = plVar15[4];
  }
  else {
    uVar11 = plVar15[1];
    lVar12 = plVar15[4];
  }
  if (lVar12 == 0) {
    uVar13 = (ulong)*(byte *)(plVar15 + 5);
    uVar4 = param_1[3];
    local_40 = (ulong)param_1[4];
    if (param_1[4] <= uVar4) goto LAB_00316684;
  }
  else {
    uVar13 = plVar15[5];
    uVar4 = param_1[3];
    local_40 = (ulong)param_1[4];
    if (param_1[4] <= uVar4) {
LAB_00316684:
      uVar11 = uVar11 + uVar13 + 0x20;
      if (uVar11 <= local_40) {
        do {
          uVar4 = param_1[2];
          if (uVar11 <= local_40 - uVar4) {
            uVar4 = (uint)param_2 & 3;
            if (1 < uVar4) {
              plVar15 = plVar15 + 8;
              if (uVar4 == 2) {
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar7) {
                    *plVar15 = *plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
              else {
                do {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar7) {
                    *plVar15 = *plVar15 + 1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
              }
            }
            uVar4 = param_1[6];
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = (param_1[1] + *param_1) / uVar4;
            }
            *(ulong *)(*(long *)(param_1 + 8) + (ulong)((param_1[1] + *param_1) - uVar1 * uVar4) * 8
                      ) = param_2;
            param_1[1] = param_1[1] + 1;
            param_1[2] = param_1[2] + (int)uVar11;
            return 0;
          }
          uVar13 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
          plVar10 = (long *)(uVar13 & 0xfffffffffffffffc);
          if (*plVar10 == 0) {
            uVar14 = (ulong)*(byte *)(plVar10 + 1);
            if (plVar10[4] != 0) goto LAB_003166dc;
LAB_00316700:
            lVar12 = uVar14 + *(byte *)(plVar10 + 5);
          }
          else {
            uVar14 = plVar10[1];
            if (plVar10[4] == 0) goto LAB_00316700;
LAB_003166dc:
            lVar12 = uVar14 + plVar10[5];
          }
          if ((ulong)uVar4 < lVar12 + 0x20U) goto LAB_00316890;
          uVar5 = param_1[6];
          uVar1 = *param_1 + 1;
          param_1[2] = uVar4 - (int)(lVar12 + 0x20U);
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = uVar1 / uVar5;
          }
          uVar8 = (uint)uVar13 & 3;
          *param_1 = uVar1 - uVar4 * uVar5;
          param_1[1] = param_1[1] - 1;
          if (1 < uVar8) {
            plVar2 = plVar10 + 8;
            do {
              lVar12 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 + -1 == 0) {
              FUN_00376de0(uVar8,plVar10,(int)plVar10[9]);
            }
          }
          local_40 = (ulong)param_1[4];
        } while( true );
      }
      uVar4 = param_1[1];
      do {
        if (uVar4 == 0) {
          return 0;
        }
        uVar11 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
        plVar15 = (long *)(uVar11 & 0xfffffffffffffffc);
        if (*plVar15 == 0) {
          uVar13 = (ulong)*(byte *)(plVar15 + 1);
          if (plVar15[4] != 0) goto LAB_00316794;
LAB_003167a8:
          uVar14 = (ulong)*(byte *)(plVar15 + 5);
        }
        else {
          uVar13 = plVar15[1];
          if (plVar15[4] == 0) goto LAB_003167a8;
LAB_00316794:
          uVar14 = plVar15[5];
        }
        uVar13 = uVar13 + uVar14 + 0x20;
        if (param_1[2] < uVar13) {
LAB_00316890:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = param_1[6];
        uVar1 = *param_1 + 1;
        uVar4 = uVar4 - 1;
        param_1[1] = uVar4;
        param_1[2] = param_1[2] - (int)uVar13;
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar1 / uVar5;
        }
        uVar3 = (uint)uVar11 & 3;
        *param_1 = uVar1 - uVar8 * uVar5;
        if (1 < uVar3) {
          plVar10 = plVar15 + 8;
          do {
            lVar12 = *plVar10;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar12 + -1 == 0) {
            FUN_00376de0(uVar3,plVar15,(int)plVar15[9]);
          }
          uVar4 = param_1[1];
        }
      } while( true );
    }
  }
  local_50 = (ulong)uVar4;
  puStack_48 = PTR_FUN_047cc7b0;
  puStack_38 = PTR_FUN_047cc7b0;
  FUN_00391b20(local_88,
               "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)",
               0x52,&local_50,2);
  uVar11 = (ulong)local_88 | 1;
  if ((local_88[0] & 1) != 0) {
    uVar11 = local_78;
  }
                    /* try { // try from 00316624 to 00316647 has its CatchHandler @ 00316894 */
  FUN_00367770(auStack_70,uVar11);
  uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0xa0,auStack_70,0,0);
  if ((local_88[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_78);
  }
  return uVar9;
}


