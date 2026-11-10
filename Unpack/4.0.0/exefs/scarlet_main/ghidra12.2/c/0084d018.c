/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084d018; name: FUN_0084d018
 */


long FUN_0084d018(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_28;
  
  FUN_0084d3ac();
  if (param_2 != param_1) {
    pvVar3 = (void *)0x0;
    if (*(long *)(param_2 + 0x70) != 0) {
      pvVar3 = (void *)(*(long *)(param_2 + 0x70) + param_2 + 0x70);
    }
    plVar8 = (long *)(param_1 + 0x70);
    uVar4 = *(uint *)(param_2 + 0x78);
    uVar1 = *(uint *)(param_2 + 0x7c) & 0x7fffffff;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    lVar6 = *plVar8;
    if ((pvVar3 == (void *)0x0) || (uVar1 == 0)) {
      if (*(int *)(param_1 + 0x7c) < 0) {
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = lVar6 + (long)plVar8;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
      }
      *plVar8 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar6 != 0) {
        pvVar5 = (void *)(lVar6 + (long)plVar8);
      }
      uVar2 = *(uint *)(param_1 + 0x7c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x78)) {
        uVar2 = *(uint *)(param_1 + 0x78);
      }
      if (uVar1 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x7c) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar6 != 0) {
            pvVar5 = (void *)(lVar6 + (long)plVar8);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_28 = (ulong)uVar1 << 2;
        pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
        uVar4 = *(uint *)(param_2 + 0x78);
      }
      memcpy(pvVar5,pvVar3,-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
      lVar6 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar6 = (long)pvVar5 - (long)plVar8;
      }
      *(long *)(param_1 + 0x70) = lVar6;
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      uVar1 = *(uint *)(param_2 + 0x7c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x78)) {
        uVar1 = *(uint *)(param_2 + 0x78);
      }
      *(uint *)(param_1 + 0x7c) = uVar1 | 0x80000000;
    }
    plVar8 = (long *)(param_1 + 0x80);
    lVar6 = *plVar8;
    lVar7 = *(long *)(param_2 + 0x80);
    uVar1 = *(uint *)(param_2 + 0x88);
    pvVar3 = (void *)0x0;
    if (lVar7 != 0) {
      pvVar3 = (void *)(lVar7 + param_2 + 0x80);
    }
    uVar4 = *(uint *)(param_2 + 0x8c) & 0x7fffffff;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((pvVar3 == (void *)0x0) || (uVar4 == 0)) {
      if (*(int *)(param_1 + 0x8c) < 0) {
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = lVar6 + (long)plVar8;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
      }
      *plVar8 = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar6 != 0) {
        pvVar5 = (void *)(lVar6 + (long)plVar8);
      }
      uVar2 = *(uint *)(param_1 + 0x8c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x88)) {
        uVar2 = *(uint *)(param_1 + 0x88);
      }
      if (uVar4 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x8c) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar6 != 0) {
            pvVar5 = (void *)(lVar6 + (long)plVar8);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_28 = (ulong)uVar4 << 3;
        pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
        uVar1 = *(uint *)(param_2 + 0x88);
      }
      memcpy(pvVar5,pvVar3,-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      lVar6 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar6 = (long)pvVar5 - (long)plVar8;
      }
      *(long *)(param_1 + 0x80) = lVar6;
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
      uVar1 = *(uint *)(param_2 + 0x8c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x88)) {
        uVar1 = *(uint *)(param_2 + 0x88);
      }
      *(uint *)(param_1 + 0x8c) = uVar1 | 0x80000000;
    }
    plVar8 = (long *)(param_1 + 0x90);
    lVar6 = *plVar8;
    lVar7 = *(long *)(param_2 + 0x90);
    uVar1 = *(uint *)(param_2 + 0x98);
    pvVar3 = (void *)0x0;
    if (lVar7 != 0) {
      pvVar3 = (void *)(lVar7 + param_2 + 0x90);
    }
    uVar4 = *(uint *)(param_2 + 0x9c) & 0x7fffffff;
    if ((int)uVar4 <= (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((pvVar3 == (void *)0x0) || (uVar4 == 0)) {
      if (*(int *)(param_1 + 0x9c) < 0) {
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = lVar6 + (long)plVar8;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
      }
      *plVar8 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      pvVar5 = (void *)0x0;
      if (lVar6 != 0) {
        pvVar5 = (void *)(lVar6 + (long)plVar8);
      }
      uVar2 = *(uint *)(param_1 + 0x9c) & 0x7fffffff;
      if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x98)) {
        uVar2 = *(uint *)(param_1 + 0x98);
      }
      if (uVar4 != uVar2) {
        if ((int)*(uint *)(param_1 + 0x9c) < 0) {
          pvVar5 = (void *)0x0;
          if (lVar6 != 0) {
            pvVar5 = (void *)(lVar6 + (long)plVar8);
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar5,0);
        }
        local_28 = (ulong)uVar4 << 2;
        pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
        uVar1 = *(uint *)(param_2 + 0x98);
      }
      memcpy(pvVar5,pvVar3,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      lVar6 = 0;
      if (pvVar5 != (void *)0x0) {
        lVar6 = (long)pvVar5 - (long)plVar8;
      }
      *(long *)(param_1 + 0x90) = lVar6;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
      uVar1 = *(uint *)(param_2 + 0x9c) & 0x7fffffff;
      if ((int)uVar1 <= (int)*(uint *)(param_2 + 0x98)) {
        uVar1 = *(uint *)(param_2 + 0x98);
      }
      *(uint *)(param_1 + 0x9c) = uVar1 | 0x80000000;
    }
  }
  return param_1;
}


