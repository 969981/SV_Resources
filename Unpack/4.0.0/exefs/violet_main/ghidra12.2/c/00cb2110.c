/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb2110; name: FUN_00cb2110
 */


undefined8 FUN_00cb2110(long param_1)

{
  float *pfVar1;
  long lVar2;
  char cVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  float *pfVar32;
  undefined8 *puVar33;
  unkbyte9 *pVar34;
  float *pfVar35;
  float *pfVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  long lVar43;
  float *pfVar44;
  uint uVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  undefined1 uVar77;
  byte bVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  float fVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar101 [12];
  float fVar105;
  float fVar106;
  int iVar107;
  int iVar108;
  float fVar109;
  undefined1 auVar102 [12];
  int iVar104;
  undefined1 auVar103 [16];
  float fVar110;
  float fVar111;
  undefined1 auVar112 [12];
  undefined1 auVar113 [12];
  float fVar115;
  undefined1 auVar114 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  undefined8 *local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  ulong uStack_668;
  undefined8 *local_660;
  ushort local_658;
  long local_68;
  
  lVar43 = tpidr_el0;
  lVar29 = *(long *)(lVar43 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar43 + 0x1000b8) = lVar29;
  }
  plVar40 = *(long **)(lVar29 + 0x3e0);
  if (plVar40 != (long *)0x0) {
    lVar29 = *plVar40;
    if (*(code **)(lVar29 + 0x18) != (code *)0x0) {
      (**(code **)(lVar29 + 0x18))
                ("hknpCompoundShape::updateCachedBounds()",0x27,*(undefined8 *)(lVar29 + 0x28));
    }
    puVar27 = (undefined8 *)plVar40[2];
    uVar30 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar40[3]) && (plVar40[2] = uVar30, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = "TthknpCompoundShape::updateCachedBounds()";
      uVar26 = nn::os::GetSystemTick();
      puVar27[1] = uVar26;
    }
    if (((*(byte *)(lVar29 + 0x38) & 1) != 0) && (plVar40[6] != 0)) {
      puVar27 = (undefined8 *)plVar40[2];
      uVar30 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar40[3]) && (plVar40[2] = uVar30, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(plVar40[6] + 8);
      }
    }
  }
  cVar3 = *(char *)(param_1 + 0x100);
  if (cVar3 == '\0') {
    uVar26 = 0;
    goto LAB_00cb2ab8;
  }
  if (cVar3 != '\x02') {
    if (cVar3 == '\x01') {
      uVar4 = *(ushort *)(param_1 + 0xe4);
      if (uVar4 == 0) goto LAB_00cb2ab0;
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0xe4);
      if (uVar4 == 0) {
        auVar103 = ZEXT816(0);
        fVar118 = 3.40282e+38;
        auVar114 = ZEXT816(0);
        goto LAB_00cb2a44;
      }
    }
    local_658 = uVar4;
    local_690 = &local_680;
    uStack_688._4_4_ = 0x80000020;
    plVar41 = (long *)(param_1 + 200);
    lVar43 = 0;
    if (*plVar41 != 0) {
      lVar43 = *plVar41 + (long)plVar41;
    }
    local_660 = (undefined8 *)(lVar43 + (ulong)uVar4 * 0x20);
    auVar114._8_4_ = 0xff7fffee;
    auVar114._0_8_ = 0xff7fffeeff7fffee;
    auVar114._12_4_ = 0xff7fffee;
    auVar103._8_4_ = 0x7f7fffee;
    auVar103._0_8_ = 0x7f7fffee7f7fffee;
    auVar103._12_4_ = 0x7f7fffee;
    uStack_668 = local_660[3] & 0xffffffff;
    local_670 = local_660[2];
    iVar91 = 1;
    uStack_678 = local_660[1];
    local_680 = *local_660;
    do {
      uVar30 = (long)iVar91 - 1;
      pVar34 = (unkbyte9 *)(local_690 + uVar30 * 6);
      lVar43 = *(long *)(pVar34 + 2);
      uVar26 = *(undefined8 *)((long)pVar34 + 8);
      uVar28 = *(undefined8 *)((long)pVar34 + 0x18);
      uStack_688._0_4_ = (undefined4)uVar30;
      uVar4 = *(ushort *)(lVar43 + 0x1c);
      if (uVar4 == 0) {
        if ((*(byte *)(param_1 + 0x48 +
                      (ulong)*(ushort *)(lVar43 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) + 0x1e)
             >> 6 & 1) != 0) {
          auVar7[9] = (char)((ulong)uVar26 >> 8);
          auVar7._0_9_ = *pVar34;
          auVar7[10] = (char)((ulong)uVar26 >> 0x10);
          auVar7[0xb] = (char)((ulong)uVar26 >> 0x18);
          auVar7[0xc] = (char)((ulong)uVar26 >> 0x20);
          auVar7[0xd] = (char)((ulong)uVar26 >> 0x28);
          auVar7[0xe] = (char)((ulong)uVar26 >> 0x30);
          auVar7[0xf] = (char)((ulong)uVar26 >> 0x38);
          auVar103 = NEON_fmin(auVar103,auVar7,4);
          auVar16[9] = (char)((ulong)uVar28 >> 8);
          auVar16._0_9_ = pVar34[1];
          auVar16[10] = (char)((ulong)uVar28 >> 0x10);
          auVar16[0xb] = (char)((ulong)uVar28 >> 0x18);
          auVar16[0xc] = (char)((ulong)uVar28 >> 0x20);
          auVar16[0xd] = (char)((ulong)uVar28 >> 0x28);
          auVar16[0xe] = (char)((ulong)uVar28 >> 0x30);
          auVar16[0xf] = (char)((ulong)uVar28 >> 0x38);
          auVar114 = NEON_fmax(auVar114,auVar16,4);
        }
      }
      else {
        if ((int)(uStack_688._4_4_ & 0x7fffffff) <= iVar91) {
          FUN_02eaf268(&local_690,(long)(int)(iVar91 + 1U));
          uVar4 = *(ushort *)(lVar43 + 0x1c);
        }
        puVar27 = local_690 + uVar30 * 6;
        *(ushort *)(puVar27 + 5) = uVar4;
        lVar29 = 0;
        if (*plVar41 != 0) {
          lVar29 = *plVar41 + (long)plVar41;
        }
        puVar33 = (undefined8 *)(lVar29 + (ulong)uVar4 * 0x20);
        puVar27[4] = puVar33;
        uVar26 = puVar33[2];
        puVar27[3] = puVar33[3] & 0xffffffff;
        puVar27[2] = uVar26;
        uVar26 = *puVar33;
        puVar27[1] = puVar33[1];
        *puVar27 = uVar26;
        uVar4 = *(ushort *)(lVar43 + 0x1e);
        *(ushort *)(puVar27 + 0xb) = uVar4;
        lVar43 = 0;
        if (*plVar41 != 0) {
          lVar43 = *plVar41 + (long)plVar41;
        }
        puVar33 = (undefined8 *)(lVar43 + (ulong)uVar4 * 0x20);
        puVar27[10] = puVar33;
        uVar26 = puVar33[2];
        puVar27[9] = puVar33[3] & 0xffffffff;
        puVar27[8] = uVar26;
        uVar26 = *puVar33;
        puVar27[7] = puVar33[1];
        puVar27[6] = uVar26;
        uVar30 = (ulong)(iVar91 + 1U);
      }
      uVar45 = uStack_688._4_4_;
      iVar91 = (int)uVar30;
    } while (iVar91 != 0);
    iVar91 = -(uint)(auVar114._0_4_ < auVar103._0_4_);
    iVar93 = -(uint)(auVar114._4_4_ < auVar103._4_4_);
    iVar95 = -(uint)(auVar114._8_4_ < auVar103._8_4_);
    if (CONCAT13((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar91 >> 0x18) |
                 (byte)((uint)iVar95 >> 0x18),
                 CONCAT12((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar91 >> 0x10) |
                          (byte)((uint)iVar95 >> 0x10),
                          CONCAT11((byte)((uint)iVar93 >> 8) | (byte)((uint)iVar91 >> 8) |
                                   (byte)((uint)iVar95 >> 8),
                                   (byte)iVar93 | (byte)iVar91 | (byte)iVar95))) != 0) {
      if ((ulong)*(ushort *)(param_1 + 0xe4) == 0) {
        uVar68 = 0xee;
        uVar69 = 0xff;
        uVar70 = 0x7f;
        uVar71 = 0x7f;
        uVar79 = 0xee;
        uVar46 = 0xee;
        uVar48 = 0xff;
        uVar50 = 0x7f;
        uVar52 = 0xff;
        uVar61 = 0xee;
        uVar54 = uVar46;
        uVar55 = uVar48;
        uVar58 = uVar50;
        uVar56 = uVar52;
        uVar57 = uVar48;
        uVar59 = uVar50;
        uVar60 = uVar52;
        uVar62 = uVar61;
        uVar64 = uVar48;
        uVar66 = uVar50;
        uVar67 = uVar52;
        uVar72 = uVar68;
        uVar73 = uVar69;
        uVar75 = uVar70;
        uVar77 = uVar71;
        uVar80 = uVar69;
        uVar82 = uVar70;
        uVar84 = uVar71;
        uVar86 = uVar79;
        uVar87 = uVar69;
        uVar88 = uVar70;
        uVar89 = uVar71;
      }
      else {
        lVar43 = 0;
        if (*plVar41 != 0) {
          lVar43 = *plVar41 + (long)plVar41;
        }
        puVar27 = (undefined8 *)(lVar43 + (ulong)*(ushort *)(param_1 + 0xe4) * 0x20);
        uVar24 = puVar27[1];
        uVar79 = (undefined1)uVar24;
        uVar23 = *puVar27;
        uVar68 = (undefined1)uVar23;
        uVar69 = (undefined1)((ulong)uVar23 >> 8);
        uVar70 = (undefined1)((ulong)uVar23 >> 0x10);
        uVar71 = (undefined1)((ulong)uVar23 >> 0x18);
        uVar28 = puVar27[3];
        uVar61 = (undefined1)uVar28;
        uVar26 = puVar27[2];
        uVar46 = (undefined1)uVar26;
        uVar48 = (undefined1)((ulong)uVar26 >> 8);
        uVar50 = (undefined1)((ulong)uVar26 >> 0x10);
        uVar52 = (undefined1)((ulong)uVar26 >> 0x18);
        uVar54 = (char)((ulong)uVar26 >> 0x20);
        uVar55 = (char)((ulong)uVar26 >> 0x28);
        uVar58 = (char)((ulong)uVar26 >> 0x30);
        uVar56 = (char)((ulong)uVar26 >> 0x38);
        uVar57 = (char)((ulong)uVar28 >> 8);
        uVar59 = (char)((ulong)uVar28 >> 0x10);
        uVar60 = (char)((ulong)uVar28 >> 0x18);
        uVar62 = 0;
        uVar64 = 0;
        uVar66 = 0;
        uVar67 = 0;
        uVar72 = (char)((ulong)uVar23 >> 0x20);
        uVar73 = (char)((ulong)uVar23 >> 0x28);
        uVar75 = (char)((ulong)uVar23 >> 0x30);
        uVar77 = (char)((ulong)uVar23 >> 0x38);
        uVar80 = (char)((ulong)uVar24 >> 8);
        uVar82 = (char)((ulong)uVar24 >> 0x10);
        uVar84 = (char)((ulong)uVar24 >> 0x18);
        uVar86 = (char)((ulong)uVar24 >> 0x20);
        uVar87 = (char)((ulong)uVar24 >> 0x28);
        uVar88 = (char)((ulong)uVar24 >> 0x30);
        uVar89 = (char)((ulong)uVar24 >> 0x38);
      }
      fVar118 = ((float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) +
                (float)CONCAT13(uVar71,CONCAT12(uVar70,CONCAT11(uVar69,uVar68)))) * 0.5;
      fVar100 = ((float)CONCAT13(uVar56,CONCAT12(uVar58,CONCAT11(uVar55,uVar54))) +
                (float)CONCAT13(uVar77,CONCAT12(uVar75,CONCAT11(uVar73,uVar72)))) * 0.5;
      uVar54 = (undefined1)((uint)fVar100 >> 8);
      uVar55 = (undefined1)((uint)fVar100 >> 0x10);
      uVar58 = (undefined1)((uint)fVar100 >> 0x18);
      fVar111 = ((float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar57,uVar61))) +
                (float)CONCAT13(uVar84,CONCAT12(uVar82,CONCAT11(uVar80,uVar79)))) * 0.5;
      uVar56 = (undefined1)((uint)fVar111 >> 8);
      uVar57 = (undefined1)((uint)fVar111 >> 0x10);
      uVar59 = (undefined1)((uint)fVar111 >> 0x18);
      fVar13 = ((float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar64,uVar62))) +
               (float)CONCAT13(uVar89,CONCAT12(uVar88,CONCAT11(uVar87,uVar86)))) * 0.5;
      uVar60 = (undefined1)((uint)fVar13 >> 8);
      uVar62 = (undefined1)((uint)fVar13 >> 0x10);
      uVar64 = (undefined1)((uint)fVar13 >> 0x18);
      auVar5[4] = SUB41(fVar100,0);
      auVar5._0_4_ = fVar118;
      auVar5[5] = uVar54;
      auVar5[6] = uVar55;
      auVar5[7] = uVar58;
      auVar5[8] = SUB41(fVar111,0);
      auVar5[9] = uVar56;
      auVar5[10] = uVar57;
      auVar5[0xb] = uVar59;
      auVar5[0xc] = SUB41(fVar13,0);
      auVar5[0xd] = uVar60;
      auVar5[0xe] = uVar62;
      auVar5[0xf] = uVar64;
      auVar103 = NEON_fmin(auVar103,auVar5,4);
      auVar6[4] = SUB41(fVar100,0);
      auVar6._0_4_ = fVar118;
      auVar6[5] = uVar54;
      auVar6[6] = uVar55;
      auVar6[7] = uVar58;
      auVar6[8] = SUB41(fVar111,0);
      auVar6[9] = uVar56;
      auVar6[10] = uVar57;
      auVar6[0xb] = uVar59;
      auVar6[0xc] = SUB41(fVar13,0);
      auVar6[0xd] = uVar60;
      auVar6[0xe] = uVar62;
      auVar6[0xf] = uVar64;
      auVar114 = NEON_fmax(auVar114,auVar6,4);
    }
    uVar30 = (ulong)uStack_688._4_4_;
    uStack_688 = (ulong)uStack_688._4_4_ << 0x20;
    if ((-1 < (int)uVar45) && (local_690 != (undefined8 *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_690,uVar30 * 0x30);
    }
    fVar118 = 3.40282e+38;
    goto LAB_00cb2a44;
  }
  plVar41 = (long *)(param_1 + 0xe8);
  lVar29 = *plVar41;
  uVar28 = *(undefined8 *)((long)plVar41 + lVar29 + 0x88);
  uVar26 = *(undefined8 *)((long)plVar41 + lVar29 + 0x80);
  uVar24 = *(undefined8 *)((long)plVar41 + lVar29 + 0x98);
  uVar23 = *(undefined8 *)((long)plVar41 + lVar29 + 0x90);
  iVar91 = -(uint)((float)uVar26 <= (float)uVar23);
  iVar93 = -(uint)((float)((ulong)uVar26 >> 0x20) <= (float)((ulong)uVar23 >> 0x20));
  iVar95 = -(uint)((float)uVar28 <= (float)uVar24);
  iVar92 = -(uint)((float)((ulong)uVar28 >> 0x20) <= (float)((ulong)uVar24 >> 0x20));
  if (CONCAT13((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar91 >> 0x18) |
               (byte)((uint)iVar95 >> 0x18) | (byte)((uint)iVar92 >> 0x18),
               CONCAT12((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar91 >> 0x10) |
                        (byte)((uint)iVar95 >> 0x10) | (byte)((uint)iVar92 >> 0x10),
                        CONCAT11((byte)((uint)iVar93 >> 8) | (byte)((uint)iVar91 >> 8) |
                                 (byte)((uint)iVar95 >> 8) | (byte)((uint)iVar92 >> 8),
                                 (byte)iVar93 | (byte)iVar91 | (byte)iVar95 | (byte)iVar92))) != 0)
  {
    iVar91 = *(int *)(param_1 + 0x5c);
    lVar29 = *(long *)(lVar43 + 0x1000b8);
    if (lVar29 == 0) {
      lVar29 = FUN_00e5d3b4();
      *(long *)(lVar43 + 0x1000b8) = lVar29;
    }
    lVar43 = (long)iVar91 * 0x10;
    lVar29 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
    local_68 = lVar43;
    if ((*(long *)(lVar29 + 8) == 0) && (lVar29 != 0)) {
      local_690 = (undefined8 *)(lVar43 + 0x3fU & 0xffffffffffffffc0);
      if (local_690 <= *(undefined8 **)(lVar29 + 0x28)) {
        puVar27 = *(undefined8 **)(lVar29 + 0x38);
        if ((ulong)((long)local_690 + (long)puVar27) <= *(ulong *)(lVar29 + 0x40)) {
          *(long *)(lVar29 + 0x38) = (long)local_690 + (long)puVar27;
          goto LAB_00cb256c;
        }
      }
      puVar27 = (undefined8 *)FUN_031cf3b4(lVar29,&local_690);
    }
    else {
      puVar27 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
      lVar29 = 0;
    }
LAB_00cb256c:
    puVar25 = PTR_PTR_047d1bb0;
    pfVar1 = (float *)(*plVar41 + (long)plVar41);
    auVar116._8_4_ = 0xff7fffee;
    auVar116._0_8_ = 0xff7fffeeff7fffee;
    auVar116._12_4_ = 0xff7fffee;
    iVar91 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x20) <= (float)*(undefined8 *)(pfVar1 + 0x24))
    ;
    iVar93 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x20) >> 0x20) <=
                    (float)((ulong)*(undefined8 *)(pfVar1 + 0x24) >> 0x20));
    iVar95 = -(uint)((float)*(undefined8 *)(pfVar1 + 0x22) <= (float)*(undefined8 *)(pfVar1 + 0x26))
    ;
    iVar92 = -(uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x22) >> 0x20) <=
                    (float)((ulong)*(undefined8 *)(pfVar1 + 0x26) >> 0x20));
    auVar117._8_4_ = 0x7f7fffee;
    auVar117._0_8_ = 0x7f7fffee7f7fffee;
    auVar117._12_4_ = 0x7f7fffee;
    if (CONCAT13((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar91 >> 0x18) |
                 (byte)((uint)iVar95 >> 0x18) | (byte)((uint)iVar92 >> 0x18),
                 CONCAT12((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar91 >> 0x10) |
                          (byte)((uint)iVar95 >> 0x10) | (byte)((uint)iVar92 >> 0x10),
                          CONCAT11((byte)((uint)iVar93 >> 8) | (byte)((uint)iVar91 >> 8) |
                                   (byte)((uint)iVar95 >> 8) | (byte)((uint)iVar92 >> 8),
                                   (byte)iVar93 | (byte)iVar91 | (byte)iVar95 | (byte)iVar92))) == 0
       ) {
LAB_00cb28d8:
      uVar45 = 0;
    }
    else {
      pfVar44 = (float *)0x0;
      if (*plVar41 != 0) {
        pfVar44 = pfVar1;
      }
      if (*(int *)(param_1 + 0xf0) == 0) goto LAB_00cb28d8;
      auVar117._8_4_ = 0x7f7fffee;
      auVar117._0_8_ = 0x7f7fffee7f7fffee;
      auVar117._12_4_ = 0x7f7fffee;
      pfVar1 = pfVar44 + (long)*(int *)(param_1 + 0xf0) * 0x20;
      auVar116._8_4_ = 0xff7fffee;
      auVar116._0_8_ = 0xff7fffeeff7fffee;
      auVar116._12_4_ = 0xff7fffee;
      uVar45 = 0;
      do {
        if (*(char *)(pfVar44 + 0x1c) != '\0') {
          lVar42 = 0;
          do {
            if (pfVar44[lVar42 + 0x18] != -NAN) {
              iVar91 = (int)lVar42;
              pfVar32 = pfVar44;
              pfVar35 = pfVar44 + 8;
              pfVar36 = pfVar44 + 0xc;
              pfVar37 = pfVar44 + 4;
              pfVar38 = pfVar44 + 0x14;
              pfVar39 = pfVar44 + 0x10;
              if (iVar91 != 0) {
                pfVar32 = pfVar44 + 2;
                pfVar35 = pfVar44 + 10;
                pfVar36 = pfVar44 + 0xe;
                pfVar37 = pfVar44 + 6;
                pfVar38 = pfVar44 + 0x16;
                pfVar39 = pfVar44 + 0x12;
                if (iVar91 != 2) {
                  pfVar32 = pfVar44 + 1;
                  pfVar35 = pfVar44 + 9;
                  pfVar36 = pfVar44 + 0xd;
                  pfVar37 = pfVar44 + 5;
                  pfVar38 = pfVar44 + 0x15;
                  pfVar39 = pfVar44 + 0x11;
                  if (iVar91 != 1) {
                    pfVar32 = pfVar44 + 3;
                    pfVar35 = pfVar44 + 0xb;
                    pfVar36 = pfVar44 + 0xf;
                    pfVar37 = pfVar44 + 7;
                    pfVar38 = pfVar44 + 0x17;
                    pfVar39 = pfVar44 + 0x13;
                  }
                }
              }
              fVar118 = *pfVar32;
              fVar90 = *pfVar39;
              fVar111 = *pfVar37;
              fVar100 = *pfVar35;
              bVar47 = (byte)((uint)fVar100 >> 8);
              bVar49 = (byte)((uint)fVar100 >> 0x10);
              bVar51 = (byte)((uint)fVar100 >> 0x18);
              fVar97 = *pfVar38;
              fVar13 = *pfVar36;
              bVar74 = (byte)((uint)fVar13 >> 8);
              bVar76 = (byte)((uint)fVar13 >> 0x10);
              bVar78 = (byte)((uint)fVar13 >> 0x18);
              bVar53 = (byte)((uint)fVar90 >> 8);
              bVar63 = (byte)((uint)fVar90 >> 0x10);
              bVar65 = (byte)((uint)fVar90 >> 0x18);
              auVar114 = **(undefined1 (**) [16])puVar25;
              bVar81 = (byte)((uint)fVar97 >> 8);
              bVar83 = (byte)((uint)fVar97 >> 0x10);
              bVar85 = (byte)((uint)fVar97 >> 0x18);
              iVar91 = CONCAT13(auVar114[3] & (byte)((uint)fVar118 >> 0x18),
                                CONCAT12(auVar114[2] & (byte)((uint)fVar118 >> 0x10),
                                         CONCAT11(auVar114[1] & (byte)((uint)fVar118 >> 8),
                                                  auVar114[0] & SUB41(fVar118,0))));
              auVar101._0_8_ =
                   CONCAT17(auVar114[7] & bVar51,
                            CONCAT16(auVar114[6] & bVar49,
                                     CONCAT15(auVar114[5] & bVar47,
                                              CONCAT14(auVar114[4] & SUB41(fVar100,0),iVar91))));
              auVar101[8] = auVar114[8] & SUB41(fVar90,0);
              auVar101[9] = auVar114[9] & bVar53;
              auVar101[10] = auVar114[10] & bVar63;
              auVar101[0xb] = auVar114[0xb] & bVar65;
              iVar92 = -(uint)(iVar91 == auVar114._0_4_);
              iVar96 = -(uint)((int)((ulong)auVar101._0_8_ >> 0x20) == auVar114._4_4_);
              iVar107 = -(uint)(auVar101._8_4_ == auVar114._8_4_);
              iVar91 = CONCAT13(auVar114[3] & (byte)((uint)fVar111 >> 0x18),
                                CONCAT12(auVar114[2] & (byte)((uint)fVar111 >> 0x10),
                                         CONCAT11(auVar114[1] & (byte)((uint)fVar111 >> 8),
                                                  auVar114[0] & SUB41(fVar111,0))));
              auVar112._0_8_ =
                   CONCAT17(auVar114[7] & bVar78,
                            CONCAT16(auVar114[6] & bVar76,
                                     CONCAT15(auVar114[5] & bVar74,
                                              CONCAT14(auVar114[4] & SUB41(fVar13,0),iVar91))));
              auVar112[8] = auVar114[8] & SUB41(fVar97,0);
              auVar112[9] = auVar114[9] & bVar81;
              auVar112[10] = auVar114[10] & bVar83;
              auVar112[0xb] = auVar114[0xb] & bVar85;
              iVar91 = -(uint)(iVar91 == auVar114._0_4_);
              iVar93 = -(uint)((int)((ulong)auVar112._0_8_ >> 0x20) == auVar114._4_4_);
              iVar95 = -(uint)(auVar112._8_4_ == auVar114._8_4_);
              iVar94 = -(uint)(fVar118 <= fVar111);
              iVar104 = -(uint)(fVar100 <= fVar13);
              iVar108 = -(uint)(fVar90 <= fVar97);
              if ((CONCAT13((byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar94 >> 0x18) &
                            (byte)((uint)iVar108 >> 0x18),
                            CONCAT12((byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar94 >> 0x10) &
                                     (byte)((uint)iVar108 >> 0x10),
                                     CONCAT11((byte)((uint)iVar104 >> 8) & (byte)((uint)iVar94 >> 8)
                                              & (byte)((uint)iVar108 >> 8),
                                              (byte)iVar104 & (byte)iVar94 & (byte)iVar108))) != 0
                  && CONCAT13(~(byte)((uint)iVar96 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18) &
                              ~(byte)((uint)iVar107 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar96 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10)
                                       & ~(byte)((uint)iVar107 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar96 >> 8) &
                                                ~(byte)((uint)iVar92 >> 8) &
                                                ~(byte)((uint)iVar107 >> 8),
                                                ~(byte)iVar96 & ~(byte)iVar92 & ~(byte)iVar107))) !=
                     0) && CONCAT13(~(byte)((uint)iVar93 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18) &
                                    ~(byte)((uint)iVar95 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar93 >> 0x10) &
                                             ~(byte)((uint)iVar91 >> 0x10) &
                                             ~(byte)((uint)iVar95 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar93 >> 8) &
                                                      ~(byte)((uint)iVar91 >> 8) &
                                                      ~(byte)((uint)iVar95 >> 8),
                                                      ~(byte)iVar93 & ~(byte)iVar91 & ~(byte)iVar95)
                                            )) != 0) {
                pVar34 = (unkbyte9 *)
                         (param_1 + 0x48 +
                         ((ulong)(uint)pfVar44[lVar42 + 0x18] & 0xffff) * 0x40 +
                         *(long *)(param_1 + 0x48));
                if ((*(byte *)((long)pVar34 + 0x1e) >> 6 & 1) != 0) {
                  auVar8[4] = SUB41(fVar100,0);
                  auVar8._0_4_ = fVar118;
                  auVar8[5] = bVar47;
                  auVar8[6] = bVar49;
                  auVar8[7] = bVar51;
                  auVar8[8] = SUB41(fVar90,0);
                  auVar8[9] = bVar53;
                  auVar8[10] = bVar63;
                  auVar8[0xb] = bVar65;
                  auVar8._12_4_ = 0;
                  auVar117 = NEON_fmin(auVar117,auVar8,4);
                  auVar17[4] = SUB41(fVar13,0);
                  auVar17._0_4_ = fVar111;
                  auVar17[5] = bVar74;
                  auVar17[6] = bVar76;
                  auVar17[7] = bVar78;
                  auVar17[8] = SUB41(fVar97,0);
                  auVar17[9] = bVar81;
                  auVar17[10] = bVar83;
                  auVar17[0xb] = bVar85;
                  auVar17._12_4_ = 0;
                  auVar116 = NEON_fmax(auVar116,auVar17,4);
                  fVar98 = (fVar118 + fVar111) * 0.5;
                  fVar105 = (fVar100 + fVar13) * 0.5;
                  fVar109 = (fVar90 + fVar97) * 0.5;
                  uVar28 = *(undefined8 *)((long)pVar34 + 8);
                  uVar54 = (undefined1)((ulong)uVar28 >> 8);
                  uVar55 = (undefined1)((ulong)uVar28 >> 0x10);
                  uVar58 = (undefined1)((ulong)uVar28 >> 0x18);
                  uVar56 = (undefined1)((ulong)uVar28 >> 0x20);
                  uVar57 = (undefined1)((ulong)uVar28 >> 0x28);
                  uVar59 = (undefined1)((ulong)uVar28 >> 0x30);
                  uVar60 = (undefined1)((ulong)uVar28 >> 0x38);
                  uVar26 = *(undefined8 *)pVar34;
                  auVar18[9] = uVar54;
                  auVar18._0_9_ = *pVar34;
                  auVar18[10] = uVar55;
                  auVar18[0xb] = uVar58;
                  auVar18[0xc] = uVar56;
                  auVar18[0xd] = uVar57;
                  auVar18[0xe] = uVar59;
                  auVar18[0xf] = uVar60;
                  auVar19[9] = uVar54;
                  auVar19._0_9_ = *pVar34;
                  auVar19[10] = uVar55;
                  auVar19[0xb] = uVar58;
                  auVar19[0xc] = uVar56;
                  auVar19[0xd] = uVar57;
                  auVar19[0xe] = uVar59;
                  auVar19[0xf] = uVar60;
                  auVar114 = NEON_ext(auVar18,auVar19,8,1);
                  fVar118 = fVar98 - (float)*(undefined8 *)(pVar34 + 1);
                  fVar111 = fVar105 - (float)((ulong)*(undefined8 *)(pVar34 + 1) >> 0x20);
                  uVar54 = SUB41(fVar111,0);
                  uVar55 = (undefined1)((uint)fVar111 >> 8);
                  uVar56 = (undefined1)((uint)fVar111 >> 0x10);
                  uVar59 = (undefined1)((uint)fVar111 >> 0x18);
                  fVar90 = fVar109 - (float)*(undefined8 *)((long)pVar34 + 0x18);
                  uVar58 = (undefined1)((uint)fVar90 >> 8);
                  uVar57 = (undefined1)((uint)fVar90 >> 0x10);
                  uVar60 = (undefined1)((uint)fVar90 >> 0x18);
                  fVar106 = auVar114._4_4_ * auVar114._4_4_;
                  fVar15 = (float)uVar26;
                  fVar20 = (float)((ulong)uVar26 >> 0x20);
                  fVar21 = (float)uVar28;
                  fVar99 = fVar106 + -0.5;
                  fVar106 = fVar106 + -0.5;
                  uVar26 = NEON_ext(uVar26,auVar114._0_8_,4,1);
                  fVar110 = fVar15 * fVar118 + fVar20 * fVar111 + fVar21 * fVar90;
                  fVar115 = fVar15 * fVar118 + fVar20 * fVar111 + fVar21 * fVar90;
                  fVar22 = (float)((ulong)uVar28 >> 0x20);
                  auVar9[4] = uVar54;
                  auVar9._0_4_ = fVar118;
                  auVar9[5] = uVar55;
                  auVar9[6] = uVar56;
                  auVar9[7] = uVar59;
                  auVar9[8] = SUB41(fVar90,0);
                  auVar9[9] = uVar58;
                  auVar9[10] = uVar57;
                  auVar9[0xb] = uVar60;
                  auVar9._12_4_ = 0;
                  auVar10[4] = uVar54;
                  auVar10._0_4_ = fVar118;
                  auVar10[5] = uVar55;
                  auVar10[6] = uVar56;
                  auVar10[7] = uVar59;
                  auVar10[8] = SUB41(fVar90,0);
                  auVar10[9] = uVar58;
                  auVar10[10] = uVar57;
                  auVar10[0xb] = uVar60;
                  auVar10._12_4_ = 0;
                  auVar114 = NEON_ext(auVar9,auVar10,4,1);
                  fVar100 = fVar118 * (float)uVar26 - fVar15 * auVar114._0_4_;
                  fVar13 = fVar111 * (float)((ulong)uVar26 >> 0x20) - fVar20 * auVar114._4_4_;
                  uVar58 = (undefined1)((uint)fVar13 >> 8);
                  uVar57 = (undefined1)((uint)fVar13 >> 0x10);
                  uVar60 = (undefined1)((uint)fVar13 >> 0x18);
                  fVar97 = fVar90 * fVar15 - fVar21 * fVar118;
                  uVar62 = (undefined1)((uint)fVar97 >> 8);
                  uVar64 = (undefined1)((uint)fVar97 >> 0x10);
                  uVar66 = (undefined1)((uint)fVar97 >> 0x18);
                  fVar14 = fVar20 * 0.0 -
                           fVar22 * (float)(CONCAT17(uVar59,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14
                                                  (uVar54,fVar118)))) >> 0x20);
                  uVar54 = (undefined1)((uint)fVar14 >> 8);
                  uVar55 = (undefined1)((uint)fVar14 >> 0x10);
                  uVar56 = (undefined1)((uint)fVar14 >> 0x18);
                  auVar11[4] = SUB41(fVar13,0);
                  auVar11._0_4_ = fVar100;
                  auVar11[5] = uVar58;
                  auVar11[6] = uVar57;
                  auVar11[7] = uVar60;
                  auVar11[8] = SUB41(fVar97,0);
                  auVar11[9] = uVar62;
                  auVar11[10] = uVar64;
                  auVar11[0xb] = uVar66;
                  auVar11[0xc] = SUB41(fVar14,0);
                  auVar11[0xd] = uVar54;
                  auVar11[0xe] = uVar55;
                  auVar11[0xf] = uVar56;
                  auVar12[4] = SUB41(fVar13,0);
                  auVar12._0_4_ = fVar100;
                  auVar12[5] = uVar58;
                  auVar12[6] = uVar57;
                  auVar12[7] = uVar60;
                  auVar12[8] = SUB41(fVar97,0);
                  auVar12[9] = uVar62;
                  auVar12[10] = uVar64;
                  auVar12[0xb] = uVar66;
                  auVar12[0xc] = SUB41(fVar14,0);
                  auVar12[0xd] = uVar54;
                  auVar12[0xe] = uVar55;
                  auVar12[0xf] = uVar56;
                  auVar114 = NEON_ext(auVar11,auVar12,4,1);
                  fVar118 = fVar118 * fVar99 + fVar15 * fVar110 + auVar114._0_4_ * fVar22;
                  fVar111 = fVar111 * fVar106 + fVar20 * fVar115 + auVar114._4_4_ * fVar22;
                  fVar100 = fVar90 * fVar99 + fVar21 * fVar110 + fVar100 * fVar22;
                  fVar13 = fVar106 * 0.0 + fVar22 * fVar115 + fVar22 * 0.0;
                  fVar111 = fVar111 + fVar111;
                  fVar13 = fVar13 + fVar13;
                  uStack_688 = CONCAT17((char)((uint)fVar13 >> 0x18),
                                        CONCAT16((char)((uint)fVar13 >> 0x10),
                                                 CONCAT15((char)((uint)fVar13 >> 8),
                                                          CONCAT14(SUB41(fVar13,0),fVar100 + fVar100
                                                                  ))));
                  local_690 = (undefined8 *)
                              CONCAT17((char)((uint)fVar111 >> 0x18),
                                       CONCAT16((char)((uint)fVar111 >> 0x10),
                                                CONCAT15((char)((uint)fVar111 >> 8),
                                                         CONCAT14(SUB41(fVar111,0),fVar118 + fVar118
                                                                 ))));
                  lVar31 = *(long *)(pVar34 + 3);
                  lVar2 = 0;
                  if (lVar31 != 0) {
                    lVar2 = lVar31 + (long)(pVar34 + 3);
                  }
                  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar2 + 0x18) * 0x200 +
                              0x28))(lVar2,&local_690,&local_68);
                  fVar118 = ABS((float)*(undefined8 *)(pVar34 + 2));
                  fVar100 = ABS((float)((ulong)*(undefined8 *)(pVar34 + 2) >> 0x20));
                  uVar54 = (undefined1)((uint)fVar100 >> 8);
                  uVar55 = (undefined1)((uint)fVar100 >> 0x10);
                  uVar58 = (undefined1)((uint)fVar100 >> 0x18);
                  fVar111 = ABS((float)*(undefined8 *)((long)pVar34 + 0x28));
                  uVar26 = NEON_fmaxp(CONCAT17(uVar58,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(SUB41
                                                  (fVar100,0),fVar118)))),
                                      CONCAT17(uVar58,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(SUB41
                                                  (fVar100,0),fVar118)))),4);
                  uVar26 = NEON_fmax(CONCAT17((char)((uint)fVar111 >> 0x18),
                                              CONCAT16((char)((uint)fVar111 >> 0x10),
                                                       CONCAT15((char)((uint)fVar111 >> 8),
                                                                CONCAT14(SUB41(fVar111,0),fVar111)))
                                             ),uVar26,4);
                  fVar118 = (float)uVar26 * (float)local_68;
                  (puVar27 + (long)(int)uVar45 * 2)[1] =
                       CONCAT17((char)((uint)fVar118 >> 0x18),
                                CONCAT16((char)((uint)fVar118 >> 0x10),
                                         CONCAT15((char)((uint)fVar118 >> 8),
                                                  CONCAT14(SUB41(fVar118,0),fVar109))));
                  puVar27[(long)(int)uVar45 * 2] = CONCAT44(fVar105,fVar98);
                  uVar45 = uVar45 + 1;
                }
              }
            }
            lVar42 = lVar42 + 1;
          } while (lVar42 != 4);
        }
        pfVar44 = pfVar44 + 0x20;
      } while (pfVar44 != pfVar1);
    }
    iVar91 = -(uint)(auVar116._0_4_ < auVar117._0_4_);
    iVar93 = -(uint)(auVar116._4_4_ < auVar117._4_4_);
    iVar95 = -(uint)(auVar116._8_4_ < auVar117._8_4_);
    iVar91 = -(uint)(CONCAT13((byte)((uint)iVar93 >> 0x18) | (byte)((uint)iVar91 >> 0x18) |
                              (byte)((uint)iVar95 >> 0x18),
                              CONCAT12((byte)((uint)iVar93 >> 0x10) | (byte)((uint)iVar91 >> 0x10) |
                                       (byte)((uint)iVar95 >> 0x10),
                                       CONCAT11((byte)((uint)iVar93 >> 8) |
                                                (byte)((uint)iVar91 >> 8) |
                                                (byte)((uint)iVar95 >> 8),
                                                (byte)iVar93 | (byte)iVar91 | (byte)iVar95))) == 0);
    bVar47 = (byte)iVar91;
    bVar49 = (byte)((uint)iVar91 >> 8);
    bVar51 = (byte)((uint)iVar91 >> 0x10);
    bVar53 = (byte)((uint)iVar91 >> 0x18);
    fVar100 = (float)CONCAT13(auVar117[3] & bVar53,
                              CONCAT12(auVar117[2] & bVar51,
                                       CONCAT11(auVar117[1] & bVar49,auVar117[0] & bVar47)));
    auVar102._0_8_ =
         CONCAT17(auVar117[7] & bVar53,
                  CONCAT16(auVar117[6] & bVar51,
                           CONCAT15(auVar117[5] & bVar49,CONCAT14(auVar117[4] & bVar47,fVar100))));
    auVar102[8] = auVar117[8] & bVar47;
    auVar102[9] = auVar117[9] & bVar49;
    auVar102[10] = auVar117[10] & bVar51;
    auVar102[0xb] = auVar117[0xb] & bVar53;
    auVar103[0xc] = auVar117[0xc] & bVar47;
    auVar103._0_12_ = auVar102;
    auVar103[0xd] = auVar117[0xd] & bVar49;
    auVar103[0xe] = auVar117[0xe] & bVar51;
    auVar103[0xf] = auVar117[0xf] & bVar53;
    fVar111 = (float)CONCAT13(auVar116[3] & bVar53,
                              CONCAT12(auVar116[2] & bVar51,
                                       CONCAT11(auVar116[1] & bVar49,auVar116[0] & bVar47)));
    auVar113._0_8_ =
         CONCAT17(auVar116[7] & bVar53,
                  CONCAT16(auVar116[6] & bVar51,
                           CONCAT15(auVar116[5] & bVar49,CONCAT14(auVar116[4] & bVar47,fVar111))));
    auVar113[8] = auVar116[8] & bVar47;
    auVar113[9] = auVar116[9] & bVar49;
    auVar113[10] = auVar116[10] & bVar51;
    auVar113[0xb] = auVar116[0xb] & bVar53;
    auVar114[0xc] = auVar116[0xc] & bVar47;
    auVar114._0_12_ = auVar113;
    auVar114[0xd] = auVar116[0xd] & bVar49;
    auVar114[0xe] = auVar116[0xe] & bVar51;
    auVar114[0xf] = auVar116[0xf] & bVar53;
    if ((int)uVar45 < 1) {
      fVar118 = 0.0;
    }
    else {
      fVar118 = 0.0;
      uVar30 = (ulong)uVar45;
      puVar33 = puVar27;
      do {
        fVar13 = (fVar100 + fVar111) * 0.5 - (float)*puVar33;
        fVar90 = ((float)((ulong)auVar102._0_8_ >> 0x20) + (float)((ulong)auVar113._0_8_ >> 0x20)) *
                 0.5 - (float)((ulong)*puVar33 >> 0x20);
        fVar97 = (auVar102._8_4_ + auVar113._8_4_) * 0.5 - (float)puVar33[1];
        pfVar1 = (float *)((long)puVar33 + 0xc);
        puVar33 = puVar33 + 2;
        fVar13 = *pfVar1 + SQRT(fVar13 * fVar13 + fVar90 * fVar90 + fVar97 * fVar97);
        if (fVar118 <= fVar13) {
          fVar118 = fVar13;
        }
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    if (lVar29 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar27,lVar43);
LAB_00cb2a40:
      auVar114._8_8_ = auVar114._8_8_;
      auVar114._0_8_ = auVar113._0_8_;
      auVar103._8_8_ = auVar103._8_8_;
      auVar103._0_8_ = auVar102._0_8_;
    }
    else {
      uVar30 = lVar43 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar29 + 0x28) < uVar30) ||
         (*(long *)(lVar29 + 0x38) != uVar30 + (long)puVar27)) {
        if (puVar27 != (undefined8 *)0x0) {
          if (*(ulong *)(lVar29 + 0x28) < uVar30 + 0x40) {
            *(int *)(*(long *)(lVar29 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar29 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar29 + 0x10) + 0x18))
                      (*(long **)(lVar29 + 0x10),(long)puVar27 - (long)*(int *)((long)puVar27 + -4),
                       uVar30 + 0x44);
          }
          else {
            if (*(long *)(lVar29 + 0x38) == uVar30 + (long)puVar27) {
              *(undefined8 **)(lVar29 + 0x38) = puVar27;
              goto LAB_00cb2a3c;
            }
            FUN_031cf778(lVar29,puVar27);
          }
          goto LAB_00cb2a40;
        }
      }
      else {
        *(undefined8 **)(lVar29 + 0x38) = puVar27;
        if (*(undefined8 **)(lVar29 + 0x48) == puVar27) {
LAB_00cb2a3c:
          FUN_031cf578();
          goto LAB_00cb2a40;
        }
      }
    }
