/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f02408; name: FUN_02f02408
 */


void FUN_02f02408(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  *param_1 = (long)(PTR_DAT_047e4030 + 0x10);
  if ((char)param_1[0xc] != '\0') {
    FUN_02e8304c(param_1 + 0xe,param_1);
  }
  puVar6 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar8 = (long *)(param_1[0xe] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xe] & 3U) == 0) {
        param_1[0xe] = (ulong)plVar8 | 1;
        do {
          lVar7 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xe] = 0;
        if (*puVar6 == '\0') goto LAB_02f02504;
      }
      else {
        do {
          plVar10 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar10 | 1;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
    plVar8 = (long *)(param_1[0xd] & 0xfffffffffffffffc);
    if (plVar8 != (long *)0x0) {
      if ((param_1[0xd] & 3U) == 0) {
        param_1[0xd] = (ulong)plVar8 | 1;
        do {
          lVar7 = *plVar8;
          plVar8 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          (**(code **)(lVar7 + 8))();
        } while (plVar8 != (long *)0x0);
        param_1[0xd] = 0;
      }
      else {
        do {
          plVar10 = (long *)(plVar8[1] & 0xfffffffffffffffc);
          plVar8[1] = (ulong)plVar10 | 1;
          plVar8 = plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_02f02504:
  *param_1 = (long)(PTR_DAT_047e3368 + 0x10);
  plVar8 = param_1 + 6;
  uVar3 = *(uint *)(param_1 + 7);
  if (0 < (int)uVar3) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    plVar10 = (long *)(lVar7 + (ulong)uVar3 * 8);
    uVar9 = 0;
    do {
      plVar10 = plVar10 + -1;
      if (((*plVar10 != 0) && (plVar2 = (long *)(*plVar10 + (long)plVar10), plVar2 != (long *)0x0))
         && (plVar2[1] != 0)) {
        plVar1 = plVar2 + 2;
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  if (*(int *)((long)param_1 + 0x3c) < 0) {
    lVar7 = 0;
    if (*plVar8 != 0) {
      lVar7 = *plVar8 + (long)plVar8;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


