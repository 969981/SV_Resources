/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0325109c; name: FUN_0325109c
 */


void FUN_0325109c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  unkbyte9 *pVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  uint uVar34;
  unkbyte9 Var35;
  unkbyte9 Var36;
  undefined *puVar37;
  bool bVar38;
  int iVar39;
  void *pvVar40;
  long *plVar41;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar42;
  undefined4 uVar43;
  uint uVar44;
  long lVar45;
  unkbyte9 *pVar46;
  unkbyte9 *pVar47;
  long lVar48;
  ulong uVar49;
  undefined8 *puVar50;
  uint uVar51;
  ulong *puVar52;
  unkbyte9 *pVar53;
  undefined4 uVar54;
  long lVar55;
  int *piVar56;
  undefined8 *puVar57;
  uint uVar58;
  ulong *puVar59;
  ulong uVar60;
  ulong *puVar61;
  ulong uVar62;
  ulong *puVar63;
  float fVar64;
  int iVar74;
  undefined1 auVar66 [16];
  undefined8 uVar76;
  undefined1 auVar67 [16];
  int iVar65;
  undefined1 auVar68 [16];
  int iVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  byte bVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  float fVar106;
  float fVar107;
  undefined **local_1b20;
  ulong uStack_1b18;
  ulong uStack_1b10;
  ulong uStack_1b08;
  undefined4 local_1b00;
  undefined4 uStack_1afc;
  ulong local_1af0;
  ulong uStack_1ae8;
  ulong uStack_1ae0;
  ulong uStack_1ad8;
  undefined4 local_1ad0;
  undefined4 uStack_1acc;
  ulong local_1ac0;
  ulong uStack_1ab8;
  ulong uStack_1ab0;
  ulong uStack_1aa8;
  undefined4 local_1aa0;
  undefined4 local_1a9c;
  undefined1 local_1a90 [16];
  ulong uStack_1a80;
  ulong uStack_1a78;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  undefined *local_1960;
  undefined8 local_1958;
  undefined8 local_1950;
  undefined8 local_1948;
  undefined ***local_1940;
  undefined8 local_1938;
  undefined8 local_1930;
  undefined1 local_1928;
  undefined **local_1920;
  long *local_1918;
  long *local_1910;
  long local_1908;
  long local_1900;
  int *local_18f8;
  uint local_18f0;
  uint local_18ec;
  int local_18e8 [16];
  ulong *local_18a8;
  uint local_18a0;
  undefined4 *local_1898;
  uint *local_1890;
  uint local_1888 [2];
  undefined4 local_1880 [4];
  ulong local_1870;
  ulong uStack_1868;
  undefined8 local_1860;
  ulong uStack_1858;
  undefined4 local_1850;
  int iStack_184c;
  undefined4 local_1848;
  undefined *local_16b0;
  undefined8 local_16a8;
  undefined8 local_16a0;
  undefined8 local_1698;
  ulong *local_1690;
  undefined8 local_1688;
  undefined8 local_1680;
  undefined1 local_1678;
  ulong local_c70 [386];
  
  param_1[9] = (long)param_3;
  param_3[1] = 0;
  if ((int)param_1[1] == 1) {
    if ((char)param_2[2] == '\0') {
      iVar65 = (int)param_2[1];
      lVar45 = 0;
      if (*param_2 != 0) {
        lVar45 = *param_2 + (long)param_2;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x18);
      uVar87 = 0;
    }
    else {
      iVar65 = (int)param_2[1];
      if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < iVar65) {
        FUN_02ebb550(param_1 + 7,PTR_PTR_047d1a50,(long)iVar65);
      }
      if ((int)param_1[8] != iVar65) {
        *(int *)(param_1 + 8) = iVar65;
      }
      param_3[1] = param_1[7];
      iVar65 = (int)param_2[1];
      uVar87 = (undefined1)param_2[2];
      lVar45 = 0;
      if (*param_2 != 0) {
        lVar45 = *param_2 + (long)param_2;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x03251540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_3,lVar45,1,iVar65 + -1,uVar87);
    return;
  }
  puVar50 = (undefined8 *)(*param_2 + (long)param_2);
  uVar51 = *(uint *)(param_2 + 1);
  auVar71 = *(undefined1 (*) [16])(puVar50 + 0x10);
  auVar82 = *(undefined1 (*) [16])(puVar50 + 0x12);
  auVar68 = *(undefined1 (*) [16])(puVar50 + 0x14);
  uVar33 = puVar50[0x17];
  Var36 = *(unkbyte9 *)(puVar50 + 0x16);
  auVar79 = *(undefined1 (*) [16])(puVar50 + 0x18);
  uVar20 = puVar50[0x1b];
  Var35 = *(unkbyte9 *)(puVar50 + 0x1a);
  if (uVar51 != 2) {
    uVar58 = *(uint *)((long)param_2 + 0xc);
    if (*(uint *)((long)param_2 + 0xc) == 0) {
      *(uint *)((long)param_2 + 0xc) = uVar51;
      uVar58 = uVar51;
    }
    puVar37 = PTR_DAT_047d1a08;
    if ((int)uVar51 < 2) {
      uVar42 = uVar58 & 0x7fffffff;
      if ((int)(uVar58 & 0x7fffffff) <= (int)uVar51) {
        uVar42 = uVar51;
      }
      if ((int)uVar42 < 2) {
        local_1870 = 0x100;
        pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1870,0);
        pvVar5 = (void *)0x0;
        if (*param_2 != 0) {
          pvVar5 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
        if (*(int *)((long)param_2 + 0xc) < 0) {
          lVar45 = 0;
          if (*param_2 != 0) {
            lVar45 = *param_2 + (long)param_2;
          }
          (**(code **)(puVar37 + 8))(0,lVar45,0);
        }
        lVar45 = 0;
        if (pvVar40 != (void *)0x0) {
          lVar45 = (long)pvVar40 - (long)param_2;
        }
        *(undefined4 *)((long)param_2 + 0xc) = 0x80000002;
        *param_2 = lVar45;
        puVar50 = (undefined8 *)(lVar45 + (long)param_2);
      }
    }
    *(undefined4 *)(param_2 + 1) = 2;
  }
  *(undefined2 *)(puVar50 + 0xe) = 0;
  auVar66._8_4_ = 0x7f7fffee;
  auVar66._0_8_ = 0x7f7fffee7f7fffee;
  auVar66._12_4_ = 0x7f7fffee;
  puVar50[0xc] = 0;
  puVar50[0xd] = 0;
  uVar76 = auVar66._8_8_;
  puVar50[1] = uVar76;
  *puVar50 = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar50 + 3) = 0xff7fffee;
  *(undefined4 *)((long)puVar50 + 0x1c) = 0xff7fffee;
  puVar50[2] = 0xff7fffeeff7fffee;
  puVar50[5] = uVar76;
  puVar50[4] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar50 + 7) = 0xff7fffee;
  *(undefined4 *)((long)puVar50 + 0x3c) = 0xff7fffee;
  puVar50[6] = 0xff7fffeeff7fffee;
  puVar50[9] = uVar76;
  puVar50[8] = 0x7f7fffee7f7fffee;
  *(undefined4 *)(puVar50 + 0xb) = 0xff7fffee;
  *(undefined4 *)((long)puVar50 + 0x5c) = 0xff7fffee;
  puVar50[10] = 0xff7fffeeff7fffee;
  lVar45 = *param_2;
  *(undefined8 *)((long)param_2 + lVar45 + 0xe0) = 0;
  *(undefined8 *)((long)param_2 + lVar45 + 0xe8) = 0;
  *(undefined2 *)((long)param_2 + lVar45 + 0xf0) = 0;
  *(undefined8 *)((long)param_2 + lVar45 + 0x88) = uVar76;
  *(undefined8 *)((long)param_2 + lVar45 + 0x80) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0x98) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0x9c) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar45 + 0x90) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)param_2 + lVar45 + 0xa8) = uVar76;
  *(undefined8 *)((long)param_2 + lVar45 + 0xa0) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0xb8) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0xbc) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar45 + 0xb0) = 0xff7fffeeff7fffee;
  *(undefined8 *)((long)param_2 + lVar45 + 200) = uVar76;
  *(undefined8 *)((long)param_2 + lVar45 + 0xc0) = 0x7f7fffee7f7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0xd8) = 0xff7fffee;
  *(undefined4 *)((long)param_2 + lVar45 + 0xdc) = 0xff7fffee;
  *(undefined8 *)((long)param_2 + lVar45 + 0xd0) = 0xff7fffeeff7fffee;
  *(undefined1 *)(param_2 + 2) = 1;
  iVar65 = (int)param_1[6];
  if (iVar65 == 0) {
    return;
  }
  fVar77 = (float)NEON_fminnmv(auVar71,4);
  auVar67._4_12_ = auVar66._4_12_;
  auVar67._0_4_ = (float)NEON_fmaxnmv(auVar82,4);
  fVar107 = (float)NEON_fminnmv(auVar68,4);
  fVar106 = (float)NEON_fminnmv(auVar79,4);
  auVar82[9] = (char)((ulong)uVar33 >> 8);
  auVar82._0_9_ = Var36;
  auVar82[10] = (char)((ulong)uVar33 >> 0x10);
  auVar82[0xb] = (char)((ulong)uVar33 >> 0x18);
  auVar82[0xc] = (char)((ulong)uVar33 >> 0x20);
  auVar82[0xd] = (char)((ulong)uVar33 >> 0x28);
  auVar82[0xe] = (char)((ulong)uVar33 >> 0x30);
  auVar82[0xf] = (char)((ulong)uVar33 >> 0x38);
  fVar30 = (float)NEON_fmaxnmv(auVar82,4);
  auVar71[9] = (char)((ulong)uVar20 >> 8);
  auVar71._0_9_ = Var35;
  auVar71[10] = (char)((ulong)uVar20 >> 0x10);
  auVar71[0xb] = (char)((ulong)uVar20 >> 0x18);
  auVar71[0xc] = (char)((ulong)uVar20 >> 0x20);
  auVar71[0xd] = (char)((ulong)uVar20 >> 0x28);
  auVar71[0xe] = (char)((ulong)uVar20 >> 0x30);
  auVar71[0xf] = (char)((ulong)uVar20 >> 0x38);
  fVar19 = (float)NEON_fmaxnmv(auVar71,4);
  lVar45 = (long)iVar65;
  plVar1 = param_1 + 5;
  uVar60 = lVar45 + 1;
  iVar39 = iVar65;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar65) {
    FUN_02eaf0f8(auVar67,ZEXT816(0),plVar1,PTR_PTR_047d1a50,uVar60);
    iVar39 = (int)param_1[6];
  }
  uVar62 = lVar45 + 2;
  puVar50 = (undefined8 *)(param_1[5] + (long)iVar39 * 0x10);
  *puVar50 = 0;
  puVar50[1] = 0;
  *(int *)(param_1 + 6) = (int)uVar60;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= (int)uVar60) {
    FUN_02eaf0f8(plVar1,PTR_PTR_047d1a50,uVar62);
    uVar60 = (ulong)*(uint *)(param_1 + 6);
  }
  puVar50 = (undefined8 *)(param_1[5] + (long)(int)uVar60 * 0x10);
  uVar60 = lVar45 + 3;
  *puVar50 = 0;
  puVar50[1] = 0;
  *(int *)(param_1 + 6) = (int)uVar62;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= (int)uVar62) {
    FUN_02eaf0f8(plVar1,PTR_PTR_047d1a50,uVar60);
    uVar62 = (ulong)*(uint *)(param_1 + 6);
  }
  puVar50 = (undefined8 *)(param_1[5] + (long)(int)uVar62 * 0x10);
  *puVar50 = 0;
  puVar50[1] = 0;
  *(int *)(param_1 + 6) = (int)uVar60;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= (int)uVar60) {
    FUN_02eaf0f8(plVar1,PTR_PTR_047d1a50,lVar45 + 4);
    uVar60 = (ulong)*(uint *)(param_1 + 6);
  }
  puVar50 = (undefined8 *)(param_1[5] + (long)(int)uVar60 * 0x10);
  puVar50[1] = 0;
  *puVar50 = 0;
  *(int *)(param_1 + 6) = (int)(lVar45 + 4);
  if ((iVar65 < 0x81) || (param_1[2] == 0)) {
    iVar39 = iVar65;
    if (iVar65 < 0) {
      iVar39 = iVar65 + 1;
    }
    uVar58 = *(uint *)(param_2 + 1);
    uVar51 = (iVar39 >> 1) + 0x43U & 0xfffffffc;
    *(undefined1 *)(param_2 + 2) = 1;
    if ((int)uVar51 < 1) {
      local_1920 = (undefined **)0x0;
    }
    else {
      uVar51 = uVar58 + uVar51;
      uVar42 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar58;
        uVar42 = uVar58;
      }
      uVar21 = uVar42 & 0x7fffffff;
      if ((int)(uVar42 & 0x7fffffff) <= (int)uVar58) {
        uVar21 = uVar58;
      }
      if ((int)uVar21 < (int)uVar51) {
        uVar42 = uVar51 - 1 | (int)(uVar51 - 1) >> 0x10;
        uVar42 = uVar42 | (int)uVar42 >> 8;
        uVar42 = uVar42 | (int)uVar42 >> 4;
        uVar42 = uVar42 | (int)uVar42 >> 2;
        uVar42 = (uVar42 | (int)uVar42 >> 1) + 1;
        if ((int)uVar42 < (int)uVar51) goto LAB_032525d4;
        local_1870 = -(ulong)(uVar42 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar42 << 7;
        pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1870,0);
        pvVar5 = (void *)0x0;
        if (*param_2 != 0) {
          pvVar5 = (void *)(*param_2 + (long)param_2);
        }
        memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
        if (*(int *)((long)param_2 + 0xc) < 0) {
          lVar45 = 0;
          if (*param_2 != 0) {
            lVar45 = *param_2 + (long)param_2;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar45,0);
        }
        lVar45 = 0;
        if (pvVar40 != (void *)0x0) {
          lVar45 = (long)pvVar40 - (long)param_2;
        }
        *param_2 = lVar45;
        *(uint *)((long)param_2 + 0xc) = uVar42 | 0x80000000;
      }
      else {
        lVar45 = *param_2;
      }
      local_1920 = (undefined **)((long)param_2 + (long)(int)uVar58 * 0x80 + lVar45);
      *(uint *)(param_2 + 1) = uVar51;
      uVar58 = uVar51;
    }
    (**(code **)(*param_1 + 0x18))(param_1,0,1,uVar58);
    local_1850 = 0;
    local_1848 = 1;
    if (*(char *)((long)param_1 + 0x1d) == '\0') {
LAB_03251728:
      iVar39 = (int)param_1[6];
      if (iVar39 == 0) {
        auVar79._8_4_ = 0x7f800000;
        auVar79._0_8_ = 0x7f8000007f800000;
        auVar79._12_4_ = 0x7f800000;
        auVar68._8_4_ = 0x807fffff;
        auVar68._0_8_ = 0x807fffff807fffff;
        auVar68._12_4_ = 0x807fffff;
      }
      else {
        pVar53 = (unkbyte9 *)param_1[5];
        uVar60 = (long)iVar39 * 0x10 - 0x10;
        uVar51 = ((uint)(uVar60 >> 4) & 0xfffffff) + 1;
        if ((uVar51 & 3) == 0) {
          auVar68._8_4_ = 0x807fffff;
          auVar68._0_8_ = 0x807fffff807fffff;
          auVar68._12_4_ = 0x807fffff;
          auVar79._8_4_ = 0x7f800000;
          auVar79._0_8_ = 0x7f8000007f800000;
          auVar79._12_4_ = 0x7f800000;
          pVar47 = pVar53;
        }
        else {
          auVar68._8_4_ = 0x807fffff;
          auVar68._0_8_ = 0x807fffff807fffff;
          auVar68._12_4_ = 0x807fffff;
          auVar79._8_4_ = 0x7f800000;
          auVar79._0_8_ = 0x7f8000007f800000;
          auVar79._12_4_ = 0x7f800000;
          lVar45 = -((ulong)uVar51 & 3);
          pVar46 = pVar53;
          do {
            pVar47 = pVar46 + 1;
            uVar20 = *(undefined8 *)((long)pVar46 + 8);
            uVar87 = (undefined1)((ulong)uVar20 >> 8);
            uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
            auVar13[9] = uVar87;
            auVar13._0_9_ = *pVar46;
            auVar13[10] = uVar88;
            auVar13[0xb] = uVar89;
            auVar13[0xc] = uVar90;
            auVar13[0xd] = uVar92;
            auVar13[0xe] = uVar93;
            auVar13[0xf] = uVar94;
            auVar79 = NEON_smin(auVar79,auVar13,4);
            auVar14[9] = uVar87;
            auVar14._0_9_ = *pVar46;
            auVar14[10] = uVar88;
            auVar14[0xb] = uVar89;
            auVar14[0xc] = uVar90;
            auVar14[0xd] = uVar92;
            auVar14[0xe] = uVar93;
            auVar14[0xf] = uVar94;
            auVar68 = NEON_smax(auVar68,auVar14,4);
            bVar38 = lVar45 != -1;
            lVar45 = lVar45 + 1;
            pVar46 = pVar47;
          } while (bVar38);
        }
        if (0x2f < uVar60) {
          do {
            uVar20 = *(undefined8 *)((long)pVar47 + 8);
            uVar87 = (undefined1)((ulong)uVar20 >> 8);
            uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
            uVar20 = *(undefined8 *)((long)pVar47 + 0x18);
            uVar98 = (undefined1)((ulong)uVar20 >> 8);
            uVar99 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar100 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar101 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar103 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar104 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar105 = (undefined1)((ulong)uVar20 >> 0x38);
            auVar15[9] = uVar87;
            auVar15._0_9_ = *pVar47;
            auVar15[10] = uVar88;
            auVar15[0xb] = uVar89;
            auVar15[0xc] = uVar90;
            auVar15[0xd] = uVar92;
            auVar15[0xe] = uVar93;
            auVar15[0xf] = uVar94;
            auVar82 = NEON_smin(auVar79,auVar15,4);
            auVar16[9] = uVar87;
            auVar16._0_9_ = *pVar47;
            auVar16[10] = uVar88;
            auVar16[0xb] = uVar89;
            auVar16[0xc] = uVar90;
            auVar16[0xd] = uVar92;
            auVar16[0xe] = uVar93;
            auVar16[0xf] = uVar94;
            auVar71 = NEON_smax(auVar68,auVar16,4);
            auVar26[9] = uVar98;
            auVar26._0_9_ = pVar47[1];
            auVar26[10] = uVar99;
            auVar26[0xb] = uVar100;
            auVar26[0xc] = uVar101;
            auVar26[0xd] = uVar103;
            auVar26[0xe] = uVar104;
            auVar26[0xf] = uVar105;
            auVar82 = NEON_smin(auVar82,auVar26,4);
            auVar27[9] = uVar98;
            auVar27._0_9_ = pVar47[1];
            auVar27[10] = uVar99;
            auVar27[0xb] = uVar100;
            auVar27[0xc] = uVar101;
            auVar27[0xd] = uVar103;
            auVar27[0xe] = uVar104;
            auVar27[0xf] = uVar105;
            auVar71 = NEON_smax(auVar71,auVar27,4);
            pVar46 = pVar47 + 2;
            uVar20 = *(undefined8 *)((long)pVar47 + 0x28);
            uVar87 = (undefined1)((ulong)uVar20 >> 8);
            uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
            pVar6 = pVar47 + 3;
            uVar20 = *(undefined8 *)((long)pVar47 + 0x38);
            uVar98 = (undefined1)((ulong)uVar20 >> 8);
            uVar99 = (undefined1)((ulong)uVar20 >> 0x10);
            uVar100 = (undefined1)((ulong)uVar20 >> 0x18);
            uVar101 = (undefined1)((ulong)uVar20 >> 0x20);
            uVar103 = (undefined1)((ulong)uVar20 >> 0x28);
            uVar104 = (undefined1)((ulong)uVar20 >> 0x30);
            uVar105 = (undefined1)((ulong)uVar20 >> 0x38);
            pVar47 = pVar47 + 4;
            auVar17[9] = uVar87;
            auVar17._0_9_ = *pVar46;
            auVar17[10] = uVar88;
            auVar17[0xb] = uVar89;
            auVar17[0xc] = uVar90;
            auVar17[0xd] = uVar92;
            auVar17[0xe] = uVar93;
            auVar17[0xf] = uVar94;
            auVar82 = NEON_smin(auVar82,auVar17,4);
            auVar18[9] = uVar87;
            auVar18._0_9_ = *pVar46;
            auVar18[10] = uVar88;
            auVar18[0xb] = uVar89;
            auVar18[0xc] = uVar90;
            auVar18[0xd] = uVar92;
            auVar18[0xe] = uVar93;
            auVar18[0xf] = uVar94;
            auVar71 = NEON_smax(auVar71,auVar18,4);
            auVar28[9] = uVar98;
            auVar28._0_9_ = *pVar6;
            auVar28[10] = uVar99;
            auVar28[0xb] = uVar100;
            auVar28[0xc] = uVar101;
            auVar28[0xd] = uVar103;
            auVar28[0xe] = uVar104;
            auVar28[0xf] = uVar105;
            auVar79 = NEON_smin(auVar82,auVar28,4);
            auVar29[9] = uVar98;
            auVar29._0_9_ = *pVar6;
            auVar29[10] = uVar99;
            auVar29[0xb] = uVar100;
            auVar29[0xc] = uVar101;
            auVar29[0xd] = uVar103;
            auVar29[0xe] = uVar104;
            auVar29[0xf] = uVar105;
            auVar68 = NEON_smax(auVar71,auVar29,4);
          } while (pVar47 != pVar53 + iVar39);
        }
      }
      bVar84 = (char)auVar79[3] >> 7;
      bVar85 = (char)auVar79[7] >> 7;
      bVar86 = (char)auVar79[0xb] >> 7;
      bVar91 = (char)auVar79[0xf] >> 7;
      bVar95 = (char)auVar68[3] >> 7;
      bVar96 = (char)auVar68[7] >> 7;
      bVar97 = (char)auVar68[0xb] >> 7;
      bVar102 = (char)auVar68[0xf] >> 7;
      uVar51 = CONCAT13(bVar84,CONCAT12(bVar84,CONCAT11(bVar84,bVar84))) >> 1;
      uVar58 = CONCAT13(bVar85,CONCAT12(bVar85,CONCAT11(bVar85,bVar85))) >> 1;
      uVar42 = CONCAT13(bVar86,CONCAT12(bVar86,CONCAT11(bVar86,bVar86))) >> 1;
      uVar21 = CONCAT13(bVar91,CONCAT12(bVar91,CONCAT11(bVar91,bVar91))) >> 1;
      uVar44 = CONCAT13(bVar95,CONCAT12(bVar95,CONCAT11(bVar95,bVar95))) >> 1;
      uVar31 = CONCAT13(bVar96,CONCAT12(bVar96,CONCAT11(bVar96,bVar96))) >> 1;
      uVar32 = CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))) >> 1;
      uVar34 = CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))) >> 1;
      auVar81._0_8_ =
           CONCAT17(bVar85 >> 1 ^ auVar79[7],
                    CONCAT16((byte)(uVar58 >> 0x10) ^ auVar79[6],
                             CONCAT15((byte)(uVar58 >> 8) ^ auVar79[5],
                                      CONCAT14((byte)uVar58 ^ auVar79[4],
                                               CONCAT13(bVar84 >> 1 ^ auVar79[3],
                                                        CONCAT12((byte)(uVar51 >> 0x10) ^ auVar79[2]
                                                                 ,CONCAT11((byte)(uVar51 >> 8) ^
                                                                           auVar79[1],
                                                                           (byte)uVar51 ^ auVar79[0]
                                                                          )))))));
      auVar81[8] = (byte)uVar42 ^ auVar79[8];
      auVar81[9] = (byte)(uVar42 >> 8) ^ auVar79[9];
      auVar81[10] = (byte)(uVar42 >> 0x10) ^ auVar79[10];
      auVar81[0xb] = bVar86 >> 1 ^ auVar79[0xb];
      auVar81[0xc] = (byte)uVar21 ^ auVar79[0xc];
      auVar81[0xd] = (byte)(uVar21 >> 8) ^ auVar79[0xd];
      auVar81[0xe] = (byte)(uVar21 >> 0x10) ^ auVar79[0xe];
      auVar81[0xf] = bVar91 >> 1 ^ auVar79[0xf];
      auVar70[0] = (byte)uVar44 ^ auVar68[0];
      auVar70[1] = (byte)(uVar44 >> 8) ^ auVar68[1];
      auVar70[2] = (byte)(uVar44 >> 0x10) ^ auVar68[2];
      auVar70[3] = bVar95 >> 1 ^ auVar68[3];
      auVar70[4] = (byte)uVar31 ^ auVar68[4];
      auVar70[5] = (byte)(uVar31 >> 8) ^ auVar68[5];
      auVar70[6] = (byte)(uVar31 >> 0x10) ^ auVar68[6];
      auVar70[7] = bVar96 >> 1 ^ auVar68[7];
      auVar70[8] = (byte)uVar32 ^ auVar68[8];
      auVar70[9] = (byte)(uVar32 >> 8) ^ auVar68[9];
      auVar70[10] = (byte)(uVar32 >> 0x10) ^ auVar68[10];
      auVar70[0xb] = bVar97 >> 1 ^ auVar68[0xb];
      auVar70[0xc] = (byte)uVar34 ^ auVar68[0xc];
      auVar70[0xd] = (byte)(uVar34 >> 8) ^ auVar68[0xd];
      auVar70[0xe] = (byte)(uVar34 >> 0x10) ^ auVar68[0xe];
      auVar70[0xf] = bVar102 >> 1 ^ auVar68[0xf];
      uStack_1868 = auVar81._8_8_;
      local_1870 = auVar81._0_8_;
    }
    else {
      iVar39 = -(uint)(auVar67._0_4_ < fVar77);
      iVar75 = -(uint)(fVar30 < fVar107);
      iVar74 = -(uint)(fVar19 < fVar106);
      if (CONCAT13((byte)((uint)iVar75 >> 0x18) | (byte)((uint)iVar39 >> 0x18) |
                   (byte)((uint)iVar74 >> 0x18),
                   CONCAT12((byte)((uint)iVar75 >> 0x10) | (byte)((uint)iVar39 >> 0x10) |
                            (byte)((uint)iVar74 >> 0x10),
                            CONCAT11((byte)((uint)iVar75 >> 8) | (byte)((uint)iVar39 >> 8) |
                                     (byte)((uint)iVar74 >> 8),
                                     (byte)iVar75 | (byte)iVar39 | (byte)iVar74))) != 0)
      goto LAB_03251728;
      local_1870 = CONCAT44(fVar107,fVar77);
      uStack_1868 = (ulong)(uint)fVar106;
      auVar70._4_4_ = fVar30;
      auVar70._0_4_ = auVar67._0_4_;
      auVar70._8_4_ = fVar19;
      auVar70._12_4_ = 0;
    }
    uStack_1858 = auVar70._8_8_;
    local_1860 = auVar70._0_8_;
    lVar45 = 0;
    if (*param_2 != 0) {
      lVar45 = *param_2 + (long)param_2;
    }
    iStack_184c = iVar65;
    FUN_03253508(param_1,&local_1870,lVar45,&local_1920);
    lVar45 = 0;
    if (*param_2 != 0) {
      lVar45 = *param_2 + (long)param_2;
    }
    uVar60 = (long)local_1920 - lVar45;
    uVar51 = *(uint *)(param_2 + 1);
    uVar58 = (uint)(uVar60 >> 7);
    if (uVar51 != uVar58) {
      uVar42 = *(uint *)((long)param_2 + 0xc);
      if (*(uint *)((long)param_2 + 0xc) == 0) {
        *(uint *)((long)param_2 + 0xc) = uVar51;
        uVar42 = uVar51;
      }
      puVar37 = PTR_DAT_047d1a08;
      if ((int)uVar51 < (int)uVar58) {
        uVar21 = uVar42 & 0x7fffffff;
        if ((int)(uVar42 & 0x7fffffff) <= (int)uVar51) {
          uVar21 = uVar51;
        }
        if ((int)uVar21 < (int)uVar58) {
          uVar51 = uVar58 - 1 | (int)(uVar58 - 1) >> 0x10;
          uVar51 = uVar51 | (int)uVar51 >> 8;
          uVar51 = uVar51 | (int)uVar51 >> 4;
          uVar51 = uVar51 | (int)uVar51 >> 2;
          uVar51 = (uVar51 | (int)uVar51 >> 1) + 1;
          if ((int)uVar51 < (int)uVar58) goto LAB_032525d4;
          local_1b20 = (undefined **)
                       (-(ulong)(uVar51 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar51 << 7);
          pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1b20,0);
          pvVar5 = (void *)0x0;
          if (*param_2 != 0) {
            pvVar5 = (void *)(*param_2 + (long)param_2);
          }
          memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
          if (*(int *)((long)param_2 + 0xc) < 0) {
            lVar45 = 0;
            if (*param_2 != 0) {
              lVar45 = *param_2 + (long)param_2;
            }
            (**(code **)(puVar37 + 8))(0,lVar45,0);
          }
          lVar45 = 0;
          if (pvVar40 != (void *)0x0) {
            lVar45 = (long)pvVar40 - (long)param_2;
          }
          *param_2 = lVar45;
          *(uint *)((long)param_2 + 0xc) = uVar51 | 0x80000000;
        }
      }
      *(uint *)(param_2 + 1) = uVar58;
    }
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < (int)uVar58) {
      FUN_02ebb550(param_1 + 7,PTR_PTR_047d1a50,(long)(uVar60 * 0x2000000) >> 0x20);
    }
    if (*(uint *)(param_1 + 8) != uVar58) {
      *(uint *)(param_1 + 8) = uVar58;
    }
    param_3[1] = param_1[7];
    lVar45 = 0;
    if (*param_2 != 0) {
      lVar45 = *param_2 + (long)param_2;
    }
    (**(code **)(*param_3 + 0x18))(param_3,lVar45,1,(int)param_2[1] + -1,1);
    plVar41 = (long *)param_1[2];
    if (plVar41 != (long *)0x0) {
      local_1b20 = &PTR_LAB_046bdf48;
      (**(code **)(*plVar41 + 0x10))(plVar41,&local_1b20,1);
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],0,1,0,iVar65);
      (**(code **)(*(long *)param_1[2] + 0x20))();
    }
    goto LAB_0325249c;
  }
  uVar51 = *(uint *)(param_1 + 3);
  if (1 < (int)uVar51) {
    local_16a0 = 1;
    local_1698 = 0;
    local_1690 = &local_1870;
    local_16b0 = PTR_DAT_047e34b8 + 0x10;
    local_16a8 = 0xffffffff;
    local_1678 = 0;
    local_1688 = 0;
    local_1680 = 0x1bf;
    memset(&local_1870,0,0x1c0);
    FUN_0322bd4c(&local_16b0,"hkcdSimdTree does not implements m_numLevelToUnfold > 1 yet.",0x3c);
    iVar39 = FUN_03226f50(0x2f9cba3c,&local_1870,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                          ,0x48c);
    if (iVar39 != 0) {
      CallSupervisor(0x26);
    }
    uVar51 = *(uint *)(param_1 + 3);
  }
  if ((int)uVar51 < 0) {
    uVar51 = -uVar51;
    fVar64 = 0.25;
LAB_0325166c:
    uVar58 = uVar51 & 3;
    if (uVar51 - 1 < 3) {
      fVar78 = 1.0;
    }
    else {
      fVar78 = 1.0;
      iVar39 = -(uVar51 & 0xfffffffc);
      do {
        fVar78 = fVar64 * fVar64 * fVar64 * fVar64 * fVar78;
        iVar39 = iVar39 + 4;
      } while (iVar39 != 0);
    }
    for (; uVar58 != 0; uVar58 = uVar58 - 1) {
      fVar78 = fVar64 * fVar78;
    }
  }
  else {
    if (uVar51 != 0) {
      fVar64 = 4.0;
      goto LAB_0325166c;
    }
    fVar78 = 1.0;
  }
  if ((int)fVar78 < 1) {
    lVar45 = 0;
  }
  else {
    uVar51 = *(uint *)(param_2 + 1);
    iVar39 = uVar51 + (int)fVar78;
    uVar58 = *(uint *)((long)param_2 + 0xc);
    if (*(uint *)((long)param_2 + 0xc) == 0) {
      *(uint *)((long)param_2 + 0xc) = uVar51;
      uVar58 = uVar51;
    }
    puVar37 = PTR_DAT_047d1a08;
    uVar42 = uVar58 & 0x7fffffff;
    if ((int)(uVar58 & 0x7fffffff) <= (int)uVar51) {
      uVar42 = uVar51;
    }
    if ((int)uVar42 < iVar39) {
      uVar58 = iVar39 - 1U | (int)(iVar39 - 1U) >> 0x10;
      uVar58 = uVar58 | (int)uVar58 >> 8;
      uVar58 = uVar58 | (int)uVar58 >> 4;
      uVar58 = uVar58 | (int)uVar58 >> 2;
      uVar58 = (uVar58 | (int)uVar58 >> 1) + 1;
      if ((int)uVar58 < iVar39) goto LAB_032525d4;
      local_1870 = -(ulong)(uVar58 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar58 << 7;
      pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1870,0);
      pvVar5 = (void *)0x0;
      if (*param_2 != 0) {
        pvVar5 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
      if (*(int *)((long)param_2 + 0xc) < 0) {
        lVar45 = 0;
        if (*param_2 != 0) {
          lVar45 = *param_2 + (long)param_2;
        }
        (**(code **)(puVar37 + 8))(0,lVar45,0);
      }
      lVar45 = 0;
      if (pvVar40 != (void *)0x0) {
        lVar45 = (long)pvVar40 - (long)param_2;
      }
      *(uint *)((long)param_2 + 0xc) = uVar58 | 0x80000000;
      *param_2 = lVar45;
    }
    else {
      lVar45 = *param_2;
    }
    lVar45 = (long)param_2 + (long)(int)uVar51 * 0x80 + lVar45;
    *(int *)(param_2 + 1) = iVar39;
  }
  local_1850 = 0;
  iStack_184c = iVar65;
  local_1848 = 1;
  if (*(char *)((long)param_1 + 0x1d) == '\0') {
LAB_032518e0:
    iVar65 = (int)param_1[6];
    if (iVar65 == 0) {
      auVar80._8_4_ = 0x807fffff;
      auVar80._0_8_ = 0x807fffff807fffff;
      auVar80._12_4_ = 0x807fffff;
      auVar69._8_4_ = 0x7f800000;
      auVar69._0_8_ = 0x7f8000007f800000;
      auVar69._12_4_ = 0x7f800000;
    }
    else {
      pVar53 = (unkbyte9 *)param_1[5];
      uVar60 = (long)iVar65 * 0x10 - 0x10;
      uVar51 = ((uint)(uVar60 >> 4) & 0xfffffff) + 1;
      if ((uVar51 & 3) == 0) {
        auVar69._8_4_ = 0x7f800000;
        auVar69._0_8_ = 0x7f8000007f800000;
        auVar69._12_4_ = 0x7f800000;
        auVar80._8_4_ = 0x807fffff;
        auVar80._0_8_ = 0x807fffff807fffff;
        auVar80._12_4_ = 0x807fffff;
        pVar47 = pVar53;
      }
      else {
        auVar69._8_4_ = 0x7f800000;
        auVar69._0_8_ = 0x7f8000007f800000;
        auVar69._12_4_ = 0x7f800000;
        auVar80._8_4_ = 0x807fffff;
        auVar80._0_8_ = 0x807fffff807fffff;
        auVar80._12_4_ = 0x807fffff;
        lVar55 = -((ulong)uVar51 & 3);
        pVar46 = pVar53;
        do {
          pVar47 = pVar46 + 1;
          uVar20 = *(undefined8 *)((long)pVar46 + 8);
          uVar87 = (undefined1)((ulong)uVar20 >> 8);
          uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
          auVar7[9] = uVar87;
          auVar7._0_9_ = *pVar46;
          auVar7[10] = uVar88;
          auVar7[0xb] = uVar89;
          auVar7[0xc] = uVar90;
          auVar7[0xd] = uVar92;
          auVar7[0xe] = uVar93;
          auVar7[0xf] = uVar94;
          auVar69 = NEON_smin(auVar69,auVar7,4);
          auVar8[9] = uVar87;
          auVar8._0_9_ = *pVar46;
          auVar8[10] = uVar88;
          auVar8[0xb] = uVar89;
          auVar8[0xc] = uVar90;
          auVar8[0xd] = uVar92;
          auVar8[0xe] = uVar93;
          auVar8[0xf] = uVar94;
          auVar80 = NEON_smax(auVar80,auVar8,4);
          bVar38 = lVar55 != -1;
          lVar55 = lVar55 + 1;
          pVar46 = pVar47;
        } while (bVar38);
      }
      if (0x2f < uVar60) {
        do {
          uVar20 = *(undefined8 *)((long)pVar47 + 8);
          uVar87 = (undefined1)((ulong)uVar20 >> 8);
          uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
          uVar20 = *(undefined8 *)((long)pVar47 + 0x18);
          uVar98 = (undefined1)((ulong)uVar20 >> 8);
          uVar99 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar100 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar101 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar103 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar104 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar105 = (undefined1)((ulong)uVar20 >> 0x38);
          auVar9[9] = uVar87;
          auVar9._0_9_ = *pVar47;
          auVar9[10] = uVar88;
          auVar9[0xb] = uVar89;
          auVar9[0xc] = uVar90;
          auVar9[0xd] = uVar92;
          auVar9[0xe] = uVar93;
          auVar9[0xf] = uVar94;
          auVar71 = NEON_smin(auVar69,auVar9,4);
          auVar10[9] = uVar87;
          auVar10._0_9_ = *pVar47;
          auVar10[10] = uVar88;
          auVar10[0xb] = uVar89;
          auVar10[0xc] = uVar90;
          auVar10[0xd] = uVar92;
          auVar10[0xe] = uVar93;
          auVar10[0xf] = uVar94;
          auVar82 = NEON_smax(auVar80,auVar10,4);
          auVar22[9] = uVar98;
          auVar22._0_9_ = pVar47[1];
          auVar22[10] = uVar99;
          auVar22[0xb] = uVar100;
          auVar22[0xc] = uVar101;
          auVar22[0xd] = uVar103;
          auVar22[0xe] = uVar104;
          auVar22[0xf] = uVar105;
          auVar71 = NEON_smin(auVar71,auVar22,4);
          auVar23[9] = uVar98;
          auVar23._0_9_ = pVar47[1];
          auVar23[10] = uVar99;
          auVar23[0xb] = uVar100;
          auVar23[0xc] = uVar101;
          auVar23[0xd] = uVar103;
          auVar23[0xe] = uVar104;
          auVar23[0xf] = uVar105;
          auVar82 = NEON_smax(auVar82,auVar23,4);
          pVar46 = pVar47 + 2;
          uVar20 = *(undefined8 *)((long)pVar47 + 0x28);
          uVar87 = (undefined1)((ulong)uVar20 >> 8);
          uVar88 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar89 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar90 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar92 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar93 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar94 = (undefined1)((ulong)uVar20 >> 0x38);
          pVar6 = pVar47 + 3;
          uVar20 = *(undefined8 *)((long)pVar47 + 0x38);
          uVar98 = (undefined1)((ulong)uVar20 >> 8);
          uVar99 = (undefined1)((ulong)uVar20 >> 0x10);
          uVar100 = (undefined1)((ulong)uVar20 >> 0x18);
          uVar101 = (undefined1)((ulong)uVar20 >> 0x20);
          uVar103 = (undefined1)((ulong)uVar20 >> 0x28);
          uVar104 = (undefined1)((ulong)uVar20 >> 0x30);
          uVar105 = (undefined1)((ulong)uVar20 >> 0x38);
          pVar47 = pVar47 + 4;
          auVar11[9] = uVar87;
          auVar11._0_9_ = *pVar46;
          auVar11[10] = uVar88;
          auVar11[0xb] = uVar89;
          auVar11[0xc] = uVar90;
          auVar11[0xd] = uVar92;
          auVar11[0xe] = uVar93;
          auVar11[0xf] = uVar94;
          auVar71 = NEON_smin(auVar71,auVar11,4);
          auVar12[9] = uVar87;
          auVar12._0_9_ = *pVar46;
          auVar12[10] = uVar88;
          auVar12[0xb] = uVar89;
          auVar12[0xc] = uVar90;
          auVar12[0xd] = uVar92;
          auVar12[0xe] = uVar93;
          auVar12[0xf] = uVar94;
          auVar82 = NEON_smax(auVar82,auVar12,4);
          auVar24[9] = uVar98;
          auVar24._0_9_ = *pVar6;
          auVar24[10] = uVar99;
          auVar24[0xb] = uVar100;
          auVar24[0xc] = uVar101;
          auVar24[0xd] = uVar103;
          auVar24[0xe] = uVar104;
          auVar24[0xf] = uVar105;
          auVar69 = NEON_smin(auVar71,auVar24,4);
          auVar25[9] = uVar98;
          auVar25._0_9_ = *pVar6;
          auVar25[10] = uVar99;
          auVar25[0xb] = uVar100;
          auVar25[0xc] = uVar101;
          auVar25[0xd] = uVar103;
          auVar25[0xe] = uVar104;
          auVar25[0xf] = uVar105;
          auVar80 = NEON_smax(auVar82,auVar25,4);
        } while (pVar47 != pVar53 + iVar65);
      }
    }
    bVar84 = (char)auVar69[3] >> 7;
    bVar85 = (char)auVar69[7] >> 7;
    bVar86 = (char)auVar69[0xb] >> 7;
    bVar91 = (char)auVar69[0xf] >> 7;
    bVar95 = (char)auVar80[3] >> 7;
    bVar96 = (char)auVar80[7] >> 7;
    bVar97 = (char)auVar80[0xb] >> 7;
    bVar102 = (char)auVar80[0xf] >> 7;
    uVar51 = CONCAT13(bVar84,CONCAT12(bVar84,CONCAT11(bVar84,bVar84))) >> 1;
    uVar58 = CONCAT13(bVar85,CONCAT12(bVar85,CONCAT11(bVar85,bVar85))) >> 1;
    uVar42 = CONCAT13(bVar86,CONCAT12(bVar86,CONCAT11(bVar86,bVar86))) >> 1;
    uVar21 = CONCAT13(bVar91,CONCAT12(bVar91,CONCAT11(bVar91,bVar91))) >> 1;
    uVar44 = CONCAT13(bVar95,CONCAT12(bVar95,CONCAT11(bVar95,bVar95))) >> 1;
    uVar31 = CONCAT13(bVar96,CONCAT12(bVar96,CONCAT11(bVar96,bVar96))) >> 1;
    uVar32 = CONCAT13(bVar97,CONCAT12(bVar97,CONCAT11(bVar97,bVar97))) >> 1;
    uVar34 = CONCAT13(bVar102,CONCAT12(bVar102,CONCAT11(bVar102,bVar102))) >> 1;
    auVar72._0_8_ =
         CONCAT17(bVar85 >> 1 ^ auVar69[7],
                  CONCAT16((byte)(uVar58 >> 0x10) ^ auVar69[6],
                           CONCAT15((byte)(uVar58 >> 8) ^ auVar69[5],
                                    CONCAT14((byte)uVar58 ^ auVar69[4],
                                             CONCAT13(bVar84 >> 1 ^ auVar69[3],
                                                      CONCAT12((byte)(uVar51 >> 0x10) ^ auVar69[2],
                                                               CONCAT11((byte)(uVar51 >> 8) ^
                                                                        auVar69[1],
                                                                        (byte)uVar51 ^ auVar69[0])))
                                            ))));
    auVar72[8] = (byte)uVar42 ^ auVar69[8];
    auVar72[9] = (byte)(uVar42 >> 8) ^ auVar69[9];
    auVar72[10] = (byte)(uVar42 >> 0x10) ^ auVar69[10];
    auVar72[0xb] = bVar86 >> 1 ^ auVar69[0xb];
    auVar72[0xc] = (byte)uVar21 ^ auVar69[0xc];
    auVar72[0xd] = (byte)(uVar21 >> 8) ^ auVar69[0xd];
    auVar72[0xe] = (byte)(uVar21 >> 0x10) ^ auVar69[0xe];
    auVar72[0xf] = bVar91 >> 1 ^ auVar69[0xf];
    auVar83._0_8_ =
         CONCAT17(bVar96 >> 1 ^ auVar80[7],
                  CONCAT16((byte)(uVar31 >> 0x10) ^ auVar80[6],
                           CONCAT15((byte)(uVar31 >> 8) ^ auVar80[5],
                                    CONCAT14((byte)uVar31 ^ auVar80[4],
                                             CONCAT13(bVar95 >> 1 ^ auVar80[3],
                                                      CONCAT12((byte)(uVar44 >> 0x10) ^ auVar80[2],
                                                               CONCAT11((byte)(uVar44 >> 8) ^
                                                                        auVar80[1],
                                                                        (byte)uVar44 ^ auVar80[0])))
                                            ))));
    auVar83[8] = (byte)uVar32 ^ auVar80[8];
    auVar83[9] = (byte)(uVar32 >> 8) ^ auVar80[9];
    auVar83[10] = (byte)(uVar32 >> 0x10) ^ auVar80[10];
    auVar83[0xb] = bVar97 >> 1 ^ auVar80[0xb];
    auVar83[0xc] = (byte)uVar34 ^ auVar80[0xc];
    auVar83[0xd] = (byte)(uVar34 >> 8) ^ auVar80[0xd];
    auVar83[0xe] = (byte)(uVar34 >> 0x10) ^ auVar80[0xe];
    auVar83[0xf] = bVar102 >> 1 ^ auVar80[0xf];
    uStack_1868 = auVar72._8_8_;
    local_1870 = auVar72._0_8_;
    uStack_1858 = auVar83._8_8_;
    local_1860 = auVar83._0_8_;
  }
  else {
    iVar65 = -(uint)(auVar67._0_4_ < fVar77);
    iVar39 = -(uint)(fVar30 < fVar107);
    iVar75 = -(uint)(fVar19 < fVar106);
    if (CONCAT13((byte)((uint)iVar39 >> 0x18) | (byte)((uint)iVar65 >> 0x18) |
                 (byte)((uint)iVar75 >> 0x18),
                 CONCAT12((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar65 >> 0x10) |
                          (byte)((uint)iVar75 >> 0x10),
                          CONCAT11((byte)((uint)iVar39 >> 8) | (byte)((uint)iVar65 >> 8) |
                                   (byte)((uint)iVar75 >> 8),
                                   (byte)iVar39 | (byte)iVar65 | (byte)iVar75))) != 0)
    goto LAB_032518e0;
    uStack_1868 = (ulong)(uint)fVar106;
    local_1870 = CONCAT44(fVar107,fVar77);
    uStack_1858 = (ulong)(uint)fVar19;
    local_1860 = CONCAT44(fVar30,auVar67._0_4_);
  }
  iVar65 = (int)param_1[3];
  if (iVar65 < 1) {
    puVar63 = &local_1870;
    iVar65 = 1;
    uVar51 = 1;
LAB_03251dc8:
    if (uVar51 == 1) {
      uVar60 = 0;
      iVar39 = 0;
    }
    else {
      uVar60 = 0;
      iVar39 = 0;
      piVar56 = (int *)((long)puVar63 + 0x54);
      do {
        if (iVar39 <= piVar56[-0xc]) {
          iVar39 = piVar56[-0xc];
        }
        uVar60 = uVar60 + 2;
        if (iVar39 <= *piVar56) {
          iVar39 = *piVar56;
        }
        piVar56 = piVar56 + 0x18;
      } while (((ulong)uVar51 & 0xfffffffe) != uVar60);
    }
    if ((uVar51 & 1) != 0) {
      iVar75 = *(int *)((long)puVar63 + uVar60 * 0x30 + 0x24);
      if (iVar39 <= iVar75) {
        iVar39 = iVar75;
      }
    }
  }
  else {
    iVar39 = 0;
    uVar51 = 1;
    puVar61 = &local_1870;
    lVar55 = lVar45;
    puVar52 = local_c70;
    do {
      puVar63 = puVar52;
      puVar52 = puVar61;
      if ((int)uVar51 < 1) {
        uVar51 = 0;
      }
      else {
        uVar60 = (ulong)uVar51;
        uVar51 = 0;
        puVar61 = puVar52;
        do {
          puVar59 = puVar63 + (long)(int)uVar51 * 6;
          if (*(int *)((long)puVar61 + 0x24) < 0x21) {
            uVar62 = *puVar61;
            uVar51 = uVar51 + 1;
            puVar59[1] = puVar61[1];
            *puVar59 = uVar62;
            auVar71 = *(undefined1 (*) [16])(puVar61 + 2);
            puVar59[3] = auVar71._8_8_;
            puVar59[2] = auVar71._0_8_;
            uVar62 = puVar61[4];
            *(int *)(puVar59 + 5) = (int)puVar61[5];
            puVar59[4] = uVar62;
          }
          else {
            (**(code **)(*param_1 + 0x20))(param_1,puVar61,&local_1b20);
            uVar51 = uVar51 + 4;
            uVar62 = puVar61[5];
            lVar48 = *param_2;
            puVar59[1] = uStack_1b18;
            *puVar59 = (ulong)local_1b20;
            puVar59[3] = uStack_1b08;
            puVar59[2] = uStack_1b10;
            *(undefined4 *)(puVar59 + 4) = local_1b00;
            *(undefined4 *)((long)puVar59 + 0x24) = uStack_1afc;
            lVar2 = lVar48 + (long)param_2;
            lVar4 = 0;
            if (lVar48 != 0) {
              lVar4 = lVar2;
            }
            uVar49 = lVar55 - lVar4;
            lVar2 = lVar2 + (long)(int)uVar62 * 0x80;
            uVar43 = (undefined4)(uVar49 >> 7);
            *(undefined4 *)(puVar59 + 5) = uVar43;
            puVar59[7] = uStack_1ae8;
            puVar59[6] = local_1af0;
            puVar59[9] = uStack_1ad8;
            puVar59[8] = uStack_1ae0;
            uVar54 = (undefined4)(uVar49 + 0x80 >> 7);
            auVar73._0_8_ = CONCAT44(uVar54,uVar43);
            uVar43 = (undefined4)(uVar49 + 0x100 >> 7);
            auVar73._8_4_ = uVar43;
            *(undefined4 *)((long)puVar59 + 0x54) = uStack_1acc;
            *(undefined4 *)(puVar59 + 0xb) = uVar54;
            *(undefined4 *)(puVar59 + 10) = local_1ad0;
            *(undefined4 *)((long)puVar59 + 0x84) = local_1a9c;
            *(undefined4 *)(puVar59 + 0x11) = uVar43;
            uVar43 = (undefined4)(uVar49 + 0x180 >> 7);
            auVar73._12_4_ = uVar43;
            *(undefined4 *)(puVar59 + 0x10) = local_1aa0;
            puVar59[0xd] = uStack_1ab8;
            puVar59[0xc] = local_1ac0;
            puVar59[0xf] = uStack_1aa8;
            puVar59[0xe] = uStack_1ab0;
            *(undefined4 *)((long)puVar59 + 0xb4) = local_1a6c;
            *(undefined4 *)(puVar59 + 0x17) = uVar43;
            *(undefined4 *)(puVar59 + 0x16) = local_1a70;
            puVar59[0x13] = local_1a90._8_8_;
            puVar59[0x12] = local_1a90._0_8_;
            puVar59[0x15] = uStack_1a78;
            puVar59[0x14] = uStack_1a80;
            lVar55 = lVar55 + 0x200;
            *(long *)(lVar2 + 0x68) = auVar73._8_8_;
            *(undefined8 *)(lVar2 + 0x60) = auVar73._0_8_;
            *(undefined1 *)(lVar2 + 0x70) = 0;
          }
          puVar61 = puVar61 + 6;
          uVar60 = uVar60 - 1;
        } while (uVar60 != 0);
        iVar65 = (int)param_1[3];
      }
      iVar39 = iVar39 + 1;
      puVar61 = puVar63;
    } while (iVar39 < iVar65);
    iVar65 = (int)((ulong)(lVar55 - lVar45) >> 7) + 1;
    if (0 < (int)uVar51) goto LAB_03251dc8;
    iVar39 = 0;
  }
  uVar58 = iVar39 + 0x43U & 0xfffffffc;
  uVar42 = *(uint *)(param_2 + 1);
  if ((int)(uVar58 * uVar51) < 1) {
    lVar45 = 0;
  }
  else {
    uVar21 = uVar58 * uVar51 + uVar42;
    uVar44 = *(uint *)((long)param_2 + 0xc);
    if (*(uint *)((long)param_2 + 0xc) == 0) {
      *(uint *)((long)param_2 + 0xc) = uVar42;
      uVar44 = uVar42;
    }
    uVar31 = uVar44 & 0x7fffffff;
    if ((int)(uVar44 & 0x7fffffff) <= (int)uVar42) {
      uVar31 = uVar42;
    }
    if ((int)uVar31 < (int)uVar21) {
      uVar44 = uVar21 - 1 | (int)(uVar21 - 1) >> 0x10;
      uVar44 = uVar44 | (int)uVar44 >> 8;
      uVar44 = uVar44 | (int)uVar44 >> 4;
      uVar44 = uVar44 | (int)uVar44 >> 2;
      uVar44 = (uVar44 | (int)uVar44 >> 1) + 1;
      if ((int)uVar44 < (int)uVar21) goto LAB_032525d4;
      local_1b20 = (undefined **)
                   (-(ulong)(uVar44 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar44 << 7);
      pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1b20,0);
      pvVar5 = (void *)0x0;
      if (*param_2 != 0) {
        pvVar5 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
      if (*(int *)((long)param_2 + 0xc) < 0) {
        lVar45 = 0;
        if (*param_2 != 0) {
          lVar45 = *param_2 + (long)param_2;
        }
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar45,0);
      }
      lVar45 = 0;
      if (pvVar40 != (void *)0x0) {
        lVar45 = (long)pvVar40 - (long)param_2;
      }
      *(uint *)((long)param_2 + 0xc) = uVar44 | 0x80000000;
      *param_2 = lVar45;
    }
    else {
      lVar45 = *param_2;
    }
    lVar45 = (long)param_2 + (long)(int)uVar42 * 0x80 + lVar45;
    *(uint *)(param_2 + 1) = uVar21;
    uVar42 = uVar21;
  }
  if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) < (int)uVar42) {
    FUN_02ebb550(param_1 + 7,PTR_PTR_047d1a50,(long)(int)uVar42);
  }
  if (*(uint *)(param_1 + 8) != uVar42) {
    *(uint *)(param_1 + 8) = uVar42;
  }
  param_3[1] = param_1[7];
  local_1880[0] = 0;
  local_18ec = 0x80000010;
  local_18f8 = local_18e8;
  local_18f0 = 0;
  local_1888[0] = 0;
  local_1920 = &PTR_FUN_046bdef8;
  local_1890 = local_1888;
  local_1908 = 0;
  if (*param_2 != 0) {
    local_1908 = *param_2 + (long)param_2;
  }
  local_1898 = local_1880;
  local_1918 = param_3;
  local_1910 = param_1;
  local_1900 = lVar45;
  local_18a8 = puVar63;
  local_18a0 = uVar58;
  if (0x10 < (int)uVar51) {
    FUN_02e9b320(&local_18f8,PTR_PTR_047d1a50,uVar51);
  }
  if ((int)local_18f0 < (int)uVar51) {
    lVar45 = (long)(int)local_18f0;
    uVar42 = ~local_18f0;
    local_18f0 = uVar51;
    memset(local_18f8 + lVar45,0xff,(ulong)(uVar51 + uVar42) * 4 + 4);
  }
  else if ((int)uVar51 < (int)local_18f0) {
    local_18f0 = uVar51;
  }
  (**(code **)(*param_1 + 0x18))(param_1,1,uVar51,(int)param_2[1]);
  (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],&local_1920,uVar51);
  (**(code **)(*(long *)param_1[2] + 0x20))();
  if (local_1888[0] != uVar51) {
    local_1950 = 1;
    local_1948 = 0;
    local_1940 = &local_1b20;
    local_1960 = PTR_DAT_047e34b8 + 0x10;
    local_1958 = 0xffffffff;
    local_1928 = 0;
    local_1938 = 0;
    local_1930 = 0x1bf;
    memset(&local_1b20,0,0x1c0);
    FUN_0322bd4c(&local_1960,
                 "Incorrect handling of task mutiplicity, invalid number of completed branches.\nPlease review your implementation of hkcdSimdTree::IParallelBuild."
                 ,0x90);
    iVar39 = FUN_03226f50(0x667a298d,&local_1b20,
                          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                          ,0x4e9);
    if (iVar39 != 0) {
      CallSupervisor(0x26);
    }
  }
  lVar45 = 0;
  if (*param_2 != 0) {
    lVar45 = *param_2 + (long)param_2;
  }
  (**(code **)(*param_3 + 0x18))(param_3,lVar45,1,iVar65,1);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((long)param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    if ((int)param_1[3] < 2) {
      puVar50 = (undefined8 *)(local_1900 + (long)*local_18f8 * 0x80);
      if (1 < (int)uVar51) {
        uVar60 = 1;
        do {
          iVar65 = local_18f8[uVar60];
          lVar45 = 0;
          if (*param_2 != 0) {
            lVar45 = *param_2 + (long)param_2;
          }
          lVar45 = lVar45 + (long)(int)puVar63[uVar60 * 6 + 5] * 0x80;
          puVar57 = (undefined8 *)(local_1900 + uVar60 * (long)(int)uVar58 * 0x80);
          iVar39 = 0;
          iVar75 = (int)((ulong)((long)puVar57 - (long)puVar50) >> 7);
          if (*(char *)(lVar45 + 0x70) == '\0') {
            iVar39 = -iVar75;
          }
          iVar74 = 0;
          if (*(int *)(lVar45 + 0x60) != 0) {
            iVar74 = iVar39 + *(int *)(lVar45 + 0x60);
          }
          *(int *)(lVar45 + 0x60) = iVar74;
          iVar74 = 0;
          if (*(int *)(lVar45 + 100) != 0) {
            iVar74 = *(int *)(lVar45 + 100) + iVar39;
          }
          *(int *)(lVar45 + 100) = iVar74;
          iVar74 = 0;
          if (*(int *)(lVar45 + 0x68) != 0) {
            iVar74 = *(int *)(lVar45 + 0x68) + iVar39;
          }
          iVar3 = 0;
          if (*(int *)(lVar45 + 0x6c) != 0) {
            iVar3 = *(int *)(lVar45 + 0x6c) + iVar39;
          }
          *(int *)(lVar45 + 0x68) = iVar74;
          *(int *)(lVar45 + 0x6c) = iVar3;
          if (0 < iVar65) {
            do {
              uVar20 = *puVar57;
              puVar50[1] = puVar57[1];
              *puVar50 = uVar20;
              uVar20 = puVar57[2];
              puVar50[3] = puVar57[3];
              puVar50[2] = uVar20;
              uVar20 = puVar57[4];
              puVar50[5] = puVar57[5];
              puVar50[4] = uVar20;
              uVar20 = puVar57[6];
              puVar50[7] = puVar57[7];
              puVar50[6] = uVar20;
              uVar20 = puVar57[8];
              puVar50[9] = puVar57[9];
              puVar50[8] = uVar20;
              auVar71 = *(undefined1 (*) [16])(puVar57 + 10);
              puVar50[0xb] = auVar71._8_8_;
              puVar50[10] = auVar71._0_8_;
              iVar39 = -iVar75;
              if (*(char *)(puVar57 + 0xe) != '\0') {
                iVar39 = 0;
              }
              iVar74 = 0;
              if (*(int *)(puVar57 + 0xc) != 0) {
                iVar74 = iVar39 + *(int *)(puVar57 + 0xc);
              }
              *(int *)(puVar50 + 0xc) = iVar74;
              iVar74 = 0;
              if (*(int *)((long)puVar57 + 100) != 0) {
                iVar74 = *(int *)((long)puVar57 + 100) + iVar39;
              }
              *(int *)((long)puVar50 + 100) = iVar74;
              iVar74 = 0;
              if (*(int *)(puVar57 + 0xd) != 0) {
                iVar74 = *(int *)(puVar57 + 0xd) + iVar39;
              }
              *(int *)(puVar50 + 0xd) = iVar74;
              iVar74 = 0;
              if (*(int *)((long)puVar57 + 0x6c) != 0) {
                iVar74 = *(int *)((long)puVar57 + 0x6c) + iVar39;
              }
              iVar65 = iVar65 + -1;
              *(int *)((long)puVar50 + 0x6c) = iVar74;
              *(undefined1 *)(puVar50 + 0xe) = *(undefined1 *)(puVar57 + 0xe);
              puVar50 = puVar50 + 0x10;
              puVar57 = puVar57 + 0x10;
            } while (iVar65 != 0);
          }
          uVar60 = uVar60 + 1;
        } while (uVar60 != uVar51);
      }
      lVar45 = 0;
      if (*param_2 != 0) {
        lVar45 = *param_2 + (long)param_2;
      }
      uVar51 = *(uint *)(param_2 + 1);
      uVar58 = (uint)((ulong)((long)puVar50 - lVar45) >> 7);
      if (uVar51 != uVar58) {
        uVar42 = *(uint *)((long)param_2 + 0xc);
        if (*(uint *)((long)param_2 + 0xc) == 0) {
          *(uint *)((long)param_2 + 0xc) = uVar51;
          uVar42 = uVar51;
        }
        puVar37 = PTR_DAT_047d1a08;
        if ((int)uVar51 < (int)uVar58) {
          uVar21 = uVar42 & 0x7fffffff;
          if ((int)(uVar42 & 0x7fffffff) <= (int)uVar51) {
            uVar21 = uVar51;
          }
          if ((int)uVar21 < (int)uVar58) {
            uVar51 = uVar58 - 1 | (int)(uVar58 - 1) >> 0x10;
            uVar51 = uVar51 | (int)uVar51 >> 8;
            uVar51 = uVar51 | (int)uVar51 >> 4;
            uVar51 = uVar51 | (int)uVar51 >> 2;
            uVar51 = (uVar51 | (int)uVar51 >> 1) + 1;
            if ((int)uVar51 < (int)uVar58) {
LAB_032525d4:
                    /* WARNING: Subroutine does not return */
              FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                           "Capacity reservation overflow");
            }
            local_1b20 = (undefined **)
                         (-(ulong)(uVar51 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar51 << 7);
            pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1b20,0);
            pvVar5 = (void *)0x0;
            if (*param_2 != 0) {
              pvVar5 = (void *)(*param_2 + (long)param_2);
            }
            memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
            if (*(int *)((long)param_2 + 0xc) < 0) {
              lVar45 = 0;
              if (*param_2 != 0) {
                lVar45 = *param_2 + (long)param_2;
              }
              (**(code **)(puVar37 + 8))(0,lVar45,0);
            }
            lVar45 = 0;
            if (pvVar40 != (void *)0x0) {
              lVar45 = (long)pvVar40 - (long)param_2;
            }
            *param_2 = lVar45;
            *(uint *)((long)param_2 + 0xc) = uVar51 | 0x80000000;
          }
        }
        *(uint *)(param_2 + 1) = uVar58;
      }
    }
    else {
      local_1950 = 1;
      local_1948 = 0;
      local_1940 = &local_1b20;
      local_1960 = PTR_DAT_047e34b8 + 0x10;
      local_1958 = 0xffffffff;
      local_1928 = 0;
      local_1938 = 0;
      local_1930 = 0x1bf;
      memset(&local_1b20,0,0x1c0);
      FUN_0322bd4c(&local_1960,
                   "hkcdSimdTree compaction not implemented for cases where m_numLevelToUnfold is greater than 1."
                   ,0x5d);
      iVar65 = FUN_03226f50(0xdd2e330b,&local_1b20,
                            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Geometry/Collide/DataStructures/SimdTree/hkcdSimdTreeInternals.cpp"
                            ,0x50c);
      if (iVar65 != 0) {
        CallSupervisor(0x26);
      }
    }
  }
  local_1920 = &PTR_FUN_046bdef8;
  local_18f0 = 0;
  if ((-1 < (int)local_18ec) && (local_18f8 != (int *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,local_18f8,(ulong)local_18ec << 2);
  }
LAB_0325249c:
  puVar37 = PTR_DAT_047d1a08;
  if (*(char *)((long)param_1 + 0x1c) != '\0') {
    uVar51 = *(uint *)(param_2 + 1);
    if ((int)uVar51 < (int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff)) {
      local_1870 = (long)(int)uVar51 << 7;
      pvVar40 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_1870,0);
      pvVar5 = (void *)0x0;
      if (*param_2 != 0) {
        pvVar5 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(pvVar40,pvVar5,(long)(int)param_2[1] << 7);
      if (*(int *)((long)param_2 + 0xc) < 0) {
        lVar45 = 0;
        if (*param_2 != 0) {
          lVar45 = *param_2 + (long)param_2;
        }
        (**(code **)(puVar37 + 8))(0,lVar45,0);
      }
      lVar45 = 0;
      if (pvVar40 != (void *)0x0) {
        lVar45 = (long)pvVar40 - (long)param_2;
      }
      *param_2 = lVar45;
      *(uint *)((long)param_2 + 0xc) = uVar51 | 0x80000000;
    }
  }
  if (*(char *)((long)param_1 + 0x1e) != '\0') {
    FUN_0325c2c4(param_2);
  }
  lVar45 = (long)(int)param_1[6] + -4;
  iVar65 = (int)lVar45;
  if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) < iVar65) {
    FUN_02eaf0f8(plVar1,PTR_PTR_047d1a50,lVar45);
    if ((iVar65 <= (int)param_1[6]) && ((int)param_1[6] <= iVar65)) {
      return;
    }
  }
  *(int *)(param_1 + 6) = iVar65;
  return;
}


