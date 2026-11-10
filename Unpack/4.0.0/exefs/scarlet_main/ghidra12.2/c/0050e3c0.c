/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050e3c0; name: FUN_0050e3c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0050e3c0(long *param_1)

{
  void *pvVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined8 uVar17;
  char cVar24;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_88;
  byte local_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  char cStack_7d;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
  byte *local_70;
  
  if ((int)param_1[5] == 5) {
    do {
      FUN_004fcda0(param_1 + 5);
    } while ((int)param_1[5] == 5);
    return 1;
  }
  local_80 = 2;
  uStack_7f = 0x5b;
  uStack_7e = 0;
  pbVar7 = (byte *)(param_1 + 6);
  bVar2 = *pbVar7;
  uVar9 = (ulong)(bVar2 >> 1);
  uVar15 = uVar9;
  if ((bVar2 & 1) != 0) {
    uVar15 = param_1[7];
  }
  plVar8 = param_1 + 5;
  if (uVar15 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x31) == '[') {
        pcVar12 = (char *)((long)param_1 + 0x32);
        pcVar11 = (char *)((ulong)&local_80 | 2);
        do {
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0050e488;
          cVar18 = *pcVar11;
          cVar19 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar11 = pcVar11 + 1;
        } while (cVar19 == cVar18);
      }
    }
    else if (*(char *)param_1[8] == '[') {
LAB_0050e488:
                    /* try { // try from 0050e488 to 0050e48f has its CatchHandler @ 0050ebd8 */
      FUN_004fcda0(plVar8);
      puVar6 = PTR_LAB_047cba48;
      pcVar12 = (char *)((long)param_1 + 0x32);
      do {
        local_80 = 2;
        uStack_7f = 0x7b;
        uStack_7e = 0;
        bVar2 = *(byte *)(param_1 + 6);
        uVar9 = (ulong)(bVar2 >> 1);
        uVar15 = uVar9;
        if ((bVar2 & 1) != 0) {
          uVar15 = param_1[7];
        }
        if (uVar15 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == '{') {
              pcVar11 = (char *)((ulong)&local_80 | 2);
              pcVar13 = pcVar12;
              uVar15 = uVar9;
              do {
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_0050e5b4;
                cVar18 = *pcVar11;
                cVar19 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar19 == cVar18);
            }
            local_98 = 0x3c02;
            local_96 = 0;
            if ((bVar2 & 1) != 0) goto LAB_0050e5a0;
            if (*(char *)((long)param_1 + 0x31) == '<') {
              pcVar11 = (char *)((ulong)&local_98 | 2);
              pcVar13 = pcVar12;
              do {
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_0050e5b4;
                cVar18 = *pcVar11;
                cVar19 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar19 == cVar18);
            }
            goto LAB_0050e574;
          }
          if (*(char *)param_1[8] != '{') {
LAB_0050e5a0:
            local_96 = 0;
            local_98 = 0x3c02;
            if (*(char *)param_1[8] != '<') goto LAB_0050e574;
          }
LAB_0050e5b4:
          uVar15 = FUN_0050ec10(param_1);
        }
        else {
LAB_0050e574:
          local_96 = 0;
          local_98 = 0x3c02;
          uVar15 = FUN_0050e3c0(param_1);
        }
        if ((uVar15 & 1) == 0) {
          return 0;
        }
        local_80 = 2;
        uStack_7f = 0x5d;
        uStack_7e = 0;
        bVar2 = *(byte *)(param_1 + 6);
        uVar9 = (ulong)(bVar2 >> 1);
        uVar15 = uVar9;
        if ((bVar2 & 1) != 0) {
          uVar15 = param_1[7];
        }
        if (uVar15 == 1) {
          if ((bVar2 & 1) == 0) {
            if (*(char *)((long)param_1 + 0x31) == ']') {
              pcVar11 = (char *)((ulong)&local_80 | 2);
              pcVar13 = pcVar12;
              do {
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) goto LAB_0050e7b8;
                cVar18 = *pcVar11;
                cVar19 = *pcVar13;
                pcVar11 = pcVar11 + 1;
                pcVar13 = pcVar13 + 1;
              } while (cVar19 == cVar18);
            }
          }
          else if (*(char *)param_1[8] == ']') {
LAB_0050e7b8:
                    /* try { // try from 0050e7b8 to 0050e7bf has its CatchHandler @ 0050ebb0 */
            FUN_004fcda0(plVar8);
            return 1;
          }
        }
        local_80 = 2;
        uStack_7f = 0x2c;
        uStack_7e = 0;
                    /* try { // try from 0050e638 to 0050e643 has its CatchHandler @ 0050ebe4 */
        uVar15 = FUN_0050d96c(param_1,&local_80);
        if ((local_80 & 1) != 0) {
          FUN_0049e790(puVar6,local_70);
        }
        if ((uVar15 & 1) == 0) {
          return 0;
        }
      } while( true );
    }
  }
  local_80 = 2;
  uStack_7f = 0x2d;
  uStack_7e = 0;
  bVar2 = *(byte *)(param_1 + 6);
  uVar9 = (ulong)(bVar2 >> 1);
  uVar15 = uVar9;
  if ((bVar2 & 1) != 0) {
    uVar15 = param_1[7];
  }
  if (uVar15 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)((long)param_1 + 0x31) != '-') goto LAB_0050e718;
      pcVar12 = (char *)((long)param_1 + 0x32);
      pcVar11 = (char *)((ulong)&local_80 | 2);
      do {
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_0050e6dc;
        cVar18 = *pcVar11;
        cVar19 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar11 = pcVar11 + 1;
      } while (cVar19 == cVar18);
    }
    else if (*(char *)param_1[8] == '-') {
LAB_0050e6dc:
                    /* try { // try from 0050e6dc to 0050e6e3 has its CatchHandler @ 0050ebd4 */
      FUN_004fcda0(plVar8);
      bVar3 = true;
      iVar5 = (int)param_1[5];
      goto joined_r0x0050e724;
    }
    bVar3 = false;
    iVar5 = (int)param_1[5];
  }
  else {
LAB_0050e718:
    bVar3 = false;
    iVar5 = (int)param_1[5];
  }
