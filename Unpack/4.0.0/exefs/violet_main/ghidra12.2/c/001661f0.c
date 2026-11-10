/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001661f0; name: FUN_001661f0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_001661f0(long param_1,long param_2,long param_3,ulong param_4,long *param_5,ulong param_6,
                 undefined8 param_7,long param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  ushort uVar10;
  int iVar11;
  short sVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong *puVar20;
  char cVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  int iVar31;
  ulong uVar32;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  ulong uVar33;
  char cVar34;
  ulong *puVar35;
  undefined1 auVar36 [16];
  ulong *local_148;
  ulong *local_140;
  long local_138;
  long lStack_130;
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  uint *local_108;
  uint *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  int *local_e8;
  int *local_e0;
  long local_d8;
  uint local_d0;
  ulong local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 local_48;
  
  uVar33 = param_4 & 0xffffffff;
  *(long *)(param_1 + 0x28) = 2L << (param_4 & 0x3f);
  if (param_3 == 0) {
    return param_1;
  }
  uVar32 = param_6 & 0xffffffff;
  puVar14 = (undefined8 *)param_5[1];
  if ((param_5[3] - (long)puVar14) + *param_5 + -0x10 < 0x28) {
LAB_0016624c:
    puVar14 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x28,0x10);
    if (puVar14 == (undefined8 *)0x0) {
      FUN_0015ed40(0x28);
    }
    puVar19 = &LAB_001706f0;
  }
  else {
    puVar2 = puVar14 + 6;
    if (puVar2 <= (undefined8 *)(*param_5 + param_5[3])) {
      puVar6 = (undefined8 *)param_5[2];
      if ((undefined8 *)param_5[2] <= puVar2) {
        puVar6 = puVar2;
      }
      param_5[1] = (long)puVar2;
      param_5[2] = (long)puVar6;
      puVar14[4] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      if (puVar14 != (undefined8 *)0x0) {
        puVar19 = &LAB_001706b0;
        goto LAB_001662c0;
      }
      goto LAB_0016624c;
    }
    plVar18 = param_5;
    puVar14 = (undefined8 *)(**(code **)PTR_PTR_047cb890)(0x30,0x10);
    if (puVar14 == (undefined8 *)0x0) {
      auVar36 = FUN_0015ed40(0x30);
      puVar14 = auVar36._8_8_;
      lVar16 = auVar36._0_8_;
      uVar27 = (uint)plVar18;
      *unaff_x25 = 0xffffffff;
      if ((int)uVar27 < 0x81) {
        return (long)(int)uVar27;
      }
      uVar25 = uVar27 >> 6 & 0x3fffffc;
      lVar15 = *(long *)(lVar16 + 0x20);
      uVar9 = *(undefined4 *)(lVar16 + 0x4c);
      uVar1 = (uVar27 >> 1) + 8;
      iVar31 = (int)(((ulong)plVar18 & 0xffffffff) / 3);
      iVar17 = *(int *)(*(long *)(lVar16 + 0x10) + 0x14);
      iVar11 = uVar27 + 8;
      uVar4 = 0x3ffffff8;
      if (iVar17 - 1U >> 0x1e == 0) {
        uVar4 = iVar17 - 8;
      }
      local_d0 = uVar27;
      local_c8 = param_4;
      FUN_00164c64(puVar14 + 1,
                   (long)(int)(iVar31 * 5 + (int)(((ulong)plVar18 & 0xffffffff) / 5) + uVar1 +
                               iVar11 * 2 + uVar25 + 0x100),*puVar14);
      local_148 = (ulong *)puVar14[1];
      local_c0 = 8;
      local_138 = (long)local_148 + (long)iVar11;
      local_128 = (char *)(local_138 + iVar11);
      local_118 = local_128 + uVar1;
      local_108 = (uint *)((ulong)(local_118 + ((ulong)plVar18 & 0xffffffff) / 3 + 3) &
                          0xfffffffffffffffc);
      local_f8 = (undefined1 *)((long)local_108 + (long)(iVar31 * 4));
      local_e8 = (int *)((ulong)(local_f8 + ((ulong)plVar18 & 0xffffffff) / 5 + 3) &
                        0xfffffffffffffffc);
      local_d8 = (long)local_e8 + (ulong)uVar25;
      lVar7 = *(long *)(lVar15 + 8);
      lVar8 = *(long *)(lVar15 + 0x10);
      lVar30 = *(long *)(lVar15 + 0x20);
      uVar1 = *(uint *)(lVar15 + 0x1c);
      puVar35 = (ulong *)(param_4 + (long)(int)uVar27 + -8);
      puVar29 = (ulong *)(param_4 + (long)(int)uVar27 + -0x10);
      uStack_bc = uVar9;
      local_140 = local_148;
      lStack_130 = local_138;
      local_120 = local_128;
      local_110 = local_118;
      lVar15 = -8;
      local_100 = local_108;
      local_f0 = local_f8;
      local_e0 = local_e8;
      puVar13 = (ulong *)(param_4 + (ulong)(param_8 == 0) * 8);
joined_r0x00166534:
      if (1 < (long)puVar29 - (long)puVar13) {
        lVar24 = 0x11;
        lVar23 = 1;
        puVar20 = puVar13;
        while( true ) {
          uVar33 = *puVar20;
          lVar28 = (uVar33 * lVar8 >> ((ulong)uVar1 & 0x3f)) * 2;
          lVar26 = (long)puVar20 - lVar30;
          uVar10 = *(ushort *)(lVar7 + lVar28);
          sVar12 = (short)lVar26;
          *(short *)(lVar7 + lVar28) = sVar12;
          uVar27 = (uint)uVar33;
          if ((*(uint *)((long)puVar20 + lVar15) ^ uVar27) < 0x100) break;
          uVar25 = (int)lVar26 - (uint)uVar10;
          if (*(uint *)((long)puVar20 - (ulong)(ushort)uVar25) == uVar27) {
            uVar25 = uVar25 & 0xffff;
            if (uVar25 - 8 < uVar4) {
              lVar24 = (long)(int)-uVar25;
              goto joined_r0x00166610;
            }
            if ((uint)puVar20[-1] == uVar27) {
              lVar24 = -8;
              uVar25 = 8;
              goto joined_r0x00166610;
            }
          }
          puVar20 = (ulong *)((long)puVar20 + lVar23);
          lVar23 = lVar24 >> 4;
          lVar24 = lVar24 + 1;
          if ((long)puVar29 - (long)puVar20 <= lVar23) goto LAB_00166818;
        }
        puVar22 = (ulong *)((long)puVar20 + 1);
        uVar25 = 0;
        *(short *)(lVar7 + (*puVar22 * lVar8 >> ((ulong)uVar1 & 0x3f)) * 2) = sVar12 + 1;
        lVar24 = lVar15;
        goto joined_r0x0016663c;
      }
LAB_00166818:
      puVar20 = puVar13;
      goto LAB_0016681c;
    }
    puVar19 = &LAB_001706b0;
  }
  puVar14[4] = 0;
  *puVar14 = 0;
  puVar14[1] = 0;
