/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a760; name: FUN_0036a760
 */


long FUN_0036a760(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  lVar7 = FUN_0038c780(0x140);
  *(undefined4 *)(lVar7 + 0x10) = uVar4;
  *(undefined4 *)(lVar7 + 8) = 0;
  FUN_00368450(lVar7 + 0x18);
  if (lVar3 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(lVar2 + lVar9 * 0x20);
      if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
         (plVar8 = *(long **)*puVar1, plVar8 != (long *)0x0)) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_48 = puVar1[1];
      local_50 = *puVar1;
      uStack_38 = puVar1[3];
      uStack_40 = puVar1[2];
      FUN_003686e0(lVar7 + 0x18,&local_50);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar3);
  }
  return lVar7;
}


