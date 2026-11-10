/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ac26c0; name: FUN_01ac26c0
 */


undefined8 FUN_01ac26c0(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  size_t sVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined *puVar15;
  long lVar16;
  void *pvVar17;
  ulong *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char local_f8 [8];
  long local_f0;
  undefined1 auStack_e8 [28];
  undefined4 local_cc;
  uint local_c8;
  uint uStack_c4;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar7 == (undefined8 *)0x0) || (pcVar13 = (char *)*puVar7, pcVar13 == (char *)0x0)) {
    if ((DAT_048502a8 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_048502a8);
      pcVar13 = &DAT_04850280;
      if (iVar6 != 0) {
        DAT_04850280 = 0;
        DAT_04850288 = 0;
        FUN_00100190(&LAB_0256a02c,&DAT_04850280,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048502a8);
      }
    }
    else {
      pcVar13 = &DAT_04850280;
    }
  }
  puVar7 = (undefined8 *)FUN_00c41a10(param_1,2);
  if ((puVar7 == (undefined8 *)0x0) || (pbVar14 = (byte *)*puVar7, (byte *)*puVar7 == (byte *)0x0))
  {
    if ((*PTR_DAT_047df4e0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047df4e0);
      pbVar14 = PTR_DAT_047df4e8;
      if (iVar6 != 0) {
        *PTR_DAT_047df4e8 = 0;
        *(undefined8 *)(pbVar14 + 8) = 0;
        FUN_00100190(&LAB_0255ac2c,pbVar14,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047df4e0);
      }
    }
    else {
      pbVar14 = PTR_DAT_047df4e8;
    }
  }
  dVar19 = (double)FUN_00c41790(param_1,3,0);
  dVar20 = (double)FUN_00c41790(param_1,4,0);
  dVar21 = (double)FUN_00c41790(param_1,5,0);
  uVar22 = CONCAT44((float)dVar20,(float)dVar19);
  uVar11 = (ulong)(uint)(float)dVar21;
  dVar19 = (double)FUN_00c41790(param_1,6,0);
  dVar20 = (double)FUN_00c41790(param_1,7,0);
  dVar21 = (double)FUN_00c41790(param_1,8,0);
  uVar23 = CONCAT44((float)dVar20,(float)dVar19);
  uVar12 = (ulong)(uint)(float)dVar21;
  uVar3 = FUN_00c92df0(param_1,9,0);
  uVar4 = FUN_00c92df0(param_1,10,0);
  uVar5 = FUN_00c92df0(param_1,0xb,0);
  if (((DAT_04850318 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04850318), iVar6 != 0)) {
    DAT_04850b68 = '\x01';
    __cxa_guard_release(&DAT_04850318);
  }
  pcVar1 = (code *)PTR_FUN_047df598;
  if (DAT_04850b68 == '\0') {
    pcVar1 = (code *)0x0;
  }
  if ((1 < *pbVar14) ||
     (puVar15 = *(undefined **)(pbVar14 + 8), *(undefined **)(pbVar14 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df530 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047df530);
      puVar15 = PTR_DAT_047df538;
      if (iVar6 != 0) {
        *(undefined8 *)(PTR_DAT_047df538 + 0x10) = 0;
        *(undefined8 *)(puVar15 + 0x18) = 0;
        *(undefined8 *)puVar15 = 0;
        *(undefined8 *)(puVar15 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047df530);
      }
    }
    else {
      puVar15 = PTR_DAT_047df538;
    }
  }
  local_cc = uVar5;
  local_c8 = uVar4;
  uStack_c4 = uVar3;
  local_c0 = uVar23;
  uStack_b8 = uVar12;
  uStack_b0 = uVar22;
  uStack_a8 = uVar11;
  if (*pcVar13 == '\0') {
    if (*(long *)(pcVar13 + 8) != 0) {
      (*pcVar1)(&local_a0,*(long *)(pcVar13 + 8),puVar15,uVar3,uVar4);
      goto LAB_01ac2884;
    }
  }
  else if (*pcVar13 == '\x01') {
    FUN_01ac2ef0(&local_a0,pcVar13 + 8,pcVar1,0,puVar15,&uStack_b0,&local_c0,&uStack_c4,&local_c8,
                 &local_cc);
    goto LAB_01ac2884;
  }
  local_a0 = (void *)0x0;
  local_98 = 0x8000000000000000;
  local_90 = 0;
