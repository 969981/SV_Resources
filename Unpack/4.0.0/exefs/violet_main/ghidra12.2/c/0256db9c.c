/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0256db9c; name: FUN_0256db9c
 */


void FUN_0256db9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  ulong *puVar13;
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
  
  puVar2 = PTR_LAB_047df5f0;
  if (DAT_04850b98 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  uVar5 = FUN_017869fc(param_5);
  local_b4 = param_8;
  local_b0[0] = param_3;
  local_a0[0] = param_2;
  local_48 = param_7;
  uStack_44 = param_6;
  FUN_0256ec98(&local_90,param_4,puVar2,0,uVar5,local_a0,local_b0,&uStack_44,&local_48,&local_b4);
  uVar4 = local_88;
  pvVar11 = local_90;
  puVar2 = PTR_PTR_047d1a50;
  local_78 = (void *)0x0;
  local_70 = 0x8000000000000000;
  if ((int)local_88 < 1) {
    local_78 = (void *)0x0;
    local_70 = -0x8000000000000000;
  }
  else {
    pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(ulong)local_88 << 6);
    local_70 = CONCAT44(uVar4,uVar4);
    local_78 = pvVar6;
    memcpy(pvVar6,pvVar11,0x34);
    *(undefined8 *)((long)pvVar6 + 0x38) = 0;
    pcVar1 = (char *)(*(ulong *)((long)pvVar11 + 0x38) & 0xfffffffffffffffe);
    if (pcVar1 != (char *)0x0) {
      sVar7 = strlen(pcVar1);
      sVar7 = (size_t)((int)sVar7 + 1);
      pvVar8 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
      memcpy(pvVar8,pcVar1,sVar7);
      *(ulong *)((long)pvVar6 + 0x38) = (ulong)pvVar8 | 1;
    }
    if (uVar4 != 1) {
      memcpy((void *)((long)pvVar6 + 0x40),(void *)((long)pvVar11 + 0x40),0x34);
      *(undefined8 *)((long)pvVar6 + 0x78) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar11 + 0x78) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar7 = strlen(pcVar1);
        sVar7 = (size_t)((int)sVar7 + 1);
        pvVar8 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
        memcpy(pvVar8,pcVar1,sVar7);
        *(ulong *)((long)pvVar6 + 0x78) = (ulong)pvVar8 | 1;
      }
      if (uVar4 != 2) {
        memcpy((void *)((long)pvVar6 + 0x80),(void *)((long)pvVar11 + 0x80),0x34);
        *(undefined8 *)((long)pvVar6 + 0xb8) = 0;
        pcVar1 = (char *)(*(ulong *)((long)pvVar11 + 0xb8) & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar7 = strlen(pcVar1);
          sVar7 = (size_t)((int)sVar7 + 1);
          pvVar8 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
          memcpy(pvVar8,pcVar1,sVar7);
          *(ulong *)((long)pvVar6 + 0xb8) = (ulong)pvVar8 | 1;
        }
        iVar12 = uVar4 - 3;
        if (iVar12 != 0) {
          pvVar11 = (void *)((long)pvVar11 + 0xc0);
          puVar13 = (ulong *)((long)pvVar6 + 0xf8);
          do {
            memcpy(puVar13 + -7,pvVar11,0x34);
            *puVar13 = 0;
            pcVar1 = (char *)(*(ulong *)((long)pvVar11 + 0x38) & 0xfffffffffffffffe);
            if (pcVar1 != (char *)0x0) {
              sVar7 = strlen(pcVar1);
              sVar7 = (size_t)((int)sVar7 + 1);
              pvVar6 = (void *)(**(code **)(*(long *)puVar2 + 0x18))(puVar2,sVar7);
              memcpy(pvVar6,pcVar1,sVar7);
              *puVar13 = (ulong)pvVar6 | 1;
            }
            iVar12 = iVar12 + -1;
            puVar13 = puVar13 + 8;
            pvVar11 = (void *)((long)pvVar11 + 0x40);
          } while (iVar12 != 0);
        }
      }
    }
  }
  local_68 = local_80;
  FUN_00f69454(param_1,&local_78);
  pvVar11 = local_78;
  lVar10 = (long)(int)local_70;
  if ((int)local_70 != 0) {
    pvVar6 = (void *)((long)local_78 + lVar10 * 0x40 + -0x40);
    uVar9 = *(ulong *)((long)local_78 + lVar10 * 0x40 + -8);
    if ((uVar9 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
    }
    if (pvVar6 != pvVar11) {
      uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -0x48);
      if ((uVar9 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
      }
      if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0x80) != pvVar11) {
        uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -0x88);
        if ((uVar9 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
        }
        if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0xc0) != pvVar11) {
          uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -200);
          if ((uVar9 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
          }
          puVar3 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0x100) != pvVar11) {
            lVar10 = lVar10 << 6;
            do {
              uVar9 = *(ulong *)((long)pvVar11 + lVar10 + -0x108);
              if ((uVar9 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,uVar9 - 1,0);
              }
              lVar10 = lVar10 + -0x40;
            } while (lVar10 != 0x100);
          }
        }
      }
    }
  }
  lVar10 = local_70;
  uVar9 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar10) && (local_78 != (void *)0x0)) {
    (**(code **)(*(long *)puVar2 + 0x20))(puVar2,local_78,uVar9 << 6);
  }
  pvVar11 = local_90;
  lVar10 = (long)(int)local_88;
  if (local_88 != 0) {
    pvVar6 = (void *)((long)local_90 + lVar10 * 0x40 + -0x40);
    uVar9 = *(ulong *)((long)local_90 + lVar10 * 0x40 + -8);
    if ((uVar9 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
    }
    if (pvVar6 != pvVar11) {
      uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -0x48);
      if ((uVar9 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
      }
      if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0x80) != pvVar11) {
        uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -0x88);
        if ((uVar9 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
        }
        if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0xc0) != pvVar11) {
          uVar9 = *(ulong *)((long)pvVar11 + lVar10 * 0x40 + -200);
          if ((uVar9 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar9 - 1,0);
          }
          puVar3 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar11 + lVar10 * 0x40 + -0x100) != pvVar11) {
            lVar10 = lVar10 << 6;
            do {
              uVar9 = *(ulong *)((long)pvVar11 + lVar10 + -0x108);
              if ((uVar9 & 1) != 0) {
                (**(code **)(puVar3 + 8))(0,uVar9 - 1,0);
              }
              lVar10 = lVar10 + -0x40;
            } while (lVar10 != 0x100);
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


