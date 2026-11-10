/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c01c0; name: FUN_002c01c0
 */


void FUN_002c01c0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  ulong *local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined1 local_70 [8];
  long *local_68;
  
  puVar3 = PTR_LAB_047cba48;
  puVar2 = PTR_FUN_047cba38;
  local_80 = 0;
  local_78 = 0;
  lVar6 = *param_2;
  lVar7 = param_2[1];
  local_88 = &local_80;
  if (lVar6 != lVar7) {
    do {
      if (*(long *)(lVar6 + 0x60) != *(long *)(lVar6 + 0x68)) {
                    /* try { // try from 002c0234 to 002c023b has its CatchHandler @ 002c0744 */
        FUN_002bfee0(&local_b8);
                    /* try { // try from 002c023c to 002c028b has its CatchHandler @ 002c074c */
        plVar4 = (long *)FUN_002c70dc(&local_88,&local_a0);
        if (&local_80 == plVar4) {
          puVar5 = (undefined8 *)FUN_002c71ec(&local_88,&local_68,&local_a0);
          puVar13 = (undefined8 *)*puVar5;
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)FUN_0049e770(puVar2,0x50);
            puVar13[6] = local_90;
            puVar13[7] = 0;
            puVar13[5] = uStack_98;
            puVar13[4] = local_a0;
            uStack_98 = 0;
            local_90 = 0;
            local_a0 = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            puVar13[2] = local_68;
            *puVar13 = 0;
            puVar13[1] = 0;
            *puVar5 = puVar13;
            if ((long *)*local_88 == (long *)0x0) {
              puVar5 = puVar13;
            }
            else {
              puVar5 = (undefined8 *)*puVar5;
              local_88 = (long *)*local_88;
            }
            FUN_010108e0(local_80,puVar5);
            local_78 = local_78 + 1;
            puVar14 = puVar13 + 7;
            bVar1 = (byte)*puVar14;
          }
          else {
            puVar14 = puVar13 + 7;
            bVar1 = (byte)*puVar14;
          }
          if ((bVar1 & 1) != 0) {
            FUN_0049e790(puVar3,puVar13[9]);
          }
          puVar14[2] = local_a8;
          puVar14[1] = uStack_b0;
          *puVar14 = (ulong)local_b8;
          local_b8 = (ulong *)((ulong)local_b8 & 0xffffffffffff0000);
        }
        if ((local_a0 & 1) != 0) {
          FUN_0049e790(puVar3,local_90);
        }
        if (((ulong)local_b8 & 1) != 0) {
          FUN_0049e790(puVar3,local_a8);
        }
      }
      lVar6 = lVar6 + 0x78;
    } while (lVar7 != lVar6);
  }
  uStack_b0 = 0;
  local_a8 = 0;
  local_b8 = &uStack_b0;
  if (&local_80 != local_88) {
    plVar4 = local_88;
    do {
      plVar11 = plVar4 + 7;
                    /* try { // try from 002c039c to 002c03a7 has its CatchHandler @ 002c0794 */
      lVar6 = FUN_002c6ebc(param_1 + 0x150,plVar11);
      if (param_1 + 0x158 == lVar6) {
LAB_002c043c:
        plVar11 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) {
          plVar11 = plVar4 + 2;
          plVar9 = (long *)*plVar11;
          if ((long *)*plVar9 != plVar4) {
            do {
              lVar6 = *plVar11;
              plVar11 = (long *)(lVar6 + 0x10);
              plVar9 = (long *)*plVar11;
            } while (*plVar9 != lVar6);
          }
        }
        else {
          do {
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
      }
      else {
                    /* try { // try from 002c03b8 to 002c03cf has its CatchHandler @ 002c0740 */
        local_68 = plVar11;
        lVar7 = FUN_002c7304(&local_b8,plVar11,&DAT_03cc9966,&local_68,local_70);
        plVar11 = plVar4 + 4;
        plVar9 = (long *)(lVar6 + 0x40);
        *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(lVar6 + 0x38);
                    /* try { // try from 002c03e4 to 002c041f has its CatchHandler @ 002c0790 */
        lVar8 = FUN_002c7574(plVar9,plVar11);
        if (lVar6 + 0x48 == lVar8) goto LAB_002c043c;
        uVar12 = *(undefined8 *)(lVar8 + 0x38);
        local_68 = plVar11;
        lVar7 = FUN_002c6948(lVar7 + 0x40,plVar11,&DAT_03cc9966,&local_68,local_70);
        *(undefined8 *)(lVar7 + 0x38) = uVar12;
        plVar11 = *(long **)(lVar8 + 8);
        if (*(long **)(lVar8 + 8) == (long *)0x0) {
          plVar11 = (long *)(lVar8 + 0x10);
          plVar10 = (long *)*plVar11;
          if (*plVar10 != lVar8) {
            do {
              lVar7 = *plVar11;
              plVar11 = (long *)(lVar7 + 0x10);
              plVar10 = (long *)*plVar11;
            } while (*plVar10 != lVar7);
          }
        }
        else {
          do {
            plVar10 = plVar11;
            plVar11 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
        if (*plVar9 == lVar8) {
          *plVar9 = (long)plVar10;
        }
        *(long *)(lVar6 + 0x50) = *(long *)(lVar6 + 0x50) + -1;
        FUN_01336080(*(undefined8 *)(lVar6 + 0x48),lVar8);
        if ((*(byte *)(lVar8 + 0x20) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar8 + 0x30));
        }
        FUN_0049e790(PTR_LAB_047cba48,lVar8);
                    /* try { // try from 002c04fc to 002c0507 has its CatchHandler @ 002c073c */
        plVar9 = (long *)FUN_002c7684(&local_88,plVar4);
      }
      plVar4 = plVar9;
    } while (&local_80 != plVar9);
  }
  puVar2 = PTR_LAB_047cba48;
  if (local_88 != &local_80) {
    plVar4 = local_88;
    do {
      plVar11 = plVar4 + 7;
                    /* try { // try from 002c054c to 002c0563 has its CatchHandler @ 002c078c */
      local_68 = plVar11;
      lVar6 = FUN_002c7304(&local_b8,plVar11,&DAT_03cc9966,&local_68,local_70);
                    /* try { // try from 002c056c to 002c0583 has its CatchHandler @ 002c0788 */
      local_68 = plVar11;
      lVar7 = FUN_002c7304(param_1 + 0x150,plVar11,&DAT_03cc9966,&local_68,local_70);
      lVar8 = *(long *)(lVar7 + 0x40);
      local_68 = plVar4 + 4;
      if (lVar7 + 0x48 == lVar8) {
        lVar7 = *(long *)(lVar6 + 0x38);
        *(long *)(lVar6 + 0x38) = lVar7 + 1;
        lVar6 = FUN_002c6948(lVar6 + 0x40,local_68,&DAT_03cc9966,&local_68,local_70);
        *(long *)(lVar6 + 0x38) = lVar7;
        plVar11 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_002c0690;
LAB_002c0680:
        do {
          plVar9 = plVar11;
          plVar11 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      else {
        uVar12 = *(undefined8 *)(lVar8 + 0x38);
                    /* try { // try from 002c05a8 to 002c05f7 has its CatchHandler @ 002c0784 */
        lVar6 = FUN_002c6948(lVar6 + 0x40,local_68,&DAT_03cc9966,&local_68,local_70);
        *(undefined8 *)(lVar6 + 0x38) = uVar12;
        plVar11 = *(long **)(lVar8 + 8);
        if (*(long **)(lVar8 + 8) == (long *)0x0) {
          plVar11 = (long *)(lVar8 + 0x10);
          plVar9 = (long *)*plVar11;
          if (*plVar9 != lVar8) {
            do {
              lVar6 = *plVar11;
              plVar11 = (long *)(lVar6 + 0x10);
              plVar9 = (long *)*plVar11;
            } while (*plVar9 != lVar6);
          }
        }
        else {
          do {
            plVar9 = plVar11;
            plVar11 = (long *)*plVar9;
          } while ((long *)*plVar9 != (long *)0x0);
        }
        if (*(long *)(lVar7 + 0x40) == lVar8) {
          *(long **)(lVar7 + 0x40) = plVar9;
        }
        *(long *)(lVar7 + 0x50) = *(long *)(lVar7 + 0x50) + -1;
        FUN_01336080(*(undefined8 *)(lVar7 + 0x48),lVar8);
        if ((*(byte *)(lVar8 + 0x20) & 1) != 0) {
          FUN_0049e790(puVar2,*(undefined8 *)(lVar8 + 0x30));
        }
        FUN_0049e790(puVar2,lVar8);
        plVar11 = (long *)plVar4[1];
        if ((long *)plVar4[1] != (long *)0x0) goto LAB_002c0680;
LAB_002c0690:
        plVar11 = plVar4 + 2;
        plVar9 = (long *)*plVar11;
        if ((long *)*plVar9 != plVar4) {
          do {
            lVar6 = *plVar11;
            plVar11 = (long *)(lVar6 + 0x10);
            plVar9 = (long *)*plVar11;
          } while (*plVar9 != lVar6);
        }
      }
      plVar4 = plVar9;
    } while (plVar9 != &local_80);
  }
  FUN_002c5f4c((long *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0x158));
  *(ulong **)(param_1 + 0x150) = local_b8;
  *(ulong *)(param_1 + 0x158) = uStack_b0;
  *(ulong *)(param_1 + 0x160) = local_a8;
  if (local_a8 == 0) {
    *(long *)(param_1 + 0x150) = param_1 + 0x158;
  }
  else {
    *(long *)(uStack_b0 + 0x10) = param_1 + 0x158;
    uStack_b0 = 0;
    local_a8 = 0;
    local_b8 = &uStack_b0;
  }
  FUN_002c5f4c(&local_b8,uStack_b0);
  FUN_00270cb0(&local_88,local_80);
  return;
}


