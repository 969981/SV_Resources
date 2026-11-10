/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f60a90; name: FUN_02f60a90
 */


void FUN_02f60a90(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  if (param_1[0x156] != 0) {
    uVar1 = *(uint *)(param_1 + 0x159);
    if (*(char *)((long)param_1 + 0xabc) != '\0') {
      plVar2 = (long *)param_1[0x158];
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
        plVar4 = (long *)param_1[0x158];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0xabc) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x156] + 0x28))((long *)param_1[0x156],param_1[0x158]);
    }
    *(undefined4 *)(param_1 + 0x159) = 0;
    *(undefined4 *)(param_1 + 0x157) = 0;
  }
  *(undefined4 *)(param_1 + 0x159) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xacc)) && (param_1[0x158] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x158],(ulong)*(uint *)((long)param_1 + 0xacc) << 3);
  }
  *(undefined4 *)((long)param_1 + 0xacc) = 0x80000000;
  param_1[0x158] = 0;
  if (param_1[0x134] != 0) {
    uVar1 = *(uint *)(param_1 + 0x137);
    if (*(char *)((long)param_1 + 0x9ac) != '\0') {
      plVar2 = (long *)param_1[0x136];
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
        plVar4 = (long *)param_1[0x136];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x9ac) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x134] + 0x28))((long *)param_1[0x134],param_1[0x136]);
    }
    *(undefined4 *)(param_1 + 0x137) = 0;
    *(undefined4 *)(param_1 + 0x135) = 0;
  }
  *(undefined4 *)(param_1 + 0x137) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9bc)) && (param_1[0x136] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x136],(ulong)*(uint *)((long)param_1 + 0x9bc) << 3);
  }
  param_1[0x136] = 0;
  *(undefined4 *)((long)param_1 + 0x9bc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x133) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x99c)) && (param_1[0x132] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x132],(ulong)*(uint *)((long)param_1 + 0x99c) << 3);
  }
  param_1[0x132] = 0;
  *(undefined4 *)((long)param_1 + 0x99c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x131) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x98c)) && (param_1[0x130] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x130],(ulong)*(uint *)((long)param_1 + 0x98c) << 5);
  }
  param_1[0x130] = 0;
  *(undefined4 *)((long)param_1 + 0x98c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x97c)) && (param_1[0x12e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x12e],(ulong)*(uint *)((long)param_1 + 0x97c) << 3);
  }
  param_1[0x12e] = 0;
  *(undefined4 *)((long)param_1 + 0x97c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x96c)) && (param_1[300] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[300],(ulong)*(uint *)((long)param_1 + 0x96c) << 5);
  }
  param_1[300] = 0;
  *(undefined4 *)((long)param_1 + 0x96c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x129) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94c)) && (param_1[0x128] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x128],(ulong)*(uint *)((long)param_1 + 0x94c) << 3);
  }
  param_1[0x128] = 0;
  *(undefined4 *)((long)param_1 + 0x94c) = 0x80000000;
  if (param_1[0x108] != 0) {
    uVar1 = *(uint *)(param_1 + 0x10b);
    if (*(char *)((long)param_1 + 0x84c) != '\0') {
      plVar2 = (long *)param_1[0x10a];
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
        plVar4 = (long *)param_1[0x10a];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x84c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x108] + 0x28))((long *)param_1[0x108],param_1[0x10a]);
    }
    *(undefined4 *)(param_1 + 0x10b) = 0;
    *(undefined4 *)(param_1 + 0x109) = 0;
  }
  *(undefined4 *)(param_1 + 0x10b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x85c)) && (param_1[0x10a] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10a],(ulong)*(uint *)((long)param_1 + 0x85c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x85c) = 0x80000000;
  param_1[0x10a] = 0;
  if (param_1[0xe8] != 0) {
    uVar1 = *(uint *)(param_1 + 0xeb);
    if (*(char *)((long)param_1 + 0x74c) != '\0') {
      plVar2 = (long *)param_1[0xea];
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
        plVar4 = (long *)param_1[0xea];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x74c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0xe8] + 0x28))((long *)param_1[0xe8],param_1[0xea]);
    }
    *(undefined4 *)(param_1 + 0xeb) = 0;
    *(undefined4 *)(param_1 + 0xe9) = 0;
  }
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x75c)) && (param_1[0xea] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xea],(ulong)*(uint *)((long)param_1 + 0x75c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x75c) = 0x80000000;
  param_1[0xea] = 0;
  if (param_1[200] != 0) {
    uVar1 = *(uint *)(param_1 + 0xcb);
    if (*(char *)((long)param_1 + 0x64c) != '\0') {
      plVar2 = (long *)param_1[0xca];
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
        plVar4 = (long *)param_1[0xca];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x64c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[200] + 0x28))((long *)param_1[200],param_1[0xca]);
    }
    *(undefined4 *)(param_1 + 0xcb) = 0;
    *(undefined4 *)(param_1 + 0xc9) = 0;
  }
  *(undefined4 *)(param_1 + 0xcb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x65c)) && (param_1[0xca] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xca],(ulong)*(uint *)((long)param_1 + 0x65c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x65c) = 0x80000000;
  param_1[0xca] = 0;
  if (param_1[0xa8] != 0) {
    uVar1 = *(uint *)(param_1 + 0xab);
    if (*(char *)((long)param_1 + 0x54c) != '\0') {
      plVar2 = (long *)param_1[0xaa];
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
        plVar4 = (long *)param_1[0xaa];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x54c) = 0;
    }
    if (uVar1 != 0) {
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
              (PTR_PTR_047d1a50,param_1[0xa4],(ulong)*(uint *)((long)param_1 + 0x52c) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x52c) = 0x80000000;
  param_1[0xa4] = 0;
  if (param_1[0x84] != 0) {
    uVar1 = *(uint *)(param_1 + 0x87);
    if (*(char *)((long)param_1 + 0x42c) != '\0') {
      plVar2 = (long *)param_1[0x86];
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
        plVar4 = (long *)param_1[0x86];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x42c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x84] + 0x28))((long *)param_1[0x84],param_1[0x86]);
    }
    *(undefined4 *)(param_1 + 0x87) = 0;
    *(undefined4 *)(param_1 + 0x85) = 0;
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x43c)) && (param_1[0x86] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x86],(ulong)*(uint *)((long)param_1 + 0x43c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x43c) = 0x80000000;
  param_1[0x86] = 0;
  if (param_1[100] != 0) {
    uVar1 = *(uint *)(param_1 + 0x67);
    if (*(char *)((long)param_1 + 0x32c) != '\0') {
      plVar2 = (long *)param_1[0x66];
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
        plVar4 = (long *)param_1[0x66];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x32c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[100] + 0x28))((long *)param_1[100],param_1[0x66]);
    }
    *(undefined4 *)(param_1 + 0x67) = 0;
    *(undefined4 *)(param_1 + 0x65) = 0;
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x33c)) && (param_1[0x66] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x66],(ulong)*(uint *)((long)param_1 + 0x33c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x33c) = 0x80000000;
  param_1[0x66] = 0;
  if (param_1[0x44] != 0) {
    uVar1 = *(uint *)(param_1 + 0x47);
    if (*(char *)((long)param_1 + 0x22c) != '\0') {
      plVar2 = (long *)param_1[0x46];
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
        plVar4 = (long *)param_1[0x46];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x22c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x44] + 0x28))((long *)param_1[0x44],param_1[0x46]);
    }
    *(undefined4 *)(param_1 + 0x47) = 0;
    *(undefined4 *)(param_1 + 0x45) = 0;
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x23c)) && (param_1[0x46] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x46],(ulong)*(uint *)((long)param_1 + 0x23c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x23c) = 0x80000000;
  param_1[0x46] = 0;
  if (param_1[0x24] != 0) {
    uVar1 = *(uint *)(param_1 + 0x27);
    if (*(char *)((long)param_1 + 300) != '\0') {
      plVar2 = (long *)param_1[0x26];
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
        plVar4 = (long *)param_1[0x26];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 300) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[0x24] + 0x28))((long *)param_1[0x24],param_1[0x26]);
    }
    *(undefined4 *)(param_1 + 0x27) = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x26],(ulong)*(uint *)((long)param_1 + 0x13c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  param_1[0x26] = 0;
  if (param_1[4] != 0) {
    uVar1 = *(uint *)(param_1 + 7);
    if (*(char *)((long)param_1 + 0x2c) != '\0') {
      plVar2 = (long *)param_1[6];
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
        plVar4 = (long *)param_1[6];
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)((long)param_1 + 0x2c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(*(long *)param_1[4] + 0x28))((long *)param_1[4],param_1[6]);
    }
    *(undefined4 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[2],(ulong)*(uint *)((long)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}


