/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02219308; name: FUN_02219308
 */


void FUN_02219308(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if (param_1[2] != 0) {
    lVar7 = *param_1;
    plVar2 = (long *)param_1[1];
    *(undefined8 *)(*plVar2 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = *plVar2;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar8 = (long *)plVar2[1];
      plVar5 = (long *)plVar2[8];
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      plVar5 = (long *)param_1[3];
      uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,plVar2,0x50,0x10);
        plVar2 = plVar8;
      }
      else {
        FUN_00c48fe8(plVar5,plVar2,0x50,0x10);
        plVar2 = plVar8;
      }
    }
  }
  return;
}


