/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c6ba8; name: FUN_002c6ba8
 */


long FUN_002c6ba8(long *param_1,undefined8 *param_2,byte *param_3,byte *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_48;
  long *local_38;
  
  lVar12 = FUN_0049e770(PTR_FUN_047cba38,0xa8);
  if (lVar12 != 0) {
    local_38 = (long *)*param_1;
    *param_1 = 0;
    pbVar6 = *(byte **)(param_3 + 0x10);
    bVar11 = (*param_3 & 1) == 0;
    if (bVar11) {
      pbVar6 = param_3 + 1;
    }
    pbVar7 = *(byte **)(param_4 + 0x10);
    uVar5 = *param_2;
    uVar8 = param_2[1];
    uVar3 = (ulong)(*param_3 >> 1);
    if (!bVar11) {
      uVar3 = *(ulong *)(param_3 + 8);
    }
    bVar11 = (*param_4 & 1) != 0;
    uVar4 = (ulong)(*param_4 >> 1);
    if (bVar11) {
      uVar4 = *(ulong *)(param_4 + 8);
    }
    if (!bVar11) {
      pbVar7 = param_4 + 1;
    }
    local_48 = (undefined8 *)0x0;
    if (*param_5 != 0) {
      plVar1 = (long *)(*param_5 + 8);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = *plVar1 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      local_48 = (undefined8 *)*param_5;
    }
                    /* try { // try from 002c6c50 to 002c6c63 has its CatchHandler @ 002c6d10 */
    FUN_002cbb8c(lVar12,&local_38,uVar5,uVar8,pbVar6,uVar3,pbVar7,uVar4,&local_48);
    puVar10 = local_48;
    plVar1 = local_38;
    if (local_48 != (undefined8 *)0x0) {
      plVar2 = local_48 + 1;
      do {
        lVar13 = *plVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)*local_48)(local_48);
        FUN_0049e790(PTR_LAB_047cba48,puVar10);
        plVar1 = local_38;
      }
    }
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar13 = *plVar2;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar13 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar13 + -1 == 0) {
        local_38 = plVar1;
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN_0049e790(PTR_LAB_047cba48,plVar1);
      }
    }
  }
  return lVar12;
}


