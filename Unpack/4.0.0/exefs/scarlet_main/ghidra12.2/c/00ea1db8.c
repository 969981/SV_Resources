/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ea1db8; name: FUN_00ea1db8
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00ea1db8(undefined1 *param_1,undefined8 *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  void *pvVar15;
  byte *pbVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  void *__src;
  size_t __n;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  undefined1 auStack_310 [8];
  int local_308;
  int local_304;
  undefined4 auStack_2d8 [6];
  byte abStack_2c0 [48];
  undefined8 local_290;
  undefined8 uStack_288;
  long *local_280;
  ulong local_278;
  undefined8 local_270;
  void *local_268;
  ulong local_260;
  undefined8 uStack_258;
  void *local_250;
  ulong local_248;
  undefined8 local_240;
  void *local_238;
  ulong local_230;
  undefined8 uStack_228;
  void *local_220;
  ulong local_218;
  undefined8 local_210;
  void *local_208;
  long *local_200 [4];
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  byte *local_158;
  undefined4 *puStack_150;
  byte local_148;
  int local_128;
  undefined1 auStack_108 [64];
  size_t local_c8 [6];
  ulong local_98 [7];
  
  *(undefined1 **)(param_1 + 8) = param_1 + 0x10;
  param_1[1] = *param_3;
  (**(code **)PTR_DAT_047d2ba8)(param_1 + 0x10,*param_2);
  if (param_3[1] == 0) {
    if ((*param_3 >> 1 & 1) == 0) {
      puVar12 = (undefined8 *)FUN_008f1b9c(param_3,0);
      if (puVar12 == (undefined8 *)0x0) {
        puVar13 = (undefined8 *)FUN_008f1b9c(param_3,1);
      }
      else {
        local_200[0] = (long *)*puVar12;
        local_200[1] = (long *)puVar12[1];
        puVar13 = (undefined8 *)FUN_008f1b9c(param_3,1);
      }
      bVar3 = puVar12 != (undefined8 *)0x0;
      uVar9 = (ulong)bVar3;
      uVar11 = uVar9;
      if (puVar13 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar13[1];
        uVar11 = (ulong)(bVar3 + 1);
        local_200[uVar9 * 2] = (long *)*puVar13;
        local_200[uVar9 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN_008f1b9c(param_3,2);
      uVar9 = uVar11;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar9 = (ulong)((int)uVar11 + 1);
        local_200[uVar11 * 2] = (long *)*puVar12;
        local_200[uVar11 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN_008f1b9c(param_3,3);
      uVar11 = uVar9;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar11 = (ulong)((int)uVar9 + 1);
        local_200[uVar9 * 2] = (long *)*puVar12;
        local_200[uVar9 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN_008f1b9c(param_3,4);
      uVar9 = uVar11;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar9 = (ulong)((int)uVar11 + 1);
        local_200[uVar11 * 2] = (long *)*puVar12;
        local_200[uVar11 * 2 + 1] = plVar18;
      }
      puVar12 = (undefined8 *)FUN_008f1b9c(param_3,5);
      uVar11 = uVar9;
      if (puVar12 != (undefined8 *)0x0) {
        plVar18 = (long *)puVar12[1];
        uVar11 = (ulong)((int)uVar9 + 1);
        local_200[uVar9 * 2] = (long *)*puVar12;
        local_200[uVar9 * 2 + 1] = plVar18;
      }
      cVar6 = (**(code **)PTR_DAT_047d2bc0)(*(undefined8 *)(param_1 + 8),uVar11,local_200);
      if (cVar6 == '\0') {
        return 3;
      }
    }
    else {
      iVar21 = 0;
      iVar8 = 0;
      do {
        puVar12 = (undefined8 *)FUN_008f1b9c(param_3,iVar8);
        if (puVar12 != (undefined8 *)0x0) {
          lVar10 = (long)iVar21;
          local_200[lVar10 * 3] = (long *)*puVar12;
          local_200[lVar10 * 3 + 1] = (long *)puVar12[1];
          local_200[lVar10 * 3 + 2] = (long *)puVar12[6];
          puVar13 = (undefined8 *)puVar12[4];
          iVar21 = iVar21 + 1;
          if (puVar13 != (undefined8 *)0x0) {
            pvVar14 = (void *)*puVar13;
            pvVar15 = (void *)puVar12[1];
            memcpy(pvVar15,pvVar14,(long)*(int *)((long)pvVar14 + 0x14));
            if ((void *)puVar13[1] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar14 + 0x14)),
                     (void *)puVar13[1],(long)*(int *)((long)pvVar14 + 0x18));
            }
            if ((void *)puVar13[4] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar14 + 0x20)),
                     (void *)puVar13[4],(long)*(int *)((long)pvVar14 + 0x1c));
            }
            if ((void *)puVar13[2] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar14 + 0x6f0)),
                     (void *)puVar13[2],(long)*(int *)((long)pvVar14 + 0x6f4));
            }
            if ((void *)puVar13[3] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar14 + 0x7c8)),
                     (void *)puVar13[3],(long)*(int *)((long)pvVar14 + 0x7cc));
            }
            if ((void *)puVar13[5] != (void *)0x0) {
              memcpy((void *)((long)pvVar15 + (long)*(int *)((long)pvVar14 + 0x7e8)),
                     (void *)puVar13[5],(long)*(int *)((long)pvVar14 + 0x7ec));
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 6);
      cVar6 = (**(code **)PTR_DAT_047d2bc8)(*(undefined8 *)(param_1 + 8),iVar21,local_200);
      if (cVar6 == '\0') {
        return 3;
      }
      if ((*param_3 >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_3 + 0x78);
      }
    }
    goto LAB_00ea2238;
  }
  if (param_3[1] != 2) {
    return 1;
  }
  if (((DAT_048006f0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_048006f0), iVar8 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_048006f8,false,0);
    FUN_00100190(PTR__Mutex_047cc198,&DAT_048006f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048006f0);
  }
  nn::os::LockMutex((MutexType *)&DAT_048006f8);
  FUN_008f1b38();
  uVar9 = FUN_008f2a68();
  if ((uVar9 & 1) == 0) {
    FUN_008f1b38();
    FUN_008f29b4();
  }
  lVar10 = FUN_008f1b38();
  (**(code **)(lVar10 + 0x28))(auStack_310);
  puVar5 = PTR_DAT_047d2730;
  (**(code **)PTR_DAT_047d2730)(*param_2,0x2f,&local_314);
  (**(code **)puVar5)(*param_2,0x2e,&local_318);
  (**(code **)puVar5)(*param_2,0x31,&local_31c);
  (**(code **)puVar5)(*param_2,0x30,&local_320);
  iVar8 = 3;
  if ((((local_314 <= local_308) && (local_308 <= local_318)) && (iVar8 = 3, local_31c <= local_304)
      ) && (local_304 <= local_320)) {
    lVar10 = FUN_008f1b38();
    cVar6 = (**(code **)(lVar10 + 0x10))(local_200);
    if ((cVar6 == '\0') || (local_128 != 1)) {
      iVar8 = 3;
    }
    else {
      local_1e0 = local_1e0 & 0xfffffffffffe0000 | (ulong)*param_3 & 1 | 0x2214;
      uVar11 = FUN_008f2a80();
      uVar9 = 0x20000;
      if ((uVar11 & 1) == 0) {
        uVar9 = 0;
      }
      local_1d0 = 0;
      local_1a8 = 0;
      local_210 = 0;
      local_208 = (void *)0x0;
      local_1e0 = local_1e0 & 0xfffffffffff9ffff | uVar9;
      puStack_150 = auStack_2d8;
      local_220 = (void *)0x0;
      local_218 = 0;
      local_1a0 = 0;
      local_200[3] = (long *)0x0;
      local_148 = 0;
      uStack_1d8 = 0;
      local_158 = abStack_2c0;
      local_230 = 0;
      uStack_228 = 0;
      local_240 = 0;
      local_238 = (void *)0x0;
      local_250 = (void *)0x0;
      local_248 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_270 = 0;
      local_268 = (void *)0x0;
      local_280 = (void *)0x0;
      local_278 = 0;
      local_290 = 0;
      uStack_288 = 0;
      lVar10 = FUN_008f1b9c(param_3,0);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(0);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b9c(param_3,1);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(1);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b9c(param_3,2);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(2);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b9c(param_3,3);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(3);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b9c(param_3,4);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(4);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b9c(param_3,5);
      if (lVar10 != 0) {
        std::string::assign((char *)(abStack_2c0 + ((ulong)local_148 * 3 + 6) * 8),
                            *(ulong *)(lVar10 + 8));
        uVar9 = (ulong)local_148;
        if ((abStack_2c0[(uVar9 * 3 + 6) * 8] & 1) == 0) {
          pbVar16 = abStack_2c0 + uVar9 * 0x18 + 0x31;
        }
        else {
          pbVar16 = (byte *)local_200[uVar9 * 3 + -0x10];
        }
        *(byte **)(abStack_2c0 + uVar9 * 8) = pbVar16;
        uVar7 = FUN_008f1398(5);
        auStack_2d8[local_148] = uVar7;
        local_148 = local_148 + 1;
      }
      lVar10 = FUN_008f1b38();
      cVar6 = (**(code **)(lVar10 + 0x20))(local_200);
      plVar18 = local_200[0];
      bVar3 = false;
      iVar8 = 3;
      if ((cVar6 != '\0') && (*(char *)(*local_200[0] + 0xd) == '\0')) {
        if (*(char *)(*local_200[0] + 0xc) != '\0') {
          pvVar14 = malloc(400);
          *(void **)(param_1 + 0xd8) = pvVar14;
          *(undefined8 *)((long)pvVar14 + 0x108) = 0;
          *(undefined8 *)((long)pvVar14 + 0x110) = 0;
          __src = (void *)plVar18[1];
          pvVar15 = malloc((ulong)*(uint *)((long)__src + 0x44));
          *(void **)((long)pvVar14 + 0x110) = pvVar15;
          if (pvVar15 != (void *)0x0) {
            memcpy(pvVar15,__src,(ulong)*(uint *)((long)__src + 0x44));
            iVar8 = *(int *)((long)pvVar15 + 0x4c);
            *(undefined4 *)((long)pvVar14 + 0x178) = 0;
            local_98[4] = 0;
            local_98[5] = 0;
            *(undefined8 *)((long)pvVar14 + 0x180) = 0;
            local_98[2] = 0;
            local_98[3] = 0;
            local_98[0] = 0;
            local_98[1] = 0;
            local_c8[4] = 0;
            local_c8[5] = 0;
            local_c8[2] = 0;
            local_c8[3] = 0;
            local_c8[0] = 0;
            local_c8[1] = 0;
            if (iVar8 < 1) {
              uVar11 = 0;
              uVar9 = 0;
            }
            else {
              lVar17 = 0;
              uVar11 = 0;
              lVar10 = 0;
              uVar9 = 0;
              do {
                iVar8 = *(int *)((long)pvVar15 + lVar17 + 0x98);
                if (iVar8 == 3) {
                  *(long *)((long)pvVar14 + 0x188) = (long)pvVar15 + lVar17 + 0x90;
                }
                else if (iVar8 == 0) {
                  uVar19 = (ulong)*(uint *)((long)pvVar15 + lVar17 + 200);
                  uVar20 = -(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
                  uVar2 = *(uint *)((long)pvVar15 + lVar17 + 0x94);
                  *(ulong *)((long)local_c8 + uVar20 + 0x30) = uVar19;
                  *(ulong *)((long)local_c8 + uVar20) =
                       (long)pvVar15 +
                       (ulong)*(uint *)((long)pvVar15 + lVar17 + 0xc4) + (ulong)uVar2;
                  iVar8 = (int)uVar11;
                  uVar1 = iVar8 + 1;
                  uVar11 = (ulong)uVar1;
                  *(ulong *)((long)pvVar14 + (long)iVar8 * 0x10 + 0x120) =
                       (long)pvVar15 +
                       (ulong)*(uint *)((long)pvVar15 + lVar17 + 0xc0) + (ulong)uVar2;
                  *(uint *)((long)pvVar14 + 0x178) = uVar1;
                  uVar20 = (ulong)*(uint *)((long)pvVar15 + lVar17 + 0xd0);
                  pvVar15 = *(void **)((long)pvVar14 + 0x110);
                  uVar9 = uVar9 + uVar19 + 0xff & 0xffffffffffffff00;
                  if (uVar20 <= *(ulong *)((long)pvVar14 + 0x180)) {
                    uVar20 = *(ulong *)((long)pvVar14 + 0x180);
                  }
                  *(ulong *)((long)pvVar14 + 0x180) = uVar20;
                }
                lVar10 = lVar10 + 1;
                lVar17 = lVar17 + 0x90;
              } while (lVar10 < *(int *)((long)pvVar15 + 0x4c));
            }
            uVar9 = uVar9 + 0x13ff & 0xfffffffffffff000;
            pvVar15 = malloc(uVar9 + 0x1000);
            *(void **)((long)pvVar14 + 0x100) = pvVar15;
            if (pvVar15 != (void *)0x0) {
              pvVar15 = (void *)((long)pvVar15 + 0xfffU & 0xfffffffffffff000);
              *(void **)((long)pvVar14 + 0x108) = pvVar15;
              if (0 < (int)uVar11) {
                lVar10 = 0;
                do {
                  __n = local_c8[lVar10 + 6];
                  memcpy(pvVar15,(void *)local_c8[lVar10],__n);
                  pvVar15 = (void *)((long)pvVar15 + __n + 0xff & 0xffffffffffffff00);
                  lVar10 = lVar10 + 1;
                } while (lVar10 < *(int *)((long)pvVar14 + 0x178));
              }
              (**(code **)PTR_DAT_047d28f8)(auStack_108,*param_2);
              (**(code **)PTR_DAT_047d2be0)(auStack_108);
              (**(code **)PTR_DAT_047d2bf0)(auStack_108,0x61);
              (**(code **)PTR_DAT_047d2be8)
                        (auStack_108,*(undefined8 *)((long)pvVar14 + 0x108),uVar9);
              (**(code **)PTR_DAT_047d2900)(pvVar14,auStack_108);
              lVar10 = (**(code **)PTR_DAT_047d2c28)(pvVar14);
              if (0 < *(int *)((long)pvVar14 + 0x178)) {
                lVar17 = 0;
                uVar9 = 0;
                plVar18 = (long *)((long)pvVar14 + 0x118);
                do {
                  *plVar18 = uVar9 + lVar10;
                  lVar4 = lVar17 + 6;
                  lVar17 = lVar17 + 1;
                  uVar9 = local_c8[lVar4] + (uVar9 | 0xff) & 0xffffffffffffff00;
                  plVar18 = plVar18 + 2;
                } while (lVar17 < *(int *)((long)pvVar14 + 0x178));
              }
              iVar8 = 0;
              bVar3 = true;
              goto LAB_00ea27cc;
            }
          }
        }
        bVar3 = false;
        iVar8 = 3;
      }
LAB_00ea27cc:
      if ((local_218 & 1) != 0) {
        operator_delete(local_208);
      }
      if ((local_230 & 1) != 0) {
        operator_delete(local_220);
      }
      if ((local_248 & 1) != 0) {
        operator_delete(local_238);
      }
      if ((local_260 & 1) != 0) {
        operator_delete(local_250);
      }
      if ((local_278 & 1) != 0) {
        operator_delete(local_268);
      }
      if ((local_290 & 1) != 0) {
        operator_delete(local_280);
      }
      lVar10 = FUN_008f1b38();
      (**(code **)(lVar10 + 0x18))(local_200);
      if (bVar3) {
        cVar6 = (**(code **)PTR_DAT_047d2bc0)
                          (*(undefined8 *)(param_1 + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x178),
                           *(long *)(param_1 + 0xd8) + 0x118);
        iVar8 = 0;
        if (cVar6 != '\x01') {
          iVar8 = 3;
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048006f8);
  if (iVar8 != 0) {
    return iVar8;
  }
LAB_00ea2238:
  if ((*param_3 & 1) == 0) {
    lVar10 = FUN_008f1b9c(param_3,5);
    uVar7 = 0x1f;
    if (lVar10 != 0) {
      uVar7 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = uVar7;
  }
  param_1[1] = param_1[1] & 0xfb;
  *param_1 = 1;
  return 0;
}


