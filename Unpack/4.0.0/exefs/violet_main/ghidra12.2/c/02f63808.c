/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f63808; name: FUN_02f63808
 */


void FUN_02f63808(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  if (param_1[0xa0] != 0) {
    uVar1 = *(uint *)(param_1 + 0xa3);
    if (*(char *)((long)param_1 + 0x50c) != '\0') {
      plVar2 = (long *)param_1[0xa2];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[0xa2];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x50c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0xa0] + 0x28))((long *)param_1[0xa0],param_1[0xa2]);
    }
    *(undefined4 *)(param_1 + 0xa3) = 0;
    *(undefined4 *)(param_1 + 0xa1) = 0;
  }
  *(undefined4 *)(param_1 + 0xa3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x51c)) && (param_1[0xa2] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xa2],(ulong)*(uint *)((long)param_1 + 0x51c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x51c) = 0x80000000;
  param_1[0xa2] = 0;
  if (param_1[0x80] != 0) {
    uVar1 = *(uint *)(param_1 + 0x83);
    if (*(char *)((long)param_1 + 0x40c) != '\0') {
      plVar2 = (long *)param_1[0x82];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[0x82];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x40c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x80] + 0x28))((long *)param_1[0x80],param_1[0x82]);
    }
    *(undefined4 *)(param_1 + 0x83) = 0;
    *(undefined4 *)(param_1 + 0x81) = 0;
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x41c)) && (param_1[0x82] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x82],(ulong)*(uint *)((long)param_1 + 0x41c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x41c) = 0x80000000;
  param_1[0x82] = 0;
  if (param_1[0x60] != 0) {
    uVar1 = *(uint *)(param_1 + 99);
    if (*(char *)((long)param_1 + 0x30c) != '\0') {
      plVar2 = (long *)param_1[0x62];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[0x62];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x30c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x60] + 0x28))((long *)param_1[0x60],param_1[0x62]);
    }
    *(undefined4 *)(param_1 + 99) = 0;
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  *(undefined4 *)(param_1 + 99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x31c)) && (param_1[0x62] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x62],(ulong)*(uint *)((long)param_1 + 0x31c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x31c) = 0x80000000;
  param_1[0x62] = 0;
  if (param_1[0x40] != 0) {
    uVar1 = *(uint *)(param_1 + 0x43);
    if (*(char *)((long)param_1 + 0x20c) != '\0') {
      plVar2 = (long *)param_1[0x42];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[0x42];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x20c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x40] + 0x28))((long *)param_1[0x40],param_1[0x42]);
    }
    *(undefined4 *)(param_1 + 0x43) = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x42],(ulong)*(uint *)((long)param_1 + 0x21c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  param_1[0x42] = 0;
  if (param_1[0x20] != 0) {
    uVar1 = *(uint *)(param_1 + 0x23);
    if (*(char *)((long)param_1 + 0x10c) != '\0') {
      plVar2 = (long *)param_1[0x22];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[0x22];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x10c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x20] + 0x28))((long *)param_1[0x20],param_1[0x22]);
    }
    *(undefined4 *)(param_1 + 0x23) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x11c)) && (param_1[0x22] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x22],(ulong)*(uint *)((long)param_1 + 0x11c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x11c) = 0x80000000;
  param_1[0x22] = 0;
  if (*param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 3);
    if (*(char *)((long)param_1 + 0xc) != '\0') {
      plVar2 = (long *)param_1[2];
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = (long *)param_1[2];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0xc) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_1[2]);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  return;
}


