/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00510d5c; name: FUN_00510d5c
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_00510d5c(long *param_1,double *param_2)

{
  void *__src;
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar16;
  char cVar23;
  byte local_78 [16];
  undefined8 local_68;
  byte local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  char cStack_5d;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined7 uStack_57;
  byte *local_50;
  
  local_60 = 2;
  uStack_5f = 0x2d;
  uStack_5e = 0;
  pbVar4 = (byte *)(param_1 + 6);
  bVar1 = *pbVar4;
  uVar8 = (ulong)(bVar1 >> 1);
  uVar12 = uVar8;
  if ((bVar1 & 1) != 0) {
    uVar12 = param_1[7];
  }
  plVar5 = param_1 + 5;
  if (uVar12 == 1) {
    if ((bVar1 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x31) != '-') goto LAB_00510e48;
      pcVar9 = (char *)((long)param_1 + 0x32);
      pcVar10 = (char *)((ulong)&local_60 | 2);
      do {
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_00510dfc;
        cVar17 = *pcVar10;
        cVar18 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (cVar18 == cVar17);
    }
    else if (*(char *)param_1[8] == '-') {
LAB_00510dfc:
                    /* try { // try from 00510dfc to 00510e03 has its CatchHandler @ 005112e8 */
      FUN_004fcda0(plVar5);
      uVar3 = 1;
      iVar6 = (int)param_1[5];
      goto joined_r0x00510e50;
    }
    uVar3 = 0;
    iVar6 = (int)param_1[5];
    uVar14 = 0;
    if (iVar6 == 2) goto LAB_00510e14;
LAB_00510e54:
    if (iVar6 != 3) {
      if (iVar6 != 4) {
        FUN_004a8ec0(&local_60,"Expected double, got: ",pbVar4);
        plVar5 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 00510edc to 00510ee3 has its CatchHandler @ 005112c4 */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_60);
        }
        goto LAB_00511218;
      }
      dVar15 = (double)FUN_004fd330(pbVar4);
      *param_2 = dVar15;
      FUN_004fcda0(plVar5);
      goto joined_r0x00510e78;
    }
    uVar3 = FUN_005112f4(param_1,param_2,0xffffffffffffffff);
    if ((uVar14 & uVar3) == 0) goto LAB_00511234;
