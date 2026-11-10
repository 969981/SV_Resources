/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a551c; name: FUN_004a551c
 */


undefined8 * FUN_004a551c(ulong *param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 *__dest;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t __n;
  ulong uVar13;
  void *pvVar14;
  undefined2 uVar15;
  ulong *local_a8;
  size_t local_a0;
  void *local_98;
  undefined4 uStack_90;
  undefined3 uStack_8c;
  undefined8 *local_88;
  byte local_80;
  undefined7 uStack_7f;
  ulong uStack_78;
  void *local_70;
  ulong *local_68;
  
  lVar3 = *(long *)(param_1[2] + 0x90);
  uVar12 = (long)(int)param_2 * 0x1000193 ^ (long)param_1 * 0x100011b;
  uVar7 = *(ulong *)(lVar3 + 200);
  if (uVar7 != 0) {
    uVar5 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar7 >> 
                                                  8)),POPCOUNT((char)uVar7))))))));
    uVar15 = NEON_uaddlv(uVar5,1);
    uVar10 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar13 = uVar7 - 1 & uVar12;
    }
    else {
      uVar13 = uVar12;
      if (uVar7 <= uVar12) {
        uVar13 = 0;
        if (uVar7 != 0) {
          uVar13 = uVar12 / uVar7;
        }
        uVar13 = uVar12 - uVar13 * uVar7;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar3 + 0xc0) + uVar13 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (uVar12 == plVar8[1]) {
            if (((ulong *)plVar8[2] == param_1) && (*(uint *)(plVar8 + 3) == param_2))
            goto LAB_004a5660;
          }
          else if ((plVar8[1] & uVar7 - 1) != uVar13) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar8[1];
          if (uVar12 == uVar10) {
            if (((ulong *)plVar8[2] == param_1) && (*(uint *)(plVar8 + 3) == param_2))
            goto LAB_004a5660;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar13) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_004a5668:
  std::mutex::lock();
  uVar7 = *(ulong *)(lVar3 + 0xf0);
  plVar8 = (long *)(lVar3 + 0xe8);
  if (uVar7 != 0) {
    uVar5 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar7 >> 
                                                  8)),POPCOUNT((char)uVar7))))))));
    uVar15 = NEON_uaddlv(uVar5,1);
    uVar10 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar13 = uVar7 - 1 & uVar12;
    }
    else {
      uVar13 = uVar12;
      if (uVar7 <= uVar12) {
        uVar13 = 0;
        if (uVar7 != 0) {
          uVar13 = uVar12 / uVar7;
        }
        uVar13 = uVar12 - uVar13 * uVar7;
      }
    }
    plVar9 = *(long **)(*plVar8 + uVar13 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar12) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_004a5760;
          }
          else if ((plVar9[1] & uVar7 - 1) != uVar13) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar12) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_004a5760;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar13) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  std::mutex::unlock();