LAB_01ac2884:
  pvVar17 = local_a0;
  puVar15 = PTR_PTR_047d1a50;
  local_88 = (void *)0x0;
  local_80 = 0x8000000000000000;
  iVar6 = (int)local_98;
  if ((int)local_98 < 1) {
    local_88 = (void *)0x0;
    local_80 = -0x8000000000000000;
  }
  else {
    pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                               (PTR_PTR_047d1a50,(local_98 & 0xffffffff) << 6);
    local_80 = CONCAT44(iVar6,iVar6);
    local_88 = pvVar8;
    memcpy(pvVar8,pvVar17,0x34);
    *(undefined8 *)((long)pvVar8 + 0x38) = 0;
    pcVar13 = (char *)(*(ulong *)((long)pvVar17 + 0x38) & 0xfffffffffffffffe);
    if (pcVar13 != (char *)0x0) {
      sVar9 = strlen(pcVar13);
      sVar9 = (size_t)((int)sVar9 + 1);
      pvVar10 = (void *)(**(code **)(*(long *)puVar15 + 0x18))(puVar15,sVar9);
      memcpy(pvVar10,pcVar13,sVar9);
      *(ulong *)((long)pvVar8 + 0x38) = (ulong)pvVar10 | 1;
    }
    if (iVar6 != 1) {
      memcpy((void *)((long)pvVar8 + 0x40),(void *)((long)pvVar17 + 0x40),0x34);
      *(undefined8 *)((long)pvVar8 + 0x78) = 0;
      pcVar13 = (char *)(*(ulong *)((long)pvVar17 + 0x78) & 0xfffffffffffffffe);
      if (pcVar13 != (char *)0x0) {
        sVar9 = strlen(pcVar13);
        sVar9 = (size_t)((int)sVar9 + 1);
        pvVar10 = (void *)(**(code **)(*(long *)puVar15 + 0x18))(puVar15,sVar9);
        memcpy(pvVar10,pcVar13,sVar9);
        *(ulong *)((long)pvVar8 + 0x78) = (ulong)pvVar10 | 1;
      }
      if (iVar6 != 2) {
        memcpy((void *)((long)pvVar8 + 0x80),(void *)((long)pvVar17 + 0x80),0x34);
        *(undefined8 *)((long)pvVar8 + 0xb8) = 0;
        pcVar13 = (char *)(*(ulong *)((long)pvVar17 + 0xb8) & 0xfffffffffffffffe);
        if (pcVar13 != (char *)0x0) {
          sVar9 = strlen(pcVar13);
          sVar9 = (size_t)((int)sVar9 + 1);
          pvVar10 = (void *)(**(code **)(*(long *)puVar15 + 0x18))(puVar15,sVar9);
          memcpy(pvVar10,pcVar13,sVar9);
          *(ulong *)((long)pvVar8 + 0xb8) = (ulong)pvVar10 | 1;
        }
        iVar6 = iVar6 + -3;
        if (iVar6 != 0) {
          pvVar17 = (void *)((long)pvVar17 + 0xc0);
          puVar18 = (ulong *)((long)pvVar8 + 0xf8);
          do {
            memcpy(puVar18 + -7,pvVar17,0x34);
            *puVar18 = 0;
            pcVar13 = (char *)(*(ulong *)((long)pvVar17 + 0x38) & 0xfffffffffffffffe);
            if (pcVar13 != (char *)0x0) {
              sVar9 = strlen(pcVar13);
              sVar9 = (size_t)((int)sVar9 + 1);
              pvVar8 = (void *)(**(code **)(*(long *)puVar15 + 0x18))(puVar15,sVar9);
              memcpy(pvVar8,pcVar13,sVar9);
              *puVar18 = (ulong)pvVar8 | 1;
            }
            iVar6 = iVar6 + -1;
            puVar18 = puVar18 + 8;
            pvVar17 = (void *)((long)pvVar17 + 0x40);
          } while (iVar6 != 0);
        }
      }
    }
  }
  local_78 = local_90;
  FUN_00f69454(local_f8,&local_88);
  pvVar17 = local_88;
  lVar16 = (long)(int)local_80;
  if ((int)local_80 != 0) {
    pvVar8 = (void *)((long)local_88 + lVar16 * 0x40 + -0x40);
    uVar11 = *(ulong *)((long)local_88 + lVar16 * 0x40 + -8);
    if ((uVar11 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
    }
    if (pvVar8 != pvVar17) {
      uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -0x48);
      if ((uVar11 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
      }
      if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0x80) != pvVar17) {
        uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -0x88);
        if ((uVar11 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
        }
        if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0xc0) != pvVar17) {
          uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -200);
          if ((uVar11 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
          }
          puVar2 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0x100) != pvVar17) {
            lVar16 = lVar16 << 6;
            do {
              uVar11 = *(ulong *)((long)pvVar17 + lVar16 + -0x108);
              if ((uVar11 & 1) != 0) {
                (**(code **)(puVar2 + 8))(0,uVar11 - 1,0);
              }
              lVar16 = lVar16 + -0x40;
            } while (lVar16 != 0x100);
          }
        }
      }
    }
  }
  lVar16 = local_80;
  uVar11 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar16) && (local_88 != (void *)0x0)) {
    (**(code **)(*(long *)puVar15 + 0x20))(puVar15,local_88,uVar11 << 6);
  }
  pvVar17 = local_a0;
  lVar16 = (long)(int)local_98;
  if ((int)local_98 != 0) {
    pvVar8 = (void *)((long)local_a0 + lVar16 * 0x40 + -0x40);
    uVar11 = *(ulong *)((long)local_a0 + lVar16 * 0x40 + -8);
    if ((uVar11 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
    }
    if (pvVar8 != pvVar17) {
      uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -0x48);
      if ((uVar11 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
      }
      if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0x80) != pvVar17) {
        uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -0x88);
        if ((uVar11 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
        }
        if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0xc0) != pvVar17) {
          uVar11 = *(ulong *)((long)pvVar17 + lVar16 * 0x40 + -200);
          if ((uVar11 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
          }
          puVar2 = PTR_DAT_047d1a08;
          if ((void *)((long)pvVar17 + lVar16 * 0x40 + -0x100) != pvVar17) {
            lVar16 = lVar16 << 6;
            do {
              uVar11 = *(ulong *)((long)pvVar17 + lVar16 + -0x108);
              if ((uVar11 & 1) != 0) {
                (**(code **)(puVar2 + 8))(0,uVar11 - 1,0);
              }
              lVar16 = lVar16 + -0x40;
            } while (lVar16 != 0x100);
          }
        }
      }
    }
  }
  uVar11 = local_98;
  uVar12 = (ulong)local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (long)uVar11) && (local_a0 != (void *)0x0)) {
    (**(code **)(*(long *)puVar15 + 0x20))(puVar15,local_a0,uVar12 << 6);
  }
  FUN_00f69200(param_1,local_f8);
  lVar16 = local_f0;
  if ((local_f8[0] == '\x01') && (local_f0 = 0, lVar16 != 0)) {
    FUN_00e51d60(auStack_e8);
  }
  return 1;
}