LAB_00510e98:
    *param_2 = -*param_2;
  }
  else {
LAB_00510e48:
    uVar3 = 0;
    iVar6 = (int)param_1[5];
joined_r0x00510e50:
    uVar14 = uVar3;
    if (iVar6 != 2) goto LAB_00510e54;
LAB_00510e14:
    if ((*pbVar4 & 1) == 0) {
      uVar16 = *(undefined8 *)pbVar4;
      local_50 = (byte *)param_1[8];
      uStack_58 = (undefined1)param_1[7];
      uStack_57 = (undefined7)((ulong)param_1[7] >> 8);
      local_60 = (byte)uVar16;
      uStack_5f = (undefined1)((ulong)uVar16 >> 8);
      uStack_5e = (undefined1)((ulong)uVar16 >> 0x10);
      cStack_5d = (char)((ulong)uVar16 >> 0x18);
      uStack_5c = (undefined4)((ulong)uVar16 >> 0x20);
    }
    else {
      uVar12 = param_1[7];
      __src = (void *)param_1[8];
      if (uVar12 < 0x17) {
        pbVar4 = (byte *)((ulong)&local_60 | 1);
        local_60 = (byte)((int)uVar12 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar8 = uVar12 + 0x10 & 0xfffffffffffffff0;
        pbVar4 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
        local_60 = (byte)uVar8 | 1;
        uStack_58 = (undefined1)uVar12;
        uStack_57 = (undefined7)(uVar12 >> 8);
        uStack_5f = (undefined1)(uVar8 >> 8);
        uStack_5e = (undefined1)(uVar8 >> 0x10);
        cStack_5d = (char)(uVar8 >> 0x18);
        uStack_5c = (undefined4)(uVar8 >> 0x20);
        local_50 = pbVar4;
      }
      memcpy(pbVar4,__src,uVar12 + 1);
    }
    pbVar7 = (byte *)((ulong)&local_60 | 1);
    pbVar4 = pbVar7;
    pbVar2 = pbVar7 + (local_60 >> 1);
    if ((local_60 & 1) != 0) {
      pbVar4 = local_50;
      pbVar2 = local_50 + CONCAT71(uStack_57,uStack_58);
    }
    if (pbVar4 != pbVar2) {
      uVar12 = (long)pbVar2 - (long)pbVar4;
      pbVar11 = pbVar4;
      if (7 < uVar12) {
        uVar13 = uVar12 & 0xfffffffffffffff8;
        pbVar11 = pbVar4 + uVar13;
        pbVar4 = pbVar4 + 3;
        uVar8 = uVar13;
        do {
          uVar16 = *(undefined8 *)(pbVar4 + -3);
          cVar17 = (char)((ulong)uVar16 >> 8);
          cVar18 = (char)((ulong)uVar16 >> 0x10);
          cVar19 = (char)((ulong)uVar16 >> 0x18);
          cVar20 = (char)((ulong)uVar16 >> 0x20);
          cVar21 = (char)((ulong)uVar16 >> 0x28);
          cVar22 = (char)((ulong)uVar16 >> 0x30);
          cVar23 = (char)((ulong)uVar16 >> 0x38);
          if ((byte)((char)uVar16 + 0xbfU) < 0x1a) {
            pbVar4[-3] = (char)uVar16 + 0x20;
          }
          if ((byte)(cVar17 + 0xbfU) < 0x1a) {
            pbVar4[-2] = cVar17 + 0x20;
          }
          if ((byte)(cVar18 + 0xbfU) < 0x1a) {
            pbVar4[-1] = cVar18 + 0x20;
          }
          if ((byte)(cVar19 + 0xbfU) < 0x1a) {
            *pbVar4 = cVar19 + 0x20;
          }
          if ((byte)(cVar20 + 0xbfU) < 0x1a) {
            pbVar4[1] = cVar20 + 0x20;
          }
          if ((byte)(cVar21 + 0xbfU) < 0x1a) {
            pbVar4[2] = cVar21 + 0x20;
          }
          if ((byte)(cVar22 + 0xbfU) < 0x1a) {
            pbVar4[3] = cVar22 + 0x20;
          }
          if ((byte)(cVar23 + 0xbfU) < 0x1a) {
            pbVar4[4] = cVar23 + 0x20;
          }
          uVar8 = uVar8 - 8;
          pbVar4 = pbVar4 + 8;
        } while (uVar8 != 0);
        if (uVar12 == uVar13) goto LAB_0051109c;
      }
      do {
        if (*pbVar11 - 0x41 < 0x1a) {
          *pbVar11 = *pbVar11 + 0x20;
        }
        pbVar11 = pbVar11 + 1;
      } while (pbVar2 != pbVar11);
    }
LAB_0051109c:
    if ((local_60 & 1) == 0) {
      if (((local_60 & 0xfe) == 6) && (CONCAT11(uStack_5e,uStack_5f) == 0x6e69 && cStack_5d == 'f'))
      goto LAB_00511250;
      if ((local_60 & 0xfe) == 0x10) {
        if (CONCAT17(uStack_58,CONCAT43(uStack_5c,CONCAT12(cStack_5d,CONCAT11(uStack_5e,uStack_5f)))
                    ) == 0x7974696e69666e69) goto LAB_00511250;
        if ((local_60 & 1) != 0) goto LAB_00511198;
      }
      if ((local_60 & 0xfe) != 6) {
LAB_005111c8:
                    /* try { // try from 005111c8 to 005111db has its CatchHandler @ 005112c0 */
        FUN_004a8ec0(local_78,"Expected double, got: ",&local_60);
        plVar5 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 005111f8 to 005111ff has its CatchHandler @ 0051129c */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),local_78);
        }
        if ((local_78[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_68);
        }
LAB_00511218:
        if ((local_60 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_50);
        }
        uVar3 = 0;
        goto LAB_00511234;
      }
LAB_005111a4:
      if (*(short *)pbVar7 != 0x616e || pbVar7[2] != 0x6e) goto LAB_005111c8;
      *param_2 = NAN;
      FUN_004fcda0(plVar5);
    }
    else {
      if (((CONCAT71(uStack_57,uStack_58) != 3) ||
          (*(short *)local_50 != 0x6e69 || local_50[2] != 0x66)) &&
         ((CONCAT71(uStack_57,uStack_58) != 8 || (*(long *)local_50 != 0x7974696e69666e69)))) {
LAB_00511198:
        if (CONCAT71(uStack_57,uStack_58) == 3) {
          pbVar7 = local_50;
          goto LAB_005111a4;
        }
        goto LAB_005111c8;
      }
LAB_00511250:
      *param_2 = INFINITY;
                    /* try { // try from 00511258 to 00511273 has its CatchHandler @ 005112bc */
      FUN_004fcda0(plVar5);
    }
    uVar14 = uVar3;
    if ((local_60 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_50);
    }
joined_r0x00510e78:
    if (uVar14 != 0) goto LAB_00510e98;
  }
  uVar3 = 1;
LAB_00511234:
  return uVar3 & 1;
}