LAB_004a577c:
  std::mutex::lock();
  uVar7 = *(ulong *)(lVar3 + 0xf0);
  if (uVar7 != 0) {
    uVar5 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar7 >> 
                                                  8)),POPCOUNT((char)uVar7))))))));
    uVar15 = NEON_uaddlv(uVar5,1);
    uVar10 = CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar15) & 0xffffffff;
    if (uVar10 < 2) {
      uVar13 = uVar7 - 1 & uVar12;
    }
    else {
      uVar13 = uVar12;
      if (uVar7 <= uVar12) {
        uVar13 = 0;
        if (uVar7 != 0) {
          uVar13 = uVar12 / uVar7;
        }
        uVar13 = uVar12 - uVar13 * uVar7;
      }
    }
    plVar9 = *(long **)(*plVar8 + uVar13 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar12) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_004a5868;
          }
          else if ((plVar9[1] & uVar7 - 1) != uVar13) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar12) {
            if (((ulong *)plVar9[2] == param_1) && (*(uint *)(plVar9 + 3) == param_2))
            goto LAB_004a5868;
          }
          else {
            if (uVar7 <= uVar10) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar2 * uVar7;
            }
            if (uVar10 != uVar13) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_004a5870:
  pbVar6 = (byte *)*param_1;
  if ((*pbVar6 & 1) == 0) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
                    /* try { // try from 004a5888 to 004a589b has its CatchHandler @ 004a5c04 */
  FUN_00532640(&local_80,"UNKNOWN_ENUM_VALUE_%s_%d",pbVar6,param_2);
                    /* try { // try from 004a589c to 004a58b3 has its CatchHandler @ 004a5c18 */
  lVar3 = FUN_004a4448();
  FUN_004f9370(PTR_DAT_047cd738,0);
  lVar3 = *(long *)(lVar3 + 0x20);
                    /* try { // try from 004a58b8 to 004a58c3 has its CatchHandler @ 004a5c1c */
  puVar11 = (undefined8 *)FUN_004a41ac(lVar3,0x28);
  local_88 = puVar11;
  puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  pvVar14 = local_70;
  uVar7 = uStack_78;
  if (puVar4 != (ulong *)0x0) {
    if ((local_80 & 1) == 0) {
      puVar4[2] = (ulong)local_70;
      puVar4[1] = uStack_78;
      *puVar4 = CONCAT71(uStack_7f,local_80);
    }
    else {
      if (uStack_78 < 0x17) {
        __dest = (undefined1 *)((long)puVar4 + 1);
        *(char *)puVar4 = (char)((int)uStack_78 << 1);
      }
      else {
        if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 004a5b90 to 004a5b97 has its CatchHandler @ 004a5c1c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar12 = uStack_78 + 0x10 & 0xfffffffffffffff0;
        __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar12);
        puVar4[1] = uVar7;
        puVar4[2] = (ulong)__dest;
        *puVar4 = uVar12 | 1;
      }
      memcpy(__dest,pvVar14,uVar7 + 1);
    }
  }
  lVar3 = lVar3 + 0xd0;
                    /* try { // try from 004a595c to 004a5967 has its CatchHandler @ 004a5c1c */
  local_a8 = puVar4;
  FUN_004a3dc0(lVar3,&local_a8);
  *puVar11 = puVar4;
  pbVar6 = (byte *)param_1[1];
  local_98 = (void *)0x0;
  local_a8 = (ulong *)0x0;
  local_a0 = 0;
  if ((*pbVar6 & 1) == 0) {
    __n = (size_t)(*pbVar6 >> 1);
    pbVar6 = pbVar6 + 1;
  }
  else {
    __n = *(size_t *)(pbVar6 + 8);
    pbVar6 = *(byte **)(pbVar6 + 0x10);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* try { // try from 004a5b88 to 004a5b8f has its CatchHandler @ 004a5bbc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    local_a8 = (ulong *)(ulong)(byte)((int)__n << 1);
    pvVar14 = (void *)((ulong)&local_a8 | 1);
    if (__n != 0) goto LAB_004a59e4;
  }
  else {
    uVar7 = __n + 0x11 & 0xfffffffffffffff0;
    pvVar14 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
    local_a8 = (ulong *)(uVar7 | 1);
    local_a0 = __n;
    local_98 = pvVar14;
LAB_004a59e4:
    memcpy(pvVar14,pbVar6,__n);
  }
  *(undefined1 *)((long)pvVar14 + __n) = 0;
                    /* try { // try from 004a59f8 to 004a5a0b has its CatchHandler @ 004a5bbc */
  FUN_0021d540(&local_a8,&DAT_03bdface,1);
  uVar7 = (ulong)(local_80 >> 1);
  pvVar14 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar7 = uStack_78;
    pvVar14 = local_70;
  }
                    /* try { // try from 004a5a2c to 004a5a33 has its CatchHandler @ 004a5bc4 */
  pbVar6 = (byte *)FUN_0021d540(&local_a8,pvVar14,uVar7);
  uStack_90 = *(undefined4 *)(pbVar6 + 1);
  bVar1 = *pbVar6;
  uStack_8c = (undefined3)((uint)*(undefined4 *)(pbVar6 + 4) >> 8);
  uVar7 = *(ulong *)(pbVar6 + 8);
  pvVar14 = *(void **)(pbVar6 + 0x10);
  pbVar6[0x10] = 0;
  pbVar6[0x11] = 0;
  pbVar6[0x12] = 0;
  pbVar6[0x13] = 0;
  pbVar6[0x14] = 0;
  pbVar6[0x15] = 0;
  pbVar6[0x16] = 0;
  pbVar6[0x17] = 0;
  pbVar6[0] = 0;
  pbVar6[1] = 0;
  pbVar6[2] = 0;
  pbVar6[3] = 0;
  pbVar6[4] = 0;
  pbVar6[5] = 0;
  pbVar6[6] = 0;
  pbVar6[7] = 0;
  pbVar6[8] = 0;
  pbVar6[9] = 0;
  pbVar6[10] = 0;
  pbVar6[0xb] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (puVar4 != (ulong *)0x0) {
    if ((bVar1 & 1) == 0) {
      *(byte *)puVar4 = bVar1;
      *(uint *)((long)puVar4 + 4) = CONCAT31(uStack_8c,uStack_90._3_1_);
      *(undefined4 *)((long)puVar4 + 1) = uStack_90;
      puVar4[1] = uVar7;
      puVar4[2] = (ulong)pvVar14;
    }
    else {
      if (uVar7 < 0x17) {
        pbVar6 = (byte *)((long)puVar4 + 1);
        *(byte *)puVar4 = (byte)((int)uVar7 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 004a5b98 to 004a5b9f has its CatchHandler @ 004a5ba0 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar12 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pbVar6 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar12);
        puVar4[1] = uVar7;
        puVar4[2] = (ulong)pbVar6;
        *puVar4 = uVar12 | 1;
      }
      memcpy(pbVar6,pvVar14,uVar7 + 1);
    }
  }
                    /* try { // try from 004a5ae0 to 004a5aeb has its CatchHandler @ 004a5ba0 */
  local_68 = puVar4;
  FUN_004a3dc0(lVar3,&local_68);
  puVar11[1] = puVar4;
  if ((bVar1 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,pvVar14);
  }
  if (((ulong)local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  *(uint *)(puVar11 + 2) = param_2;
  puVar11[3] = param_1;
                    /* try { // try from 004a5b24 to 004a5b27 has its CatchHandler @ 004a5c1c */
  uVar5 = FUN_004dfc94();
  local_a0 = (size_t)param_2;
  puVar11[4] = uVar5;
                    /* try { // try from 004a5b34 to 004a5b43 has its CatchHandler @ 004a5bc0 */
  local_a8 = param_1;
  FUN_004a3890(plVar8,&local_a8,&local_88);
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
LAB_004a5b5c:
  std::mutex::unlock();
  return puVar11;
LAB_004a5660:
  if ((undefined8 *)plVar8[4] != (undefined8 *)0x0) {
    return (undefined8 *)plVar8[4];
  }
  goto LAB_004a5668;
LAB_004a5760:
  puVar11 = (undefined8 *)plVar9[4];
  std::mutex::unlock();
  if (puVar11 != (undefined8 *)0x0) {
    return puVar11;
  }
  goto LAB_004a577c;
LAB_004a5868:
  puVar11 = (undefined8 *)plVar9[4];
  if (puVar11 != (undefined8 *)0x0) goto LAB_004a5b5c;
  goto LAB_004a5870;
}


