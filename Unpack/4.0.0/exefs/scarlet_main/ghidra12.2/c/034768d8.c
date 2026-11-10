/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034768d8; name: FUN_034768d8
 */


undefined8 FUN_034768d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  bVar4 = *(byte *)(param_1 + 1);
  uVar9 = (uint)*(ushort *)(param_1 + 2);
  uVar3 = *(uint *)PTR_DAT_047e6d08;
  if (*(ushort *)(param_1 + 2) < uVar3) {
    uVar9 = uVar3 & 0xffff;
    *(short *)(param_1 + 2) = (short)uVar3;
  }
  if ((bVar4 < 9) && (uVar3 == uVar9)) {
    plVar1 = &DAT_048afcf8 + (bVar4 - 1);
    plVar7 = (long *)*plVar1;
    if (plVar7 != (long *)0x0) {
      uVar9 = 0;
      do {
        plVar2 = plVar7 + 1;
        do {
          if ((int)*plVar2 != 0) {
            uVar9 = uVar9 + 1;
            ClearExclusiveLocal();
            if (1000 < uVar9) {
              nn::os::SleepThread(100000);
            }
            goto LAB_034769a0;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar10 = *plVar7;
        while ((long *)*plVar1 == plVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_034769e0;
        }
        ClearExclusiveLocal();
        *(int *)plVar2 = 0;
LAB_034769a0:
        plVar7 = (long *)*plVar1;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))
                             (5,(ulong)bVar4 * (ulong)*(ushort *)(param_1 + 2) * 4 + 0x20,0x10);
  if (plVar7 == (long *)0x0) {
    uVar8 = 0x34;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
LAB_034769e0:
    uVar8 = 1;
    *param_1 = (long)(plVar7 + 4);
    *(undefined2 *)((long)param_1 + 0x12) = 0;
  }
  return uVar8;
}


