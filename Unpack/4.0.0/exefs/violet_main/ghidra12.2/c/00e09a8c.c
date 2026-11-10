/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e09a8c; name: FUN_00e09a8c
 */


void FUN_00e09a8c(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_80;
  undefined4 local_78;
  long *local_70;
  long *plStack_68;
  
  puVar3 = PTR_DAT_047d1a08;
  if (3 < *(ulong *)(*(long *)(param_1 + 0x180) + 0x28)) {
    local_80 = 0x28;
    plVar4 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_80,0);
    if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
      (**(code **)(puVar3 + 0x10))(plVar4,"hkaiReferencedArray");
    }
    plVar9 = plVar4 + 2;
    *plVar9 = 1;
    *plVar4 = (long)&PTR_LAB_0464d2b0;
    plVar4[1] = 0xffffffff;
    plVar5 = plVar4 + 3;
    *plVar5 = 0;
    plVar4[4] = -0x8000000000000000;
    FUN_02e9b11c(plVar5,PTR_PTR_047d1a50,1);
    puVar7 = (undefined8 *)(*plVar5 + (long)(int)plVar4[4] * 0x10);
    puVar7[1] = param_2[1];
    *puVar7 = *param_2;
    *(undefined4 *)(plVar4 + 4) = 1;
    local_80 = 0x28;
    plVar5 = (long *)(**(code **)puVar3)(0,&local_80,0);
    if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
      (**(code **)(puVar3 + 0x10))(plVar5,"hkaiReferencedArray");
    }
    plVar10 = plVar5 + 2;
    *plVar10 = 1;
    *plVar5 = (long)&PTR_LAB_0464d3c0;
    plVar5[1] = 0xffffffff;
    plVar8 = plVar5 + 3;
    *plVar8 = 0;
    plVar5[4] = -0x8000000000000000;
    FUN_03080948(plVar8,PTR_PTR_047d1a50,1);
    *(undefined4 *)(*plVar8 + (long)(int)plVar5[4] * 4) = *param_3;
    *(undefined4 *)(plVar5 + 4) = 1;
    local_78 = *(undefined4 *)(param_1 + 0x23c);
    local_80 = 0x4608000020;
    local_70 = plVar4;
    plStack_68 = plVar5;
    FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_80);
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      do {
        lVar6 = *plVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if (plVar4[1] != 0) {
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x7fffffff) == 0) {
    FUN_030ae030(param_1 + 0x20);
  }
  if (*(int *)(param_1 + 0x28) != 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  uVar11 = *param_2;
  puVar7 = *(undefined8 **)(param_1 + 0x20);
  puVar7[1] = param_2[1];
  *puVar7 = uVar11;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x10) = *param_3;
  *(undefined1 *)(param_1 + 0x199) = 1;
  FUN_00e08aac(param_1);
  return;
}


