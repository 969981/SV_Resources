/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f82ac; name: FUN_030f82ac
 */


void FUN_030f82ac(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_28;
  
  iVar6 = *(int *)(param_1 + 0xa8);
  lVar7 = (long)iVar6;
  if ((int)(*(uint *)(param_1 + 0xac) & 0x7fffffff) <= iVar6) {
    FUN_030fe864(param_1 + 0xa0,PTR_PTR_047d1a50,lVar7 + 1);
    iVar6 = *(int *)(param_1 + 0xa8);
  }
  lVar8 = *(long *)(param_1 + 0xa0);
  plVar5 = (long *)(lVar8 + (long)iVar6 * 0x60);
  *(int *)(param_1 + 0xa8) = (int)(lVar7 + 1);
  *plVar5 = 0;
  *(undefined2 *)(plVar5 + 10) = 0;
  *(undefined1 *)((long)plVar5 + 0x52) = 0;
  if ((param_2 == (long *)0x0) || (param_2[1] == 0)) {
    *plVar5 = (long)param_2;
  }
  else {
    plVar4 = param_2 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*plVar5;
    *plVar5 = (long)param_2;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
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
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  lStack_58 = param_2[7];
  local_60 = param_2[6];
  lVar8 = lVar8 + (long)iVar6 * 0x60;
  *(long *)(lVar8 + 0x38) = lStack_58;
  *(long *)(lVar8 + 0x30) = local_60;
  lVar7 = param_2[8];
  *(long *)(lVar8 + 0x48) = param_2[9];
  *(long *)(lVar8 + 0x40) = lVar7;
  *(undefined1 *)((long)plVar5 + 0x52) = 1;
  local_50 = 0;
  uStack_48 = 0;
  (**(code **)(*param_2 + 0x48))
            (*(undefined4 *)(param_1 + 0x180),param_2,&local_60,param_1 + 0x150,lVar8 + 0x10);
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20),
                      (float)*(undefined8 *)(lVar8 + 0x10) + (float)*(undefined8 *)(lVar8 + 0x40));
  uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x18) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20),
                       (float)*(undefined8 *)(lVar8 + 0x18) + (float)*(undefined8 *)(lVar8 + 0x48));
  local_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20),
                      (float)*(undefined8 *)(lVar8 + 0x20) + (float)*(undefined8 *)(lVar8 + 0x40));
  uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar8 + 0x48) >> 0x20),
                       (float)*(undefined8 *)(lVar8 + 0x28) + (float)*(undefined8 *)(lVar8 + 0x48));
  local_28 = param_1;
  FUN_030f8420(param_1 + 0x20,&local_80,&local_28);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


