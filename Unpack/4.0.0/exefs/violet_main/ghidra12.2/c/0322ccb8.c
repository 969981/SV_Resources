/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322ccb8; name: FUN_0322ccb8
 */


void FUN_0322ccb8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ThreadType *pTVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined4 local_64;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((undefined8 *)param_1[3] != param_1) {
    local_70 = *param_1;
    local_80[0] = 0;
    local_68 = 5;
    local_66 = 0;
    local_64 = 0;
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    local_60 = nn::os::GetThreadId(pTVar4);
    local_58 = 0;
    local_67 = 0xff;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    if (*(int *)(param_1 + 7) != 0) {
      plVar8 = (long *)param_1[6];
      lVar10 = (long)*(int *)(param_1 + 7) << 3;
      do {
        plVar5 = (long *)*plVar8;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))(plVar5,local_80);
        }
        plVar8 = plVar8 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar9 = param_1[3];
    lVar11 = (long)DAT_048855a8;
    lVar10 = tpidr_el0;
    lVar7 = *(long *)(lVar10 + 0x1000b8);
    if (lVar7 == 0) {
      lVar7 = FUN_00e5d3b4();
      *(long *)(lVar10 + 0x1000b8) = lVar7;
    }
    *(undefined8 *)(lVar7 + lVar11 * 8 + 1000) = uVar9;
    if ((local_58 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_58 - 1,0);
    }
  }
  if (*(int *)(param_1 + 7) != 0) {
    plVar5 = (long *)param_1[6];
    plVar8 = plVar5 + *(int *)(param_1 + 7);
    do {
      plVar8 = plVar8 + -1;
      plVar6 = (long *)*plVar8;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar8 != plVar5);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  return;
}


