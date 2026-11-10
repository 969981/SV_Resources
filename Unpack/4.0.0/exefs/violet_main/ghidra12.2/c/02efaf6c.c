/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02efaf6c; name: FUN_02efaf6c
 */


void FUN_02efaf6c(long *param_1,long param_2,int param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_38;
  
  puVar4 = PTR_DAT_047e3368;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar4 + 0x10);
  lVar6 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x20);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[4] = lVar5;
  param_1[5] = lVar6;
  FUN_02ef63a0(param_1 + 6,param_2 + 0x30);
  *param_1 = (long)(PTR_DAT_047e3468 + 0x10);
  plVar7 = param_1 + 8;
  *plVar7 = 0;
  lVar6 = *(long *)(param_2 + 0x40);
  lVar5 = 0;
  if (lVar6 != 0) {
    lVar5 = param_2 + 0x40 + (lVar6 - (long)plVar7);
  }
  *plVar7 = lVar5;
  *param_1 = (long)(PTR_DAT_047e3ff0 + 0x10);
  plVar8 = param_1 + 9;
  *plVar8 = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (param_3 == 0) {
    FUN_02ef2ad0(&local_38,param_1,param_4);
    lVar5 = 0;
    if (local_38 != 0) {
      lVar5 = local_38 - (long)plVar7;
    }
    param_1[8] = lVar5;
  }
  else {
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + (long)plVar7;
    }
    if (*(long *)(lVar6 + 8) != 0) {
      plVar1 = (long *)(lVar6 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  puVar4 = PTR_DAT_047d19f0;
  if (param_5 == 0) {
    lVar6 = *(long *)(param_2 + 0x48);
    lVar5 = 0;
    if (lVar6 != 0) {
      lVar5 = lVar6 + param_2 + 0x48;
    }
    lVar6 = 0;
    if (*plVar7 != 0) {
      lVar6 = *plVar7 + (long)plVar7;
    }
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar5 + 0x18) * 0x40 + 0x4038))
              (&local_38,lVar5,lVar6);
    lVar5 = 0;
    if (local_38 != 0) {
      lVar5 = local_38 - (long)plVar8;
    }
    *plVar8 = lVar5;
  }
  lVar5 = 0;
  if (*plVar7 != 0) {
    lVar5 = *plVar7 + (long)plVar7;
  }
  lVar5 = (**(code **)(*(long *)puVar4 + (ulong)*(byte *)(lVar5 + 0x18) * 0x200 + 0x48))();
  if (lVar5 != 0) {
    FUN_02ef292c(lVar5,param_1,&LAB_02ef29ec,0,"hknpDecoratorShape");
  }
  return;
}


