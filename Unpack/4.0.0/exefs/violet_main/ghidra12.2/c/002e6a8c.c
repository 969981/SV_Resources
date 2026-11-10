/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e6a8c; name: FUN_002e6a8c
 */


/* WARNING: Removing unreachable block (ram,0x002e6fb0) */

void FUN_002e6a8c(ulong *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined4 uVar17;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  lVar11 = param_1[4] + 1;
  if (param_1[4] == 0xffffffffffffffff) {
    puVar7 = (ulong *)0x0;
    puVar13 = (ulong *)param_1[2];
    if (puVar13 == param_1 + 3) goto LAB_002e6b24;
LAB_002e6ad8:
    puVar2 = PTR_LAB_047cba48;
    puVar1 = PTR_FUN_047cba38;
    if (*(int *)((long)puVar13 + 0x1c) == 0) {
      uVar12 = (int)puVar13[4] + 1;
      puVar7 = (ulong *)puVar13[1];
      if ((ulong *)puVar13[1] == (ulong *)0x0) {
        puVar7 = puVar13 + 2;
        puVar14 = (ulong *)*puVar7;
        if ((ulong *)*puVar14 != puVar13) {
          do {
            uVar8 = *puVar7;
            puVar7 = (ulong *)(uVar8 + 0x10);
            puVar14 = (ulong *)*puVar7;
          } while (*(ulong *)*puVar7 != uVar8);
        }
      }
      else {
        do {
          puVar14 = puVar7;
          puVar7 = (ulong *)*puVar14;
        } while (puVar7 != (ulong *)0x0);
      }
    }
    else {
      uVar12 = 0;
      puVar14 = puVar13;
    }
    local_78 = local_70;
    if (puVar14 != param_1 + 3) {
      uVar8 = (ulong)(*(int *)((long)puVar14 + 0x1c) - 1);
      if (local_68 <= local_70) goto LAB_002e6c14;
      do {
        *local_70 = (ulong)uVar12 | uVar8 << 0x20;
        puVar7 = local_78;
        local_70 = local_70 + 1;
        while( true ) {
          local_78 = puVar7;
          uVar12 = (int)puVar14[4] + 1;
          puVar7 = (ulong *)puVar14[1];
          if ((ulong *)puVar14[1] == (ulong *)0x0) {
            puVar7 = puVar14 + 2;
            bVar3 = *(ulong **)*puVar7 != puVar14;
            puVar14 = (ulong *)*puVar7;
            if (bVar3) {
              do {
                uVar8 = *puVar7;
                puVar7 = (ulong *)(uVar8 + 0x10);
                puVar14 = (ulong *)*puVar7;
              } while (*puVar14 != uVar8);
            }
          }
          else {
            do {
              puVar14 = puVar7;
              puVar7 = (ulong *)*puVar14;
            } while ((ulong *)*puVar14 != (ulong *)0x0);
          }
          if (puVar14 == param_1 + 3) goto LAB_002e6d24;
          uVar8 = (ulong)(*(int *)((long)puVar14 + 0x1c) - 1);
          if (local_70 < local_68) break;
LAB_002e6c14:
          lVar11 = (long)local_70 - (long)local_78 >> 3;
          uVar9 = lVar11 + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 002e6fa8 to 002e6faf has its CatchHandler @ 002e6fc8 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar10 = (long)local_68 - (long)local_78 >> 2;
          if (uVar9 <= uVar10) {
            uVar9 = uVar10;
          }
          if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_0049e770(puVar1,uVar9 << 3);
          }
          puVar13 = (ulong *)(lVar4 + lVar11 * 8);
          local_68 = (ulong *)(lVar4 + uVar9 * 8);
          *puVar13 = (ulong)uVar12 | uVar8 << 0x20;
          sVar6 = (long)local_70 - (long)local_78;
          puVar7 = (ulong *)((long)puVar13 - sVar6);
          if (0 < (long)sVar6) {
            memcpy(puVar7,local_78,sVar6);
          }
          local_70 = puVar13 + 1;
          if (local_78 != (ulong *)0x0) {
            FUN_0049e790(puVar2,local_78);
          }
        }
      } while( true );
    }
LAB_002e6d24:
    puVar13 = local_78;
    if (0x10ffff < (int)uVar12) goto LAB_002e6e24;
    if (local_68 <= local_70) {
      lVar11 = (long)local_70 - (long)local_78 >> 3;
      uVar8 = lVar11 + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 002e6fb8 to 002e6fbf has its CatchHandler @ 002e6fc0 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)local_68 - (long)local_78 >> 2;
      if (uVar8 <= uVar9) {
        uVar8 = uVar9;
      }
      if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_0049e770(PTR_FUN_047cba38,uVar8 << 3);
      }
      puVar7 = (ulong *)(lVar4 + lVar11 * 8);
      *puVar7 = (ulong)uVar12 | 0x10ffff00000000;
