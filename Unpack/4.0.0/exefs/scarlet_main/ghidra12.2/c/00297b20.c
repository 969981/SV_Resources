/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00297b20; name: FUN_00297b20
 */


/* WARNING: Removing unreachable block (ram,0x00297d98) */
/* WARNING: Removing unreachable block (ram,0x00297c1c) */
/* WARNING: Removing unreachable block (ram,0x00297c14) */
/* WARNING: Removing unreachable block (ram,0x00297c64) */
/* WARNING: Removing unreachable block (ram,0x00297f88) */
/* WARNING: Removing unreachable block (ram,0x00297c28) */
/* WARNING: Removing unreachable block (ram,0x00297c4c) */
/* WARNING: Removing unreachable block (ram,0x00297c54) */
/* WARNING: Removing unreachable block (ram,0x00297d44) */
/* WARNING: Removing unreachable block (ram,0x00297d54) */
/* WARNING: Removing unreachable block (ram,0x00297d78) */
/* WARNING: Removing unreachable block (ram,0x00297c5c) */
/* WARNING: Removing unreachable block (ram,0x00297d80) */
/* WARNING: Removing unreachable block (ram,0x00297d8c) */
/* WARNING: Removing unreachable block (ram,0x00297f3c) */
/* WARNING: Removing unreachable block (ram,0x00297f34) */
/* WARNING: Removing unreachable block (ram,0x00297ff4) */
/* WARNING: Removing unreachable block (ram,0x00297f4c) */
/* WARNING: Removing unreachable block (ram,0x00297f70) */
/* WARNING: Removing unreachable block (ram,0x00297f78) */
/* WARNING: Removing unreachable block (ram,0x00297f80) */
/* WARNING: Removing unreachable block (ram,0x00297fa0) */
/* WARNING: Removing unreachable block (ram,0x00297fb0) */
/* WARNING: Removing unreachable block (ram,0x00297fd4) */
/* WARNING: Removing unreachable block (ram,0x00297fdc) */
/* WARNING: Removing unreachable block (ram,0x00297fe8) */
/* WARNING: Removing unreachable block (ram,0x00298040) */
/* WARNING: Removing unreachable block (ram,0x0029809c) */

