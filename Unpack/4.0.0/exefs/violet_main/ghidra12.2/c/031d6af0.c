/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d6af0; name: FUN_031d6af0
 */


undefined4 FUN_031d6af0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long local_48 [2];
  ulong local_38;
  
  if (*param_1 != 0) {
    FUN_031e1bb4(local_48,param_1[1],PTR_DAT_047e5b68);
    lVar5 = local_48[0];
    if ((local_38 & 1) != 0) {
      plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar7 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
    if (lVar5 != 0) {
      FUN_031d4444(local_48,lVar5,param_2);
      if (local_48[0] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_031e7578(param_1,local_48);
      }
      if ((local_38 & 1) != 0) {
        plVar7 = (long *)(local_38 & 0xfffffffffffffffe);
        plVar1 = plVar7 + 1;
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      if (local_48[0] != 0) {
        return uVar6;
      }
    }
  }
  return 0x80040200;
}


