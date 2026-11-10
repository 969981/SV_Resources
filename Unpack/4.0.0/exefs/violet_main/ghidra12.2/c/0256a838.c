/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256a838; name: FUN_0256a838
 */


void FUN_0256a838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,byte *param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  void *pvVar5;
  size_t sVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined2 *puVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0 [2];
  undefined8 auStack_a0 [2];
  void *local_90;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar2 = PTR_FUN_047df5b0;
  if (DAT_04850b30 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  local_bc = param_7;
  local_b8 = param_6;
  uStack_b4 = param_5;
  local_b0[0] = param_3;
  auStack_a0[0] = param_2;
  if ((1 < *param_8) || (puVar11 = *(undefined2 **)(param_8 + 8), puVar11 == (undefined2 *)0x0)) {
    if ((DAT_048502d8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_048502d8);
      puVar11 = &DAT_048502d0;
      if (iVar4 != 0) {
        DAT_048502d2 = 0;
        DAT_048502d0 = 0;
        __cxa_guard_release(&DAT_048502d8);
      }
    }
    else {
      puVar11 = &DAT_048502d0;
    }
  }
  FUN_0256e74c(&local_90,param_4,puVar2,0,auStack_a0,local_b0,&uStack_b4,&local_b8,&local_bc,puVar11
              );
  uVar10 = local_88;
  pvVar12 = local_90;
  puVar2 = PTR_PTR_047d1a50;
  local_78 = (void *)0x0;
  local_70 = 0x8000000000000000;
  if ((int)local_88 < 1) {
    pvVar5 = (void *)0x0;
    uVar10 = 0;
    local_78 = (void *)0x0;
    local_70 = 0x8000000000000000;
    uVar14 = 0x80000000;
  }
  else {
    pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)local_88 << 6);
    local_70 = CONCAT44(uVar10,uVar10);
    local_78 = pvVar5;
    memcpy(pvVar5,pvVar12,0x34);
    *(undefined8 *)((long)pvVar5 + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar12 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar6 = strlen(pcVar1);
      sVar6 = (size_t)((int)sVar6 + 1);
      pvVar7 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar6);
      memcpy(pvVar7,pcVar1,sVar6);
      *(ulong *)((long)pvVar5 + 0x38) = (ulong)pvVar7 | 1;
    }
    uVar14 = uVar10;
    if (uVar10 != 1) {
      memcpy((void *)((long)pvVar5 + 0x40),(void *)((long)pvVar12 + 0x40),0x34);
      *(undefined8 *)((long)pvVar5 + 0x78) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar12 + 0x78) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar6 = strlen(pcVar1);
        sVar6 = (size_t)((int)sVar6 + 1);
        pvVar7 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar6);
        memcpy(pvVar7,pcVar1,sVar6);
        *(ulong *)((long)pvVar5 + 0x78) = (ulong)pvVar7 | 1;
      }
      if (uVar10 != 2) {
        pvVar12 = (void *)((long)pvVar12 + 0x80);
        puVar15 = (ulong *)((long)pvVar5 + 0xb8);
        uVar13 = 2;
        do {
          memcpy(puVar15 + -7,pvVar12,0x34);
          *puVar15 = 0;
          pcVar1 = (char *)(*(ulong *)((long)pvVar12 + 0x38) & 0xfffffffffffffffe);
          if (pcVar1 != (char *)0x0) {
            sVar6 = strlen(pcVar1);
            sVar6 = (size_t)((int)sVar6 + 1);
            pvVar7 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar6);
            memcpy(pvVar7,pcVar1,sVar6);
            *puVar15 = (ulong)pvVar7 | 1;
          }
          uVar13 = uVar13 + 1;
          puVar15 = puVar15 + 8;
          pvVar12 = (void *)((long)pvVar12 + 0x40);
        } while (uVar10 != uVar13);
      }
    }
  }
  local_68 = local_80;
  FUN_01073294(param_1,&local_78);
  if (uVar10 != 0) {
    lVar9 = (long)(int)uVar10;
    uVar8 = *(ulong *)((long)pvVar5 + lVar9 * 0x40 + -8);
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
    if ((void *)((long)pvVar5 + lVar9 * 0x40 + -0x40) != pvVar5) {
      uVar8 = *(ulong *)((long)pvVar5 + lVar9 * 0x40 + -0x48);
      if ((uVar8 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
      }
      if ((void *)((long)pvVar5 + lVar9 * 0x40 + -0x80) != pvVar5) {
        uVar8 = *(ulong *)((long)pvVar5 + lVar9 * 0x40 + -0x88);
        if ((uVar8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
        }
        puVar3 = PTR_DAT_047d1a08;
        if ((void *)((long)pvVar5 + lVar9 * 0x40 + -0xc0) != pvVar5) {
          lVar9 = lVar9 << 6;
          do {
            uVar8 = *(ulong *)((long)pvVar5 + lVar9 + -200);
            if ((uVar8 & 1) != 0) {
              (**(code **)(puVar3 + 8))(0,uVar8 - 1,0);
            }
            lVar9 = lVar9 + -0x40;
          } while (lVar9 != 0xc0);
        }
      }
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  if ((pvVar5 != (void *)0x0) && (-1 < (int)uVar14)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,pvVar5,(ulong)uVar14 << 6);
  }
  pvVar12 = local_90;
  lVar9 = (long)(int)local_88;
  if (local_88 != 0) {
    pvVar5 = (void *)((long)local_90 + lVar9 * 0x40 + -0x40);
    uVar8 = *(ulong *)((long)local_90 + lVar9 * 0x40 + -8);
    if ((uVar8 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
    }
    if (pvVar5 != pvVar12) {
      uVar8 = *(ulong *)((long)pvVar12 + lVar9 * 0x40 + -0x48);
      if ((uVar8 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
      }
      if ((void *)((long)pvVar12 + lVar9 * 0x40 + -0x80) != pvVar12) {
        uVar8 = *(ulong *)((long)pvVar12 + lVar9 * 0x40 + -0x88);
        if ((uVar8 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar8 - 1,0);
        }
        puVar3 = PTR_DAT_047d1a08;
        if ((void *)((long)pvVar12 + lVar9 * 0x40 + -0xc0) != pvVar12) {
          lVar9 = lVar9 << 6;
          do {
            uVar8 = *(ulong *)((long)pvVar12 + lVar9 + -200);
            if ((uVar8 & 1) != 0) {
              (**(code **)(puVar3 + 8))(0,uVar8 - 1,0);
            }
            lVar9 = lVar9 + -0x40;
          } while (lVar9 != 0xc0);
        }
      }
    }
  }
  local_88 = 0;
  if ((-1 < (int)local_84) && (local_90 != (void *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_90,(ulong)local_84 << 6);
  }
  return;
}


