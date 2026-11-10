/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033468cc; name: FUN_033468cc
 */


void FUN_033468cc(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                 undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_38;
  
  *param_1 = &PTR_LAB_047acb38;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = &DAT_03d7702c;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xc] = param_4;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  if ((param_4 != 0) && (*(long *)(param_4 + 8) != 0)) {
    plVar6 = (long *)(param_4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0xd] = param_2;
  param_1[0xe] = param_3;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = param_5;
  if (param_3 == 0) {
    param_1[0xe] = *(undefined8 *)PTR_DAT_047ddc48;
  }
  puVar4 = PTR_DAT_047d1a08;
  if (param_1[0xc] == 0) {
    local_38 = 0x58;
    puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
      (**(code **)(puVar4 + 0x10))(puVar5,"PatchInfoCache");
    }
    *puVar5 = &PTR_LAB_047acb68;
    puVar5[1] = 0xffffffff;
    puVar5[2] = 1;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    puVar5[4] = 0x8000000000000000;
    puVar5[5] = 0;
    puVar5[6] = 0x8000000000000000;
    puVar5[7] = &DAT_03d7702c;
    puVar5[9] = 0;
    puVar5[10] = 0x8000000000000000;
    plVar6 = (long *)param_1[0xc];
    param_1[0xc] = puVar5;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
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
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  return;
}


