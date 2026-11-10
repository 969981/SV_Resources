/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006cbc88; name: FUN_006cbc88
 */


void FUN_006cbc88(long *param_1,long param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  *param_1 = (long)(PTR_DAT_047cfbb0 + 0x10);
  plVar4 = (long *)FUN_01cf7e20();
  param_1[4] = (long)plVar4;
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0x10);
    lVar5 = *(long *)(param_2 + 8);
    param_1[3] = *(long *)(param_2 + 0x18);
    param_1[2] = lVar20;
    param_1[1] = lVar5;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x10);
    pvVar2 = *(void **)(param_2 + 0x18);
    if (uVar12 < 0x17) {
      pvVar15 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 1) = (char)((int)uVar12 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
      param_1[2] = uVar12;
      param_1[3] = (long)pvVar15;
      param_1[1] = uVar16 | 1;
    }
    memcpy(pvVar15,pvVar2,uVar12 + 1);
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[8] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0x30);
    lVar5 = *(long *)(param_2 + 0x28);
    param_1[7] = *(long *)(param_2 + 0x38);
    param_1[6] = lVar20;
    param_1[5] = lVar5;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x30);
    pvVar2 = *(void **)(param_2 + 0x38);
    if (uVar12 < 0x17) {
      pvVar15 = (void *)((long)param_1 + 0x29);
      *(char *)(param_1 + 5) = (char)((int)uVar12 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 006cc4cc to 006cc4d3 has its CatchHandler @ 006cc544 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
      param_1[6] = uVar12;
      param_1[7] = (long)pvVar15;
      param_1[5] = uVar16 | 1;
    }
    memcpy(pvVar15,pvVar2,uVar12 + 1);
  }
  param_1[9] = *(long *)(param_2 + 0x48);
  plVar17 = param_1 + 10;
  *plVar17 = 0;
  lVar5 = FUN_01cf7e20();
  plVar18 = param_1 + 0xb;
  *plVar18 = 0;
  param_1[0xc] = lVar5;
  param_1[0xd] = 0;
  *plVar17 = (long)plVar18;
  plVar4 = *(long **)(param_2 + 0x50);
  while (plVar4 != (long *)(param_2 + 0x58)) {
                    /* try { // try from 006cbe38 to 006cbe47 has its CatchHandler @ 006cc6ac */
    FUN_01d0202c(plVar17,plVar18,plVar4 + 4,plVar4 + 4);
    plVar7 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar7 = plVar4 + 2;
      bVar3 = *(long **)*plVar7 != plVar4;
      plVar4 = (long *)*plVar7;
      if (bVar3) {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar4 = (long *)*plVar7;
        } while (*(long *)*plVar7 != lVar5);
      }
    }
    else {
      do {
        plVar4 = plVar7;
        plVar7 = (long *)*plVar4;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar17 = param_1 + 0xe;
  *plVar17 = 0;
  lVar5 = FUN_01cf7e20();
  plVar18 = param_1 + 0xf;
  *plVar18 = 0;
  param_1[0x10] = lVar5;
  param_1[0x11] = 0;
  *plVar17 = (long)plVar18;
  plVar4 = *(long **)(param_2 + 0x70);
  while (plVar4 != (long *)(param_2 + 0x78)) {
                    /* try { // try from 006cbea0 to 006cbeaf has its CatchHandler @ 006cc698 */
    FUN_01d0202c(plVar17,plVar18,plVar4 + 4,plVar4 + 4);
    plVar7 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar7 = plVar4 + 2;
      if (*(long **)*plVar7 == plVar4) {
        plVar4 = (long *)*plVar7;
      }
      else {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar4 = (long *)*plVar7;
        } while (*plVar4 != lVar5);
      }
    }
    else {
      do {
        plVar4 = plVar7;
        plVar7 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  lVar5 = *(long *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x98);
  param_1[0x12] = lVar5;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = (long)plVar4;
  lVar5 = *(long *)(param_2 + 0xa8) - *(long *)(param_2 + 0xa0);
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 2) >> 0x3e != 0) {
                    /* try { // try from 006cc4a0 to 006cc4ab has its CatchHandler @ 006cc66c */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar5,4);
    param_1[0x14] = (long)puVar6;
    param_1[0x15] = (long)puVar6;
    param_1[0x16] = (long)(puVar6 + (lVar5 >> 2));
    puVar9 = *(undefined4 **)(param_2 + 0xa0);
    puVar1 = *(undefined4 **)(param_2 + 0xa8);
    if (puVar9 != puVar1) {
      uVar12 = ((long)puVar1 - (long)puVar9) - 4;
      puVar8 = puVar6;
      if (uVar12 < 0x3c) {
        puVar11 = puVar9;
      }
      else if (((undefined4 *)((long)puVar9 + (uVar12 & 0xfffffffffffffffc) + 4) <= puVar6) ||
              (puVar11 = puVar9,
              (undefined4 *)((long)puVar6 + ((long)puVar1 - (long)puVar9 & 0xfffffffffffffffcU)) <=
              puVar9)) {
        uVar12 = (uVar12 >> 2) + 1;
        uVar13 = uVar12 & 0x7ffffffffffffff0;
        puVar8 = puVar6 + uVar13;
        puVar11 = puVar9 + uVar13;
        puVar10 = (undefined8 *)(puVar9 + 8);
        puVar14 = (undefined8 *)(puVar6 + 8);
        uVar16 = uVar13;
        do {
          uVar19 = puVar10[-4];
          uVar23 = puVar10[-1];
          uVar21 = puVar10[-2];
          uVar16 = uVar16 - 0x10;
          uVar26 = puVar10[1];
          uVar25 = *puVar10;
          uVar28 = puVar10[3];
          uVar27 = puVar10[2];
          puVar14[-3] = puVar10[-3];
          puVar14[-4] = uVar19;
          puVar14[-1] = uVar23;
          puVar14[-2] = uVar21;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14[3] = uVar28;
          puVar14[2] = uVar27;
          puVar10 = puVar10 + 8;
          puVar14 = puVar14 + 8;
        } while (uVar16 != 0);
        puVar6 = puVar8;
        if (uVar12 == uVar13) goto LAB_006cbffc;
      }
      do {
        puVar9 = puVar11 + 1;
        *puVar8 = *puVar11;
        puVar6 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        puVar11 = puVar9;
      } while (puVar1 != puVar9);
    }
LAB_006cbffc:
    param_1[0x15] = (long)puVar6;
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = (long)plVar4;
  lVar5 = *(long *)(param_2 + 200) - *(long *)(param_2 + 0xc0);
  if (lVar5 != 0) {
    if ((ulong)(lVar5 >> 2) >> 0x3e != 0) {
                    /* try { // try from 006cc4ac to 006cc4b3 has its CatchHandler @ 006cc634 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar5,4);
    param_1[0x18] = (long)puVar6;
    param_1[0x19] = (long)puVar6;
    param_1[0x1a] = (long)(puVar6 + (lVar5 >> 2));
    puVar9 = *(undefined4 **)(param_2 + 0xc0);
    puVar1 = *(undefined4 **)(param_2 + 200);
    if (puVar9 != puVar1) {
      uVar12 = ((long)puVar1 - (long)puVar9) - 4;
      puVar8 = puVar6;
      if (uVar12 < 0x3c) {
        puVar11 = puVar9;
      }
      else if (((undefined4 *)((long)puVar9 + (uVar12 & 0xfffffffffffffffc) + 4) <= puVar6) ||
              (puVar11 = puVar9,
              (undefined4 *)((long)puVar6 + ((long)puVar1 - (long)puVar9 & 0xfffffffffffffffcU)) <=
              puVar9)) {
        uVar12 = (uVar12 >> 2) + 1;
        uVar13 = uVar12 & 0x7ffffffffffffff0;
        puVar8 = puVar6 + uVar13;
        puVar11 = puVar9 + uVar13;
        puVar10 = (undefined8 *)(puVar9 + 8);
        puVar14 = (undefined8 *)(puVar6 + 8);
        uVar16 = uVar13;
        do {
          uVar19 = puVar10[-4];
          uVar23 = puVar10[-1];
          uVar21 = puVar10[-2];
          uVar16 = uVar16 - 0x10;
          uVar26 = puVar10[1];
          uVar25 = *puVar10;
          uVar28 = puVar10[3];
          uVar27 = puVar10[2];
          puVar14[-3] = puVar10[-3];
          puVar14[-4] = uVar19;
          puVar14[-1] = uVar23;
          puVar14[-2] = uVar21;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14[3] = uVar28;
          puVar14[2] = uVar27;
          puVar10 = puVar10 + 8;
          puVar14 = puVar14 + 8;
        } while (uVar16 != 0);
        puVar6 = puVar8;
        if (uVar12 == uVar13) goto LAB_006cc0f8;
      }
      do {
        puVar9 = puVar11 + 1;
        *puVar8 = *puVar11;
        puVar6 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        puVar11 = puVar9;
      } while (puVar1 != puVar9);
    }
LAB_006cc0f8:
    param_1[0x19] = (long)puVar6;
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x1f] = (long)plVar4;
  if ((*(byte *)(param_2 + 0xe0) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0xe8);
    lVar5 = *(long *)(param_2 + 0xe0);
    param_1[0x1e] = *(long *)(param_2 + 0xf0);
    param_1[0x1d] = lVar20;
    param_1[0x1c] = lVar5;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0xe8);
    pvVar2 = *(void **)(param_2 + 0xf0);
    if (uVar12 < 0x17) {
      pvVar15 = (void *)((long)param_1 + 0xe1);
      *(char *)(param_1 + 0x1c) = (char)((int)uVar12 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 006cc4d4 to 006cc4db has its CatchHandler @ 006cc534 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
      param_1[0x1d] = uVar12;
      param_1[0x1e] = (long)pvVar15;
      param_1[0x1c] = uVar16 | 1;
    }
    memcpy(pvVar15,pvVar2,uVar12 + 1);
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x23] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0x108);
    lVar5 = *(long *)(param_2 + 0x100);
    param_1[0x22] = *(long *)(param_2 + 0x110);
    param_1[0x21] = lVar20;
    param_1[0x20] = lVar5;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x108);
    pvVar2 = *(void **)(param_2 + 0x110);
    if (uVar12 < 0x17) {
      pvVar15 = (void *)((long)param_1 + 0x101);
      *(char *)(param_1 + 0x20) = (char)((int)uVar12 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 006cc4dc to 006cc4e3 has its CatchHandler @ 006cc520 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
      param_1[0x21] = uVar12;
      param_1[0x22] = (long)pvVar15;
      param_1[0x20] = uVar16 | 1;
    }
    memcpy(pvVar15,pvVar2,uVar12 + 1);
  }
  lVar5 = *(long *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  param_1[0x24] = lVar5;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x29] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x130) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0x138);
    lVar5 = *(long *)(param_2 + 0x130);
    param_1[0x28] = *(long *)(param_2 + 0x140);
    param_1[0x27] = lVar20;
    param_1[0x26] = lVar5;
  }
  else {
    uVar12 = *(ulong *)(param_2 + 0x138);
    pvVar2 = *(void **)(param_2 + 0x140);
    if (uVar12 < 0x17) {
      pvVar15 = (void *)((long)param_1 + 0x131);
      *(char *)(param_1 + 0x26) = (char)((int)uVar12 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 006cc4e4 to 006cc4eb has its CatchHandler @ 006cc50c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
      param_1[0x27] = uVar12;
      param_1[0x28] = (long)pvVar15;
      param_1[0x26] = uVar16 | 1;
    }
    memcpy(pvVar15,pvVar2,uVar12 + 1);
  }
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)plVar4;
  lVar5 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
  if (lVar5 == 0) goto LAB_006cc398;
  if ((ulong)(lVar5 >> 2) >> 0x3e != 0) {
                    /* try { // try from 006cc4b4 to 006cc4c3 has its CatchHandler @ 006cc558 */
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  puVar6 = (undefined4 *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar5,4);
  param_1[0x2b] = (long)puVar6;
  param_1[0x2c] = (long)puVar6;
  param_1[0x2d] = (long)(puVar6 + (lVar5 >> 2));
  puVar9 = *(undefined4 **)(param_2 + 0x158);
  puVar1 = *(undefined4 **)(param_2 + 0x160);
  if (puVar9 != puVar1) {
    uVar12 = ((long)puVar1 - (long)puVar9) - 4;
    puVar8 = puVar6;
    if (uVar12 < 0x3c) {
      puVar11 = puVar9;
    }
    else if (((undefined4 *)((long)puVar9 + (uVar12 & 0xfffffffffffffffc) + 4) <= puVar6) ||
            (puVar11 = puVar9,
            (undefined4 *)((long)puVar6 + ((long)puVar1 - (long)puVar9 & 0xfffffffffffffffcU)) <=
            puVar9)) {
      uVar12 = (uVar12 >> 2) + 1;
      uVar13 = uVar12 & 0x7ffffffffffffff0;
      puVar8 = puVar6 + uVar13;
      puVar11 = puVar9 + uVar13;
      puVar10 = (undefined8 *)(puVar9 + 8);
      puVar14 = (undefined8 *)(puVar6 + 8);
      uVar16 = uVar13;
      do {
        uVar19 = puVar10[-4];
        uVar23 = puVar10[-1];
        uVar21 = puVar10[-2];
        uVar16 = uVar16 - 0x10;
        uVar26 = puVar10[1];
        uVar25 = *puVar10;
        uVar28 = puVar10[3];
        uVar27 = puVar10[2];
        puVar14[-3] = puVar10[-3];
        puVar14[-4] = uVar19;
        puVar14[-1] = uVar23;
        puVar14[-2] = uVar21;
        puVar14[1] = uVar26;
        *puVar14 = uVar25;
        puVar14[3] = uVar28;
        puVar14[2] = uVar27;
        puVar10 = puVar10 + 8;
        puVar14 = puVar14 + 8;
      } while (uVar16 != 0);
      puVar6 = puVar8;
      if (uVar12 == uVar13) goto LAB_006cc394;
    }
    do {
      puVar9 = puVar11 + 1;
      *puVar8 = *puVar11;
      puVar6 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar9;
    } while (puVar1 != puVar9);
  }
LAB_006cc394:
  param_1[0x2c] = (long)puVar6;
LAB_006cc398:
  lVar20 = *(long *)(param_2 + 0x180);
  lVar5 = *(long *)(param_2 + 0x178);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x188);
  param_1[0x30] = lVar20;
  param_1[0x2f] = lVar5;
  FUN_01d01ed8(param_1 + 0x32,param_2 + 400);
  lVar20 = *(long *)(param_2 + 0x1a0);
  lVar5 = *(long *)(param_2 + 0x198);
  lVar24 = *(long *)(param_2 + 0x1b0);
  lVar22 = *(long *)(param_2 + 0x1a8);
  param_1[0x37] = *(long *)(param_2 + 0x1b8);
  param_1[0x34] = lVar20;
  param_1[0x33] = lVar5;
  param_1[0x36] = lVar24;
  param_1[0x35] = lVar22;
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x3b] = (long)plVar4;
  if ((*(byte *)(param_2 + 0x1c0) & 1) == 0) {
    lVar20 = *(long *)(param_2 + 0x1c8);
    lVar5 = *(long *)(param_2 + 0x1c0);
    param_1[0x3a] = *(long *)(param_2 + 0x1d0);
    param_1[0x39] = lVar20;
    param_1[0x38] = lVar5;
    return;
  }
  uVar12 = *(ulong *)(param_2 + 0x1c8);
  pvVar2 = *(void **)(param_2 + 0x1d0);
  if (uVar12 < 0x17) {
    pvVar15 = (void *)((long)param_1 + 0x1c1);
    *(char *)(param_1 + 0x38) = (char)((int)uVar12 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 006cc4ec to 006cc4f3 has its CatchHandler @ 006cc4f4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar16 = uVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar15 = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar16,1);
    param_1[0x38] = uVar16 | 1;
    param_1[0x39] = uVar12;
    param_1[0x3a] = (long)pvVar15;
  }
  memcpy(pvVar15,pvVar2,uVar12 + 1);
  return;
}


