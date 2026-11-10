/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034635c; name: FUN_0034635c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034635c(byte *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  double *pdVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  byte local_70;
  undefined6 uStack_6f;
  char cStack_69;
  undefined4 uStack_68;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  undefined1 uStack_61;
  char *local_60;
  byte local_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    if ((*param_1 & 1) == 0) {
      lVar3 = 0;
      lVar10 = 0;
      lVar9 = 0;
      pdVar5 = (double *)(param_1 + 0x20);
      dVar12 = 0.0;
      do {
        lVar3 = (long)pdVar5[-3] + lVar3;
        lVar10 = (long)pdVar5[-2] + lVar10;
        lVar9 = (long)pdVar5[-1] + lVar9;
        dVar13 = *pdVar5;
        if (*pdVar5 <= dVar12) {
          dVar13 = dVar12;
        }
        lVar7 = lVar7 + -1;
        pdVar5 = pdVar5 + 8;
        dVar12 = dVar13;
      } while (lVar7 != 0);
    }
    else {
      lVar3 = 0;
      lVar10 = 0;
      lVar9 = 0;
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x10);
      dVar12 = 0.0;
      do {
        lVar3 = plVar6[-2] + lVar3;
        lVar8 = *plVar6;
        lVar10 = plVar6[-1] + lVar10;
        pdVar5 = (double *)(plVar6 + 1);
        plVar6 = plVar6 + 8;
        lVar9 = lVar8 + lVar9;
        dVar13 = *pdVar5;
        if (*pdVar5 <= dVar12) {
          dVar13 = dVar12;
        }
        lVar7 = lVar7 + -1;
        dVar12 = dVar13;
      } while (lVar7 != 0);
    }
    if (lVar3 != 0) {
      FUN_002f09c0(&local_58);
      local_70 = 0x18;
      cStack_64 = 100;
      uStack_6f = s_callsStarted_03c9d39d._0_6_;
      cStack_69 = s_callsStarted_03c9d39d[6];
      uStack_68._0_1_ = s_callsStarted_03c9d39d[7];
      uStack_68 = CONCAT31(0x657472,(char)uStack_68);
      cStack_63 = 0;
                    /* try { // try from 00346458 to 00346467 has its CatchHandler @ 0034697c */
      puVar4 = (undefined8 *)FUN_002885a4(param_2,&local_38,&local_70);
      puVar11 = (undefined8 *)*puVar4;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
        puVar11[6] = local_60;
        puVar11[5] = CONCAT17(uStack_61,
                              CONCAT16(cStack_62,CONCAT15(cStack_63,CONCAT14(cStack_64,uStack_68))))
        ;
        puVar11[4] = CONCAT17(cStack_69,CONCAT61(uStack_6f,local_70));
        uStack_68 = 0;
        cStack_64 = 0;
        cStack_63 = 0;
        cStack_62 = '\0';
        uStack_61 = 0;
        local_60 = (char *)0x0;
        local_70 = 0;
        uStack_6f = 0;
        cStack_69 = '\0';
        puVar11[0xc] = 0;
        puVar11[0xb] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xb] = puVar11 + 0xc;
        puVar11[10] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar11[0xf] = 0;
        puVar11[0x10] = 0;
        puVar11[2] = local_38;
        *puVar11 = 0;
        puVar11[1] = 0;
        *puVar4 = puVar11;
        if (*(long *)*param_2 == 0) {
          puVar4 = puVar11;
        }
        else {
          *param_2 = *(long *)*param_2;
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_010108e0(param_2[1],puVar4);
        param_2[2] = param_2[2] + 1;
      }
      *(undefined4 *)(puVar11 + 7) = 4;
      if ((*(byte *)(puVar11 + 8) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar11[10]);
      }
      puVar11[10] = local_48;
      puVar11[9] = uStack_50;
      puVar11[8] = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      local_58 = 0;
      uStack_57 = 0;
      if (((local_70 & 1) != 0) && (FUN_0049e790(PTR_LAB_047cba48,local_60), (local_58 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
      auVar14 = FUN_0038e630(dVar13);
      FUN_0038e1e0(auVar14._0_8_,auVar14._8_8_,1);
      FUN_0038cd10(&local_58);
      local_60 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
      uVar2 = s_lastCallStartedTimestamp_03c548bd._16_8_;
      uVar1 = s_lastCallStartedTimestamp_03c548bd._0_8_;
      uStack_68 = (undefined4)_UNK_03caaa18;
      cStack_64 = (char)((ulong)_UNK_03caaa18 >> 0x20);
      cStack_63 = (char)((ulong)_UNK_03caaa18 >> 0x28);
      cStack_62 = (char)((ulong)_UNK_03caaa18 >> 0x30);
      uStack_61 = (undefined1)((ulong)_UNK_03caaa18 >> 0x38);
      local_70 = (byte)_DAT_03caaa10;
      uStack_6f = (undefined6)((ulong)_DAT_03caaa10 >> 8);
      cStack_69 = (char)((ulong)_DAT_03caaa10 >> 0x38);
      *(undefined8 *)(local_60 + 8) = s_lastCallStartedTimestamp_03c548bd._8_8_;
      *(undefined8 *)local_60 = uVar1;
      *(undefined8 *)(local_60 + 0x10) = uVar2;
      local_60[0x18] = '\0';
                    /* try { // try from 003465bc to 003465cb has its CatchHandler @ 00346978 */
      puVar4 = (undefined8 *)FUN_002885a4(param_2,&local_38,&local_70);
      puVar11 = (undefined8 *)*puVar4;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
        puVar11[6] = local_60;
        puVar11[5] = CONCAT17(uStack_61,
                              CONCAT16(cStack_62,CONCAT15(cStack_63,CONCAT14(cStack_64,uStack_68))))
        ;
        puVar11[4] = CONCAT17(cStack_69,CONCAT61(uStack_6f,local_70));
        uStack_68 = 0;
        cStack_64 = '\0';
        cStack_63 = '\0';
        cStack_62 = '\0';
        uStack_61 = 0;
        local_60 = (char *)0x0;
        local_70 = 0;
        uStack_6f._0_1_ = '\0';
        uStack_6f._1_1_ = '\0';
        uStack_6f._2_1_ = '\0';
        uStack_6f._3_1_ = '\0';
        uStack_6f._4_1_ = '\0';
        uStack_6f._5_1_ = '\0';
        cStack_69 = '\0';
        puVar11[0xc] = 0;
        puVar11[0xb] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xb] = puVar11 + 0xc;
        puVar11[10] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar11[0xf] = 0;
        puVar11[0x10] = 0;
        puVar11[2] = local_38;
        *puVar11 = 0;
        puVar11[1] = 0;
        *puVar4 = puVar11;
        if (*(long *)*param_2 == 0) {
          puVar4 = puVar11;
        }
        else {
          *param_2 = *(long *)*param_2;
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_010108e0(param_2[1],puVar4);
        param_2[2] = param_2[2] + 1;
      }
      *(undefined4 *)(puVar11 + 7) = 4;
      if ((*(byte *)(puVar11 + 8) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar11[10]);
      }
      puVar11[10] = local_48;
      puVar11[9] = uStack_50;
      puVar11[8] = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      local_58 = 0;
      uStack_57 = 0;
      if (((local_70 & 1) != 0) && (FUN_0049e790(PTR_LAB_047cba48,local_60), (local_58 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
    }
    if (lVar10 != 0) {
      FUN_002f09c0(&local_58,lVar10);
      local_70 = 0x1c;
      uStack_6f._0_1_ = s_callsSucceeded_03c1e039[0];
      uStack_6f._1_1_ = s_callsSucceeded_03c1e039[1];
      uStack_6f._2_1_ = s_callsSucceeded_03c1e039[2];
      uStack_6f._3_1_ = s_callsSucceeded_03c1e039[3];
      uStack_6f._4_1_ = s_callsSucceeded_03c1e039[4];
      uStack_6f._5_1_ = s_callsSucceeded_03c1e039[5];
      cStack_69 = s_callsSucceeded_03c1e039[6];
      uStack_68 = (undefined4)
                  (CONCAT62(s_callsSucceeded_03c1e039._8_6_,s_callsSucceeded_03c1e039._6_2_) >> 8);
      cStack_64 = s_callsSucceeded_03c1e039[0xb];
      cStack_63 = s_callsSucceeded_03c1e039[0xc];
      cStack_62 = s_callsSucceeded_03c1e039[0xd];
      uStack_61 = 0;
                    /* try { // try from 00346700 to 0034670f has its CatchHandler @ 00346974 */
      puVar4 = (undefined8 *)FUN_002885a4(param_2,&local_38,&local_70);
      puVar11 = (undefined8 *)*puVar4;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
        puVar11[6] = local_60;
        puVar11[5] = CONCAT17(uStack_61,
                              CONCAT16(cStack_62,CONCAT15(cStack_63,CONCAT14(cStack_64,uStack_68))))
        ;
        puVar11[4] = CONCAT17(cStack_69,CONCAT61(uStack_6f,local_70));
        uStack_68 = 0;
        cStack_64 = '\0';
        cStack_63 = '\0';
        cStack_62 = '\0';
        uStack_61 = 0;
        local_60 = (char *)0x0;
        local_70 = 0;
        uStack_6f._0_1_ = '\0';
        uStack_6f._1_1_ = '\0';
        uStack_6f._2_1_ = '\0';
        uStack_6f._3_1_ = '\0';
        uStack_6f._4_1_ = '\0';
        uStack_6f._5_1_ = '\0';
        cStack_69 = '\0';
        puVar11[0xc] = 0;
        puVar11[0xb] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xb] = puVar11 + 0xc;
        puVar11[10] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar11[0xf] = 0;
        puVar11[0x10] = 0;
        puVar11[2] = local_38;
        *puVar11 = 0;
        puVar11[1] = 0;
        *puVar4 = puVar11;
        if (*(long *)*param_2 == 0) {
          puVar4 = puVar11;
        }
        else {
          *param_2 = *(long *)*param_2;
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_010108e0(param_2[1],puVar4);
        param_2[2] = param_2[2] + 1;
      }
      *(undefined4 *)(puVar11 + 7) = 4;
      if ((*(byte *)(puVar11 + 8) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar11[10]);
      }
      puVar11[10] = local_48;
      puVar11[9] = uStack_50;
      puVar11[8] = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      local_58 = 0;
      uStack_57 = 0;
      if (((local_70 & 1) != 0) && (FUN_0049e790(PTR_LAB_047cba48,local_60), (local_58 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
    }
    if (lVar9 != 0) {
      FUN_002f09c0(&local_58,lVar9);
      local_70 = 0x16;
      uStack_6f = s_callsFailed_03be046a._0_6_;
      cStack_69 = s_callsFailed_03be046a[6];
      uStack_68._0_1_ = s_callsFailed_03be046a[7];
      uStack_68 = CONCAT31(0x64656c,(char)uStack_68);
      cStack_64 = 0;
                    /* try { // try from 00346848 to 00346857 has its CatchHandler @ 00346970 */
      puVar4 = (undefined8 *)FUN_002885a4(param_2,&local_38,&local_70);
      puVar11 = (undefined8 *)*puVar4;
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
        puVar11[6] = local_60;
        puVar11[5] = CONCAT17(uStack_61,
                              CONCAT16(cStack_62,CONCAT15(cStack_63,CONCAT14(cStack_64,uStack_68))))
        ;
        puVar11[4] = CONCAT17(cStack_69,CONCAT61(uStack_6f,local_70));
        uStack_68 = 0;
        cStack_64 = 0;
        cStack_63 = '\0';
        cStack_62 = '\0';
        uStack_61 = 0;
        local_60 = (char *)0x0;
        local_70 = 0;
        uStack_6f = 0;
        cStack_69 = '\0';
        puVar11[0xc] = 0;
        puVar11[0xb] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0xb] = puVar11 + 0xc;
        puVar11[10] = 0;
        puVar11[9] = 0;
        puVar11[8] = 0;
        puVar11[7] = 0;
        puVar11[0xf] = 0;
        puVar11[0x10] = 0;
        puVar11[2] = local_38;
        *puVar11 = 0;
        puVar11[1] = 0;
        *puVar4 = puVar11;
        if (*(long *)*param_2 == 0) {
          puVar4 = puVar11;
        }
        else {
          *param_2 = *(long *)*param_2;
          puVar4 = (undefined8 *)*puVar4;
        }
        FUN_010108e0(param_2[1],puVar4);
        param_2[2] = param_2[2] + 1;
      }
      *(undefined4 *)(puVar11 + 7) = 4;
      if ((*(byte *)(puVar11 + 8) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar11[10]);
      }
      puVar11[10] = local_48;
      puVar11[9] = uStack_50;
      puVar11[8] = CONCAT62(uStack_56,CONCAT11(uStack_57,local_58));
      local_58 = 0;
      uStack_57 = 0;
      if (((local_70 & 1) != 0) && (FUN_0049e790(PTR_LAB_047cba48,local_60), (local_58 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_48);
      }
    }
  }
  return;
}


