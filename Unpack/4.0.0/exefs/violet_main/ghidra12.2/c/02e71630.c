/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e71630; name: FUN_02e71630
 */


void FUN_02e71630(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  long local_28;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  plVar1 = (long *)(param_1 + 8);
  if (uVar5 != 2) {
    uVar9 = *(uint *)(param_1 + 0x14);
    if (*(uint *)(param_1 + 0x14) == 0) {
      *(uint *)(param_1 + 0x14) = uVar5;
      uVar9 = uVar5;
    }
    puVar6 = PTR_DAT_047d1a08;
    if ((int)uVar5 < 2) {
      uVar3 = uVar9 & 0x7fffffff;
      if ((int)(uVar9 & 0x7fffffff) <= (int)uVar5) {
        uVar3 = uVar5;
      }
      if ((int)uVar3 < 2) {
        local_28 = 0x100;
        pvVar7 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
        pvVar4 = (void *)0x0;
        if (*(long *)(param_1 + 8) != 0) {
          pvVar4 = (void *)(*(long *)(param_1 + 8) + (long)plVar1);
        }
        memcpy(pvVar7,pvVar4,(long)*(int *)(param_1 + 0x10) << 7);
        if (*(int *)(param_1 + 0x14) < 0) {
          lVar8 = 0;
          if (*plVar1 != 0) {
            lVar8 = *plVar1 + (long)plVar1;
          }
          (**(code **)(puVar6 + 8))(0,lVar8,0);
        }
        lVar8 = 0;
        if (pvVar7 != (void *)0x0) {
          lVar8 = (long)pvVar7 - (long)plVar1;
        }
        *(long *)(param_1 + 8) = lVar8;
        *(undefined4 *)(param_1 + 0x14) = 0x80000002;
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + (long)plVar1);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[1] = 0x7f7fffee7f7fffee;
  *puVar2 = 0x7f7fffee7f7fffee;
  puVar2[3] = 0xff7fffeeff7fffee;
  puVar2[2] = 0xff7fffeeff7fffee;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  puVar2[5] = 0x7f7fffee7f7fffee;
  puVar2[4] = 0x7f7fffee7f7fffee;
  puVar2[7] = 0xff7fffeeff7fffee;
  puVar2[6] = 0xff7fffeeff7fffee;
  puVar2[9] = 0x7f7fffee7f7fffee;
  puVar2[8] = 0x7f7fffee7f7fffee;
  puVar2[0xb] = 0xff7fffeeff7fffee;
  puVar2[10] = 0xff7fffeeff7fffee;
  lVar8 = *(long *)(param_1 + 8);
  *(undefined8 *)((long)plVar1 + lVar8 + 0xe0) = 0;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xe8) = 0;
  *(undefined2 *)((long)plVar1 + lVar8 + 0xf0) = 0;
  *(undefined8 *)((long)plVar1 + lVar8 + 0x88) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0x98) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xa8) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xb8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 200) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xd8) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)plVar1 + lVar8 + 0xd0) = 0xff7fffeeff7fffee;
  uVar5 = *(uint *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar6 = PTR_DAT_047d1a08;
  if ((int)uVar5 < (int)(*(uint *)(param_1 + 0x14) & 0x7fffffff)) {
    local_28 = (long)(int)uVar5 << 7;
    pvVar7 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    pvVar4 = (void *)0x0;
    if (*(long *)(param_1 + 8) != 0) {
      pvVar4 = (void *)(*(long *)(param_1 + 8) + (long)plVar1);
    }
    memcpy(pvVar7,pvVar4,(long)*(int *)(param_1 + 0x10) << 7);
    if (*(int *)(param_1 + 0x14) < 0) {
      lVar8 = 0;
      if (*plVar1 != 0) {
        lVar8 = *plVar1 + (long)plVar1;
      }
      (**(code **)(puVar6 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (pvVar7 != (void *)0x0) {
      lVar8 = (long)pvVar7 - (long)plVar1;
    }
    *(long *)(param_1 + 8) = lVar8;
    *(uint *)(param_1 + 0x14) = uVar5 | 0x80000000;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x50),(ulong)*(uint *)(param_1 + 0x5c) << 4);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x6c)) && (*(long *)(param_1 + 0x60) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x60),(ulong)*(uint *)(param_1 + 0x6c) << 5);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


