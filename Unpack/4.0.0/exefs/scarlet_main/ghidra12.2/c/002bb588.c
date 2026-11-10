/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bb588; name: FUN_002bb588
 */


void FUN_002bb588(undefined8 *param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long *local_c0;
  long local_b8 [2];
  long *local_a8;
  long local_a0;
  long lStack_98;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 auStack_70 [8];
  long *local_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  if ((long *)(param_2 + 0x140) == *(long **)(param_2 + 0x138)) {
LAB_002bbb68:
    return;
  }
  plVar11 = *(long **)(param_2 + 0x138);
LAB_002bb640:
  plVar6 = plVar11 + 4;
  if ((param_3 & 1) == 0) {
                    /* try { // try from 002bb654 to 002bb65f has its CatchHandler @ 002bbb8c */
    lVar3 = FUN_002c774c(param_4,plVar6);
    bVar2 = param_4 + 8 != lVar3;
  }
  else {
    bVar2 = true;
  }
  local_a0 = 0;
  lStack_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = &local_a0;
  local_90 = &local_88;
  FUN_002c648c(&local_a8,0);
  local_a8 = (long *)plVar11[0xd];
  plVar8 = plVar11 + 0xe;
  local_a0 = *plVar8;
  lStack_98 = plVar11[0xf];
  if (lStack_98 == 0) {
    local_a8 = &local_a0;
  }
  else {
    *(long **)(local_a0 + 0x10) = &local_a0;
    plVar11[0xd] = (long)plVar8;
    *plVar8 = 0;
    plVar11[0xf] = 0;
  }
  plVar8 = (long *)plVar11[10];
  while (plVar8 != plVar11 + 0xb) {
                    /* try { // try from 002bb6dc to 002bb6e3 has its CatchHandler @ 002bbba0 */
    FUN_002cbaa4(&local_e0,plVar8[4]);
    plVar9 = local_e0;
    while (plVar9 != &lStack_d8) {
      lVar10 = plVar9[7];
      local_68 = plVar9 + 4;
                    /* try { // try from 002bb704 to 002bb717 has its CatchHandler @ 002bbbb0 */
      lVar3 = FUN_002c6948(&local_a8,local_68,&DAT_03cc9966,&local_68,auStack_70);
      *(long *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + lVar10;
      plVar4 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar4 = plVar9 + 2;
        if (*(long **)*plVar4 == plVar9) {
          plVar9 = (long *)*plVar4;
        }
        else {
          do {
            lVar3 = *plVar4;
            plVar4 = (long *)(lVar3 + 0x10);
            plVar9 = (long *)*plVar4;
          } while (*plVar9 != lVar3);
        }
      }
      else {
        do {
          plVar9 = plVar4;
          plVar4 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
    }
    FUN_002c648c(&local_e0,lStack_d8);
    plVar9 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar9 = plVar8 + 2;
      if (*(long **)*plVar9 == plVar8) {
        plVar8 = (long *)*plVar9;
      }
      else {
        do {
          lVar3 = *plVar9;
          plVar9 = (long *)(lVar3 + 0x10);
          plVar8 = (long *)*plVar9;
        } while (*plVar8 != lVar3);
      }
    }
    else {
      do {
        plVar8 = plVar9;
        plVar9 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)plVar11[0x10];
LAB_002bb7e0:
  do {
    if (plVar11 + 0x11 == plVar8) break;
    local_e0 = plVar8 + 4;
                    /* try { // try from 002bb7f0 to 002bb803 has its CatchHandler @ 002bbb9c */
    lVar3 = FUN_002c785c(&local_90,local_e0,&DAT_03cc9966,&local_e0,&local_68);
    if ((long *)plVar8[5] != plVar8 + 6) {
      plVar9 = (long *)plVar8[5];
      do {
                    /* try { // try from 002bb830 to 002bb837 has its CatchHandler @ 002bbba4 */
        FUN_002cbe84(&local_e0,plVar9[4]);
        *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + lStack_d8;
        *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + (long)local_e0;
        *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + lStack_c8;
        *(long *)(lVar3 + 0x38) = *(long *)(lVar3 + 0x38) + local_d0;
        plVar4 = local_c0;
        while (plVar4 != local_b8) {
          local_68 = plVar4 + 4;
                    /* try { // try from 002bb874 to 002bb887 has its CatchHandler @ 002bbbc4 */
          lVar10 = FUN_002c1ff4(lVar3 + 0x48,local_68,&DAT_03cc9966,&local_68,auStack_70);
          *(long *)(lVar10 + 0x38) = *(long *)(lVar10 + 0x38) + plVar4[7];
          *(double *)(lVar10 + 0x40) = (double)plVar4[8] + *(double *)(lVar10 + 0x40);
          plVar5 = (long *)plVar4[1];
          if ((long *)plVar4[1] == (long *)0x0) {
            plVar5 = plVar4 + 2;
            if (*(long **)*plVar5 == plVar4) {
              plVar4 = (long *)*plVar5;
            }
            else {
              do {
                lVar10 = *plVar5;
                plVar5 = (long *)(lVar10 + 0x10);
                plVar4 = (long *)*plVar5;
              } while (*plVar4 != lVar10);
            }
          }
          else {
            do {
              plVar4 = plVar5;
              plVar5 = (long *)*plVar4;
            } while ((long *)*plVar4 != (long *)0x0);
          }
        }
        FUN_002c1d5c(&local_c0,local_b8[0]);
        plVar4 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar4 = plVar9 + 2;
          plVar5 = (long *)*plVar4;
          if ((long *)*plVar5 != plVar9) {
            do {
              lVar10 = *plVar4;
              plVar4 = (long *)(lVar10 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (*plVar5 != lVar10);
          }
        }
        else {
          do {
            plVar5 = plVar4;
            plVar4 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar9 = plVar5;
      } while (plVar5 != plVar8 + 6);
    }
    lVar10 = plVar8[8];
    lVar1 = plVar8[9];
    if (lVar10 != lVar1) {
      do {
                    /* try { // try from 002bb954 to 002bb95f has its CatchHandler @ 002bbba8 */
        FUN_002c0964(lVar3 + 0x28,lVar10);
        lVar10 = lVar10 + 0x38;
      } while (lVar1 != lVar10);
      lVar10 = plVar8[8];
      for (lVar3 = plVar8[9]; lVar3 != lVar10; lVar3 = lVar3 + -0x38) {
        FUN_002c1d5c(lVar3 + -0x18,*(undefined8 *)(lVar3 + -0x10));
      }
    }
    plVar8[9] = lVar10;
    if (plVar8[7] != 0) {
      plVar9 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar9 = plVar8 + 2;
        if (*(long **)*plVar9 == plVar8) {
          plVar8 = (long *)*plVar9;
          goto LAB_002bb7e0;
        }
        do {
          lVar3 = *plVar9;
          plVar9 = (long *)(lVar3 + 0x10);
          plVar8 = (long *)*plVar9;
        } while (*plVar8 != lVar3);
      }
      else {
        do {
          plVar8 = plVar9;
          plVar9 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      goto LAB_002bb7e0;
    }
                    /* try { // try from 002bb9b8 to 002bb9c3 has its CatchHandler @ 002bbb98 */
    plVar8 = (long *)FUN_002c79a4(plVar11 + 0x10,plVar8);
  } while( true );
  if (bVar2) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 002bba24 to 002bba27 has its CatchHandler @ 002bbb94 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar3 = tpidr_el0;
                    /* try { // try from 002bba40 to 002bba6f has its CatchHandler @ 002bbb94 */
    lVar3 = FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
    local_78 = lVar3 - plVar11[0x13];
    plVar11[0x13] = lVar3;
    local_e0 = plVar6;
    lVar3 = FUN_002c7ae0(param_1,plVar6,&DAT_03cc9966,&local_e0,&local_68);
    plVar6 = (long *)(lVar3 + 0x58);
    FUN_002c648c((undefined8 *)(lVar3 + 0x50),*plVar6);
    *(long **)(lVar3 + 0x50) = local_a8;
    *plVar6 = local_a0;
    *(long *)(lVar3 + 0x60) = lStack_98;
    if (lStack_98 == 0) {
      *(undefined8 *)(lVar3 + 0x50) = plVar6;
    }
    else {
      *(long **)(local_a0 + 0x10) = plVar6;
      local_a0 = 0;
      lStack_98 = 0;
      local_a8 = &local_a0;
    }
    puVar7 = (undefined8 *)(lVar3 + 0x70);
    FUN_002c2254((undefined8 *)(lVar3 + 0x68),*puVar7);
    *(long **)(lVar3 + 0x68) = local_90;
    *(long *)(lVar3 + 0x70) = local_88;
    *(long *)(lVar3 + 0x78) = local_80;
    if (local_80 == 0) {
      *(undefined8 *)(lVar3 + 0x68) = puVar7;
    }
    else {
      *(undefined8 **)(local_88 + 0x10) = puVar7;
      local_88 = 0;
      local_90 = &local_88;
    }
    *(long *)(lVar3 + 0x80) = local_78;
  }
  if ((plVar11[0x12] == 0) && (plVar11[0xc] == 0)) {
                    /* try { // try from 002bbb54 to 002bbb5f has its CatchHandler @ 002bbb88 */
    plVar8 = (long *)FUN_002c7d84(param_2 + 0x138,plVar11);
  }
  else {
    plVar6 = (long *)plVar11[1];
    if ((long *)plVar11[1] == (long *)0x0) {
      plVar6 = plVar11 + 2;
      plVar8 = (long *)*plVar6;
      if ((long *)*plVar8 != plVar11) {
        do {
          lVar3 = *plVar6;
          plVar6 = (long *)(lVar3 + 0x10);
          plVar8 = (long *)*plVar6;
        } while (*plVar8 != lVar3);
      }
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  FUN_002c2254(&local_90,local_88);
  FUN_002c648c(&local_a8,local_a0);
  plVar11 = plVar8;
  if ((long *)(param_2 + 0x140) == plVar8) goto LAB_002bbb68;
  goto LAB_002bb640;
}


