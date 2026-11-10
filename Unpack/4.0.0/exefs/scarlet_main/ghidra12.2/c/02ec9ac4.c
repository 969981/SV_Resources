/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ec9ac4; name: FUN_02ec9ac4
 */


void FUN_02ec9ac4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  char cVar8;
  long lVar9;
  
  plVar5 = (long *)FUN_02ed2848(param_2,param_3,0,0);
  *(long *)(param_1 + 0x50) = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar1 = (long *)(param_2 + 0x10);
    do {
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  lVar9 = 0;
  if (plVar5 != (long *)0x0) {
    lVar9 = (long)plVar5 - (param_1 + 0x58);
  }
  *(long *)(param_1 + 0x58) = lVar9;
  lVar2 = 0;
  if (lVar9 != 0) {
    lVar2 = lVar9 + param_1 + 0x58;
  }
  if (*(long *)(lVar2 + 8) != 0) {
    plVar1 = (long *)(lVar2 + 0x10);
    do {
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x50) + 0x60))();
  if (0 < iVar4) {
    cVar8 = *(char *)(param_1 + 0x1c);
    uVar7 = iVar4 << 1;
    do {
      cVar8 = cVar8 + '\x01';
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    *(char *)(param_1 + 0x1c) = cVar8;
  }
  uVar6 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))();
  if ((uVar6 & 1) != 0) {
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x8000;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x1c) < *(int *)(param_3 + 8)) {
    *(char *)(param_1 + 0x1c) = (char)*(int *)(param_3 + 8);
  }
  if (plVar5[1] != 0) {
    plVar1 = plVar5 + 2;
    do {
      lVar9 = *plVar1;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar9 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02ec9bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
  return;
}


