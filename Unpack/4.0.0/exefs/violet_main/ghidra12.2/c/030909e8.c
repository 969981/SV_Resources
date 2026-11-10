/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030909e8; name: FUN_030909e8
 */


void FUN_030909e8(long param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = FUN_0307d71c();
  }
  FUN_030928c8(uVar4,param_2,param_3);
  puVar3 = PTR_DAT_047d1a08;
  if (*param_4 != 0) {
    local_38 = 0x28;
    plVar5 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
      (**(code **)(puVar3 + 0x10))(plVar5,"hkaiNavMeshInstanceQueryMediator");
    }
    param_4 = (long *)*param_4;
    *plVar5 = (long)(PTR_DAT_047e4fd8 + 0x10);
    plVar5[1] = 0xffffffff;
    plVar5[2] = 1;
    plVar5[3] = (long)param_4;
    if ((param_4 != (long *)0x0) && (param_4[1] != 0)) {
      param_4 = param_4 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar2) {
          *param_4 = *param_4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      param_4 = (long *)plVar5[3];
    }
    plVar5[4] = param_1;
    (**(code **)(*param_4 + 0x48))(param_4,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68));
    plVar6 = *(long **)(param_1 + 0xc0);
    *(long **)(param_1 + 0xc0) = plVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar5 = plVar6 + 2;
      do {
        lVar7 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  return;
}


