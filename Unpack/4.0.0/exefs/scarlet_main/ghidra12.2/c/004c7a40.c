/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c7a40; name: FUN_004c7a40
 */


void FUN_004c7a40(undefined8 *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5,
                 long *param_6,byte *param_7)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  void *pvVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  size_t sVar20;
  long lVar21;
  byte *local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  long local_78;
  long lStack_70;
  ulong local_68;
  size_t local_60;
  void *local_58;
  
  lVar5 = FUN_004c802c(param_1[1],0);
  uVar6 = FUN_004d9cb0(param_4);
  if ((uVar6 & 1) == 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = (void *)0x0;
    pbVar2 = (byte *)param_2[2];
    bVar4 = ((byte)*param_2 & 1) != 0;
    sVar20 = (ulong)(byte)((byte)*param_2 >> 1);
    if (bVar4) {
      sVar20 = param_2[1];
    }
    if (!bVar4) {
      pbVar2 = (byte *)((long)param_2 + 1);
    }
    if (0xffffffffffffffef < sVar20 + 1) {
                    /* try { // try from 004c7f48 to 004c7f4f has its CatchHandler @ 004c7ff4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar20 + 1 < 0x17) {
      local_68 = (ulong)(byte)((int)sVar20 << 1);
      pvVar9 = (void *)((ulong)&local_68 | 1);
      if (sVar20 == 0) goto LAB_004c7b90;
    }
    else {
      uVar6 = sVar20 + 0x11 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_68 = uVar6 | 1;
      local_60 = sVar20;
      local_58 = pvVar9;
    }
    memcpy(pvVar9,pbVar2,sVar20);
LAB_004c7b90:
    *(undefined1 *)((long)pvVar9 + sVar20) = 0;
                    /* try { // try from 004c7b94 to 004c7ba7 has its CatchHandler @ 004c7ff4 */
    FUN_0021d540(&local_68,&DAT_03bdface,1);
    uVar6 = param_3[1];
    pbVar2 = (byte *)param_3[2];
    if (((byte)*param_3 & 1) == 0) {
      pbVar2 = (byte *)((long)param_3 + 1);
      uVar6 = (ulong)(byte)((byte)*param_3 >> 1);
    }
                    /* try { // try from 004c7bc0 to 004c7bc7 has its CatchHandler @ 004c7ff0 */
    puVar7 = (ulong *)FUN_0021d540(&local_68,pbVar2,uVar6);
    uStack_b8 = puVar7[1];
    local_c0 = (byte *)*puVar7;
    local_b0 = (void *)puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 004c7be0 to 004c7bfb has its CatchHandler @ 004c7fd0 */
    FUN_004aa7f4(param_1,&local_c0,param_4,7,"Uninterpreted option is missing name or value.");
    if (((ulong)local_c0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b0);
    }
    if ((local_68 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_58);
    }
    return;
  }
  FUN_0052d79c(&local_c0,param_4);
                    /* try { // try from 004c7a9c to 004c7aa7 has its CatchHandler @ 004c8008 */
  FUN_0052d318(lVar5,&local_c0);
  if (((ulong)local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
  *(long *)(param_5 + 0x18) = lVar5;
  if (*(int *)(lVar5 + 0x38) < 1) goto LAB_004c7da4;
  if ((*param_2 & 1) == 0) {
    uStack_b8 = param_2[1];
    local_c0 = (byte *)*param_2;
    local_b0 = (void *)param_2[2];
    if ((*param_3 & 1) == 0) goto LAB_004c7af8;
LAB_004c7c98:
    uVar6 = param_3[1];
    pvVar9 = (void *)param_3[2];
    if (uVar6 < 0x17) {
      pvVar8 = (void *)((long)&local_a8 + 1);
      local_a8 = CONCAT71(local_a8._1_7_,(char)((int)uVar6 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c7f64 to 004c7f67 has its CatchHandler @ 004c7f68 */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar18 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar18);
      local_a8 = uVar18 | 1;
      uStack_a0 = uVar6;
      local_98 = pvVar8;
    }
    memcpy(pvVar8,pvVar9,uVar6 + 1);
  }
  else {
    uVar6 = param_2[1];
    pvVar9 = (void *)param_2[2];
    if (uVar6 < 0x17) {
      pvVar8 = (void *)((ulong)&local_c0 | 1);
      local_c0 = (byte *)CONCAT71(local_c0._1_7_,(char)((int)uVar6 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar18 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar18);
      local_c0 = (byte *)(uVar18 | 1);
      uStack_b8 = uVar6;
      local_b0 = pvVar8;
    }
    memcpy(pvVar8,pvVar9,uVar6 + 1);
    if ((*param_3 & 1) != 0) goto LAB_004c7c98;
LAB_004c7af8:
    uStack_a0 = param_3[1];
    local_a8 = *param_3;
    local_98 = (void *)param_3[2];
  }
  local_90 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  if (param_6[1] - *param_6 != 0) {
    uVar6 = param_6[1] - *param_6 >> 2;
    if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004c7f58 to 004c7f5b has its CatchHandler @ 004c7f78 */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pvVar9 = (void *)FUN_0049e770(PTR_FUN_047cba38);
    local_80 = (void *)((long)pvVar9 + uVar6 * 4);
    sVar20 = param_6[1] - *param_6;
    local_90 = pvVar9;
    if (0 < (long)sVar20) {
      local_88 = pvVar9;
      memcpy(pvVar9,(void *)*param_6,sVar20);
      pvVar9 = (void *)((long)pvVar9 + sVar20);
    }
    local_88 = pvVar9;
  }
  local_78 = param_4;
  lStack_70 = lVar5;
                    /* try { // try from 004c7d54 to 004c7d5b has its CatchHandler @ 004c7f7c */
  FUN_004c498c(param_1 + 3,&local_c0);
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if ((local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if (((ulong)local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
LAB_004c7da4:
  if ((*(ulong *)(param_4 + 8) & 1) == 0) {
    plVar10 = (long *)FUN_00514564();
    if (*plVar10 == plVar10[1]) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(param_4 + 8) & 0xfffffffffffffffe;
    plVar10 = (long *)(uVar6 + 8);
    if (*plVar10 == *(long *)(uVar6 + 0x10)) {
      return;
    }
  }
  local_c0 = *(byte **)(param_7 + 0x10);
  if ((*param_7 & 1) == 0) {
    local_c0 = param_7 + 1;
  }
  lVar5 = FUN_004c04c0(param_1[1] + 0x130,&local_c0);
  puVar3 = PTR_LAB_047cba48;
  if (lVar5 == 0) {
    return;
  }
  if (*(int *)(lVar5 + 0x18) != 1) {
    return;
  }
  lVar16 = *plVar10;
  lVar21 = plVar10[1];
  if ((int)((ulong)(lVar21 - lVar16) >> 4) < 1) {
    return;
  }
  uVar17 = *(undefined8 *)(lVar5 + 0x20);
  lVar5 = 0;
  puVar1 = param_1 + 0x10;
  do {
    lVar11 = FUN_004a4ed8(*param_1,uVar17,*(undefined4 *)(lVar16 + lVar5 * 0x10));
    if ((lVar11 != 0) && (puVar12 = (undefined8 *)*puVar1, puVar12 != (undefined8 *)0x0)) {
      uVar6 = *(ulong *)(lVar11 + 0x28);
      puVar14 = puVar12;
      puVar19 = puVar1;
      do {
        if ((ulong)puVar14[4] >= uVar6) {
          puVar19 = puVar14;
        }
        puVar14 = (undefined8 *)puVar14[(ulong)puVar14[4] < uVar6];
      } while (puVar14 != (undefined8 *)0x0);
      if ((puVar19 != puVar1) && ((ulong)puVar19[4] <= uVar6)) {
        plVar15 = (long *)puVar19[1];
        if ((long *)puVar19[1] == (long *)0x0) {
          plVar15 = puVar19 + 2;
          plVar13 = (long *)*plVar15;
          if ((undefined8 *)*plVar13 != puVar19) {
            do {
              lVar16 = *plVar15;
              plVar15 = (long *)(lVar16 + 0x10);
              plVar13 = (long *)*plVar15;
            } while (*plVar13 != lVar16);
          }
        }
        else {
          do {
            plVar13 = plVar15;
            plVar15 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        if ((undefined8 *)param_1[0xf] == puVar19) {
          param_1[0xf] = plVar13;
        }
        param_1[0x11] = param_1[0x11] + -1;
        FUN_01336080(puVar12,puVar19);
        FUN_0049e790(puVar3,puVar19);
        lVar16 = *plVar10;
        lVar21 = plVar10[1];
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 < (int)((ulong)(lVar21 - lVar16) >> 4));
  return;
}