LAB_001662c0:
  *(undefined1 **)(param_1 + 0x30) = puVar19;
  lVar15 = FUN_00170734(puVar14,uVar33,uVar33,0x10,param_5,uVar32);
  lVar16 = param_3 - param_2;
  if (lVar16 == 0) {
    puVar14[4] = param_3;
  }
  else {
    lVar15 = *(long *)(param_1 + 0x10);
    if ((4 < *(int *)(param_1 + 4)) && (*(int *)(lVar15 + 0x28) != 0)) {
      if (*(int *)(lVar15 + 0x24) <= lVar16) {
        lVar16 = (long)*(int *)(lVar15 + 0x24);
      }
    }
    iVar11 = *(int *)(lVar15 + 0x14);
    lVar15 = lVar16;
    if (iVar11 <= lVar16) {
      lVar15 = (long)iVar11;
    }
    if (iVar11 < 1) {
      lVar15 = lVar16;
    }
    if (0xffffff < lVar15) {
      lVar15 = 0x1000000;
    }
    lVar15 = FUN_00170894(puVar14,param_2,param_3,lVar15);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar14;
  return lVar15;
  while (puVar20 = (ulong *)((long)puVar22 + -1),
        *(char *)((long)puVar22 + -1) == *(char *)((long)puVar22 + lVar24 + -1)) {
joined_r0x00166610:
    puVar22 = puVar20;
    if ((puVar22 <= puVar13) || (lVar24 <= lVar30 - (long)puVar22)) break;
  }
  puVar20 = puVar22;
  if (puVar13 == puVar22 && uVar25 == 0) {
    uVar25 = -(int)lVar15;
  }
joined_r0x0016663c:
  for (puVar20 = (ulong *)((long)puVar20 + 4); puVar20 < puVar35; puVar20 = puVar20 + 1) {
    if (*puVar20 != *(ulong *)((long)puVar20 + lVar24)) {
      uVar33 = *(ulong *)((long)puVar20 + lVar24) ^ *puVar20;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      puVar20 = (ulong *)((long)puVar20 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3));
      break;
    }
  }
  if (puVar35 <= puVar20) {
    puVar20 = puVar35;
  }
  iVar17 = (int)puVar22 - (int)puVar13;
  iVar11 = (int)puVar20 - (int)puVar22;
  if (iVar17 == 0) {
    cVar34 = '\0';
  }
  else if (iVar17 < 9) {
    iVar31 = iVar17 + -3;
    *local_f0 = (char)iVar31;
    puVar19 = local_f0 + 1;
    if (iVar31 < 0) {
      puVar19 = local_f0;
    }
    *local_140 = *puVar13;
    local_140 = (ulong *)((long)local_140 + (long)iVar17);
    iVar5 = 3;
    if (iVar31 < 0) {
      iVar5 = iVar17;
    }
    cVar34 = (char)iVar5;
    local_f0 = puVar19;
  }
  else {
    FUN_00170aa0(&local_148);
    cVar34 = '\x03';
  }
  cVar21 = (char)(iVar11 + -2);
  if (0xe < iVar11 + -2) {
    if (iVar11 + -0x11 < 0xff) {
      *local_f0 = (char)(iVar11 + -0x11);
    }
    else {
      *local_f0 = 0xff;
      *local_e0 = iVar11 + -0x110;
      local_e0 = local_e0 + 1;
    }
    local_f0 = local_f0 + 1;
    cVar21 = '\x0f';
  }
  cVar34 = cVar34 + cVar21 * '\x04';
  if (0 < (int)uVar25) {
    cVar34 = cVar34 + -0x40;
    local_c0 = uVar25;
    if ((int)uVar25 < 0x7fff08) {
      *local_110 = ((byte)(uVar25 + 0xf8) & 0xf) + (char)LZCOUNT(uVar25 + 0xf8) * -0x10 + 'p';
      *local_100 = uVar25;
      local_110 = local_110 + 1;
      local_100 = local_100 + 1;
    }
    else {
      FUN_0016ff40(&local_148,uVar25);
    }
  }
  pcVar3 = local_120 + 1;
  *local_120 = cVar34;
  local_120 = pcVar3;
  lVar15 = lVar24;
  puVar13 = puVar20;
  if (puVar29 <= puVar20) {
LAB_0016681c:
    FUN_00170a50(&local_148,puVar20);
    lVar16 = FUN_0016f6f0(local_48,unaff_x25,0,param_6,param_7,lVar16,*puVar14,&local_148,param_8,
                          unaff_x24);
    return lVar16;
  }
  goto joined_r0x00166534;
}


