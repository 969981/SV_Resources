/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f21a30; name: FUN_02f21a30
 */


void FUN_02f21a30(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_047d1a08;
  plVar3 = (long *)*param_1;
  lVar7 = *plVar3;
  if (1 < (int)param_1[1]) {
    lVar9 = 1;
    while( true ) {
      FUN_02f24aec(plVar3[lVar9],*(undefined8 *)(lVar7 + 0x4e0));
      lVar8 = *(long *)(*param_1 + lVar9 * 8);
      if (lVar8 != 0) {
        FUN_02f24398(lVar8);
        (**(code **)(puVar1 + 8))(0,lVar8,0);
      }
      lVar9 = lVar9 + 1;
      if ((int)param_1[1] <= lVar9) break;
      plVar3 = (long *)*param_1;
    }
  }
  lVar9 = *(long *)(lVar7 + 0x4e0);
  uVar2 = *(uint *)(param_1 + 0xab);
  if (*(char *)((long)param_1 + 0x54c) != '\0') {
    plVar3 = (long *)param_1[0xaa];
    if ((int)uVar2 < 1) {
      plVar5 = plVar3;
    }
    else {
      plVar5 = plVar3;
      if (uVar2 != 1) {
        iVar6 = -(uVar2 & 0xfffffffe);
        do {
          plVar4 = plVar3;
          if (*plVar5 != 0) {
            plVar4 = plVar3 + 1;
            *plVar3 = *plVar5;
          }
          plVar3 = plVar4;
          if (plVar5[1] != 0) {
            plVar3 = plVar4 + 1;
            *plVar4 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      plVar4 = plVar3;
      if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
        plVar4 = plVar3 + 1;
        *plVar3 = *plVar5;
      }
      plVar3 = plVar4;
      plVar5 = (long *)param_1[0xaa];
    }
    uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
    *(undefined1 *)((long)param_1 + 0x54c) = 0;
  }
  if (uVar2 != 0) {
    if (lVar9 == 0) {
      (**(code **)(*(long *)param_1[0xa8] + 0x28))((long *)param_1[0xa8],param_1[0xaa]);
    }
    else {
      FUN_031c2998(lVar9,param_1[0xaa]);
    }
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  FUN_02f24aec(lVar7,*(undefined8 *)(lVar7 + 0x4e0));
  lVar7 = *(long *)*param_1;
  if (lVar7 != 0) {
    FUN_02f24398(lVar7);
    (**(code **)(puVar1 + 8))(0,lVar7,0);
  }
  if (param_1[0xa8] != 0) {
    uVar2 = *(uint *)(param_1 + 0xab);
    if (*(char *)((long)param_1 + 0x54c) != '\0') {
      plVar3 = (long *)param_1[0xaa];
      if ((int)uVar2 < 1) {
        plVar5 = plVar3;
      }
      else {
        plVar5 = plVar3;
        if (uVar2 != 1) {
          iVar6 = -(uVar2 & 0xfffffffe);
          do {
            plVar4 = plVar3;
            if (*plVar5 != 0) {
              plVar4 = plVar3 + 1;
              *plVar3 = *plVar5;
            }
            plVar3 = plVar4;
            if (plVar5[1] != 0) {
              plVar3 = plVar4 + 1;
              *plVar4 = plVar5[1];
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        plVar4 = plVar3;
        if (((uVar2 & 1) != 0) && (*plVar5 != 0)) {
          plVar4 = plVar3 + 1;
          *plVar3 = *plVar5;
        }
        plVar3 = plVar4;
        plVar5 = (long *)param_1[0xaa];
      }
      uVar2 = (uint)((ulong)((long)plVar3 - (long)plVar5) >> 3);
      *(undefined1 *)((long)param_1 + 0x54c) = 0;
    }
    if (uVar2 != 0) {
      (**(code **)(*(long *)param_1[0xa8] + 0x28))((long *)param_1[0xa8],param_1[0xaa]);
    }
    *(undefined4 *)(param_1 + 0xab) = 0;
    *(undefined4 *)(param_1 + 0xa9) = 0;
  }
  *(undefined4 *)(param_1 + 0xab) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x55c)) && (param_1[0xaa] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xaa],(ulong)*(uint *)((long)param_1 + 0x55c) << 3);
  }
  param_1[0xaa] = 0;
  *(undefined4 *)((long)param_1 + 0x55c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x53c)) && (param_1[0xa6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xa6],(ulong)*(uint *)((long)param_1 + 0x53c) << 3);
  }
  param_1[0xa6] = 0;
  *(undefined4 *)((long)param_1 + 0x53c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x52c)) && (param_1[0xa4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xa4],(ulong)*(uint *)((long)param_1 + 0x52c) << 5);
  }
  param_1[0xa4] = 0;
  *(undefined4 *)((long)param_1 + 0x52c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


