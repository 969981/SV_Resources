/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bf7fc; name: FUN_002bf7fc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002bf7fc(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 void *param_6,void **param_7,undefined8 *param_8,ulong param_9)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a8;
  void **ppvStack_a0;
  void *local_98;
  ulong local_90;
  ulong local_80;
  void **ppvStack_78;
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  
  if (param_4 == (void *)0x0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (void *)0x0;
  }
  else {
    if (0xffffffffffffffef < param_5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < 0x17) {
      local_68 = CONCAT71(local_68._1_7_,(char)((int)param_5 << 1));
      pvVar17 = (void *)((ulong)&local_68 | 1);
      if (param_5 != 0) goto LAB_002bf898;
    }
    else {
      uVar2 = param_5 + 0x10 & 0xfffffffffffffff0;
      pvVar17 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
      local_68 = uVar2 | 1;
      uStack_60 = param_5;
      local_58 = pvVar17;
LAB_002bf898:
      memcpy(pvVar17,param_4,param_5);
    }
    *(undefined1 *)((long)pvVar17 + param_5) = 0;
  }
  if (param_6 == (void *)0x0) {
    local_80 = 0;
    ppvStack_78 = (void **)0x0;
    local_70 = (void *)0x0;
    goto LAB_002bf914;
  }
  if ((void **)0xffffffffffffffef < param_7) {
                    /* try { // try from 002bfd30 to 002bfd37 has its CatchHandler @ 002bfd54 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_7 < (void **)0x17) {
    uVar2 = local_80 >> 8;
    local_80 = CONCAT71((int7)uVar2,(char)((int)param_7 << 1));
    pvVar17 = (void *)((ulong)&local_80 | 1);
    if (param_7 != (void **)0x0) goto LAB_002bf900;
  }
  else {
    pvVar17 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(param_7 + 2) & 0xfffffffffffffff0);
    local_80 = (ulong)(param_7 + 2) & 0xfffffffffffffff0 | 1;
    ppvStack_78 = param_7;
    local_70 = pvVar17;
LAB_002bf900:
    memcpy(pvVar17,param_6,(size_t)param_7);
  }
  *(undefined1 *)((long)pvVar17 + (long)param_7) = 0;
LAB_002bf914:
  local_b0 = local_58;
  uStack_b8 = uStack_60;
  local_c0 = local_68;
  local_98 = local_70;
  ppvStack_a0 = ppvStack_78;
  local_a8 = local_80;
  lVar6 = param_1 + 0x140;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_80 = 0;
  ppvStack_78 = (void **)0x0;
  lVar12 = *(long *)(param_1 + 0x140);
  lVar5 = lVar6;
  if (lVar12 != 0) {
    lVar14 = lVar6;
    do {
      uVar2 = FUN_002c66d8(lVar12 + 0x20,&local_c0);
      lVar8 = 8;
      if ((uVar2 & 1) == 0) {
        lVar8 = 0;
        lVar14 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + lVar8);
    } while (lVar12 != 0);
    if ((lVar14 != lVar6) && (uVar2 = FUN_002c66d8(&local_c0,lVar14 + 0x20), (uVar2 & 1) == 0)) {
      lVar5 = lVar14;
    }
  }
  if ((local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
  if (lVar5 != lVar6) {
    plVar15 = (long *)(lVar5 + 0x88);
    plVar16 = (long *)*plVar15;
    if (plVar16 != (long *)0x0) {
      plVar13 = plVar15;
      do {
        iVar1 = FUN_00290c34(plVar16[4],*param_8);
        if (iVar1 >= 0) {
          plVar13 = plVar16;
        }
        plVar16 = (long *)plVar16[iVar1 < 0];
      } while (plVar16 != (long *)0x0);
      if ((plVar13 != plVar15) && (iVar1 = FUN_00290c34(*param_8,plVar13[4]), -1 < iVar1)) {
        plVar15 = plVar13 + 6;
        plVar16 = (long *)*plVar15;
        if (plVar16 != (long *)0x0) {
          plVar11 = plVar15;
          do {
            if ((ulong)plVar16[4] >= param_9) {
              plVar11 = plVar16;
            }
            plVar16 = (long *)plVar16[(ulong)plVar16[4] < param_9];
          } while (plVar16 != (long *)0x0);
          if ((plVar11 != plVar15) && ((ulong)plVar11[4] <= param_9)) {
            FUN_002cbe84(&local_c0,param_9);
            puVar3 = (ulong *)plVar13[9];
            if (puVar3 < (ulong *)plVar13[10]) {
              puVar3[1] = uStack_b8;
              *puVar3 = local_c0;
              puVar3[3] = local_a8;
              puVar3[2] = (ulong)local_b0;
              puVar3[4] = (ulong)ppvStack_a0;
              puVar4 = puVar3 + 5;
              *puVar4 = (ulong)local_98;
              puVar3[6] = local_90;
              if (local_90 == 0) {
                puVar3[4] = (ulong)puVar4;
              }
              else {
                *(ulong **)((long)local_98 + 0x10) = puVar4;
                ppvStack_a0 = &local_98;
                local_98 = (void *)0x0;
                local_90 = 0;
              }
              plVar13[9] = (long)(puVar3 + 7);
            }
            else {
              lVar6 = (long)puVar3 - plVar13[8] >> 3;
              uVar2 = lVar6 * 0x6db6db6db6db6db7 + 1;
              if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002bfd38 to 002bfd3b has its CatchHandler @ 002bfd3c */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar5 = plVar13[10] - plVar13[8] >> 3;
              uVar7 = lVar5 * -0x2492492492492492;
              if (uVar2 <= uVar7) {
                uVar2 = uVar7;
              }
              if (0x249249249249248 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
                uVar2 = 0x492492492492492;
              }
              if (uVar2 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar2 * 0x38);
              }
              puVar3 = (ulong *)(lVar5 + lVar6 * 8);
              puVar3[1] = uStack_b8;
              *puVar3 = local_c0;
              puVar3[3] = local_a8;
              puVar3[2] = (ulong)local_b0;
              puVar3[4] = (ulong)ppvStack_a0;
              puVar4 = puVar3 + 5;
              *puVar4 = (ulong)local_98;
              puVar3[6] = local_90;
              if (local_90 == 0) {
                puVar3[4] = (ulong)puVar4;
              }
              else {
                ppvStack_a0 = &local_98;
                *(ulong **)((long)local_98 + 0x10) = puVar4;
                local_98 = (void *)0x0;
                local_90 = 0;
              }
              lVar6 = plVar13[8];
              lVar12 = plVar13[9];
              puVar4 = puVar3 + 7;
              if (lVar12 == lVar6) {
                lVar12 = lVar6;
              }
              else {
                lVar14 = 0;
                do {
                  while( true ) {
                    lVar8 = lVar14;
                    lVar14 = lVar12 + lVar8;
                    uVar19 = *(undefined8 *)(lVar14 + -0x30);
                    uVar18 = *(undefined8 *)(lVar14 + -0x38);
                    uVar20 = *(undefined8 *)(lVar14 + -0x28);
                    *(undefined8 *)((long)puVar3 + lVar8 + -0x20) = *(undefined8 *)(lVar14 + -0x20);
                    *(undefined8 *)((long)puVar3 + lVar8 + -0x28) = uVar20;
                    *(undefined8 *)((long)puVar3 + lVar8 + -0x30) = uVar19;
                    *(undefined8 *)((long)puVar3 + lVar8 + -0x38) = uVar18;
                    *(undefined8 *)((long)puVar3 + lVar8 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
                    lVar9 = *(long *)(lVar14 + -0x10);
                    plVar15 = (long *)((long)puVar3 + lVar8 + -0x10);
                    *plVar15 = lVar9;
                    lVar10 = *(long *)(lVar14 + -8);
                    *(long *)((long)puVar3 + lVar8 + -8) = lVar10;
                    if (lVar10 != 0) break;
                    *(long **)((long)puVar3 + lVar8 + -0x18) = plVar15;
                    lVar14 = lVar8 + -0x38;
                    if (lVar6 - lVar12 == lVar8 + -0x38) goto LAB_002bfc34;
                  }
                  *(long **)(lVar9 + 0x10) = plVar15;
                  *(undefined8 *)(lVar14 + -0x10) = 0;
                  *(undefined8 **)(lVar14 + -0x18) = (undefined8 *)(lVar14 + -0x10);
                  *(undefined8 *)(lVar14 + -8) = 0;
                  lVar14 = lVar8 + -0x38;
                } while (lVar6 - lVar12 != lVar8 + -0x38);
LAB_002bfc34:
                lVar6 = plVar13[9];
                puVar3 = (ulong *)((long)puVar3 + lVar8 + -0x38);
                lVar12 = plVar13[8];
              }
              plVar13[8] = (long)puVar3;
              plVar13[9] = (long)puVar4;
              plVar13[10] = lVar5 + uVar2 * 0x38;
              for (; lVar6 != lVar12; lVar6 = lVar6 + -0x38) {
                FUN_002c1d5c(lVar6 + -0x18,*(undefined8 *)(lVar6 + -0x10));
              }
              if (lVar12 != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lVar12);
              }
            }
            FUN_002c1d5c(&ppvStack_a0,local_98);
            plVar15 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              plVar15 = plVar11 + 2;
              plVar16 = (long *)*plVar15;
              if ((long *)*plVar16 != plVar11) {
                do {
                  lVar6 = *plVar15;
                  plVar15 = (long *)(lVar6 + 0x10);
                  plVar16 = (long *)*plVar15;
                } while (*plVar16 != lVar6);
              }
            }
            else {
              do {
                plVar16 = plVar15;
                plVar15 = (long *)*plVar16;
              } while ((long *)*plVar16 != (long *)0x0);
            }
            if ((long *)plVar13[5] == plVar11) {
              plVar13[5] = (long)plVar16;
            }
            plVar13[7] = plVar13[7] + -1;
            FUN_01336080(plVar13[6],plVar11);
            FUN_0049e790(PTR_LAB_047cba48,plVar11);
          }
        }
      }
    }
  }
  return;
}


