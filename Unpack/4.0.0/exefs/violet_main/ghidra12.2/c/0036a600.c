/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a600; name: FUN_0036a600
 */


long FUN_0036a600(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = FUN_0038c780(0x140);
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 0;
  FUN_00368450(lVar4 + 0x18);
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar6 * 0x20);
      if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
         (plVar5 = *(long **)*puVar1, plVar5 != (long *)0x0)) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_48 = puVar1[1];
      local_50 = *puVar1;
      uStack_38 = puVar1[3];
      uStack_40 = puVar1[2];
      FUN_003686e0(lVar4 + 0x18,&local_50);
      lVar6 = lVar6 + 1;
    } while (lVar6 != param_2);
  }
  return lVar4;
}


