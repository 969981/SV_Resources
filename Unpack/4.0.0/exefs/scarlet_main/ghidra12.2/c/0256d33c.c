/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0256d33c; name: FUN_0256d33c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256d33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  void *pvVar13;
  ulong *puVar14;
  undefined4 local_b4;
  undefined8 local_b0 [2];
  undefined8 local_a0 [2];
  void *local_90;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  void *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_LAB_047df5e8;
  if (DAT_04850b88 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if ((1 < *param_5) ||
     (puVar11 = *(undefined **)(param_5 + 8), *(undefined **)(param_5 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df510 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047df510);
      puVar11 = PTR_DAT_047df518;
      uVar4 = _UNK_03cabe58;
      uVar3 = _DAT_03cabe50;
      if (iVar6 != 0) {
        *(undefined8 *)(PTR_DAT_047df518 + 0x10) = 0;
        *(undefined8 *)(puVar11 + 0x18) = 0;
        *(undefined8 *)(puVar11 + 0x20) = 0;
        *(undefined8 *)(puVar11 + 0x28) = 0;
        *(undefined8 *)puVar11 = 0;
        *(undefined8 *)(puVar11 + 8) = 0;
        *(undefined8 *)(puVar11 + 0x18) = uVar4;
        *(undefined8 *)(puVar11 + 0x10) = uVar3;
        __cxa_guard_release(PTR_DAT_047df510);
      }
    }
    else {
      puVar11 = PTR_DAT_047df518;
    }
  }
  local_b4 = param_8;
  local_b0[0] = param_3;
  local_a0[0] = param_2;
  local_48 = param_7;
  uStack_44 = param_6;
  FUN_0256ebc0(&local_90,param_4,puVar2,0,puVar11,local_a0,local_b0,&uStack_44,&local_48,&local_b4);
  uVar5 = local_88;
  pvVar13 = local_90;
  puVar2 = PTR_PTR_047d1a50;
  local_78 = (void *)0x0;
  local_70 = 0x8000000000000000;
  if ((int)local_88 < 1) {
    local_78 = (void *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)local_88 << 6);
    local_70 = CONCAT44(uVar5,uVar5);
    local_78 = pvVar7;
    memcpy(pvVar7,pvVar13,0x34);
    *(undefined8 *)((long)pvVar7 + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar13 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar8 = strlen(pcVar1);
      sVar8 = (size_t)((int)sVar8 + 1);
      pvVar9 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar8);
      memcpy(pvVar9,pcVar1,sVar8);
      *(ulong *)((long)pvVar7 + 0x38) = (ulong)pvVar9 | 1;
    }
    if (uVar5 != 1) {
      memcpy((void *)((long)pvVar7 + 0x40),(void *)((long)pvVar13 + 0x40),0x34);
      *(undefined8 *)((long)pvVar7 + 0x78) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar13 + 0x78) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar8 = strlen(pcVar1);
        sVar8 = (size_t)((int)sVar8 + 1);
        pvVar9 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar8);
        memcpy(pvVar9,pcVar1,sVar8);
        *(ulong *)((long)pvVar7 + 0x78) = (ulong)pvVar9 | 1;
      }
      if (uVar5 != 2) {
        memcpy((void *)((long)pvVar7 + 0x80),(void *)((long)pvVar13 + 0x80),0x34);
        *(undefined8 *)((long)pvVar7 + 0xb8) = 0;
        pcVar1 = (char *)(*(ulong *)((long)pvVar13 + 0xb8) & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar8 = strlen(pcVar1);
          sVar8 = (size_t)((int)sVar8 + 1);
          pvVar9 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar8);
          memcpy(pvVar9,pcVar1,sVar8);
          *(ulong *)((long)pvVar7 + 0xb8) = (ulong)pvVar9 | 1;
        }
        iVar6 = uVar5 - 3;
        if (iVar6 != 0) {
          pvVar13 = (void *)((long)pvVar13 + 0xc0);
          puVar14 = (ulong *)((long)pvVar7 + 0xf8);
          do {
            memcpy(puVar14 + -7,pvVar13,0x34);
            *puVar14 = 0;
            pcVar1 = (char *)(*(ulong *)((long)pvVar13 + 0x38) & 0xfffffffffffffffe);
            if (pcVar1 != (char *)0x0) {
              sVar8 = strlen(pcVar1);
              sVar8 = (size_t)((int)sVar8 + 1);
              pvVar7 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar8);
              memcpy(pvVar7,pcVar1,sVar8);
              *puVar14 = (ulong)pvVar7 | 1;
            }
            iVar6 = iVar6 + -1;
            puVar14 = puVar14 + 8;
            pvVar13 = (void *)((long)pvVar13 + 0x40);
          } while (iVar6 != 0);
        }
      }
    }
  }
  local_68 = local_80;
  FUN_00f69454(param_1,&local_78);
  pvVar13 = local_78;
  lVar12 = (long)(int)local_70;
  if ((int)local_70 != 0) {
    pvVar7 = (void *)((long)local_78 + lVar12 * 0x40 + -0x40);
    uVar10 = *(ulong *)((long)local_78 + lVar12 * 0x40 + -8);
    if ((uVar10 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
    }
    if (pvVar7 != pvVar13) {
      uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -0x48);
      if ((uVar10 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
      }
      if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0x80) != pvVar13) {
        uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -0x88);
        if ((uVar10 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
        }
        if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0xc0) != pvVar13) {
          uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -200);
          if ((uVar10 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
          }
          puVar11 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0x100) != pvVar13) {
            lVar12 = lVar12 << 6;
            do {
              uVar10 = *(ulong *)((long)pvVar13 + lVar12 + -0x108);
              if ((uVar10 & 1) != 0) {
                (**(code **)(puVar11 + 8))(0,uVar10 - 1,0);
              }
              lVar12 = lVar12 + -0x40;
            } while (lVar12 != 0x100);
          }
        }
      }
    }
  }
  lVar12 = local_70;
  uVar10 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_78 != (void *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_78,uVar10 << 6);
  }
  pvVar13 = local_90;
  lVar12 = (long)(int)local_88;
  if (local_88 != 0) {
    pvVar7 = (void *)((long)local_90 + lVar12 * 0x40 + -0x40);
    uVar10 = *(ulong *)((long)local_90 + lVar12 * 0x40 + -8);
    if ((uVar10 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
    }
    if (pvVar7 != pvVar13) {
      uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -0x48);
      if ((uVar10 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
      }
      if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0x80) != pvVar13) {
        uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -0x88);
        if ((uVar10 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
        }
        if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0xc0) != pvVar13) {
          uVar10 = *(ulong *)((long)pvVar13 + lVar12 * 0x40 + -200);
          if ((uVar10 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar10 - 1,0);
          }
          puVar11 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar13 + lVar12 * 0x40 + -0x100) != pvVar13) {
            lVar12 = lVar12 << 6;
            do {
              uVar10 = *(ulong *)((long)pvVar13 + lVar12 + -0x108);
              if ((uVar10 & 1) != 0) {
                (**(code **)(puVar11 + 8))(0,uVar10 - 1,0);
              }
              lVar12 = lVar12 + -0x40;
            } while (lVar12 != 0x100);
          }
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


