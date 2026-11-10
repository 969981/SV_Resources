/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bee00; name: FUN_002bee00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002bee00(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,ulong param_5,
                 void *param_6,ulong param_7,ulong param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong *puVar12;
  void *pvVar13;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong *local_98;
  ulong uStack_90;
  void *local_88;
  ulong *local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  
  if (param_4 == (void *)0x0) {
    local_98 = (ulong *)0x0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
  }
  else {
    if (0xffffffffffffffef < param_5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_5 < 0x17) {
      local_98 = (ulong *)CONCAT71(local_98._1_7_,(char)((int)param_5 << 1));
      pvVar13 = (void *)((ulong)&local_98 | 1);
      if (param_5 != 0) goto LAB_002bee9c;
    }
    else {
      uVar3 = param_5 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      local_98 = (ulong *)(uVar3 | 1);
      uStack_90 = param_5;
      local_88 = pvVar13;
LAB_002bee9c:
      memcpy(pvVar13,param_4,param_5);
    }
    *(undefined1 *)((long)pvVar13 + param_5) = 0;
  }
  if (param_6 == (void *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    goto LAB_002bef18;
  }
  if (0xffffffffffffffef < param_7) {
                    /* try { // try from 002bf17c to 002bf183 has its CatchHandler @ 002bf184 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_7 < 0x17) {
    uVar3 = local_b0 >> 8;
    local_b0 = CONCAT71((int7)uVar3,(char)((int)param_7 << 1));
    pvVar13 = (void *)((ulong)&local_b0 | 1);
    if (param_7 != 0) goto LAB_002bef04;
  }
  else {
    uVar3 = param_7 + 0x10 & 0xfffffffffffffff0;
    pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_b0 = uVar3 | 1;
    uStack_a8 = param_7;
    local_a0 = pvVar13;
LAB_002bef04:
    memcpy(pvVar13,param_6,param_7);
  }
  *(undefined1 *)((long)pvVar13 + param_7) = 0;
LAB_002bef18:
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_58 = local_a0;
  uStack_60 = uStack_a8;
  local_68 = local_b0;
  lVar4 = param_1 + 0x140;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = (ulong *)0x0;
  local_b0 = 0;
  uStack_a8 = 0;
  lVar9 = *(long *)(param_1 + 0x140);
  lVar2 = lVar4;
  if (lVar9 != 0) {
    lVar11 = lVar4;
    do {
      uVar3 = FUN_002c66d8(lVar9 + 0x20,&local_80);
      lVar1 = 8;
      if ((uVar3 & 1) == 0) {
        lVar1 = 0;
        lVar11 = lVar9;
      }
      lVar9 = *(long *)(lVar9 + lVar1);
    } while (lVar9 != 0);
    if ((lVar11 != lVar4) && (uVar3 = FUN_002c66d8(&local_80,lVar11 + 0x20), (uVar3 & 1) == 0)) {
      lVar2 = lVar11;
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if (lVar2 != lVar4) {
    plVar5 = (long *)(lVar2 + 0x58);
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar5;
      do {
        if ((ulong)plVar7[4] >= param_8) {
          plVar10 = plVar7;
        }
        plVar7 = (long *)plVar7[(ulong)plVar7[4] < param_8];
      } while (plVar7 != (long *)0x0);
      if ((plVar10 != plVar5) && ((ulong)plVar10[4] <= param_8)) {
        FUN_002cbaa4(&local_80,param_8);
        if (local_80 != &uStack_78) {
          puVar12 = local_80;
          do {
            uVar3 = puVar12[7];
            local_98 = puVar12 + 4;
                    /* try { // try from 002bf06c to 002bf07f has its CatchHandler @ 002bf1a8 */
            lVar4 = FUN_002c6948(lVar2 + 0x68,local_98,&DAT_03cc9966,&local_98,&local_b0);
            *(ulong *)(lVar4 + 0x38) = *(long *)(lVar4 + 0x38) + uVar3;
            puVar6 = (ulong *)puVar12[1];
            if ((ulong *)puVar12[1] == (ulong *)0x0) {
              puVar6 = puVar12 + 2;
              puVar8 = (ulong *)*puVar6;
              if ((ulong *)*puVar8 != puVar12) {
                do {
                  uVar3 = *puVar6;
                  puVar6 = (ulong *)(uVar3 + 0x10);
                  puVar8 = (ulong *)*puVar6;
                } while (*puVar8 != uVar3);
              }
            }
            else {
              do {
                puVar8 = puVar6;
                puVar6 = (ulong *)*puVar8;
              } while ((ulong *)*puVar8 != (ulong *)0x0);
            }
            puVar12 = puVar8;
          } while (puVar8 != &uStack_78);
        }
        FUN_002c648c(&local_80,uStack_78);
        plVar5 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          plVar5 = plVar10 + 2;
          plVar7 = (long *)*plVar5;
          if ((long *)*plVar7 != plVar10) {
            do {
              lVar4 = *plVar5;
              plVar5 = (long *)(lVar4 + 0x10);
              plVar7 = (long *)*plVar5;
            } while (*plVar7 != lVar4);
          }
        }
        else {
          do {
            plVar7 = plVar5;
            plVar5 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        if (*(long **)(lVar2 + 0x50) == plVar10) {
          *(long **)(lVar2 + 0x50) = plVar7;
        }
        *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x60) + -1;
        FUN_01336080(*(undefined8 *)(lVar2 + 0x58),plVar10);
        FUN_0049e790(PTR_LAB_047cba48,plVar10);
      }
    }
  }
  return;
}


