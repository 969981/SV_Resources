/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f61604; name: FUN_02f61604
 */


void FUN_02f61604(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  FUN_02f60060(param_1 + 4);
  FUN_02f60060(param_1 + 0x44,param_2);
  uVar1 = *(uint *)(param_1 + 0x87);
  if (*(char *)((long)param_1 + 0x42c) != '\0') {
    plVar2 = (long *)param_1[0x86];
    if ((int)uVar1 < 1) {
      plVar5 = plVar2;
    }
    else {
      plVar5 = plVar2;
      if (uVar1 != 1) {
        iVar7 = -(uVar1 & 0xfffffffe);
        do {
          plVar3 = plVar2;
          if (*plVar5 != 0) {
            plVar3 = plVar2 + 1;
            *plVar2 = *plVar5;
          }
          plVar2 = plVar3;
          if (plVar5[1] != 0) {
            plVar2 = plVar3 + 1;
            *plVar3 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0);
      }
      plVar3 = plVar2;
      if (((uVar1 & 1) != 0) && (*plVar5 != 0)) {
        plVar3 = plVar2 + 1;
        *plVar2 = *plVar5;
      }
      plVar2 = plVar3;
      plVar5 = (long *)param_1[0x86];
    }
    uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar5) >> 3);
    *(undefined1 *)((long)param_1 + 0x42c) = 0;
  }
  if (uVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)param_1[0x84] + 0x28))((long *)param_1[0x84],param_1[0x86]);
    }
    else {
      FUN_031c2998(param_2,param_1[0x86]);
    }
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  FUN_02f60060(param_1 + 0xa8,param_2);
  FUN_02f60060(param_1 + 0xe8,param_2);
  uVar1 = *(uint *)(param_1 + 0x137);
  if (*(char *)((long)param_1 + 0x9ac) != '\0') {
    plVar2 = (long *)param_1[0x136];
    if ((int)uVar1 < 1) {
      plVar5 = plVar2;
    }
    else {
      plVar5 = plVar2;
      if (uVar1 != 1) {
        iVar7 = -(uVar1 & 0xfffffffe);
        do {
          plVar3 = plVar2;
          if (*plVar5 != 0) {
            plVar3 = plVar2 + 1;
            *plVar2 = *plVar5;
          }
          plVar2 = plVar3;
          if (plVar5[1] != 0) {
            plVar2 = plVar3 + 1;
            *plVar3 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0);
      }
      plVar3 = plVar2;
      if (((uVar1 & 1) != 0) && (*plVar5 != 0)) {
        plVar3 = plVar2 + 1;
        *plVar2 = *plVar5;
      }
      plVar2 = plVar3;
      plVar5 = (long *)param_1[0x136];
    }
    uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar5) >> 3);
    *(undefined1 *)((long)param_1 + 0x9ac) = 0;
  }
  if (uVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)param_1[0x134] + 0x28))((long *)param_1[0x134],param_1[0x136]);
    }
    else {
      FUN_031c2998(param_2,param_1[0x136]);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x159);
  *(undefined4 *)(param_1 + 0x137) = 0;
  *(undefined4 *)(param_1 + 0x135) = 0;
  if (*(char *)((long)param_1 + 0xabc) != '\0') {
    plVar2 = (long *)param_1[0x158];
    if ((int)uVar1 < 1) {
      plVar5 = plVar2;
    }
    else {
      plVar5 = plVar2;
      if (uVar1 != 1) {
        iVar7 = -(uVar1 & 0xfffffffe);
        do {
          plVar3 = plVar2;
          if (*plVar5 != 0) {
            plVar3 = plVar2 + 1;
            *plVar2 = *plVar5;
          }
          plVar2 = plVar3;
          if (plVar5[1] != 0) {
            plVar2 = plVar3 + 1;
            *plVar3 = plVar5[1];
          }
          plVar5 = plVar5 + 2;
          iVar7 = iVar7 + 2;
        } while (iVar7 != 0);
      }
      plVar3 = plVar2;
      if (((uVar1 & 1) != 0) && (*plVar5 != 0)) {
        plVar3 = plVar2 + 1;
        *plVar2 = *plVar5;
      }
      plVar2 = plVar3;
      plVar5 = (long *)param_1[0x158];
    }
    uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar5) >> 3);
    *(undefined1 *)((long)param_1 + 0xabc) = 0;
  }
  if (uVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)param_1[0x156] + 0x28))((long *)param_1[0x156],param_1[0x158]);
    }
    else {
      FUN_031c2998(param_2,param_1[0x158]);
    }
  }
  *(undefined4 *)(param_1 + 0x159) = 0;
  *(undefined4 *)(param_1 + 0x157) = 0;
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar8 = *param_1;
      *(undefined8 *)(lVar8 + lVar4) = 0;
      *(undefined4 *)(lVar8 + lVar4 + 0xc) = 0;
      lVar8 = *param_1 + lVar4;
      lVar4 = lVar4 + 0x10;
      *(long *)(param_1[2] + lVar6 * 8) = lVar8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  if (0 < (int)param_1[0xa5]) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      lVar8 = param_1[0xa4];
      *(undefined8 *)(lVar8 + lVar4) = 0;
      *(undefined4 *)(lVar8 + lVar4 + 0xc) = 0;
      lVar8 = param_1[0xa4] + lVar4;
      lVar4 = lVar4 + 0x10;
      *(long *)(param_1[0xa6] + lVar6 * 8) = lVar8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0xa5]);
  }
  return;
}


