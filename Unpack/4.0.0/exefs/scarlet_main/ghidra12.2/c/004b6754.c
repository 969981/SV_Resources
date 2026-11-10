/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b6754; name: FUN_004b6754
 */


void FUN_004b6754(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *__dest;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *__s1;
  byte *__s2;
  undefined8 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  byte local_138 [16];
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  undefined8 *local_c8;
  ulong local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  undefined1 auStack_70 [8];
  ulong *local_68;
  
  pbVar14 = (byte *)*param_3;
  pbVar18 = *(byte **)(pbVar14 + 0x10);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  bVar5 = (*pbVar14 & 1) == 0;
  if (bVar5) {
    pbVar18 = pbVar14 + 1;
  }
  uVar23 = (ulong)(*pbVar14 >> 1);
  if (!bVar5) {
    uVar23 = *(ulong *)(pbVar14 + 8);
  }
  if (0 < (long)uVar23) {
    do {
      bVar4 = *pbVar18;
      if (bVar4 != 0x5f) {
        uVar16 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar16 = (uint)bVar4;
        }
                    /* try { // try from 004b680c to 004b6813 has its CatchHandler @ 004b7060 */
        FUN_002cdcec(&local_88,uVar16);
      }
      uVar23 = uVar23 - 1;
      pbVar18 = pbVar18 + 1;
    } while (uVar23 != 0);
  }
  local_a0 = &local_98;
  local_98 = 0;
  local_90 = 0;
  if (0 < *(int *)((long)param_3 + 0x2c)) {
    lVar22 = 0;
    puVar20 = (undefined1 *)((ulong)&local_e0 | 1);
LAB_004b6828:
    lVar21 = param_3[6];
    puVar19 = (undefined8 *)(lVar21 + lVar22 * 0x28);
    pbVar14 = (byte *)*puVar19;
    pbVar18 = *(byte **)(pbVar14 + 0x10);
    bVar5 = (*pbVar14 & 1) == 0;
    if (bVar5) {
      pbVar18 = pbVar14 + 1;
    }
    uVar23 = (ulong)(*pbVar14 >> 1);
    if (!bVar5) {
      uVar23 = *(ulong *)(pbVar14 + 8);
    }
    if (uVar23 == 0) {
      if ((local_88 & 1) == 0) {
        uVar25 = 0;
        if ((byte)local_88 >> 1 == 0) goto LAB_004b68c8;
        goto LAB_004b69c4;
      }
      if (local_80 != 0) {
        if (pbVar18 == (byte *)0x0) goto LAB_004b69ec;
        local_e0 = (ulong)local_e0._1_7_ << 8;
        *puVar20 = 0;
        goto LAB_004b6ad0;
      }
LAB_004b69a4:
      if (pbVar18 == (byte *)0x0) goto LAB_004b69ec;
LAB_004b69a8:
      if (0xffffffffffffffef < uVar23) {
                    /* try { // try from 004b6fb0 to 004b6fcf has its CatchHandler @ 004b6fd4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
LAB_004b69d0:
      if (uVar23 < 0x17) {
        local_e0 = CONCAT71(local_e0._1_7_,(char)((int)uVar23 << 1));
        puVar7 = puVar20;
        if (uVar23 != 0) goto LAB_004b6a24;
      }
      else {
        uVar25 = uVar23 + 0x10 & 0xfffffffffffffff0;
        puVar7 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar25);
        local_e0 = uVar25 | 1;
        uStack_d8 = uVar23;
        local_d0 = puVar7;
LAB_004b6a24:
        memcpy(puVar7,pbVar18,uVar23);
      }
      puVar7[uVar23] = 0;
    }
    else {
      uVar15 = 0;
      uVar25 = 0;
      if ((local_88 & 1) == 0) {
        uVar17 = (ulong)((byte)local_88 >> 1);
        do {
          if (uVar17 <= uVar15) goto LAB_004b69bc;
          bVar4 = pbVar18[uVar25];
          if (bVar4 != 0x5f) {
            bVar3 = bVar4 + 0x20;
            if (0x19 < bVar4 - 0x41) {
              bVar3 = bVar4;
            }
            if (auStack_70[uVar15 - 0x17] != bVar3) goto LAB_004b6934;
            uVar15 = uVar15 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar23 != uVar25);
        uVar25 = uVar23;
        if (uVar17 <= uVar15) goto LAB_004b68c8;
LAB_004b69c4:
        if (pbVar18 != (byte *)0x0) {
          if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          goto LAB_004b69d0;
        }
LAB_004b69ec:
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = (undefined1 *)0x0;
      }
      else {
        do {
          if (local_80 <= uVar15) goto LAB_004b69b8;
          bVar4 = pbVar18[uVar25];
          if (bVar4 != 0x5f) {
            bVar3 = bVar4 + 0x20;
            if (0x19 < bVar4 - 0x41) {
              bVar3 = bVar4;
            }
            if (*(byte *)(local_78 + uVar15) != bVar3) goto LAB_004b6934;
            uVar15 = uVar15 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar23 != uVar25);
        uVar25 = uVar23;
LAB_004b69b8:
        uVar17 = local_80;
LAB_004b69bc:
        if (uVar15 < uVar17) goto LAB_004b69c4;
LAB_004b68c8:
        if (uVar25 < uVar23) {
          do {
            if (pbVar18[uVar25] != 0x5f) goto LAB_004b6954;
            uVar25 = uVar25 + 1;
          } while (uVar23 != uVar25);
          goto LAB_004b69a8;
        }
LAB_004b6954:
        uVar15 = uVar23 - uVar25;
        if (uVar15 == 0) goto LAB_004b69a4;
        if (pbVar18 == (byte *)0x0) goto LAB_004b69ec;
        if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar15 < 0x17) {
          local_e0 = CONCAT71(local_e0._1_7_,(char)((int)uVar15 << 1));
          puVar7 = puVar20;
          if (uVar15 != 0) goto LAB_004b6abc;
        }
        else {
          uVar23 = uVar15 + 0x10 & 0xfffffffffffffff0;
          puVar7 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar23);
          local_e0 = uVar23 | 1;
          uStack_d8 = uVar15;
          local_d0 = puVar7;
LAB_004b6abc:
          memcpy(puVar7,pbVar18 + uVar25,uVar15);
        }
        puVar7[uVar15] = 0;
      }
    }
    goto LAB_004b6ad0;
  }
  FUN_004c68e4(&local_a0,0);
joined_r0x004b6f5c:
  if ((local_88 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_78);
  }
  return;
LAB_004b6934:
  if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar23 < 0x17) {
    local_e0 = CONCAT71(local_e0._1_7_,(char)((int)uVar23 << 1));
    puVar7 = puVar20;
  }
  else {
    uVar25 = uVar23 + 0x10 & 0xfffffffffffffff0;
    puVar7 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar25);
    local_e0 = uVar25 | 1;
    uStack_d8 = uVar23;
    local_d0 = puVar7;
  }
  memcpy(puVar7,pbVar18,uVar23);
  puVar7[uVar23] = 0;
LAB_004b6ad0:
  uVar23 = local_e0 >> 1 & 0x7f;
  if ((local_e0 & 1) != 0) {
    uVar23 = uStack_d8;
  }
  local_a8 = (undefined1 *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
                    /* try { // try from 004b6aec to 004b6af3 has its CatchHandler @ 004b7094 */
  FUN_002cdbb0(&local_b8,uVar23);
  uVar23 = 0;
  bVar5 = true;
  while( true ) {
    while ((local_e0 & 1) == 0) {
      if ((local_e0 >> 1 & 0x7f) <= uVar23) goto LAB_004b6b9c;
      bVar4 = puVar20[uVar23];
      if (bVar4 != 0x5f) goto LAB_004b6b4c;
      bVar5 = true;
      uVar23 = uVar23 + 1;
    }
    if (uStack_d8 <= uVar23) break;
    bVar4 = local_d0[uVar23];
    if (bVar4 == 0x5f) {
      bVar5 = true;
      uVar23 = uVar23 + 1;
    }
    else {
LAB_004b6b4c:
      uVar16 = (uint)bVar4;
      if (bVar5) {
        uVar1 = uVar16 - 0x20;
        if (0x19 < uVar16 - 0x61) {
          uVar1 = uVar16;
        }
                    /* try { // try from 004b6b60 to 004b6b83 has its CatchHandler @ 004b7098 */
        FUN_002cdcec(&local_b8,uVar1);
      }
      else {
        uVar1 = uVar16 + 0x20;
        if (0x19 < uVar16 - 0x41) {
          uVar1 = uVar16;
        }
        FUN_002cdcec(&local_b8,uVar1);
      }
      bVar5 = false;
      uVar23 = uVar23 + 1;
    }
  }
  FUN_0049e790(PTR_LAB_047cba48);
LAB_004b6b9c:
  puVar7 = local_a8;
  uVar23 = uStack_b0;
  if ((local_b8 & 1) == 0) {
    local_d0 = local_a8;
    uStack_d8 = uStack_b0;
    local_e0 = local_b8;
  }
  else {
    if (uStack_b0 < 0x17) {
      local_e0 = CONCAT71(local_e0._1_7_,(char)((int)uStack_b0 << 1));
      __dest = puVar20;
    }
    else {
      if (0xffffffffffffffef < uStack_b0) {
                    /* try { // try from 004b6fa8 to 004b6faf has its CatchHandler @ 004b6fd0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar25 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar25);
      local_e0 = uVar25 | 1;
      uStack_d8 = uVar23;
      local_d0 = __dest;
    }
    memcpy(__dest,puVar7,uVar23 + 1);
  }
                    /* try { // try from 004b6c10 to 004b6c1f has its CatchHandler @ 004b7068 */
  local_c8 = puVar19;
  puVar8 = (undefined8 *)FUN_004c6940(&local_a0,&local_100,&local_e0);
  puVar24 = (undefined8 *)*puVar8;
  if (puVar24 == (undefined8 *)0x0) {
    puVar24 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
    puVar7 = local_d0;
    puVar24[5] = uStack_d8;
    puVar24[4] = local_e0;
    uStack_d8 = 0;
    local_d0 = (undefined1 *)0x0;
    local_e0 = 0;
    puVar24[6] = puVar7;
    puVar24[7] = local_c8;
    *puVar24 = 0;
    puVar24[1] = 0;
    puVar24[2] = local_100;
    *puVar8 = puVar24;
    if ((undefined8 *)*local_a0 == (undefined8 *)0x0) {
      puVar8 = puVar24;
    }
    else {
      puVar8 = (undefined8 *)*puVar8;
      local_a0 = (undefined8 *)*local_a0;
    }
    FUN_010108e0(local_98,puVar8);
    bVar5 = false;
    local_90 = local_90 + 1;
  }
  else {
    bVar5 = true;
  }
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  if (!bVar5) goto LAB_004b6ec8;
  puVar24 = (undefined8 *)puVar24[7];
  pbVar14 = (byte *)*puVar19;
  pbVar18 = (byte *)*puVar24;
  bVar4 = *pbVar18;
  uVar23 = (ulong)(bVar4 >> 1);
  __n = uVar23;
  if ((bVar4 & 1) != 0) {
    __n = *(size_t *)(pbVar18 + 8);
  }
  bVar3 = *pbVar14;
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(pbVar14 + 8);
  }
  if (__n == sVar2) {
    __s1 = *(byte **)(pbVar18 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s1 = pbVar18 + 1;
    }
    __s2 = *(byte **)(pbVar14 + 0x10);
    if ((bVar3 & 1) == 0) {
      __s2 = pbVar14 + 1;
    }
    if ((bVar4 & 1) == 0) {
      if (__n != 0) {
        do {
          pbVar18 = pbVar18 + 1;
          if (*pbVar18 != *__s2) goto LAB_004b6d58;
          uVar23 = uVar23 - 1;
          __s2 = __s2 + 1;
        } while (uVar23 != 0);
      }
      goto LAB_004b6ec8;
    }
    if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_004b6ec8;
  }
LAB_004b6d58:
  if (*(int *)(puVar24 + 2) != *(int *)(lVar21 + lVar22 * 0x28 + 0x10)) {
                    /* try { // try from 004b6d6c to 004b6d7f has its CatchHandler @ 004b702c */
    FUN_004a8ec0(local_138,"Enum name ",pbVar14);
                    /* try { // try from 004b6d80 to 004b6d93 has its CatchHandler @ 004b701c */
    puVar9 = (ulong *)FUN_0021d540(local_138," has the same name as ",0x16);
    uStack_118 = puVar9[1];
    local_120 = *puVar9;
    local_110 = puVar9[2];
    local_68 = &local_b8;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 004b6db4 to 004b6df7 has its CatchHandler @ 004b7034 */
    lVar10 = FUN_004c6a58(&local_a0,&local_b8,&DAT_03d0681c,&local_68,auStack_70);
    pbVar14 = (byte *)**(undefined8 **)(lVar10 + 0x38);
    uVar23 = *(ulong *)(pbVar14 + 8);
    pbVar18 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar18 = pbVar14 + 1;
      uVar23 = (ulong)(*pbVar14 >> 1);
    }
    puVar9 = (ulong *)FUN_0021d540(&local_120,pbVar18,uVar23);
    uStack_f8 = puVar9[1];
    local_100 = *puVar9;
    local_f0 = puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
                    /* try { // try from 004b6e10 to 004b6e23 has its CatchHandler @ 004b6fe0 */
    puVar9 = (ulong *)FUN_0021d540(&local_100,
                                   " if you ignore case and strip out the enum name prefix (if any). This is error-prone and can lead to undefined behavior. Please avoid doing this. If you are using allow_alias, please assign the same numeric value to both enums."
                                   ,0xe3);
    uStack_d8 = puVar9[1];
    local_e0 = *puVar9;
    local_d0 = (undefined1 *)puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    if ((local_100 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_f0);
    }
    if ((local_120 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_110);
    }
    if ((local_138[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_128);
    }
    uVar12 = *(undefined8 *)(lVar21 + lVar22 * 0x28 + 8);
    uVar13 = *(undefined8 *)(*(long *)(param_2 + 0x28) + lVar22 * 8 + 8);
    plVar11 = *(long **)(param_1 + 0x10);
    if (*(int *)(param_3[2] + 0x3c) == 2) {
      if (plVar11 != (long *)0x0) {
                    /* try { // try from 004b6ea0 to 004b6f33 has its CatchHandler @ 004b6fdc */
        (**(code **)(*plVar11 + 0x18))(plVar11,param_1 + 0x38,uVar12,uVar13,0,&local_e0);
      }
    }
    else {
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0x38,uVar12,uVar13,0,&local_e0);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    if ((local_e0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d0);
    }
  }
LAB_004b6ec8:
  if ((local_b8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  lVar22 = lVar22 + 1;
  if (*(int *)((long)param_3 + 0x2c) <= lVar22) goto LAB_004b6f4c;
  goto LAB_004b6828;
LAB_004b6f4c:
  FUN_004c68e4(&local_a0,local_98);
  goto joined_r0x004b6f5c;
}


