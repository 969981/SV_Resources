/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e84a60; name: FUN_02e84a60
 */


undefined8 FUN_02e84a60(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = FUN_02e8d8b4();
  if (*(uint *)(param_1 + 1) == uVar6) {
    iVar2 = uVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar6) {
      FUN_02e8db54(param_1,PTR_PTR_047d1a50,(long)iVar2);
      uVar6 = *(uint *)(param_1 + 1);
    }
    puVar1 = (undefined8 *)(*param_1 + (long)(int)uVar6 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 1) = iVar2;
    uVar7 = 1;
  }
  else {
    lVar9 = *param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1c);
    uVar7 = *param_3;
    *param_3 = 0;
    plVar8 = *(long **)(lVar9 + 8);
    *(undefined8 *)(lVar9 + 8) = uVar7;
    uVar7 = 0;
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        plVar3 = plVar8 + 2;
        do {
          lVar9 = *plVar3;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *plVar3 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 1) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}


