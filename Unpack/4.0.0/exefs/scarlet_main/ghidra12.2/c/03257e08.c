/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03257e08; name: FUN_03257e08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03257e08(long *param_1,undefined1 (*param_2) [16],int param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  char cVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  bool bVar22;
  void *pvVar23;
  undefined1 (*pauVar24) [16];
  long lVar25;
  undefined1 (*pauVar26) [16];
  undefined4 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined4 *puVar30;
  undefined8 uVar31;
  long lVar32;
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  long lVar36;
  float *pfVar37;
  float *pfVar38;
  undefined8 uVar39;
  uint uVar40;
  float *pfVar41;
  float fVar42;
  uint uVar43;
  float fVar52;
  uint uVar53;
  uint uVar55;
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  float fVar50;
  float fVar54;
  undefined1 auVar48 [16];
  undefined4 uVar51;
  undefined1 auVar49 [16];
  byte bVar56;
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  int iVar61;
  float fVar62;
  float fVar63;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  undefined4 uVar75;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  undefined1 auVar66 [16];
  undefined8 uVar82;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar76;
  float fVar77;
  undefined1 auVar70 [16];
  undefined4 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined4 uVar99;
  undefined4 uVar102;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined4 uVar103;
  int iVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  int iVar113;
  int iVar114;
  int iVar115;
  int iVar116;
  int iVar117;
  undefined8 local_530;
  undefined8 local_520;
  undefined8 local_510;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4;
  undefined4 local_4c3;
  long local_4b8;
  undefined8 local_4b0;
  long local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  ulong local_490 [128];
  float *local_90;
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  puVar21 = PTR_DAT_047d19d8;
  uVar9 = _UNK_03cab278;
  uVar82 = _DAT_03cab270;
  fVar42 = *(float *)*param_2 + *(float *)param_2[1];
  fVar50 = *(float *)(*param_2 + 4) + *(float *)(param_2[1] + 4);
  fVar54 = *(float *)(*param_2 + 8) + *(float *)(param_2[1] + 8);
  uVar40 = 2;
  iVar104 = 1;
  do {
    pauVar26 = (undefined1 (*) [16])((long)param_1 + (long)iVar104 * 0x80 + *param_1);
    uVar29 = *(ulong *)pauVar26[4];
    uStack_4e8 = *(undefined8 *)(pauVar26[6] + 8);
    iVar76 = (int)((ulong)uStack_4e8 >> 0x20);
    local_4f0 = *(undefined8 *)pauVar26[6];
    iVar104 = (int)local_4f0;
    iVar61 = (int)((ulong)local_4f0 >> 0x20);
    auVar93._12_4_ = iVar76;
    auVar93._0_12_ = *(undefined1 (*) [12])pauVar26[6];
    iVar113 = NEON_sminv(auVar93,4);
    iVar114 = -(uint)(iVar104 == iVar113);
    iVar115 = -(uint)(iVar61 == iVar113);
    iVar116 = -(uint)((int)uStack_4e8 == iVar113);
    iVar117 = -(uint)(iVar76 == iVar113);
    auVar93 = *pauVar26;
    auVar100 = pauVar26[2];
    bVar56 = (byte)uVar82;
    bVar71 = (byte)((ulong)uVar82 >> 8);
    bVar72 = (byte)((ulong)uVar82 >> 0x10);
    bVar73 = (byte)((ulong)uVar82 >> 0x18);
    bVar74 = (byte)((ulong)uVar82 >> 0x20);
    bVar78 = (byte)((ulong)uVar82 >> 0x28);
    bVar79 = (byte)((ulong)uVar82 >> 0x30);
    bVar80 = (byte)((ulong)uVar82 >> 0x38);
    bVar81 = (byte)uVar9;
    bVar83 = (byte)((ulong)uVar9 >> 8);
    bVar84 = (byte)((ulong)uVar9 >> 0x10);
    bVar85 = (byte)((ulong)uVar9 >> 0x18);
    iVar113 = CONCAT13((byte)((uint)iVar116 >> 0x18) & bVar85,
                       CONCAT12((byte)((uint)iVar116 >> 0x10) & bVar84,
                                CONCAT11((byte)((uint)iVar116 >> 8) & bVar83,(byte)iVar116 & bVar81)
                               ));
    bVar86 = (byte)((ulong)uVar9 >> 0x20);
    bVar87 = (byte)((ulong)uVar9 >> 0x28);
    bVar88 = (byte)((ulong)uVar9 >> 0x30);
    bVar89 = (byte)((ulong)uVar9 >> 0x38);
    cVar6 = puVar21[(uint)(CONCAT13((byte)((uint)iVar114 >> 0x18) & bVar73,
                                    CONCAT12((byte)((uint)iVar114 >> 0x10) & bVar72,
                                             CONCAT11((byte)((uint)iVar114 >> 8) & bVar71,
                                                      (byte)iVar114 & bVar56))) +
                           CONCAT13((byte)((uint)iVar115 >> 0x18) & bVar80,
                                    CONCAT12((byte)((uint)iVar115 >> 0x10) & bVar79,
                                             CONCAT11((byte)((uint)iVar115 >> 8) & bVar78,
                                                      (byte)iVar115 & bVar74))) +
                          iVar113 + (int)(CONCAT17((byte)((uint)iVar117 >> 0x18) & bVar89,
                                                   CONCAT16((byte)((uint)iVar117 >> 0x10) & bVar88,
                                                            CONCAT15((byte)((uint)iVar117 >> 8) &
                                                                     bVar87,CONCAT14((byte)iVar117 &
                                                                                     bVar86,iVar113)
                                                                    ))) >> 0x20))];
    if (3 < (ulong)(long)cVar6 || *(int *)((ulong)&local_4f0 | ((long)cVar6 & 3U) << 2) == 0) {
      uVar57 = *(undefined4 *)*param_2;
      auVar18._4_8_ = uVar9;
      auVar18._0_4_ = 0xff7fffee;
      auVar66._0_8_ = auVar18._0_8_ << 0x20;
      auVar66._8_4_ = 0xff7fffee;
      auVar66._12_4_ = 0xff7fffee;
      uVar82 = auVar66._8_8_;
      auVar95._8_8_ = 0x7f7fffee7f7fffee;
      auVar95._0_8_ = 0x7f7fffee00000000;
      auVar101._8_8_ = uVar82;
      auVar101._0_8_ = auVar66._0_8_;
      uVar58 = *(undefined4 *)param_2[1];
      auVar96._4_12_ = auVar95._4_12_;
      auVar96._0_4_ = *(undefined4 *)(*param_2 + 4);
      auVar100._4_12_ = auVar101._4_12_;
      auVar100._0_4_ = *(undefined4 *)(param_2[1] + 4);
      uVar59 = *(undefined4 *)(*param_2 + 8);
      auVar67._4_12_ = auVar66._4_12_;
      auVar67._0_4_ = *(undefined4 *)(param_2[1] + 8);
      lVar25 = param_1[1];
      if (cVar6 == '\0') {
        *(undefined4 *)*pauVar26 = uVar57;
        *(undefined4 *)pauVar26[1] = *(undefined4 *)param_2[1];
        *(undefined4 *)pauVar26[2] = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)pauVar26[3] = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)pauVar26[4] = *(undefined4 *)(*param_2 + 8);
        pauVar24 = pauVar26 + 5;
      }
      else if (cVar6 == '\x01') {
        *(undefined4 *)(*pauVar26 + 4) = uVar57;
        *(undefined4 *)(pauVar26[1] + 4) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar26[2] + 4) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar26[3] + 4) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar26[4] + 4) = *(undefined4 *)(*param_2 + 8);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 4);
      }
      else if (cVar6 == 2) {
        *(undefined4 *)(*pauVar26 + 8) = uVar57;
        *(undefined4 *)(pauVar26[1] + 8) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar26[2] + 8) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar26[3] + 8) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar26[4] + 8) = *(undefined4 *)(*param_2 + 8);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 8);
      }
      else {
        *(undefined4 *)(*pauVar26 + 0xc) = uVar57;
        *(undefined4 *)(pauVar26[1] + 0xc) = *(undefined4 *)param_2[1];
        *(undefined4 *)(pauVar26[2] + 0xc) = *(undefined4 *)(*param_2 + 4);
        *(undefined4 *)(pauVar26[3] + 0xc) = *(undefined4 *)(param_2[1] + 4);
        *(undefined4 *)(pauVar26[4] + 0xc) = *(undefined4 *)(*param_2 + 8);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
      }
      *(undefined4 *)*pauVar24 = *(undefined4 *)(param_2[1] + 8);
      *(int *)(pauVar26[6] + (long)(int)cVar6 * 4) = (int)lVar25;
      uVar40 = *(uint *)(param_1 + 1);
      uVar43 = *(uint *)((long)param_1 + 0xc);
      if (*(uint *)((long)param_1 + 0xc) == 0) {
        *(uint *)((long)param_1 + 0xc) = uVar40;
        uVar43 = uVar40;
      }
      puVar21 = PTR_DAT_047d1a08;
      if ((int)uVar40 < (int)(uVar43 & 0x7fffffff)) {
        lVar25 = *param_1;
      }
      else {
        uVar43 = uVar40 | (int)uVar40 >> 0x10;
        uVar43 = uVar43 | (int)uVar43 >> 8;
        uVar43 = uVar43 | (int)uVar43 >> 4;
        uVar43 = uVar43 | (int)uVar43 >> 2;
        uVar43 = uVar43 | (int)uVar43 >> 1;
        if ((int)uVar43 < (int)uVar40) {
LAB_03259270:
                    /* WARNING: Subroutine does not return */
          FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                       "Capacity reservation overflow");
        }
        uVar43 = uVar43 + 1;
        local_490[0] = -(ulong)(uVar43 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar43 << 7;
        pvVar23 = (void *)(**(code **)PTR_DAT_047d1a08)(ZEXT816(0),0,local_490,0);
        pvVar2 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar2 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar23,pvVar2,(long)(int)param_1[1] << 7);
        if (*(int *)((long)param_1 + 0xc) < 0) {
          lVar25 = 0;
          if (*param_1 != 0) {
            lVar25 = *param_1 + (long)param_1;
          }
          (**(code **)(puVar21 + 8))(0,lVar25,0);
        }
        lVar25 = 0;
        if (pvVar23 != (void *)0x0) {
          lVar25 = (long)pvVar23 - (long)param_1;
        }
        *(uint *)((long)param_1 + 0xc) = uVar43 | 0x80000000;
        *param_1 = lVar25;
        auVar67._4_4_ = 0xff7fffee;
        auVar67._8_8_ = uVar82;
        auVar100._4_4_ = 0xff7fffee;
        auVar100._8_8_ = uVar82;
        auVar96._4_4_ = 0x7f7fffee;
        auVar96._8_8_ = 0x7f7fffee7f7fffee;
      }
      *(uint *)(param_1 + 1) = uVar40 + 1;
      puVar1 = (undefined8 *)((long)param_1 + (long)(int)uVar40 * 0x80 + lVar25);
      *(undefined8 *)((long)puVar1 + 100) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar1 + 0x6c) = 0xffffffff;
      *(int *)(puVar1 + 0xc) = param_3;
      *(undefined1 *)(puVar1 + 0xe) = 1;
      puVar1[5] = auVar96._8_8_;
      puVar1[4] = auVar96._0_8_;
      puVar1[7] = auVar100._8_8_;
      puVar1[6] = auVar100._0_8_;
      puVar1[1] = 0x7f7fffee7f7fffee;
      *puVar1 = CONCAT17(0x7f,CONCAT16(0x7f,CONCAT15(0xff,CONCAT14(0xee,uVar57))));
      puVar1[3] = 0xff7fffeeff7fffee;
      puVar1[2] = CONCAT44(0xff7fffee,uVar58);
      puVar1[9] = 0x7f7fffee7f7fffee;
      puVar1[8] = CONCAT44(0x7f7fffee,uVar59);
      puVar1[0xb] = auVar67._8_8_;
      puVar1[10] = auVar67._0_8_;
      return;
    }
    auVar94._0_4_ = auVar93._0_4_;
    fVar98 = auVar100._0_4_;
    fVar109 = (auVar94._0_4_ + (float)*(undefined8 *)pauVar26[1]) - fVar42;
    fVar110 = (auVar93._4_4_ + (float)((ulong)*(undefined8 *)pauVar26[1] >> 0x20)) - fVar42;
    fVar111 = (auVar93._8_4_ + (float)*(undefined8 *)(pauVar26[1] + 8)) - fVar42;
    fVar112 = (auVar93._12_4_ + (float)((ulong)*(undefined8 *)(pauVar26[1] + 8) >> 0x20)) - fVar42;
    fVar105 = (fVar98 + (float)*(undefined8 *)pauVar26[3]) - fVar50;
    fVar106 = (auVar100._4_4_ + (float)((ulong)*(undefined8 *)pauVar26[3] >> 0x20)) - fVar50;
    fVar107 = (auVar100._8_4_ + (float)*(undefined8 *)(pauVar26[3] + 8)) - fVar50;
    fVar108 = (auVar100._12_4_ + (float)((ulong)*(undefined8 *)(pauVar26[3] + 8) >> 0x20)) - fVar50;
    fVar52 = ((float)uVar29 + (float)*(undefined8 *)pauVar26[5]) - fVar54;
    fVar62 = ((float)(uVar29 >> 0x20) + (float)((ulong)*(undefined8 *)pauVar26[5] >> 0x20)) - fVar54
    ;
    fVar63 = ((float)*(undefined8 *)(pauVar26[4] + 8) + (float)*(undefined8 *)(pauVar26[5] + 8)) -
             fVar54;
    fVar77 = ((float)((ulong)*(undefined8 *)(pauVar26[4] + 8) >> 0x20) +
             (float)((ulong)*(undefined8 *)(pauVar26[5] + 8) >> 0x20)) - fVar54;
    fVar52 = fVar109 * fVar109 + fVar105 * fVar105 + fVar52 * fVar52;
    fVar62 = fVar110 * fVar110 + fVar106 * fVar106 + fVar62 * fVar62;
    fVar63 = fVar111 * fVar111 + fVar107 * fVar107 + fVar63 * fVar63;
    fVar77 = fVar112 * fVar112 + fVar108 * fVar108 + fVar77 * fVar77;
    auVar15[4] = SUB41(fVar62,0);
    auVar15._0_4_ = fVar52;
    auVar15[5] = (char)((uint)fVar62 >> 8);
    auVar15[6] = (char)((uint)fVar62 >> 0x10);
    auVar15[7] = (char)((uint)fVar62 >> 0x18);
    auVar15[8] = SUB41(fVar63,0);
    auVar15[9] = (char)((uint)fVar63 >> 8);
    auVar15[10] = (char)((uint)fVar63 >> 0x10);
    auVar15[0xb] = (char)((uint)fVar63 >> 0x18);
    auVar15[0xc] = SUB41(fVar77,0);
    auVar15[0xd] = (char)((uint)fVar77 >> 8);
    auVar15[0xe] = (char)((uint)fVar77 >> 0x10);
    auVar15[0xf] = (char)((uint)fVar77 >> 0x18);
    fVar105 = (float)NEON_fminnmv(auVar15,4);
    iVar113 = -(uint)(fVar52 <= fVar105);
    iVar114 = -(uint)(fVar62 <= fVar105);
    iVar115 = -(uint)(fVar63 <= fVar105);
    iVar116 = -(uint)(fVar77 <= fVar105);
    cVar6 = puVar21[(uint)(CONCAT13((byte)((uint)iVar113 >> 0x18) & bVar73,
                                    CONCAT12((byte)((uint)iVar113 >> 0x10) & bVar72,
                                             CONCAT11((byte)((uint)iVar113 >> 8) & bVar71,
                                                      (byte)iVar113 & bVar56))) +
                           CONCAT13((byte)((uint)iVar114 >> 0x18) & bVar80,
                                    CONCAT12((byte)((uint)iVar114 >> 0x10) & bVar79,
                                             CONCAT11((byte)((uint)iVar114 >> 8) & bVar78,
                                                      (byte)iVar114 & bVar74))) +
                          CONCAT13((byte)((uint)iVar115 >> 0x18) & bVar85,
                                   CONCAT12((byte)((uint)iVar115 >> 0x10) & bVar84,
                                            CONCAT11((byte)((uint)iVar115 >> 8) & bVar83,
                                                     (byte)iVar115 & bVar81))) +
                          CONCAT13((byte)((uint)iVar116 >> 0x18) & bVar89,
                                   CONCAT12((byte)((uint)iVar116 >> 0x10) & bVar88,
                                            CONCAT11((byte)((uint)iVar116 >> 8) & bVar87,
                                                     (byte)iVar116 & bVar86))))];
    switch(cVar6) {
    case '\0':
      break;
    case '\x01':
      iVar104 = iVar61;
      break;
    case '\x02':
      iVar104 = (int)uStack_4e8;
      break;
    case '\x03':
      iVar104 = iVar76;
      break;
    default:
      iVar104 = 0;
    }
    puVar30 = (undefined4 *)((long)param_1 + (long)iVar104 * 0x80 + *param_1);
    if (*(char *)(puVar30 + 0x1c) != '\0') {
      uVar9 = *(undefined8 *)(puVar30 + 0x1a);
      uVar82 = *(undefined8 *)(puVar30 + 0x18);
      auVar7[9] = (char)((ulong)uVar9 >> 8);
      auVar7._0_9_ = *(unkbyte9 *)(puVar30 + 0x18);
      auVar7[10] = (char)((ulong)uVar9 >> 0x10);
      auVar7[0xb] = (char)((ulong)uVar9 >> 0x18);
      auVar7[0xc] = (char)((ulong)uVar9 >> 0x20);
      auVar7[0xd] = (char)((ulong)uVar9 >> 0x28);
      auVar7[0xe] = (char)((ulong)uVar9 >> 0x30);
      auVar7[0xf] = (char)((ulong)uVar9 >> 0x38);
      iVar114 = NEON_sminv(auVar7,4);
      iVar61 = -(uint)((int)uVar82 == iVar114);
      iVar76 = -(uint)((int)((ulong)uVar82 >> 0x20) == iVar114);
      iVar113 = -(uint)((int)uVar9 == iVar114);
      iVar114 = -(uint)((int)((ulong)uVar9 >> 0x20) == iVar114);
      iVar61 = CONCAT13((byte)((uint)iVar61 >> 0x18) & bVar73,
                        CONCAT12((byte)((uint)iVar61 >> 0x10) & bVar72,
                                 CONCAT11((byte)((uint)iVar61 >> 8) & bVar71,(byte)iVar61 & bVar56))
                       );
      auVar64._0_8_ =
           CONCAT17((byte)((uint)iVar76 >> 0x18) & bVar80,
                    CONCAT16((byte)((uint)iVar76 >> 0x10) & bVar79,
                             CONCAT15((byte)((uint)iVar76 >> 8) & bVar78,
                                      CONCAT14((byte)iVar76 & bVar74,iVar61))));
      auVar64[8] = (byte)iVar113 & bVar81;
      auVar64[9] = (byte)((uint)iVar113 >> 8) & bVar83;
      auVar64[10] = (byte)((uint)iVar113 >> 0x10) & bVar84;
      auVar64[0xb] = (byte)((uint)iVar113 >> 0x18) & bVar85;
      auVar68[0xc] = (byte)iVar114 & bVar86;
      auVar68._0_12_ = auVar64;
      auVar68[0xd] = (byte)((uint)iVar114 >> 8) & bVar87;
      auVar68[0xe] = (byte)((uint)iVar114 >> 0x10) & bVar88;
      auVar68[0xf] = (byte)((uint)iVar114 >> 0x18) & bVar89;
      cVar5 = puVar21[(uint)(iVar61 + (int)((ulong)auVar64._0_8_ >> 0x20) +
                            auVar64._8_4_ + auVar68._12_4_)];
      if (cVar5 == '\0') {
        auVar65._0_4_ = *puVar30;
        auVar65._4_4_ = puVar30[8];
        auVar65._8_4_ = puVar30[0x10];
        pfVar41 = (float *)(puVar30 + 4);
        pfVar37 = (float *)(puVar30 + 0xc);
        pfVar38 = (float *)(puVar30 + 0x14);
      }
      else if (cVar5 == '\x01') {
        pfVar41 = (float *)(puVar30 + 5);
        auVar65._0_4_ = puVar30[1];
        auVar65._4_4_ = puVar30[9];
        auVar65._8_4_ = puVar30[0x11];
        pfVar37 = (float *)(puVar30 + 0xd);
        pfVar38 = (float *)(puVar30 + 0x15);
      }
      else if (cVar5 == 2) {
        pfVar41 = (float *)(puVar30 + 6);
        auVar65._0_4_ = puVar30[2];
        auVar65._4_4_ = puVar30[10];
        auVar65._8_4_ = puVar30[0x12];
        pfVar37 = (float *)(puVar30 + 0xe);
        pfVar38 = (float *)(puVar30 + 0x16);
      }
      else {
        pfVar41 = (float *)(puVar30 + 7);
        auVar65._0_4_ = puVar30[3];
        auVar65._4_4_ = puVar30[0xb];
        auVar65._8_4_ = puVar30[0x13];
        pfVar37 = (float *)(puVar30 + 0xf);
        pfVar38 = (float *)(puVar30 + 0x17);
      }
      if (puVar30[(long)(int)cVar5 + 0x18] == 0) {
        iVar61 = -(uint)(*pfVar41 < auVar65._0_4_);
        iVar76 = -(uint)(*pfVar37 < auVar65._4_4_);
        iVar113 = -(uint)(*pfVar38 < auVar65._8_4_);
        if (CONCAT13((byte)((uint)iVar76 >> 0x18) | (byte)((uint)iVar61 >> 0x18) |
                     (byte)((uint)iVar113 >> 0x18),
                     CONCAT12((byte)((uint)iVar76 >> 0x10) | (byte)((uint)iVar61 >> 0x10) |
                              (byte)((uint)iVar113 >> 0x10),
                              CONCAT11((byte)((uint)iVar76 >> 8) | (byte)((uint)iVar61 >> 8) |
                                       (byte)((uint)iVar113 >> 8),
                                       (byte)iVar76 | (byte)iVar61 | (byte)iVar113))) != 0) {
          if (cVar6 == '\0') {
            auVar70._4_4_ = fVar98;
            auVar70._0_4_ = auVar94._0_4_;
            auVar70._8_8_ = uVar29 & 0xffffffff;
            pauVar24 = pauVar26 + 1;
            pauVar33 = pauVar26 + 3;
            pauVar35 = pauVar26 + 5;
          }
          else if (cVar6 == '\x01') {
            pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 4);
            auVar70._0_4_ = *(undefined4 *)(*pauVar26 + 4);
            auVar70._4_4_ = *(undefined4 *)(pauVar26[2] + 4);
            auVar70._8_4_ = *(undefined4 *)(pauVar26[4] + 4);
            auVar70._12_4_ = 0;
            pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 4);
            pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 4);
          }
          else if (cVar6 == '\x02') {
            pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 8);
            auVar70._0_4_ = *(undefined4 *)(*pauVar26 + 8);
            auVar70._4_4_ = *(undefined4 *)(pauVar26[2] + 8);
            auVar70._8_4_ = *(undefined4 *)(pauVar26[4] + 8);
            auVar70._12_4_ = 0;
            pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 8);
            pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 8);
          }
          else {
            pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 0xc);
            auVar70._0_4_ = *(undefined4 *)(*pauVar26 + 0xc);
            auVar70._4_4_ = *(undefined4 *)(pauVar26[2] + 0xc);
            auVar70._8_4_ = *(undefined4 *)(pauVar26[4] + 0xc);
            auVar70._12_4_ = 0;
            pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 0xc);
            pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
          }
          auVar49._0_4_ = *(undefined4 *)*pauVar24;
          uVar82 = *(undefined8 *)(*param_2 + 8);
          auVar8[9] = (char)((ulong)uVar82 >> 8);
          auVar8._0_9_ = *(unkbyte9 *)*param_2;
          auVar8[10] = (char)((ulong)uVar82 >> 0x10);
          auVar8[0xb] = (char)((ulong)uVar82 >> 0x18);
          auVar8[0xc] = (char)((ulong)uVar82 >> 0x20);
          auVar8[0xd] = (char)((ulong)uVar82 >> 0x28);
          auVar8[0xe] = (char)((ulong)uVar82 >> 0x30);
          auVar8[0xf] = (char)((ulong)uVar82 >> 0x38);
          auVar100 = NEON_fmin(auVar70,auVar8,4);
          uVar59 = auVar100._0_4_;
          auVar49._4_4_ = *(undefined4 *)*pauVar33;
          auVar49._8_4_ = *(undefined4 *)*pauVar35;
          auVar49._12_4_ = 0;
          auVar10._12_4_ = (int)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
          auVar10._0_12_ = *(undefined1 (*) [12])param_2[1];
          auVar93 = NEON_fmax(auVar49,auVar10,4);
          uVar102 = auVar100._4_4_;
          uVar57 = auVar93._0_4_;
          uVar58 = auVar93._4_4_;
          if (cVar6 == '\0') {
            *(undefined4 *)*pauVar26 = uVar59;
            *(undefined4 *)pauVar26[1] = uVar57;
            *(undefined4 *)pauVar26[2] = uVar102;
            *(undefined4 *)pauVar26[3] = uVar58;
            pauVar24 = pauVar26 + 4;
            pauVar26 = pauVar26 + 5;
          }
          else if (cVar6 == '\x01') {
            *(undefined4 *)(*pauVar26 + 4) = uVar59;
            *(undefined4 *)(pauVar26[1] + 4) = uVar57;
            *(undefined4 *)(pauVar26[2] + 4) = uVar102;
            *(undefined4 *)(pauVar26[3] + 4) = uVar58;
            pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 4);
            pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 4);
          }
          else if (cVar6 == '\x02') {
            *(undefined4 *)(*pauVar26 + 8) = uVar59;
            *(undefined4 *)(pauVar26[1] + 8) = uVar57;
            *(undefined4 *)(pauVar26[2] + 8) = uVar102;
            *(undefined4 *)(pauVar26[3] + 8) = uVar58;
            pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 8);
            pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 8);
          }
          else {
            *(undefined4 *)(*pauVar26 + 0xc) = uVar59;
            *(undefined4 *)(pauVar26[1] + 0xc) = uVar57;
            *(undefined4 *)(pauVar26[2] + 0xc) = uVar102;
            *(undefined4 *)(pauVar26[3] + 0xc) = uVar58;
            pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 0xc);
            pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
          }
          *(int *)*pauVar24 = auVar100._8_4_;
          *(int *)*pauVar26 = auVar93._8_4_;
          uVar57 = *(undefined4 *)*param_2;
          if (cVar5 == '\0') {
            *puVar30 = uVar57;
            puVar30[4] = *(undefined4 *)param_2[1];
            puVar30[8] = *(undefined4 *)(*param_2 + 4);
            puVar30[0xc] = *(undefined4 *)(param_2[1] + 4);
            puVar30[0x10] = *(undefined4 *)(*param_2 + 8);
            puVar27 = puVar30 + 0x14;
          }
          else if (cVar5 == '\x01') {
            puVar30[1] = uVar57;
            puVar30[5] = *(undefined4 *)param_2[1];
            puVar30[9] = *(undefined4 *)(*param_2 + 4);
            puVar30[0xd] = *(undefined4 *)(param_2[1] + 4);
            puVar30[0x11] = *(undefined4 *)(*param_2 + 8);
            puVar27 = puVar30 + 0x15;
          }
          else if (cVar5 == '\x02') {
            puVar30[2] = uVar57;
            puVar30[6] = *(undefined4 *)param_2[1];
            puVar30[10] = *(undefined4 *)(*param_2 + 4);
            puVar30[0xe] = *(undefined4 *)(param_2[1] + 4);
            puVar30[0x12] = *(undefined4 *)(*param_2 + 8);
            puVar27 = puVar30 + 0x16;
          }
          else {
            puVar30[3] = uVar57;
            puVar30[7] = *(undefined4 *)param_2[1];
            puVar30[0xb] = *(undefined4 *)(*param_2 + 4);
            puVar30[0xf] = *(undefined4 *)(param_2[1] + 4);
            puVar30[0x13] = *(undefined4 *)(*param_2 + 8);
            puVar27 = puVar30 + 0x17;
          }
          *puVar27 = *(undefined4 *)(param_2[1] + 8);
          puVar30[(long)(int)cVar5 + 0x18] = param_3;
          goto LAB_032587dc;
        }
      }
      iVar61 = (int)param_1[1];
      uVar57 = *(undefined4 *)*param_2;
      local_510 = CONCAT44(0xff7fffee,*(undefined4 *)param_2[1]);
      local_520 = CONCAT44(0x7f7fffee,*(undefined4 *)(*param_2 + 4));
      local_530 = CONCAT44(0xff7fffee,*(undefined4 *)(param_2[1] + 4));
      uVar58 = *(undefined4 *)(*param_2 + 8);
      uVar59 = *(undefined4 *)(param_2[1] + 8);
      if (cVar6 == '\0') {
        auVar69._4_12_ = SUB1612(ZEXT816(0),4);
        auVar69._0_4_ = (float)uVar29;
        auVar97._4_4_ = fVar98;
        auVar97._0_4_ = auVar94._0_4_;
        auVar97._8_8_ = auVar69._0_8_;
        pauVar24 = pauVar26 + 1;
        pauVar33 = pauVar26 + 3;
        pauVar35 = pauVar26 + 5;
      }
      else if (cVar6 == '\x01') {
        pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 4);
        auVar97._0_4_ = *(undefined4 *)(*pauVar26 + 4);
        auVar97._4_4_ = *(undefined4 *)(pauVar26[2] + 4);
        auVar97._8_4_ = *(undefined4 *)(pauVar26[4] + 4);
        auVar97._12_4_ = 0;
        pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 4);
        pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 4);
      }
      else if (cVar6 == '\x02') {
        pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 8);
        auVar97._0_4_ = *(undefined4 *)(*pauVar26 + 8);
        auVar97._4_4_ = *(undefined4 *)(pauVar26[2] + 8);
        auVar97._8_4_ = *(undefined4 *)(pauVar26[4] + 8);
        auVar97._12_4_ = 0;
        pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 8);
        pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 8);
      }
      else {
        pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 0xc);
        auVar97._0_4_ = *(undefined4 *)(*pauVar26 + 0xc);
        auVar97._4_4_ = *(undefined4 *)(pauVar26[2] + 0xc);
        auVar97._8_4_ = *(undefined4 *)(pauVar26[4] + 0xc);
        auVar97._12_4_ = 0;
        pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 0xc);
        pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
      }
      uVar99 = *(undefined4 *)*pauVar24;
      uVar103 = *(undefined4 *)*pauVar33;
      uVar90 = *(undefined4 *)*pauVar35;
      uVar12 = *(undefined8 *)(*param_2 + 8);
      uVar11 = *(undefined8 *)*param_2;
      uVar9 = *(undefined8 *)(param_2[1] + 8);
      uVar82 = *(undefined8 *)param_2[1];
      auVar17._12_4_ = (int)((ulong)uVar12 >> 0x20);
      auVar17._0_12_ = *(undefined1 (*) [12])*param_2;
      auVar100 = NEON_fmin(auVar97,auVar17,4);
      uVar60 = auVar100._0_4_;
      auVar48._4_4_ = uVar103;
      auVar48._0_4_ = uVar99;
      auVar48._8_4_ = uVar90;
      auVar48._12_4_ = 0;
      auVar16._12_4_ = (int)((ulong)uVar9 >> 0x20);
      auVar16._0_12_ = *(undefined1 (*) [12])param_2[1];
      auVar93 = NEON_fmax(auVar48,auVar16,4);
      uVar75 = auVar100._4_4_;
      uVar102 = auVar93._0_4_;
      uVar51 = auVar93._4_4_;
      if (cVar6 == '\0') {
        *(undefined4 *)*pauVar26 = uVar60;
        *(undefined4 *)pauVar26[1] = uVar102;
        *(undefined4 *)pauVar26[2] = uVar75;
        *(undefined4 *)pauVar26[3] = uVar51;
        pauVar24 = pauVar26 + 4;
        pauVar26 = pauVar26 + 5;
      }
      else if (cVar6 == '\x01') {
        *(undefined4 *)(*pauVar26 + 4) = uVar60;
        *(undefined4 *)(pauVar26[1] + 4) = uVar102;
        *(undefined4 *)(pauVar26[2] + 4) = uVar75;
        *(undefined4 *)(pauVar26[3] + 4) = uVar51;
        pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 4);
        pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 4);
      }
      else if (cVar6 == '\x02') {
        *(undefined4 *)(*pauVar26 + 8) = uVar60;
        *(undefined4 *)(pauVar26[1] + 8) = uVar102;
        *(undefined4 *)(pauVar26[2] + 8) = uVar75;
        *(undefined4 *)(pauVar26[3] + 8) = uVar51;
        pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 8);
        pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 8);
      }
      else {
        *(undefined4 *)(*pauVar26 + 0xc) = uVar60;
        *(undefined4 *)(pauVar26[1] + 0xc) = uVar102;
        *(undefined4 *)(pauVar26[2] + 0xc) = uVar75;
        *(undefined4 *)(pauVar26[3] + 0xc) = uVar51;
        pauVar24 = (undefined1 (*) [16])(pauVar26[4] + 0xc);
        pauVar26 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
      }
      *(int *)*pauVar24 = auVar100._8_4_;
      *(int *)*pauVar26 = auVar93._8_4_;
      uVar43 = *(uint *)(param_1 + 1);
      uVar53 = *(uint *)((long)param_1 + 0xc);
      if (*(uint *)((long)param_1 + 0xc) == 0) {
        *(uint *)((long)param_1 + 0xc) = uVar43;
        uVar53 = uVar43;
      }
      puVar21 = PTR_DAT_047d1a08;
      if ((int)uVar43 < (int)(uVar53 & 0x7fffffff)) {
        lVar25 = *param_1;
      }
      else {
        uVar53 = uVar43 | (int)uVar43 >> 0x10;
        uVar53 = uVar53 | (int)uVar53 >> 8;
        uVar53 = uVar53 | (int)uVar53 >> 4;
        uVar53 = uVar53 | (int)uVar53 >> 2;
        uVar53 = uVar53 | (int)uVar53 >> 1;
        if ((int)uVar53 < (int)uVar43) goto LAB_03259270;
        uVar53 = uVar53 + 1;
        local_490[0] = -(ulong)(uVar53 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar53 << 7;
        pvVar23 = (void *)(**(code **)PTR_DAT_047d1a08)(0,local_490,0);
        pvVar2 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar2 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar23,pvVar2,(long)(int)param_1[1] << 7);
        if (*(int *)((long)param_1 + 0xc) < 0) {
          lVar25 = 0;
          if (*param_1 != 0) {
            lVar25 = *param_1 + (long)param_1;
          }
          (**(code **)(puVar21 + 8))(0,lVar25,0);
        }
        lVar25 = 0;
        if (pvVar23 != (void *)0x0) {
          lVar25 = (long)pvVar23 - (long)param_1;
        }
        *(uint *)((long)param_1 + 0xc) = uVar53 | 0x80000000;
        *param_1 = lVar25;
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)(int)uVar43 * 0x80 + lVar25);
      *(uint *)(param_1 + 1) = uVar43 + 1;
      *(int *)(puVar1 + 0xc) = iVar61;
      *(int *)((long)puVar1 + 100) = iVar61 + 1;
      puVar1[0xd] = 0;
      puVar1[1] = 0x7f7fffee7f7fffee;
      *puVar1 = CONCAT44((int)uVar11,auVar97._0_4_);
      puVar1[3] = 0xff7fffeeff7fffee;
      puVar1[2] = CONCAT17((char)((ulong)uVar82 >> 0x18),
                           CONCAT16((char)((ulong)uVar82 >> 0x10),
                                    CONCAT15((char)((ulong)uVar82 >> 8),
                                             CONCAT14((char)uVar82,uVar99))));
      *(undefined1 *)(puVar1 + 0xe) = 0;
      puVar1[5] = 0x7f7fffee7f7fffee;
      puVar1[4] = CONCAT44((int)((ulong)uVar11 >> 0x20),auVar97._4_4_);
      puVar1[7] = 0xff7fffeeff7fffee;
      puVar1[6] = CONCAT44((int)((ulong)uVar82 >> 0x20),uVar103);
      puVar1[9] = 0x7f7fffee7f7fffee;
      puVar1[8] = CONCAT44((int)uVar12,auVar97._8_4_);
      puVar1[0xb] = 0xff7fffeeff7fffee;
      puVar1[10] = CONCAT17((char)((ulong)uVar9 >> 0x18),
                            CONCAT16((char)((ulong)uVar9 >> 0x10),
                                     CONCAT15((char)((ulong)uVar9 >> 8),CONCAT14((char)uVar9,uVar90)
                                             )));
      uVar43 = *(uint *)(param_1 + 1);
      uVar53 = *(uint *)((long)param_1 + 0xc);
      if (*(uint *)((long)param_1 + 0xc) == 0) {
        *(uint *)((long)param_1 + 0xc) = uVar43;
        uVar53 = uVar43;
      }
      puVar21 = PTR_DAT_047d1a08;
      if ((int)uVar43 < (int)(uVar53 & 0x7fffffff)) {
        lVar25 = *param_1;
      }
      else {
        uVar53 = uVar43 | (int)uVar43 >> 0x10;
        uVar53 = uVar53 | (int)uVar53 >> 8;
        uVar53 = uVar53 | (int)uVar53 >> 4;
        uVar53 = uVar53 | (int)uVar53 >> 2;
        uVar53 = uVar53 | (int)uVar53 >> 1;
        if ((int)uVar53 < (int)uVar43) goto LAB_03259270;
        uVar53 = uVar53 + 1;
        local_490[0] = -(ulong)(uVar53 >> 0x1f) & 0xffffff8000000000 | (ulong)uVar53 << 7;
        pvVar23 = (void *)(**(code **)PTR_DAT_047d1a08)(0,local_490,0);
        pvVar2 = (void *)0x0;
        if (*param_1 != 0) {
          pvVar2 = (void *)(*param_1 + (long)param_1);
        }
        memcpy(pvVar23,pvVar2,(long)(int)param_1[1] << 7);
        if (*(int *)((long)param_1 + 0xc) < 0) {
          lVar25 = 0;
          if (*param_1 != 0) {
            lVar25 = *param_1 + (long)param_1;
          }
          (**(code **)(puVar21 + 8))(0,lVar25,0);
        }
        lVar25 = 0;
        if (pvVar23 != (void *)0x0) {
          lVar25 = (long)pvVar23 - (long)param_1;
        }
        *(uint *)((long)param_1 + 0xc) = uVar53 | 0x80000000;
        *param_1 = lVar25;
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)(int)uVar43 * 0x80 + lVar25);
      *(uint *)(param_1 + 1) = uVar43 + 1;
      puVar1[1] = 0x7f7fffee7f7fffee;
      *puVar1 = CONCAT44(0x7f7fffee,uVar57);
      puVar1[3] = 0xff7fffeeff7fffee;
      puVar1[2] = local_510;
      *(int *)(puVar1 + 0xc) = param_3;
      puVar1[5] = 0x7f7fffee7f7fffee;
      puVar1[4] = local_520;
      puVar1[7] = 0xff7fffeeff7fffee;
      puVar1[6] = local_530;
      *(undefined8 *)((long)puVar1 + 100) = 0xffffffffffffffff;
      *(undefined4 *)((long)puVar1 + 0x6c) = 0xffffffff;
      puVar1[9] = 0x7f7fffee7f7fffee;
      puVar1[8] = CONCAT44(0x7f7fffee,uVar58);
      puVar1[0xb] = 0xff7fffeeff7fffee;
      puVar1[10] = CONCAT44(0xff7fffee,uVar59);
      *(undefined1 *)(puVar1 + 0xe) = 1;
      puVar1 = (undefined8 *)((long)param_1 + (long)iVar104 * 0x80 + *param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[2];
      uVar39 = puVar1[3];
      pauVar26 = (undefined1 (*) [16])((long)param_1 + (long)iVar61 * 0x80 + *param_1);
      uVar57 = *(undefined4 *)(pauVar26[6] + 8);
      uVar58 = *(undefined4 *)(pauVar26[6] + 0xc);
      auVar93 = *pauVar26;
      uVar9 = *(undefined8 *)(pauVar26[1] + 8);
      uVar82 = *(undefined8 *)pauVar26[1];
      *(undefined8 *)(*pauVar26 + 8) = puVar1[1];
      *(undefined8 *)*pauVar26 = uVar11;
      *(undefined8 *)(pauVar26[1] + 8) = uVar39;
      *(undefined8 *)pauVar26[1] = uVar12;
      uVar39 = puVar1[4];
      uVar19 = puVar1[6];
      uVar20 = puVar1[7];
      uVar31 = *(undefined8 *)pauVar26[6];
      uVar3 = pauVar26[7][0];
      uVar12 = *(undefined8 *)(pauVar26[2] + 8);
      uVar11 = *(undefined8 *)pauVar26[2];
      uVar92 = *(undefined8 *)(pauVar26[3] + 8);
      uVar91 = *(undefined8 *)pauVar26[3];
      *(undefined8 *)(pauVar26[2] + 8) = puVar1[5];
      *(undefined8 *)pauVar26[2] = uVar39;
      *(undefined8 *)(pauVar26[3] + 8) = uVar20;
      *(undefined8 *)pauVar26[3] = uVar19;
      uVar39 = puVar1[8];
      auVar100 = *(undefined1 (*) [16])(puVar1 + 10);
      auVar96 = pauVar26[4];
      auVar67 = pauVar26[5];
      *(undefined8 *)(pauVar26[4] + 8) = puVar1[9];
      *(undefined8 *)pauVar26[4] = uVar39;
      *(long *)(pauVar26[5] + 8) = auVar100._8_8_;
      *(long *)pauVar26[5] = auVar100._0_8_;
      uVar4 = *(undefined2 *)(puVar1 + 0xe);
      *(undefined8 *)(pauVar26[6] + 8) = puVar1[0xd];
      uVar39 = puVar1[0xc];
      *(undefined2 *)pauVar26[7] = uVar4;
      *(undefined8 *)pauVar26[6] = uVar39;
      puVar1[0xc] = uVar31;
      puVar1[1] = auVar93._8_8_;
      *puVar1 = auVar93._0_8_;
      puVar1[3] = uVar9;
      puVar1[2] = uVar82;
      *(undefined4 *)(puVar1 + 0xd) = uVar57;
      *(undefined4 *)((long)puVar1 + 0x6c) = uVar58;
      puVar1[5] = uVar12;
      puVar1[4] = uVar11;
      puVar1[7] = uVar92;
      puVar1[6] = uVar91;
      *(undefined1 *)(puVar1 + 0xe) = uVar3;
      puVar1[9] = auVar96._8_8_;
      puVar1[8] = auVar96._0_8_;
      puVar1[0xb] = auVar67._8_8_;
      puVar1[10] = auVar67._0_8_;
LAB_032587dc:
      if (uVar40 < 0x52) {
        return;
      }
      local_490[0] = CONCAT44(local_490[0]._4_4_,1);
      pfVar41 = (float *)((ulong)local_490 | 4);
      iVar104 = 0;
      fVar42 = 0.0;
      local_90 = pfVar41;
      do {
        lVar25 = (long)(int)local_90[-1] * 0x80 + *param_1;
        fVar50 = *(float *)((long)param_1 + lVar25 + 0x60);
        if (*(char *)((long)param_1 + lVar25 + 0x70) == '\0') {
          pfVar37 = local_90 + -1;
          if (fVar50 != 0.0) {
            local_90[-1] = fVar50;
            pfVar37 = local_90;
          }
          local_90 = pfVar37;
          fVar50 = *(float *)((long)param_1 + lVar25 + 100);
          if (fVar50 != 0.0) {
            *local_90 = fVar50;
            local_90 = local_90 + 1;
          }
          fVar50 = *(float *)((long)param_1 + lVar25 + 0x68);
          if (fVar50 != 0.0) {
            *local_90 = fVar50;
            local_90 = local_90 + 1;
          }
          fVar50 = *(float *)((long)param_1 + lVar25 + 0x6c);
          if (fVar50 != 0.0) {
            *local_90 = fVar50;
            local_90 = local_90 + 1;
          }
        }
        else {
          if (fVar50 != -NAN) {
            iVar104 = iVar104 + 1;
          }
          if ((int)fVar42 <= (int)fVar50 && fVar50 != -NAN) {
            fVar42 = fVar50;
          }
          fVar50 = *(float *)((long)param_1 + lVar25 + 100);
          fVar54 = *(float *)((long)param_1 + lVar25 + 0x68);
          fVar52 = *(float *)((long)param_1 + lVar25 + 0x6c);
          if (fVar50 != -NAN) {
            iVar104 = iVar104 + 1;
          }
          if ((int)fVar42 <= (int)fVar50 && fVar50 != -NAN) {
            fVar42 = fVar50;
          }
          if (fVar54 != -NAN) {
            iVar104 = iVar104 + 1;
          }
          if ((int)fVar42 <= (int)fVar54 && fVar54 != -NAN) {
            fVar42 = fVar54;
          }
          fVar50 = fVar42;
          if ((int)fVar42 <= (int)fVar52) {
            fVar50 = fVar52;
          }
          if (fVar52 != -NAN) {
            iVar104 = iVar104 + 1;
            fVar42 = fVar50;
          }
          local_90 = local_90 + -1;
        }
      } while ((float *)local_490 != local_90);
      if ((int)fVar42 < 0) {
        lVar25 = 0;
        uVar40 = 0x80000000;
      }
      else {
        uVar40 = (int)fVar42 + 1;
        lVar25 = (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x18))
                           (PTR_PTR_047d1a50 + 0x20,(ulong)uVar40 << 5);
      }
      local_4d0 = 0;
      local_4e0 = PTR_DAT_047d1a40 + 0x10;
      uStack_4d8 = 0;
      local_4c8 = 1;
      local_4c4 = 1;
      local_4b8 = 0;
      local_4b0._0_4_ = 0;
      local_4b0._4_4_ = 0x80000000;
      local_4c3 = 0;
      local_498 = 0;
      local_4a8 = 0;
      local_4a0 = 0x8000000000000000;
      if (0 < iVar104) {
        FUN_02e7ff18(&local_4b8,PTR_PTR_047d1a50,iVar104);
      }
      puVar21 = PTR_PTR_047d1a50;
      local_490[0] = CONCAT44(local_490[0]._4_4_,1);
      local_90 = pfVar41;
      do {
        pfVar37 = local_90 + -1;
        pfVar41 = (float *)((long)param_1 + (long)(int)local_90[-1] * 0x80 + *param_1);
        if (*(char *)(pfVar41 + 0x1c) == '\0') {
          if (pfVar41[0x18] != 0.0) {
            local_90[-1] = pfVar41[0x18];
            pfVar37 = local_90;
          }
          local_90 = pfVar37;
          if (pfVar41[0x19] != 0.0) {
            *local_90 = pfVar41[0x19];
            local_90 = local_90 + 1;
          }
          if (pfVar41[0x1a] != 0.0) {
            *local_90 = pfVar41[0x1a];
            local_90 = local_90 + 1;
          }
          if (pfVar41[0x1b] != 0.0) {
            *local_90 = pfVar41[0x1b];
            local_90 = local_90 + 1;
          }
        }
        else {
          fVar42 = pfVar41[0x18];
          local_90 = pfVar37;
          if (fVar42 != -NAN) {
            fVar54 = *pfVar41;
            fVar62 = pfVar41[0x10];
            fVar52 = pfVar41[8];
            fVar63 = pfVar41[4];
            fVar77 = pfVar41[0xc];
            puVar1 = (undefined8 *)(lVar25 + (long)(int)fVar42 * 0x20);
            fVar50 = pfVar41[0x14];
            *(float *)(puVar1 + 1) = fVar62;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            *puVar1 = CONCAT44(fVar52,fVar54);
            puVar1[3] = (ulong)(uint)fVar50;
            puVar1[2] = CONCAT44(fVar77,fVar63);
            lVar28 = (long)(int)local_4b0;
            fVar54 = (fVar54 + fVar63) * 0.5;
            fVar52 = (fVar52 + fVar77) * 0.5;
            fVar50 = (fVar62 + fVar50) * 0.5;
            if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
              FUN_02eaf0f8(&local_4b8,puVar21,lVar28 + 1);
            }
            uVar43 = (uint)((int)fVar54 >> 0x1f) >> 1;
            uVar53 = (uint)((int)fVar52 >> 0x1f) >> 1;
            uVar55 = (uint)((int)fVar50 >> 0x1f) >> 1;
            puVar1 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x10);
            bVar56 = (byte)((uint)fVar54 >> 0x18);
            bVar71 = (byte)((uint)fVar52 >> 0x18);
            auVar44._0_8_ =
                 CONCAT17((byte)((char)bVar71 >> 7) >> 1 ^ bVar71,
                          CONCAT16((byte)(uVar53 >> 0x10) ^ (byte)((uint)fVar52 >> 0x10),
                                   CONCAT15((byte)(uVar53 >> 8) ^ (byte)((uint)fVar52 >> 8),
                                            CONCAT14((byte)uVar53 ^ SUB41(fVar52,0),
                                                     CONCAT13((byte)((char)bVar56 >> 7) >> 1 ^
                                                              bVar56,CONCAT12((byte)(uVar43 >> 0x10)
                                                                              ^ (byte)((uint)fVar54
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar43
                                                                                             >> 8) ^
                                                                                       (byte)((uint)
                                                  fVar54 >> 8),(byte)uVar43 ^ SUB41(fVar54,0))))))))
            ;
            auVar44[8] = (byte)uVar55 ^ SUB41(fVar50,0);
            auVar44[9] = (byte)(uVar55 >> 8) ^ (byte)((uint)fVar50 >> 8);
            auVar44[10] = (byte)(uVar55 >> 0x10) ^ (byte)((uint)fVar50 >> 0x10);
            bVar56 = (byte)((uint)fVar50 >> 0x18);
            auVar44[0xb] = (byte)((char)bVar56 >> 7) >> 1 ^ bVar56;
            puVar1[1] = (ulong)auVar44._8_4_;
            *puVar1 = auVar44._0_8_;
            *(float *)((long)puVar1 + 0xc) = fVar42;
            local_4b0._0_4_ = (int)(lVar28 + 1);
          }
          fVar42 = pfVar41[0x19];
          if (fVar42 != -NAN) {
            fVar54 = pfVar41[1];
            fVar62 = pfVar41[0x11];
            fVar52 = pfVar41[9];
            fVar63 = pfVar41[5];
            fVar50 = pfVar41[0x15];
            puVar1 = (undefined8 *)(lVar25 + (long)(int)fVar42 * 0x20);
            fVar77 = pfVar41[0xd];
            *(float *)(puVar1 + 1) = fVar62;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            *puVar1 = CONCAT44(fVar52,fVar54);
            puVar1[3] = (ulong)(uint)fVar50;
            puVar1[2] = CONCAT44(fVar77,fVar63);
            lVar28 = (long)(int)local_4b0;
            fVar54 = (fVar54 + fVar63) * 0.5;
            fVar52 = (fVar52 + fVar77) * 0.5;
            fVar50 = (fVar62 + fVar50) * 0.5;
            if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
              FUN_02eaf0f8(&local_4b8,puVar21,lVar28 + 1);
            }
            uVar43 = (uint)((int)fVar54 >> 0x1f) >> 1;
            uVar53 = (uint)((int)fVar52 >> 0x1f) >> 1;
            uVar55 = (uint)((int)fVar50 >> 0x1f) >> 1;
            puVar1 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x10);
            bVar56 = (byte)((uint)fVar54 >> 0x18);
            bVar71 = (byte)((uint)fVar52 >> 0x18);
            auVar45._0_8_ =
                 CONCAT17((byte)((char)bVar71 >> 7) >> 1 ^ bVar71,
                          CONCAT16((byte)(uVar53 >> 0x10) ^ (byte)((uint)fVar52 >> 0x10),
                                   CONCAT15((byte)(uVar53 >> 8) ^ (byte)((uint)fVar52 >> 8),
                                            CONCAT14((byte)uVar53 ^ SUB41(fVar52,0),
                                                     CONCAT13((byte)((char)bVar56 >> 7) >> 1 ^
                                                              bVar56,CONCAT12((byte)(uVar43 >> 0x10)
                                                                              ^ (byte)((uint)fVar54
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar43
                                                                                             >> 8) ^
                                                                                       (byte)((uint)
                                                  fVar54 >> 8),(byte)uVar43 ^ SUB41(fVar54,0))))))))
            ;
            auVar45[8] = (byte)uVar55 ^ SUB41(fVar50,0);
            auVar45[9] = (byte)(uVar55 >> 8) ^ (byte)((uint)fVar50 >> 8);
            auVar45[10] = (byte)(uVar55 >> 0x10) ^ (byte)((uint)fVar50 >> 0x10);
            bVar56 = (byte)((uint)fVar50 >> 0x18);
            auVar45[0xb] = (byte)((char)bVar56 >> 7) >> 1 ^ bVar56;
            puVar1[1] = (ulong)auVar45._8_4_;
            *puVar1 = auVar45._0_8_;
            *(float *)((long)puVar1 + 0xc) = fVar42;
            local_4b0._0_4_ = (int)(lVar28 + 1);
          }
          fVar42 = pfVar41[0x1a];
          if (fVar42 != -NAN) {
            fVar54 = pfVar41[2];
            fVar62 = pfVar41[0x12];
            fVar52 = pfVar41[10];
            fVar63 = pfVar41[6];
            fVar50 = pfVar41[0x16];
            puVar1 = (undefined8 *)(lVar25 + (long)(int)fVar42 * 0x20);
            fVar77 = pfVar41[0xe];
            *(float *)(puVar1 + 1) = fVar62;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            *puVar1 = CONCAT44(fVar52,fVar54);
            puVar1[3] = (ulong)(uint)fVar50;
            puVar1[2] = CONCAT44(fVar77,fVar63);
            lVar28 = (long)(int)local_4b0;
            fVar54 = (fVar54 + fVar63) * 0.5;
            fVar52 = (fVar52 + fVar77) * 0.5;
            fVar50 = (fVar62 + fVar50) * 0.5;
            if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
              FUN_02eaf0f8(&local_4b8,puVar21,lVar28 + 1);
            }
            uVar43 = (uint)((int)fVar54 >> 0x1f) >> 1;
            uVar53 = (uint)((int)fVar52 >> 0x1f) >> 1;
            uVar55 = (uint)((int)fVar50 >> 0x1f) >> 1;
            puVar1 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x10);
            bVar56 = (byte)((uint)fVar54 >> 0x18);
            bVar71 = (byte)((uint)fVar52 >> 0x18);
            auVar46._0_8_ =
                 CONCAT17((byte)((char)bVar71 >> 7) >> 1 ^ bVar71,
                          CONCAT16((byte)(uVar53 >> 0x10) ^ (byte)((uint)fVar52 >> 0x10),
                                   CONCAT15((byte)(uVar53 >> 8) ^ (byte)((uint)fVar52 >> 8),
                                            CONCAT14((byte)uVar53 ^ SUB41(fVar52,0),
                                                     CONCAT13((byte)((char)bVar56 >> 7) >> 1 ^
                                                              bVar56,CONCAT12((byte)(uVar43 >> 0x10)
                                                                              ^ (byte)((uint)fVar54
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar43
                                                                                             >> 8) ^
                                                                                       (byte)((uint)
                                                  fVar54 >> 8),(byte)uVar43 ^ SUB41(fVar54,0))))))))
            ;
            auVar46[8] = (byte)uVar55 ^ SUB41(fVar50,0);
            auVar46[9] = (byte)(uVar55 >> 8) ^ (byte)((uint)fVar50 >> 8);
            auVar46[10] = (byte)(uVar55 >> 0x10) ^ (byte)((uint)fVar50 >> 0x10);
            bVar56 = (byte)((uint)fVar50 >> 0x18);
            auVar46[0xb] = (byte)((char)bVar56 >> 7) >> 1 ^ bVar56;
            puVar1[1] = (ulong)auVar46._8_4_;
            *puVar1 = auVar46._0_8_;
            *(float *)((long)puVar1 + 0xc) = fVar42;
            local_4b0._0_4_ = (int)(lVar28 + 1);
          }
          fVar42 = pfVar41[0x1b];
          if (fVar42 != -NAN) {
            fVar54 = pfVar41[3];
            fVar62 = pfVar41[0x13];
            fVar52 = pfVar41[0xb];
            fVar63 = pfVar41[7];
            fVar50 = pfVar41[0x17];
            puVar1 = (undefined8 *)(lVar25 + (long)(int)fVar42 * 0x20);
            fVar77 = pfVar41[0xf];
            *(float *)(puVar1 + 1) = fVar62;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            *puVar1 = CONCAT44(fVar52,fVar54);
            puVar1[3] = (ulong)(uint)fVar50;
            puVar1[2] = CONCAT44(fVar77,fVar63);
            lVar28 = (long)(int)local_4b0;
            fVar54 = (fVar54 + fVar63) * 0.5;
            fVar52 = (fVar52 + fVar77) * 0.5;
            fVar50 = (fVar62 + fVar50) * 0.5;
            if ((int)(local_4b0._4_4_ & 0x7fffffff) <= (int)local_4b0) {
              FUN_02eaf0f8(&local_4b8,puVar21,lVar28 + 1);
            }
            uVar43 = (uint)((int)fVar54 >> 0x1f) >> 1;
            uVar53 = (uint)((int)fVar52 >> 0x1f) >> 1;
            uVar55 = (uint)((int)fVar50 >> 0x1f) >> 1;
            puVar1 = (undefined8 *)(local_4b8 + (long)(int)local_4b0 * 0x10);
            bVar56 = (byte)((uint)fVar54 >> 0x18);
            bVar71 = (byte)((uint)fVar52 >> 0x18);
            auVar47._0_8_ =
                 CONCAT17((byte)((char)bVar71 >> 7) >> 1 ^ bVar71,
                          CONCAT16((byte)(uVar53 >> 0x10) ^ (byte)((uint)fVar52 >> 0x10),
                                   CONCAT15((byte)(uVar53 >> 8) ^ (byte)((uint)fVar52 >> 8),
                                            CONCAT14((byte)uVar53 ^ SUB41(fVar52,0),
                                                     CONCAT13((byte)((char)bVar56 >> 7) >> 1 ^
                                                              bVar56,CONCAT12((byte)(uVar43 >> 0x10)
                                                                              ^ (byte)((uint)fVar54
                                                                                      >> 0x10),
                                                                              CONCAT11((byte)(uVar43
                                                                                             >> 8) ^
                                                                                       (byte)((uint)
                                                  fVar54 >> 8),(byte)uVar43 ^ SUB41(fVar54,0))))))))
            ;
            auVar47[8] = (byte)uVar55 ^ SUB41(fVar50,0);
            auVar47[9] = (byte)(uVar55 >> 8) ^ (byte)((uint)fVar50 >> 8);
            auVar47[10] = (byte)(uVar55 >> 0x10) ^ (byte)((uint)fVar50 >> 0x10);
            bVar56 = (byte)((uint)fVar50 >> 0x18);
            auVar47[0xb] = (byte)((char)bVar56 >> 7) >> 1 ^ bVar56;
            puVar1[1] = (ulong)auVar47._8_4_;
            *puVar1 = auVar47._0_8_;
            *(float *)((long)puVar1 + 0xc) = fVar42;
            local_4b0._0_4_ = (int)(lVar28 + 1);
          }
        }
      } while ((float *)local_490 != local_90);
      local_80 = PTR_DAT_047e3470 + 0x10;
      uStack_78 = 0;
      local_70 = lVar25;
      FUN_0325109c(&local_4e0,param_1,&local_80);
      uVar29 = local_4a0;
      lVar28 = 0;
      if (*param_1 != 0) {
        lVar28 = *param_1 + (long)param_1;
      }
      iVar104 = (int)param_1[1];
      if (iVar104 != 0) {
        uVar34 = (long)iVar104 * 0x80 - 0x80;
        uVar43 = ((uint)(uVar34 >> 7) & 0x1ffffff) + 1;
        lVar32 = lVar28;
        if ((uVar43 & 7) != 0) {
          lVar36 = -((ulong)uVar43 & 7);
          do {
            *(undefined1 *)(lVar32 + 0x71) = 1;
            lVar32 = lVar32 + 0x80;
            bVar22 = lVar36 != -1;
            lVar36 = lVar36 + 1;
          } while (bVar22);
        }
        if (0x37f < uVar34) {
          do {
            *(undefined1 *)(lVar32 + 0x71) = 1;
            *(undefined1 *)(lVar32 + 0xf1) = 1;
            *(undefined1 *)(lVar32 + 0x171) = 1;
            *(undefined1 *)(lVar32 + 0x1f1) = 1;
            *(undefined1 *)(lVar32 + 0x271) = 1;
            *(undefined1 *)(lVar32 + 0x2f1) = 1;
            *(undefined1 *)(lVar32 + 0x371) = 1;
            *(undefined1 *)(lVar32 + 0x3f1) = 1;
            lVar32 = lVar32 + 0x400;
          } while (lVar28 + (long)iVar104 * 0x80 != lVar32);
        }
      }
      uVar34 = local_4a0 >> 0x20;
      local_4a0 = uVar34 << 0x20;
      local_4e0 = PTR_DAT_047d1a40 + 0x10;
      if ((-1 < (long)uVar29) && (local_4a8 != 0)) {
        (**(code **)(*(long *)puVar21 + 0x20))(puVar21,local_4a8,uVar34 << 5);
      }
      uVar43 = local_4b0._4_4_;
      local_4a0 = CONCAT44(0x80000000,(undefined4)local_4a0);
      uVar29 = (ulong)local_4b0._4_4_;
      local_4a8 = 0;
      local_4b0 = (ulong)local_4b0._4_4_ << 0x20;
      if ((-1 < (int)uVar43) && (local_4b8 != 0)) {
        (**(code **)(*(long *)puVar21 + 0x20))(puVar21,local_4b8,uVar29 << 4);
      }
      if ((lVar25 != 0) && (-1 < (int)uVar40)) {
        (**(code **)(*(long *)(puVar21 + 0x20) + 0x20))(puVar21 + 0x20,lVar25,(ulong)uVar40 << 5);
      }
      if (param_4 == (undefined1 *)0x0) {
        return;
      }
      *param_4 = 1;
      return;
    }
    if (cVar6 == '\0') {
      auVar94._4_4_ = fVar98;
      auVar94._8_8_ = uVar29 & 0xffffffff;
      pauVar24 = pauVar26 + 1;
      pauVar33 = pauVar26 + 3;
      pauVar35 = pauVar26 + 5;
    }
    else if (cVar6 == '\x01') {
      pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 4);
      auVar94._0_4_ = *(float *)(*pauVar26 + 4);
      auVar94._4_4_ = *(undefined4 *)(pauVar26[2] + 4);
      auVar94._8_4_ = *(undefined4 *)(pauVar26[4] + 4);
      auVar94._12_4_ = 0;
      pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 4);
      pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 4);
    }
    else if (cVar6 == '\x02') {
      pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 8);
      auVar94._0_4_ = *(float *)(*pauVar26 + 8);
      auVar94._4_4_ = *(undefined4 *)(pauVar26[2] + 8);
      auVar94._8_4_ = *(undefined4 *)(pauVar26[4] + 8);
      auVar94._12_4_ = 0;
      pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 8);
      pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 8);
    }
    else {
      pauVar33 = (undefined1 (*) [16])(pauVar26[3] + 0xc);
      auVar94._0_4_ = *(float *)(*pauVar26 + 0xc);
      auVar94._4_4_ = *(undefined4 *)(pauVar26[2] + 0xc);
      auVar94._8_4_ = *(undefined4 *)(pauVar26[4] + 0xc);
      auVar94._12_4_ = 0;
      pauVar24 = (undefined1 (*) [16])(pauVar26[1] + 0xc);
      pauVar35 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
    }
    auVar100 = NEON_fmin(auVar94,*param_2,4);
    uVar59 = auVar100._0_4_;
    auVar13._4_4_ = *(undefined4 *)*pauVar33;
    auVar13._0_4_ = *(undefined4 *)*pauVar24;
    auVar13._8_4_ = *(undefined4 *)*pauVar35;
    auVar13._12_4_ = 0;
    auVar14._12_4_ = (int)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
    auVar14._0_12_ = *(undefined1 (*) [12])param_2[1];
    auVar93 = NEON_fmax(auVar13,auVar14,4);
    uVar102 = auVar100._4_4_;
    uVar57 = auVar93._0_4_;
    uVar58 = auVar93._4_4_;
    if (cVar6 == '\0') {
      *(undefined4 *)*pauVar26 = uVar59;
      *(undefined4 *)pauVar26[1] = uVar57;
      *(undefined4 *)pauVar26[2] = uVar102;
      *(undefined4 *)pauVar26[3] = uVar58;
      pauVar24 = pauVar26 + 5;
      *(int *)pauVar26[4] = auVar100._8_4_;
    }
    else {
      if (cVar6 == '\x01') {
        *(undefined4 *)(*pauVar26 + 4) = uVar59;
        *(undefined4 *)(pauVar26[1] + 4) = uVar57;
        *(undefined4 *)(pauVar26[2] + 4) = uVar102;
        *(undefined4 *)(pauVar26[3] + 4) = uVar58;
        puVar30 = (undefined4 *)(pauVar26[4] + 4);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 4);
      }
      else if (cVar6 == '\x02') {
        *(undefined4 *)(*pauVar26 + 8) = uVar59;
        *(undefined4 *)(pauVar26[1] + 8) = uVar57;
        *(undefined4 *)(pauVar26[2] + 8) = uVar102;
        *(undefined4 *)(pauVar26[3] + 8) = uVar58;
        puVar30 = (undefined4 *)(pauVar26[4] + 8);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 8);
      }
      else {
        *(undefined4 *)(*pauVar26 + 0xc) = uVar59;
        *(undefined4 *)(pauVar26[1] + 0xc) = uVar57;
        *(undefined4 *)(pauVar26[2] + 0xc) = uVar102;
        *(undefined4 *)(pauVar26[3] + 0xc) = uVar58;
        puVar30 = (undefined4 *)(pauVar26[4] + 0xc);
        pauVar24 = (undefined1 (*) [16])(pauVar26[5] + 0xc);
      }
      *puVar30 = auVar100._8_4_;
    }
    *(int *)*pauVar24 = auVar93._8_4_;
    uVar40 = uVar40 + 1;
  } while( true );
}


