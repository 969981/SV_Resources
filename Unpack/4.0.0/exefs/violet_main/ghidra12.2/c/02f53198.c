/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f53198; name: FUN_02f53198
 */


void FUN_02f53198(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [64];
  int local_48;
  int local_44;
  
  local_a0 = *(long **)(*param_1 + 0x4a0);
  local_98 = auStack_88;
  local_48 = 0;
  local_90 = -0x7ffffff800000000;
  iVar3 = (**(code **)(*local_a0 + 0x50))();
  if (7 < iVar3) {
    iVar3 = 8;
  }
  local_44 = iVar3;
  if ((int)(local_90._4_4_ & 0x7fffffff) < iVar3) {
    FUN_031c2ad4(&local_98,PTR_PTR_047d1a50,(long)iVar3);
  }
  if ((int)local_90 != iVar3) {
    local_90 = CONCAT44(local_90._4_4_,iVar3);
  }
  uVar4 = *(uint *)(param_1 + 5);
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    plVar5 = (long *)param_1[4];
    if ((int)uVar4 < 1) {
      plVar10 = plVar5;
    }
    else {
      plVar10 = plVar5;
      if (uVar4 != 1) {
        iVar3 = -(uVar4 & 0xfffffffe);
        do {
          plVar9 = plVar5;
          if (*plVar10 != 0) {
            plVar9 = plVar5 + 1;
            *plVar5 = *plVar10;
          }
          plVar5 = plVar9;
          if (plVar10[1] != 0) {
            plVar5 = plVar9 + 1;
            *plVar9 = plVar10[1];
          }
          plVar10 = plVar10 + 2;
          iVar3 = iVar3 + 2;
        } while (iVar3 != 0);
      }
      plVar9 = plVar5;
      if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
        plVar9 = plVar5 + 1;
        *plVar5 = *plVar10;
      }
      plVar5 = plVar9;
      plVar10 = (long *)param_1[4];
    }
    uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
  }
  if (uVar4 != 0) {
    FUN_031c2998(&local_a0,param_1[4]);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_02f60060(param_1 + 0x22,&local_a0);
  FUN_02f60060(param_1 + 0x76,&local_a0);
  puVar2 = PTR_PTR_047d1a50;
  puVar1 = PTR_DAT_047d1a08;
  iVar3 = (int)param_1[0x74];
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      if (*(long *)(param_1[0x73] + lVar11 * 8) != 0) {
        iVar3 = (int)param_1[0x69];
        lVar6 = (long)iVar3;
        if ((int)(*(uint *)((long)param_1 + 0x34c) & 0x7fffffff) <= iVar3) {
          FUN_0133bb88(param_1 + 0x68,puVar2,lVar6 + 1);
          iVar3 = (int)param_1[0x69];
        }
        *(int *)(param_1[0x68] + (long)iVar3 * 4) = (int)lVar11;
        lVar7 = param_1[0x73];
        *(int *)(param_1 + 0x69) = (int)(lVar6 + 1);
        lVar6 = *(long *)(lVar7 + lVar11 * 8);
        if (lVar6 != 0) {
          FUN_02f568d8(lVar6);
          (**(code **)(puVar1 + 8))(0,lVar6,0);
          lVar7 = param_1[0x73];
        }
        *(undefined8 *)(lVar7 + lVar11 * 8) = 0;
        iVar3 = (int)param_1[0x74];
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar3);
  }
  if (local_48 != 0) {
    (**(code **)(*local_a0 + 0x28))(local_a0,local_98);
    local_48 = 0;
  }
  lVar11 = local_90;
  uVar8 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_98 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar8 << 3);
  }
  if (param_1[0x96] != 0) {
    uVar4 = *(uint *)(param_1 + 0x99);
    if (*(char *)((long)param_1 + 0x4bc) != '\0') {
      plVar5 = (long *)param_1[0x98];
      if ((int)uVar4 < 1) {
        plVar10 = plVar5;
      }
      else {
        plVar10 = plVar5;
        if (uVar4 != 1) {
          iVar3 = -(uVar4 & 0xfffffffe);
          do {
            plVar9 = plVar5;
            if (*plVar10 != 0) {
              plVar9 = plVar5 + 1;
              *plVar5 = *plVar10;
            }
            plVar5 = plVar9;
            if (plVar10[1] != 0) {
              plVar5 = plVar9 + 1;
              *plVar9 = plVar10[1];
            }
            plVar10 = plVar10 + 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        plVar9 = plVar5;
        if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
          plVar9 = plVar5 + 1;
          *plVar5 = *plVar10;
        }
        plVar5 = plVar9;
        plVar10 = (long *)param_1[0x98];
      }
      uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
      *(undefined1 *)((long)param_1 + 0x4bc) = 0;
    }
    if (uVar4 != 0) {
      (**(code **)(*(long *)param_1[0x96] + 0x28))((long *)param_1[0x96],param_1[0x98]);
    }
    *(undefined4 *)(param_1 + 0x99) = 0;
    *(undefined4 *)(param_1 + 0x97) = 0;
  }
  *(undefined4 *)(param_1 + 0x99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4cc)) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x98],(ulong)*(uint *)((long)param_1 + 0x4cc) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000000;
  param_1[0x98] = 0;
  if (param_1[0x76] != 0) {
    uVar4 = *(uint *)(param_1 + 0x79);
    if (*(char *)((long)param_1 + 0x3bc) != '\0') {
      plVar5 = (long *)param_1[0x78];
      if ((int)uVar4 < 1) {
        plVar10 = plVar5;
      }
      else {
        plVar10 = plVar5;
        if (uVar4 != 1) {
          iVar3 = -(uVar4 & 0xfffffffe);
          do {
            plVar9 = plVar5;
            if (*plVar10 != 0) {
              plVar9 = plVar5 + 1;
              *plVar5 = *plVar10;
            }
            plVar5 = plVar9;
            if (plVar10[1] != 0) {
              plVar5 = plVar9 + 1;
              *plVar9 = plVar10[1];
            }
            plVar10 = plVar10 + 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        plVar9 = plVar5;
        if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
          plVar9 = plVar5 + 1;
          *plVar5 = *plVar10;
        }
        plVar5 = plVar9;
        plVar10 = (long *)param_1[0x78];
      }
      uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
      *(undefined1 *)((long)param_1 + 0x3bc) = 0;
    }
    if (uVar4 != 0) {
      (**(code **)(*(long *)param_1[0x76] + 0x28))((long *)param_1[0x76],param_1[0x78]);
    }
    *(undefined4 *)(param_1 + 0x79) = 0;
    *(undefined4 *)(param_1 + 0x77) = 0;
  }
  *(undefined4 *)(param_1 + 0x79) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3cc)) && (param_1[0x78] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x78],(ulong)*(uint *)((long)param_1 + 0x3cc) << 3);
  }
  param_1[0x78] = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3a4)) && (param_1[0x73] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x73],(ulong)*(uint *)((long)param_1 + 0x3a4) << 3);
  }
  param_1[0x73] = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x72) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x394)) && (param_1[0x71] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x71],(ulong)*(uint *)((long)param_1 + 0x394) << 5);
  }
  param_1[0x71] = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0x80000000;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x35c)) && (param_1[0x6a] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x6a],(ulong)*(uint *)((long)param_1 + 0x35c) << 5);
  }
  param_1[0x6a] = 0;
  *(undefined4 *)((long)param_1 + 0x35c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34c)) && (param_1[0x68] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x68],(ulong)*(uint *)((long)param_1 + 0x34c) << 2);
  }
  param_1[0x68] = 0;
  *(undefined4 *)((long)param_1 + 0x34c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x67) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x33c)) && (param_1[0x66] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x66],(ulong)*(uint *)((long)param_1 + 0x33c) << 2);
  }
  param_1[0x66] = 0;
  *(undefined4 *)((long)param_1 + 0x33c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x32c)) && (param_1[100] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[100],(ulong)*(uint *)((long)param_1 + 0x32c) << 2);
  }
  param_1[100] = 0;
  *(undefined4 *)((long)param_1 + 0x32c) = 0x80000000;
  lVar11 = param_1[0x62];
  while (lVar11 != 0) {
    lVar6 = *(long *)(lVar11 + 8);
    (**(code **)(puVar1 + 8))(0,lVar11,0);
    lVar11 = lVar6;
  }
  if (param_1[0x42] != 0) {
    uVar4 = *(uint *)(param_1 + 0x45);
    if (*(char *)((long)param_1 + 0x21c) != '\0') {
      plVar5 = (long *)param_1[0x44];
      if ((int)uVar4 < 1) {
        plVar10 = plVar5;
      }
      else {
        plVar10 = plVar5;
        if (uVar4 != 1) {
          iVar3 = -(uVar4 & 0xfffffffe);
          do {
            plVar9 = plVar5;
            if (*plVar10 != 0) {
              plVar9 = plVar5 + 1;
              *plVar5 = *plVar10;
            }
            plVar5 = plVar9;
            if (plVar10[1] != 0) {
              plVar5 = plVar9 + 1;
              *plVar9 = plVar10[1];
            }
            plVar10 = plVar10 + 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        plVar9 = plVar5;
        if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
          plVar9 = plVar5 + 1;
          *plVar5 = *plVar10;
        }
        plVar5 = plVar9;
        plVar10 = (long *)param_1[0x44];
      }
      uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
      *(undefined1 *)((long)param_1 + 0x21c) = 0;
    }
    if (uVar4 != 0) {
      (**(code **)(*(long *)param_1[0x42] + 0x28))((long *)param_1[0x42],param_1[0x44]);
    }
    *(undefined4 *)(param_1 + 0x45) = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x22c)) && (param_1[0x44] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x44],(ulong)*(uint *)((long)param_1 + 0x22c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x22c) = 0x80000000;
  param_1[0x44] = 0;
  if (param_1[0x22] != 0) {
    uVar4 = *(uint *)(param_1 + 0x25);
    if (*(char *)((long)param_1 + 0x11c) != '\0') {
      plVar5 = (long *)param_1[0x24];
      if ((int)uVar4 < 1) {
        plVar10 = plVar5;
      }
      else {
        plVar10 = plVar5;
        if (uVar4 != 1) {
          iVar3 = -(uVar4 & 0xfffffffe);
          do {
            plVar9 = plVar5;
            if (*plVar10 != 0) {
              plVar9 = plVar5 + 1;
              *plVar5 = *plVar10;
            }
            plVar5 = plVar9;
            if (plVar10[1] != 0) {
              plVar5 = plVar9 + 1;
              *plVar9 = plVar10[1];
            }
            plVar10 = plVar10 + 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        plVar9 = plVar5;
        if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
          plVar9 = plVar5 + 1;
          *plVar5 = *plVar10;
        }
        plVar5 = plVar9;
        plVar10 = (long *)param_1[0x24];
      }
      uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
      *(undefined1 *)((long)param_1 + 0x11c) = 0;
    }
    if (uVar4 != 0) {
      (**(code **)(*(long *)param_1[0x22] + 0x28))((long *)param_1[0x22],param_1[0x24]);
    }
    *(undefined4 *)(param_1 + 0x25) = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x24],(ulong)*(uint *)((long)param_1 + 300) << 3);
  }
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  param_1[0x24] = 0;
  if (param_1[2] != 0) {
    uVar4 = *(uint *)(param_1 + 5);
    if (*(char *)((long)param_1 + 0x1c) != '\0') {
      plVar5 = (long *)param_1[4];
      if ((int)uVar4 < 1) {
        plVar10 = plVar5;
      }
      else {
        plVar10 = plVar5;
        if (uVar4 != 1) {
          iVar3 = -(uVar4 & 0xfffffffe);
          do {
            plVar9 = plVar5;
            if (*plVar10 != 0) {
              plVar9 = plVar5 + 1;
              *plVar5 = *plVar10;
            }
            plVar5 = plVar9;
            if (plVar10[1] != 0) {
              plVar5 = plVar9 + 1;
              *plVar9 = plVar10[1];
            }
            plVar10 = plVar10 + 2;
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
        }
        plVar9 = plVar5;
        if (((uVar4 & 1) != 0) && (*plVar10 != 0)) {
          plVar9 = plVar5 + 1;
          *plVar5 = *plVar10;
        }
        plVar5 = plVar9;
        plVar10 = (long *)param_1[4];
      }
      uVar4 = (uint)((ulong)((long)plVar5 - (long)plVar10) >> 3);
      *(undefined1 *)((long)param_1 + 0x1c) = 0;
    }
    if (uVar4 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x28))((long *)param_1[2],param_1[4]);
    }
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