LAB_00cb2a44:
    fVar100 = (auVar114._0_4_ - auVar103._0_4_) * 0.5;
    fVar111 = (auVar114._4_4_ - auVar103._4_4_) * 0.5;
    fVar13 = (auVar114._8_4_ - auVar103._8_4_) * 0.5;
    fVar100 = SQRT(fVar100 * fVar100 + fVar111 * fVar111 + fVar13 * fVar13);
    iVar92 = -(uint)(auVar114._0_4_ == *(float *)(param_1 + 0x80));
    iVar94 = -(uint)(auVar114._4_4_ == *(float *)(param_1 + 0x84));
    iVar96 = -(uint)(auVar114._8_4_ == *(float *)(param_1 + 0x88));
    iVar91 = -(uint)(auVar103._0_4_ == (float)*(undefined8 *)(param_1 + 0x70));
    iVar93 = -(uint)(auVar103._4_4_ == (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20));
    iVar95 = -(uint)(auVar103._8_4_ == (float)*(undefined8 *)(param_1 + 0x78));
    uVar54 = SUB41(fVar118,0);
    uVar55 = (char)((uint)fVar118 >> 8);
    uVar58 = (char)((uint)fVar118 >> 0x10);
    uVar56 = (char)((uint)fVar118 >> 0x18);
    if (fVar100 <= fVar118) {
      uVar54 = SUB41(fVar100,0);
      uVar55 = (char)((uint)fVar100 >> 8);
      uVar58 = (char)((uint)fVar100 >> 0x10);
      uVar56 = (char)((uint)fVar100 >> 0x18);
    }
    if ((CONCAT13((byte)((uint)iVar94 >> 0x18) & (byte)((uint)iVar93 >> 0x18) &
                  (byte)((uint)iVar92 >> 0x18) & (byte)((uint)iVar91 >> 0x18) &
                  (byte)((uint)iVar96 >> 0x18) & (byte)((uint)iVar95 >> 0x18),
                  CONCAT12((byte)((uint)iVar94 >> 0x10) & (byte)((uint)iVar93 >> 0x10) &
                           (byte)((uint)iVar92 >> 0x10) & (byte)((uint)iVar91 >> 0x10) &
                           (byte)((uint)iVar96 >> 0x10) & (byte)((uint)iVar95 >> 0x10),
                           CONCAT11((byte)((uint)iVar94 >> 8) & (byte)((uint)iVar93 >> 8) &
                                    (byte)((uint)iVar92 >> 8) & (byte)((uint)iVar91 >> 8) &
                                    (byte)((uint)iVar96 >> 8) & (byte)((uint)iVar95 >> 8),
                                    (byte)iVar94 & (byte)iVar93 & (byte)iVar92 & (byte)iVar91 &
                                    (byte)iVar96 & (byte)iVar95))) == 0) ||
       (*(float *)(param_1 + 0x90) !=
        (float)CONCAT13(uVar56,CONCAT12(uVar58,CONCAT11(uVar55,uVar54))))) {
      uVar26 = 1;
      *(uint *)(param_1 + 0x90) = CONCAT13(uVar56,CONCAT12(uVar58,CONCAT11(uVar55,uVar54)));
      *(long *)(param_1 + 0x78) = auVar103._8_8_;
      *(long *)(param_1 + 0x70) = auVar103._0_8_;
      *(long *)(param_1 + 0x88) = auVar114._8_8_;
      *(long *)(param_1 + 0x80) = auVar114._0_8_;
      goto LAB_00cb2ab8;
    }
  }
