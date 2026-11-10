/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcfb30; name: FUN_00dcfb30
 */


void FUN_00dcfb30(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  long *local_8;
  
  local_34 = 2;
  uStack_37 = 0;
  uStack_38 = 1;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3c = 10;
  local_30 = 0;
  uStack_28 = 0;
  FUN_00cb0eb4(&local_8,&local_48);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar4 = (long *)*param_1;
  *param_1 = (long)plVar1;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    if ((local_8 != (long *)0x0) && (local_8[1] != 0)) {
      plVar1 = local_8 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*local_8 + 0x18))();
      }
    }
  }
  return;
}


