/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00310640; name: FUN_00310640
 */


void FUN_00310640(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = 0;
  do {
    lVar7 = param_1 + lVar9 * 0x10;
    puVar4 = *(undefined8 **)(lVar7 + 0x470);
    if ((puVar4 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar4, plVar6 != (long *)0x0)) {
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (*(code *)puVar4[3])(puVar4[4]);
      }
    }
    uVar5 = *(ulong *)(lVar7 + 0x70);
    uVar1 = (uint)uVar5 & 3;
    if (1 < uVar1) {
      uVar5 = uVar5 & 0xfffffffffffffffc;
      plVar6 = (long *)(uVar5 + 0x40);
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        FUN_00376de0(uVar1,uVar5,*(undefined4 *)(uVar5 + 0x48));
      }
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0x40);
  free(*(void **)(param_1 + 0x20));
  return;
}