joined_r0x0050e724:
  if (iVar5 - 3U < 2) goto LAB_0050e728;
  if (iVar5 != 2) {
    if ((*pbVar7 & 1) == 0) {
      uVar17 = *(undefined8 *)pbVar7;
      local_70 = (byte *)param_1[8];
      uStack_78 = (undefined1)param_1[7];
      uStack_77 = (undefined7)((ulong)param_1[7] >> 8);
      local_80 = (byte)uVar17;
      uStack_7f = (undefined1)((ulong)uVar17 >> 8);
      uStack_7e = (undefined1)((ulong)uVar17 >> 0x10);
      cStack_7d = (char)((ulong)uVar17 >> 0x18);
      uStack_7c = (undefined4)((ulong)uVar17 >> 0x20);
    }
    else {
      uVar15 = param_1[7];
      pvVar1 = (void *)param_1[8];
      if (uVar15 < 0x17) {
        pbVar7 = (byte *)((ulong)&local_80 | 1);
        local_80 = (byte)((int)uVar15 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar15) {
LAB_0050eba0:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar9 = uVar15 + 0x10 & 0xfffffffffffffff0;
        pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
        local_80 = (byte)uVar9 | 1;
        uStack_78 = (undefined1)uVar15;
        uStack_77 = (undefined7)(uVar15 >> 8);
        uStack_7f = (undefined1)(uVar9 >> 8);
        uStack_7e = (undefined1)(uVar9 >> 0x10);
        cStack_7d = (char)(uVar9 >> 0x18);
        uStack_7c = (undefined4)(uVar9 >> 0x20);
        local_70 = pbVar7;
      }
      memcpy(pbVar7,pvVar1,uVar15 + 1);
    }
                    /* try { // try from 0050e81c to 0050e82f has its CatchHandler @ 0050ebe0 */
    FUN_004a8ec0(&local_98,"Cannot skip field value, unexpected token: ",&local_80);
    plVar8 = (long *)*param_1;
    *(undefined1 *)(param_1 + 0x1e) = 1;
    if (plVar8 != (long *)0x0) {
                    /* try { // try from 0050e84c to 0050e853 has its CatchHandler @ 0050ebb4 */
      (**(code **)(*plVar8 + 0x10))
                (plVar8,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_98);
    }
    goto LAB_0050eb50;
  }
  if (!bVar3) goto LAB_0050e728;
  if ((*pbVar7 & 1) == 0) {
    uVar17 = *(undefined8 *)pbVar7;
    local_70 = (byte *)param_1[8];
    uStack_78 = (undefined1)param_1[7];
    uStack_77 = (undefined7)((ulong)param_1[7] >> 8);
    local_80 = (byte)uVar17;
    uStack_7f = (undefined1)((ulong)uVar17 >> 8);
    uStack_7e = (undefined1)((ulong)uVar17 >> 0x10);
    cStack_7d = (char)((ulong)uVar17 >> 0x18);
    uStack_7c = (undefined4)((ulong)uVar17 >> 0x20);
  }
  else {
    uVar15 = param_1[7];
    pvVar1 = (void *)param_1[8];
    if (uVar15 < 0x17) {
      pbVar7 = (byte *)((ulong)&local_80 | 1);
      local_80 = (byte)((int)uVar15 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar15) goto LAB_0050eba0;
      uVar9 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pbVar7 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar9);
      local_80 = (byte)uVar9 | 1;
      uStack_78 = (undefined1)uVar15;
      uStack_77 = (undefined7)(uVar15 >> 8);
      uStack_7f = (undefined1)(uVar9 >> 8);
      uStack_7e = (undefined1)(uVar9 >> 0x10);
      cStack_7d = (char)(uVar9 >> 0x18);
      uStack_7c = (undefined4)(uVar9 >> 0x20);
      local_70 = pbVar7;
    }
    memcpy(pbVar7,pvVar1,uVar15 + 1);
  }
  pbVar10 = (byte *)((ulong)&local_80 | 1);
  pbVar7 = pbVar10;
  pbVar4 = pbVar10 + (local_80 >> 1);
  if ((local_80 & 1) != 0) {
    pbVar7 = local_70;
    pbVar4 = local_70 + CONCAT71(uStack_77,uStack_78);
  }
  if (pbVar7 != pbVar4) {
    uVar15 = (long)pbVar4 - (long)pbVar7;
    pbVar14 = pbVar7;
    if (7 < uVar15) {
      uVar16 = uVar15 & 0xfffffffffffffff8;
      pbVar14 = pbVar7 + uVar16;
      pbVar7 = pbVar7 + 3;
      uVar9 = uVar16;
      do {
        uVar17 = *(undefined8 *)(pbVar7 + -3);
        cVar18 = (char)((ulong)uVar17 >> 8);
        cVar19 = (char)((ulong)uVar17 >> 0x10);
        cVar20 = (char)((ulong)uVar17 >> 0x18);
        cVar21 = (char)((ulong)uVar17 >> 0x20);
        cVar22 = (char)((ulong)uVar17 >> 0x28);
        cVar23 = (char)((ulong)uVar17 >> 0x30);
        cVar24 = (char)((ulong)uVar17 >> 0x38);
        if ((byte)((char)uVar17 + 0xbfU) < 0x1a) {
          pbVar7[-3] = (char)uVar17 + 0x20;
        }
        if ((byte)(cVar18 + 0xbfU) < 0x1a) {
          pbVar7[-2] = cVar18 + 0x20;
        }
        if ((byte)(cVar19 + 0xbfU) < 0x1a) {
          pbVar7[-1] = cVar19 + 0x20;
        }
        if ((byte)(cVar20 + 0xbfU) < 0x1a) {
          *pbVar7 = cVar20 + 0x20;
        }
        if ((byte)(cVar21 + 0xbfU) < 0x1a) {
          pbVar7[1] = cVar21 + 0x20;
        }
        if ((byte)(cVar22 + 0xbfU) < 0x1a) {
          pbVar7[2] = cVar22 + 0x20;
        }
        if ((byte)(cVar23 + 0xbfU) < 0x1a) {
          pbVar7[3] = cVar23 + 0x20;
        }
        if ((byte)(cVar24 + 0xbfU) < 0x1a) {
          pbVar7[4] = cVar24 + 0x20;
        }
        uVar9 = uVar9 - 8;
        pbVar7 = pbVar7 + 8;
      } while (uVar9 != 0);
      if (uVar15 == uVar16) goto LAB_0050e9ec;
    }
    do {
      if (*pbVar14 - 0x41 < 0x1a) {
        *pbVar14 = *pbVar14 + 0x20;
      }
      pbVar14 = pbVar14 + 1;
    } while (pbVar4 != pbVar14);
  }
