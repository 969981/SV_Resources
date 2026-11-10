/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005de04c; name: FUN_005de04c
 */


void FUN_005de04c(long param_1,uint param_2)

{
  char *__s;
  long lVar1;
  ulong *puVar2;
  bool bVar3;
  void *__dest;
  ulong *puVar4;
  long *plVar5;
  size_t __n;
  void *pvVar6;
  byte *pbVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  byte local_e0;
  undefined7 uStack_df;
  char *local_d0;
  long *plStack_c8;
  ulong local_c0;
  size_t local_b8;
  void *local_b0;
  long *local_a8;
  ulong *local_a0;
  ulong *puStack_98;
  ulong *local_90;
  long *local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  long *local_68;
  
  local_88 = (long *)FUN_01cf7e20();
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    puStack_98 = *(ulong **)(param_1 + 0x38);
    local_a0 = *(ulong **)(param_1 + 0x30);
    local_90 = *(ulong **)(param_1 + 0x40);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x38);
    pvVar6 = *(void **)(param_1 + 0x40);
    if (uVar15 < 0x17) {
      __dest = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong *)CONCAT71(local_a0._1_7_,(char)((int)uVar15 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar15) {
                    /* try { // try from 005de69c to 005de6a3 has its CatchHandler @ 005de738 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar15 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*local_88 + 0x10))(local_88,uVar14,1);
      local_a0 = (ulong *)(uVar14 | 1);
      puStack_98 = (ulong *)uVar15;
      local_90 = __dest;
    }
    memcpy(__dest,pvVar6,uVar15 + 1);
  }
  local_70 = (ulong *)0x0;
  local_68 = (long *)FUN_01cf7e20();
  puVar4 = (ulong *)(**(code **)(*local_68 + 0x10))(local_68,0x20,8);
  local_80 = puVar4;
  local_78 = puVar4;
  local_70 = puVar4 + 4;
  plVar5 = (long *)FUN_01cf7e20();
  puVar11 = local_90;
  puVar13 = puStack_98;
  puVar4[3] = (ulong)plVar5;
  if (((ulong)local_a0 & 1) == 0) {
    puVar4[2] = (ulong)local_90;
    puVar4[1] = (ulong)puStack_98;
    *puVar4 = (ulong)local_a0;
    local_78 = puVar4 + 4;
  }
  else {
    if (puStack_98 < 0x17) {
      pbVar7 = (byte *)((long)puVar4 + 1);
      *(byte *)puVar4 = (byte)((int)puStack_98 << 1);
    }
    else {
      if (0xffffffffffffffef < puStack_98) {
                    /* try { // try from 005de6a4 to 005de6ab has its CatchHandler @ 005de6ac */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar15 = (long)puStack_98 + 0x10U & 0xfffffffffffffff0;
      pbVar7 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar15,1);
      puVar4[1] = (ulong)puVar13;
      puVar4[2] = (ulong)pbVar7;
      *puVar4 = uVar15 | 1;
    }
    memcpy(pbVar7,puVar11,(long)puVar13 + 1);
    local_78 = puVar4 + 4;
    if (((ulong)local_a0 & 1) != 0) {
      (**(code **)(*local_88 + 0x18))(local_88,local_90,(ulong)local_a0 & 0xfffffffffffffffe,1);
    }
  }
  local_a0 = (ulong *)0x0;
  puStack_98 = (ulong *)0x0;
  local_90 = (ulong *)0x0;
  local_88 = (long *)FUN_01cf7e20();
  lVar17 = *(long *)(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar17 != lVar1) {
    do {
      if ((*(byte *)(lVar17 + 0x50) & 1) == 0) {
        lVar10 = lVar17 + 0x51;
      }
      else {
        lVar10 = *(long *)(lVar17 + 0x60);
      }
      FUN_00213520(&local_e0,lVar10,0);
      __s = (char *)((ulong)&local_e0 | 1);
      if ((local_e0 & 1) != 0) {
        __s = local_d0;
      }
      plVar5 = (long *)FUN_01cf7e20();
      local_a8 = plVar5;
      __n = strlen(__s);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 005de67c to 005de683 has its CatchHandler @ 005de76c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_c0 = CONCAT71(local_c0._1_7_,(char)((int)__n << 1));
        pvVar6 = (void *)((ulong)&local_c0 | 1);
        if (__n != 0) goto LAB_005de2c8;
      }
      else {
        uVar15 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar15,1);
        local_c0 = uVar15 | 1;
        local_b8 = __n;
        local_b0 = pvVar6;
LAB_005de2c8:
        memcpy(pvVar6,__s,__n);
      }
      *(undefined1 *)((long)pvVar6 + __n) = 0;
                    /* try { // try from 005de2dc to 005de2e7 has its CatchHandler @ 005de774 */
      FUN_005de8a0(&local_80,&local_c0);
      if ((local_c0 & 1) == 0) {
        if ((local_e0 & 1) == 0) goto LAB_005de2f8;
LAB_005de358:
        (**(code **)(*plStack_c8 + 0x18))
                  (plStack_c8,local_d0,CONCAT71(uStack_df,local_e0) & 0xfffffffffffffffe,1);
        if (puStack_98 == local_90) goto LAB_005de384;
LAB_005de308:
        puVar13 = puStack_98;
        plVar5 = (long *)FUN_01cf7e20();
        puVar13[3] = (ulong)plVar5;
        if ((*(byte *)(lVar17 + 0x98) & 1) == 0) {
          uVar14 = *(ulong *)(lVar17 + 0xa0);
          uVar15 = *(ulong *)(lVar17 + 0x98);
          puVar13[2] = *(ulong *)(lVar17 + 0xa8);
          puVar13[1] = uVar14;
          *puVar13 = uVar15;
        }
        else {
          uVar15 = *(ulong *)(lVar17 + 0xa0);
          pvVar6 = *(void **)(lVar17 + 0xa8);
          if (uVar15 < 0x17) {
            pbVar7 = (byte *)((long)puVar13 + 1);
            *(byte *)puVar13 = (byte)((int)uVar15 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar15) {
                    /* try { // try from 005de68c to 005de693 has its CatchHandler @ 005de758 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar14 = uVar15 + 0x10 & 0xfffffffffffffff0;
            pbVar7 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar14,1);
            puVar13[1] = uVar15;
            puVar13[2] = (ulong)pbVar7;
            *puVar13 = uVar14 | 1;
          }
          memcpy(pbVar7,pvVar6,uVar15 + 1);
        }
        puStack_98 = puVar13 + 4;
      }
      else {
        (**(code **)(*local_a8 + 0x18))(local_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
        if ((local_e0 & 1) != 0) goto LAB_005de358;
LAB_005de2f8:
        if (puStack_98 != local_90) goto LAB_005de308;
LAB_005de384:
        lVar10 = (long)puStack_98 - (long)local_a0 >> 5;
        uVar15 = lVar10 + 1;
        if (uVar15 >> 0x3b != 0) {
                    /* try { // try from 005de684 to 005de68b has its CatchHandler @ 005de764 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar14 = (long)local_90 - (long)local_a0 >> 4;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x3fffffffffffffe < (ulong)((long)local_90 - (long)local_a0 >> 5)) {
          uVar15 = 0x7ffffffffffffff;
        }
        if (uVar15 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*local_88 + 0x10))(local_88,uVar15 << 5,8);
        }
        puVar13 = (ulong *)(lVar8 + lVar10 * 0x20);
        plVar5 = (long *)FUN_01cf7e20();
        puVar13[3] = (ulong)plVar5;
        if ((*(byte *)(lVar17 + 0x98) & 1) == 0) {
          uVar16 = *(ulong *)(lVar17 + 0xa0);
          uVar14 = *(ulong *)(lVar17 + 0x98);
          puVar13[2] = *(ulong *)(lVar17 + 0xa8);
          puVar13[1] = uVar16;
          *puVar13 = uVar14;
        }
        else {
          uVar14 = *(ulong *)(lVar17 + 0xa0);
          pvVar6 = *(void **)(lVar17 + 0xa8);
          if (uVar14 < 0x17) {
            pbVar7 = (byte *)((long)puVar13 + 1);
            *(byte *)puVar13 = (byte)((int)uVar14 << 1);
          }
          else {
            if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 005de694 to 005de69b has its CatchHandler @ 005de73c */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            uVar16 = uVar14 + 0x10 & 0xfffffffffffffff0;
            pbVar7 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar16,1);
            puVar13[1] = uVar14;
            puVar13[2] = (ulong)pbVar7;
            *puVar13 = uVar16 | 1;
          }
          memcpy(pbVar7,pvVar6,uVar14 + 1);
        }
        puVar2 = local_90;
        puVar4 = local_a0;
        local_90 = (ulong *)(lVar8 + uVar15 * 0x20);
        puVar11 = puVar13 + 4;
        puVar9 = puStack_98;
        puVar12 = puVar13;
        if (puStack_98 == local_a0) {
          puStack_98 = local_a0;
        }
        else {
          do {
            uVar15 = puVar9[-4];
            uVar16 = puVar9[-1];
            uVar14 = puVar9[-2];
            puVar13 = puVar12 + -4;
            puVar12[-3] = puVar9[-3];
            *puVar13 = uVar15;
            puVar12[-1] = uVar16;
            puVar12[-2] = uVar14;
            puVar9[-3] = 0;
            puVar9[-2] = 0;
            puVar9[-4] = 0;
            puVar9 = puVar9 + -4;
            puVar12 = puVar13;
          } while (local_a0 != puVar9);
        }
        bVar3 = puStack_98 != local_a0;
        local_a0 = puVar13;
        if (bVar3) {
          puVar13 = puStack_98;
          puStack_98 = puVar11;
          do {
            puVar9 = puVar13 + -4;
            if ((*puVar9 & 1) != 0) {
              (**(code **)(*(long *)puVar13[-1] + 0x18))
                        ((long *)puVar13[-1],puVar13[-2],puVar13[-4] & 0xfffffffffffffffe,1);
            }
            puVar13 = puVar9;
            puVar11 = puStack_98;
          } while (puVar4 != puVar9);
        }
        puStack_98 = puVar11;
        if (puVar4 != (ulong *)0x0) {
          (**(code **)(*local_88 + 0x18))(local_88,puVar4,(long)puVar2 - (long)puVar4,8);
        }
      }
      lVar17 = lVar17 + 0xe0;
    } while (lVar17 != lVar1);
  }
  FUN_005dea18(param_1,param_2 & 1,&local_80,&local_a0);
  puVar13 = local_a0;
  if (local_a0 != (ulong *)0x0) {
    if (puStack_98 != local_a0) {
      puVar11 = puStack_98;
      do {
        puVar4 = puVar11 + -4;
        if ((*puVar4 & 1) != 0) {
          (**(code **)(*(long *)puVar11[-1] + 0x18))
                    ((long *)puVar11[-1],puVar11[-2],puVar11[-4] & 0xfffffffffffffffe,1);
        }
        puVar11 = puVar4;
      } while (puVar13 != puVar4);
    }
    puStack_98 = puVar13;
    (**(code **)(*local_88 + 0x18))(local_88,local_a0,(long)local_90 - (long)local_a0,8);
  }
  puVar13 = local_80;
  if (local_80 != (ulong *)0x0) {
    if (local_78 != local_80) {
      puVar11 = local_78;
      do {
        puVar4 = puVar11 + -4;
        if ((*puVar4 & 1) != 0) {
          (**(code **)(*(long *)puVar11[-1] + 0x18))
                    ((long *)puVar11[-1],puVar11[-2],puVar11[-4] & 0xfffffffffffffffe,1);
        }
        puVar11 = puVar4;
      } while (puVar13 != puVar4);
    }
    local_78 = puVar13;
    (**(code **)(*local_68 + 0x18))(local_68,local_80,(long)local_70 - (long)local_80,8);
  }
  return;
}


