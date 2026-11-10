/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308b66c; name: FUN_0308b66c
 */


void FUN_0308b66c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_047e4fd8;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[4] = param_2;
  puVar4 = PTR_DAT_047d1a08;
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x68);
  lVar7 = *(long *)(lVar6 + 0xc0);
  if (lVar7 == 0) {
    local_38 = 0x20;
    lVar7 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(lVar7,"hkaiNavMeshStaticTreeFaceIterator");
    }
    FUN_03083954(lVar7,lVar6);
  }
  else if (*(long *)(lVar7 + 8) != 0) {
    plVar5 = (long *)(lVar7 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *(long *)(lVar6 + 0xc0);
  }
  plVar5 = (long *)param_1[3];
  param_1[3] = lVar7;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  (**(code **)(*(long *)param_1[3] + 0x48))
            ((long *)param_1[3],*(undefined8 *)(*(long *)(param_1[4] + 0x20) + 0x68));
  return;
}