LAB_002e6de8:
      sVar6 = (long)local_70 - (long)local_78;
      puVar13 = (ulong *)((long)puVar7 - sVar6);
      if (0 < (long)sVar6) {
        memcpy(puVar13,local_78,sVar6);
      }
      local_70 = puVar7 + 1;
      if (local_78 != (ulong *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,local_78);
      }
      goto LAB_002e6e24;
    }
    uVar8 = (ulong)uVar12 | 0x10ffff00000000;
  }
  else {
    local_70 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,lVar11 * 8);
    puVar7 = local_70 + lVar11;
    puVar13 = (ulong *)param_1[2];
    local_68 = puVar7;
    if (puVar13 != param_1 + 3) goto LAB_002e6ad8;
LAB_002e6b24:
    local_78 = local_70;
    if (puVar7 <= local_70) {
      lVar4 = (long)puVar7 - (long)local_70 >> 2;
      lVar11 = 1;
      if (lVar4 != 0) {
        lVar11 = lVar4;
      }
      if (0xffffffffffffffe < (ulong)((long)puVar7 - (long)local_70 >> 3)) {
        lVar11 = 0x1fffffffffffffff;
      }
      if (lVar11 == 0) {
        puVar7 = (ulong *)0x0;
      }
      else {
        puVar7 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,lVar11 << 3);
      }
      *puVar7 = 0x10ffff00000000;
      goto LAB_002e6de8;
    }
    uVar8 = 0x10ffff00000000;
  }
  *local_70 = uVar8;
  puVar13 = local_78;
  local_70 = local_70 + 1;
LAB_002e6e24:
  local_78 = puVar13;
  puVar7 = param_1 + 3;
  puVar13 = param_1 + 2;
  FUN_002e3684(puVar13,*puVar7);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = (ulong)puVar7;
  puVar1 = PTR_FUN_047cba38;
  if (local_70 != local_78) {
    uVar8 = 0;
    puVar14 = local_78;
LAB_002e6f04:
    puVar15 = puVar7;
    puVar16 = puVar7;
LAB_002e6f0c:
    uVar9 = *puVar16;
    while( true ) {
      if (uVar9 == 0) {
        puVar5 = (undefined8 *)FUN_0049e770(puVar1,0x28);
        *(ulong *)((long)puVar5 + 0x1c) = *puVar14;
        puVar5[2] = puVar15;
        *puVar5 = 0;
        puVar5[1] = 0;
        *puVar16 = (ulong)puVar5;
        if (*(ulong *)*puVar13 != 0) {
          *puVar13 = *(ulong *)*puVar13;
          puVar5 = (undefined8 *)*puVar16;
        }
        FUN_010108e0(param_1[3],puVar5);
        param_1[4] = param_1[4] + 1;
      }
      uVar8 = uVar8 + 1;
      if ((ulong)((long)local_70 - (long)local_78 >> 3) <= uVar8) break;
      puVar14 = local_78 + uVar8;
      if ((ulong *)*puVar7 == (ulong *)0x0) goto LAB_002e6f04;
      puVar15 = (ulong *)*puVar7;
      puVar16 = param_1 + 3;
      while( true ) {
        while (*(int *)((long)puVar15 + 0x1c) <= *(int *)((long)puVar14 + 4)) {
          if ((int)*puVar14 <= (int)puVar15[4]) goto LAB_002e6f0c;
          puVar16 = puVar15 + 1;
          if ((ulong *)*puVar16 == (ulong *)0x0) goto LAB_002e6f0c;
          puVar15 = (ulong *)*puVar16;
        }
        puVar16 = puVar15;
        if ((ulong *)*puVar15 == (ulong *)0x0) break;
        puVar15 = (ulong *)*puVar15;
      }
      uVar9 = *puVar15;
    }
  }
  uVar8 = *param_1;
  uVar17 = CONCAT13(~(byte)(uVar8 >> 0x18),
                    CONCAT12(~(byte)(uVar8 >> 0x10),CONCAT11(~(byte)(uVar8 >> 8),~(byte)uVar8)));
  *(int *)(param_1 + 1) = 0x110000 - (int)param_1[1];
  *param_1 = CONCAT44((int)(CONCAT17(~(byte)(uVar8 >> 0x38),
                                     CONCAT16(~(byte)(uVar8 >> 0x30),
                                              CONCAT15(~(byte)(uVar8 >> 0x28),
                                                       CONCAT14(~(byte)(uVar8 >> 0x20),uVar17)))) >>
                           0x20),uVar17) & 0x3ffffff03ffffff;
  if (local_78 != (ulong *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


