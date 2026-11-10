/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129309c; name: FUN_0129309c
 */


char * FUN_0129309c(long param_1,ulong *param_2,ulong param_3)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  void *__s;
  undefined8 uVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  uint *puVar20;
  char *__s_00;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint *puVar24;
  undefined1 *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  uint local_d8 [2];
  undefined *local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  uVar22 = *param_2;
  uVar21 = (uint)uVar22;
  local_d8[0] = uVar21;
  plVar10 = (long *)FUN_01297c44(param_1 + 0x130,local_d8);
  __s = (void *)*plVar10;
  lVar14 = plVar10[1];
  uVar16 = param_3 + 1;
  uVar17 = lVar14 - (long)__s;
  if (uVar16 < uVar17 || uVar16 - uVar17 == 0) {
    if (uVar16 < uVar17) {
      lVar14 = (long)__s + uVar16;
      plVar10[1] = lVar14;
    }
  }
  else {
    FUN_00f9e194(plVar10,uVar16 - uVar17);
    __s = (void *)*plVar10;
    lVar14 = plVar10[1];
  }
  memset(__s,0,lVar14 - (long)__s);
  uVar16 = *(ulong *)(param_1 + 0x6e8);
  if (uVar16 != 0) {
    uVar17 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar22 = uVar22 & 0xffffffff;
    if (uVar17 < 2) {
      uVar18 = (int)uVar16 - 1 & uVar22;
    }
    else if (uVar22 < uVar16) {
      uVar18 = uVar22;
    }
    else {
      uVar18 = 0;
      if (uVar16 != 0) {
        uVar18 = uVar22 / uVar16;
      }
      uVar18 = uVar22 - uVar18 * uVar16;
    }
    plVar19 = *(long **)(*(long *)(param_1 + 0x6e0) + uVar18 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar19[1] == uVar22) {
            if (*(uint *)(plVar19 + 2) == uVar21) goto LAB_012934bc;
          }
          else if ((plVar19[1] & uVar16 - 1) != uVar18) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar19[1];
          if (uVar17 == uVar22) {
            if (*(uint *)(plVar19 + 2) == uVar21) {
LAB_012934bc:
              memcpy((void *)*plVar10,(void *)plVar19[3],plVar10[1] - *plVar10);
              return (char *)*plVar10;
            }
          }
          else {
            if (uVar16 <= uVar17) {
              uVar7 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar7 * uVar16;
            }
            if (uVar17 != uVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d4ca0;
  local_f8 = &DAT_e4d07a996e5ef5e8;
  puStack_f0 = &DAT_03c60f6f;
  local_e8 = 4;
  local_e0 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d4ca8 = uVar11;
  lVar12 = FUN_00f844f4(uVar11,&local_f8);
  lVar14 = *plVar10;
  lVar4 = plVar10[1];
  pMVar1 = (MutexType *)(lVar12 + 0x80);
  nn::os::LockMutex(pMVar1);
  plVar19 = *(long **)(lVar12 + 0x60);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x28))(plVar19,local_d8);
  }
  nn::os::LockMutex(pMVar1);
  puVar5 = *(uint **)(lVar12 + 0x10);
  uVar16 = (long)puVar5 - (long)*(uint **)(lVar12 + 8);
  if (0 < (long)uVar16) {
    puVar15 = *(uint **)(lVar12 + 8);
    puVar20 = puVar5;
    do {
      puVar24 = puVar15 + (uVar16 / 0x60) * 0xc;
      if (*puVar24 == local_d8[0]) goto LAB_01293294;
      puVar3 = puVar24 + 0xc;
      if (local_d8[0] <= *puVar24) {
        puVar3 = puVar15;
        puVar20 = puVar24;
      }
      uVar16 = (long)puVar20 - (long)puVar3;
      puVar15 = puVar3;
    } while (0 < (long)uVar16);
  }
  puVar24 = puVar5;
LAB_01293294:
  nn::os::UnlockMutex(pMVar1);
  if ((puVar24 == (uint *)0x0) || (puVar5 == puVar24)) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    uVar11 = *(undefined8 *)(puVar24 + 2);
    local_d0 = PTR_DAT_047dcc88 + 0x10;
    uVar23 = *(undefined8 *)(puVar24 + 6);
    uStack_64 = *puVar24;
    puVar2 = PTR_DAT_047dcc70 + 0x10;
    local_68 = 0;
    local_70 = 0;
    local_78 = puVar2;
    if (uStack_64 != 0) {
      uVar16 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar16 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar16 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar16 != 3)) {
        FUN_00f83090(&local_78);
        for (lVar6 = uVar16 - 4; lVar6 != 0; lVar6 = lVar6 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
    }
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_b8 = PTR_DAT_047dcc78 + 0x10;
    local_a0 = 0;
    uStack_80 = 0;
    local_c8 = PTR_DAT_047dcc80 + 0x10;
    uStack_c0 = 0;
    local_b0 = uVar11;
    uStack_a8 = uVar23;
    local_98 = puVar2;
    uStack_90 = local_70;
    local_68 = uStack_64;
    cVar8 = FUN_00f88478(&local_d0,lVar14,lVar4 - lVar14);
    nn::os::UnlockMutex(pMVar1);
    if (cVar8 != '\0') goto LAB_0129340c;
  }
  plVar19 = *(long **)(lVar12 + 0x60);
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x50))(plVar19,local_d8);
  }
LAB_0129340c:
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  __s_00 = (char *)*plVar10;
  sVar13 = strlen(__s_00);
  if (param_3 < sVar13) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    __s_00 = *(char **)(PTR_DAT_047d3e30 + 8);
  }
  return __s_00;
}


