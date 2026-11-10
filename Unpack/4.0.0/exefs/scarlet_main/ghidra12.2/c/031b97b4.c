/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b97b4; name: FUN_031b97b4
 */


undefined8 FUN_031b97b4(undefined4 param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 local_38 [16];
  ulong local_28;
  undefined4 local_4;
  
  local_28 = 0;
  puVar9 = (undefined8 *)PTR_DAT_047e5928;
  do {
    uVar11 = (uint)*puVar9;
    local_4 = param_1;
    if ((uVar11 >> 0xb & 1) != 0) {
      uVar10 = CONCAT44(uVar11,uVar11) & 0x7ff000007ff;
      if ((code *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2]
          != (code *)0x0) {
        local_38 = (*(code *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                 POPCOUNT((char)(uVar10 >> 8))) + 2])(&local_4);
        puVar8 = local_38._8_8_;
        if (puVar8 == (ulong *)0x0) goto LAB_031b983c;
        goto LAB_031b982c;
      }
      break;
    }
    puVar9 = (undefined8 *)puVar9[1];
  } while (puVar9 != (undefined8 *)0x0);
  local_38._8_8_ = PTR_DAT_047e5928;
  local_38._0_8_ = &local_4;
  puVar8 = (ulong *)PTR_DAT_047e5928;
LAB_031b982c:
  do {
    uVar10 = *puVar8;
    if (((uint)uVar10 >> 2 & 1) != 0) {
      uVar10 = puVar8[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
      if ((uVar10 & 1) != 0) {
        piVar1 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_031b9874;
    }
    puVar8 = (ulong *)puVar8[1];
  } while (puVar8 != (ulong *)0x0);
LAB_031b983c:
  uVar10 = 0;
LAB_031b9874:
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      local_28 = uVar10;
      (**(code **)(*plVar6 + 8))();
      uVar10 = local_28;
    }
  }
  local_28 = uVar10;
  uVar7 = FUN_031d4cac(PTR_DAT_047e5930,local_38);
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return uVar7;
}