undefined8 FUN_00297b20(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  void *__ptr;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *****pppppuVar12;
  undefined8 *puVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 local_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 *****local_a8;
  ulong local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78 [16];
  ulong local_68;
  
  local_b0 = 0;
                    /* try { // try from 00297b5c to 00297b5f has its CatchHandler @ 00298184 */
  __ptr = (void *)FUN_0038c7b0((*param_1 >> 1) * 0x30);
  puVar4 = PTR_LAB_047cba48;
  uVar17 = *param_1;
  if (uVar17 < 2) {
    uVar16 = 0;
  }
  else {
    uVar11 = 0;
    puVar13 = (undefined8 *)((long)__ptr + 0x20);
    lVar6 = 0x88;
    do {
      puVar1 = param_1 + 1;
      if ((uVar17 & 1) != 0) {
        puVar1 = (ulong *)param_1[1];
      }
                    /* try { // try from 00297cbc to 00297cc7 has its CatchHandler @ 00298214 */
      FUN_0035a410(local_78,(long)puVar1 + lVar6 + -0x88,1);
      uVar17 = (ulong)local_78 | 1;
      if ((local_78[0] & 1) != 0) {
        uVar17 = local_68;
      }
                    /* try { // try from 00297cd8 to 00297cdf has its CatchHandler @ 0029821c */
      FUN_00367770(&local_98,uVar17);
      puVar13[-3] = uStack_90;
      puVar13[-4] = local_98;
      puVar13[-1] = uStack_80;
      puVar13[-2] = local_88;
      puVar1 = param_1 + 1;
      if ((*param_1 & 1) != 0) {
        puVar1 = (ulong *)param_1[1];
      }
                    /* try { // try from 00297cfc to 00297d03 has its CatchHandler @ 00298220 */
      FUN_002992a0(*(undefined8 *)((long)puVar1 + lVar6));
      uVar10 = FUN_0038ccb0();
      pvVar7 = (void *)*puVar13;
      *puVar13 = uVar10;
      if (pvVar7 != (void *)0x0) {
                    /* try { // try from 00297d14 to 00297d17 has its CatchHandler @ 00298208 */
        free(pvVar7);
      }
      if ((local_78[0] & 1) != 0) {
        FUN_0049e790(puVar4,local_68);
      }
      uVar17 = *param_1;
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + 6;
      lVar6 = lVar6 + 0x90;
      uVar16 = uVar17 >> 1;
    } while (uVar11 < uVar16);
  }
  plVar5 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (plVar5 != (long *)0x0) {
    plVar5[2] = (long)&LAB_00298330;
    plVar5[3] = uVar17 & 0xfffffffffffffffe;
    *plVar5 = (long)(PTR_DAT_047cc640 + 0x10);
    plVar5[1] = 1;
    plVar5[4] = 0;
                    /* try { // try from 00297bbc to 00297bbf has its CatchHandler @ 0029814c */
    lVar6 = FUN_0038c7b0(uVar16 * 0x60);
    plVar5[5] = lVar6;
    if (uVar16 != 0) {
      pvVar7 = __ptr;
      do {
                    /* try { // try from 00297bd0 to 00297bdb has its CatchHandler @ 0029820c */
        FUN_0029833c(plVar5,pvVar7,(long)pvVar7 + 0x20);
        uVar16 = uVar16 - 1;
        pvVar7 = (void *)((long)pvVar7 + 0x30);
      } while (uVar16 != 0);
    }
  }
                    /* try { // try from 00297be8 to 00297bef has its CatchHandler @ 00298164 */
  free(__ptr);
                    /* try { // try from 00297bf0 to 00297bfb has its CatchHandler @ 0029815c */
  FUN_002f9a90(&local_98,plVar5);
  uStack_d8 = uStack_80;
  uStack_e0 = local_88;
  uVar17 = 2;
                    /* try { // try from 00297dc4 to 00297dcb has its CatchHandler @ 00298154 */
  plVar8 = (long *)FUN_002ed9b0(param_2);
  if (plVar8 == (long *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 00297dd8 to 00297ddf has its CatchHandler @ 00298144 */
    (**(code **)(*plVar8 + 0x18))(&local_98);
    puVar13 = local_98;
    if (local_98 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00298134 to 00298137 has its CatchHandler @ 00298138 */
      abort();
    }
    pppppuVar15 = &local_a8;
    if ((local_b0 & 1) == 0) {
      uVar17 = 1;
    }
    else {
      uVar17 = local_a0;
      pppppuVar15 = local_a8;
    }
    if (local_b0 >> 1 == uVar17) {
      pppppuVar9 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,uVar17 << 4);
      pppppuVar9[uVar17] = (undefined8 ****)"grpc.channel_credentials";
      if (pppppuVar9 != (undefined8 *****)0x0) {
        if (uVar17 != 0) {
          uVar11 = uVar17 & 3;
          if (uVar17 - 1 < 3) {
            uVar16 = 0;
          }
          else {
            uVar16 = 0;
            pppppuVar12 = pppppuVar9 + 2;
            pppppuVar14 = pppppuVar15;
            do {
              pppppuVar15 = pppppuVar14 + 4;
              pppppuVar12[-2] = *pppppuVar14;
              pppppuVar12[-1] = pppppuVar14[1];
              *pppppuVar12 = pppppuVar14[2];
              uVar16 = uVar16 + 4;
              pppppuVar12[1] = pppppuVar14[3];
              pppppuVar12 = pppppuVar12 + 4;
              pppppuVar14 = pppppuVar15;
            } while ((uVar17 & 0xfffffffffffffffc) != uVar16);
          }
          if (uVar11 != 0) {
            pppppuVar12 = pppppuVar9 + uVar16;
            do {
              uVar11 = uVar11 - 1;
              *pppppuVar12 = *pppppuVar15;
              pppppuVar12 = pppppuVar12 + 1;
              pppppuVar15 = pppppuVar15 + 1;
            } while (uVar11 != 0);
          }
        }
        if ((local_b0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_a8);
        }
        local_b0 = local_b0 | 1;
        local_a8 = pppppuVar9;
        local_a0 = uVar17 << 1;
      }
    }
    else {
      pppppuVar15[local_b0 >> 1] = (undefined8 ****)"grpc.channel_credentials";
    }
    local_b0 = local_b0 + 2;
                    /* try { // try from 00297f1c to 00297f27 has its CatchHandler @ 00298140 */
    FUN_002ed990(&local_98,puVar13);
    uStack_c8 = uStack_90;
    puStack_d0 = local_98;
    uStack_b8 = uStack_80;
    uStack_c0 = local_88;
    uVar17 = 4;
  }
  pppppuVar15 = &local_a8;
  if ((local_b0 & 1) != 0) {
    pppppuVar15 = local_a8;
  }
                    /* try { // try from 00298048 to 0029805b has its CatchHandler @ 0029818c */
  uVar10 = FUN_003435b0(param_2,pppppuVar15,local_b0 >> 1,local_f0,uVar17 >> 1);
  FUN_00343d90(param_2);
  if (puVar13 != (undefined8 *)0x0) {
    plVar8 = puVar13 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar13)(puVar13);
      FUN_0049e790(PTR_LAB_047cba48,puVar13);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*plVar5)(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
  }
  if ((local_b0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  return uVar10;
}