LAB_0050e9ec:
  if ((local_80 & 1) == 0) {
    if (((local_80 & 0xfe) != 6) || (CONCAT11(uStack_7e,uStack_7f) != 0x6e69 || cStack_7d != 'f')) {
      if ((local_80 & 0xfe) == 0x10) {
        if (CONCAT17(uStack_78,CONCAT43(uStack_7c,CONCAT12(cStack_7d,CONCAT11(uStack_7e,uStack_7f)))
                    ) == 0x7974696e69666e69) goto LAB_0050eb88;
        if ((local_80 & 1) != 0) goto LAB_0050eae8;
      }
      if ((local_80 & 0xfe) == 6) {
LAB_0050eaf4:
        if (*(short *)pbVar10 == 0x616e && pbVar10[2] == 0x6e) goto LAB_0050eb88;
      }
LAB_0050eb18:
                    /* try { // try from 0050eb18 to 0050eb2b has its CatchHandler @ 0050ebac */
      FUN_004a8ec0(&local_98,"Invalid float number: ",&local_80);
      plVar8 = (long *)*param_1;
      *(undefined1 *)(param_1 + 0x1e) = 1;
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 0050eb48 to 0050eb4f has its CatchHandler @ 0050eba8 */
        (**(code **)(*plVar8 + 0x10))
                  (plVar8,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_98);
      }
LAB_0050eb50:
      if (((byte)local_98 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_88);
      }
      if ((local_80 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_70);
      }
      return 0;
    }
LAB_0050eb88:
    if ((local_80 & 1) == 0) goto LAB_0050e728;
  }
  else if (((CONCAT71(uStack_77,uStack_78) != 3) ||
           (*(short *)local_70 != 0x6e69 || local_70[2] != 0x66)) &&
          ((CONCAT71(uStack_77,uStack_78) != 8 || (*(long *)local_70 != 0x7974696e69666e69)))) {
LAB_0050eae8:
    if (CONCAT71(uStack_77,uStack_78) == 3) {
      pbVar10 = local_70;
      goto LAB_0050eaf4;
    }
    goto LAB_0050eb18;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_70);
LAB_0050e728:
  FUN_004fcda0(plVar8);
  return 1;
}