LAB_00cb2ab0:
  uVar26 = 0;
LAB_00cb2ab8:
  if (plVar40 != (long *)0x0) {
    lVar43 = *plVar40;
    if (((*(byte *)(lVar43 + 0x38) & 1) != 0) && (plVar40[6] != 0)) {
      puVar27 = (undefined8 *)plVar40[2];
      uVar30 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
      if ((uVar30 <= (ulong)plVar40[3]) && (plVar40[2] = uVar30, puVar27 != (undefined8 *)0x0)) {
        *puVar27 = &DAT_03c4e575;
        puVar27[1] = *(undefined8 *)(plVar40[6] + 8);
      }
    }
    puVar27 = (undefined8 *)plVar40[2];
    uVar30 = (long)puVar27 + 0x17U & 0xfffffffffffffff8;
    if ((uVar30 <= (ulong)plVar40[3]) && (plVar40[2] = uVar30, puVar27 != (undefined8 *)0x0)) {
      *puVar27 = &DAT_03c2d363;
      uVar28 = nn::os::GetSystemTick();
      puVar27[1] = uVar28;
    }
    if (*(code **)(lVar43 + 0x20) != (code *)0x0) {
      (**(code **)(lVar43 + 0x20))(*(undefined8 *)(lVar43 + 0x28));
    }
  }
  return uVar26;
}


