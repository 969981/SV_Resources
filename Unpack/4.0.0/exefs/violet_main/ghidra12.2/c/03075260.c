/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03075260; name: FUN_03075260
 */


void FUN_03075260(long param_1,long *param_2,ulong param_3,uint *param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7,int *param_8,undefined8 param_9,undefined8 param_10
                 ,undefined8 *param_11,undefined8 *param_12,float *param_13,float *param_14,
                 long param_15)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  long *plVar34;
  long lVar35;
  uint uVar36;
  int *piVar37;
  float fVar38;
  int iVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  float fVar70;
  undefined8 uVar71;
  float fVar76;
  float fVar78;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 auVar75 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  char local_c0;
  uint local_b8 [2];
  undefined8 local_b0 [2];
  undefined8 local_98;
  
  local_b8[0] = param_7;
  lVar17 = nn::os::GetSystemTick();
  FUN_03072d30(&local_c8,param_1,local_b8);
  lVar23 = *(long *)(param_1 + 0x38);
  fVar52 = *(float *)(*(long *)(*(long *)(*(long *)(lVar23 + (param_3 >> 0x16 & 0x3ff) * 0x100) +
                                         0x20) + 0x68) + 0xb0);
  if (param_8[2] != -1) {
    uVar85 = *param_12;
    if ((param_2 == (long *)0x0) || ((*(byte *)(param_8 + 4) >> 5 & 1) != 0)) {
      if ((*(byte *)(param_8 + 4) >> 5 & 1) == 0) goto LAB_0307534c;
    }
    else {
      uVar18 = (**(code **)(*param_2 + 0x28))(param_2,param_1,param_7,param_8,param_9,param_10);
      if ((uVar18 & 1) != 0) {
        lVar23 = *(long *)(param_1 + 0x38);
LAB_0307534c:
        uVar33 = param_7 & 0x3fffff;
        uVar30 = *param_4 + (int)(short)param_4[2];
        if (uVar33 != *param_4) {
          uVar30 = uVar33;
        }
        uVar3 = uVar30 - 1 | param_7 & 0xffc00000;
        uVar30 = uVar30 - 1 & 0x3fffff;
        lVar23 = *(long *)(*(long *)(lVar23 + ((ulong)(uVar3 >> 0xe) & 0x3ff00)) + 0x20);
        fVar38 = (float)uVar85 - fVar52;
        fVar44 = (float)((ulong)uVar85 >> 0x20) - fVar52;
        iVar39 = *(int *)(lVar23 + 0x60);
        uVar29 = uVar30 - *(int *)(lVar23 + 0x30);
        if ((int)uVar30 < *(int *)(lVar23 + 0x30)) {
          if (*(int *)(lVar23 + 0x78) == 0) {
            uVar29 = uVar30;
LAB_03075404:
            lVar26 = *(long *)(lVar23 + 0x130) + (long)(int)(uVar29 * iVar39) * 4;
            lVar23 = *(long *)(lVar23 + 0xc0);
            goto LAB_03075414;
          }
          uVar29 = *(uint *)(*(long *)(lVar23 + 0x70) + (ulong)uVar30 * 4);
          if (uVar29 != 0xffffffff) goto LAB_03075404;
          lVar26 = *(long *)(lVar23 + 0x58) + (long)(int)(iVar39 * uVar30) * 4;
          lVar23 = *(long *)(lVar23 + 0x28) + (ulong)uVar30 * 0x14;
          lVar27 = lVar26 + (long)iVar39 * 4;
        }
        else {
          lVar26 = *(long *)(lVar23 + 0x150) + (long)(int)(iVar39 * uVar29) * 4;
          lVar23 = *(long *)(lVar23 + 0xe0);
LAB_03075414:
          lVar27 = lVar26 + (long)iVar39 * 4;
          lVar23 = lVar23 + (long)(int)uVar29 * 0x14;
        }
        uVar18 = CONCAT44(fVar44 * fVar44,fVar38 * fVar38);
        if (*(int *)(lVar23 + 8) == -1) {
LAB_03075470:
          uVar19 = 0;
          bVar15 = true;
        }
        else {
          if ((param_2 == (long *)0x0) || ((*(byte *)(lVar23 + 0x10) >> 5 & 1) != 0)) {
            if ((*(byte *)(lVar23 + 0x10) >> 5 & 1) != 0) goto LAB_03075470;
          }
          else {
            uVar19 = (**(code **)(*param_2 + 0x28))(param_2,param_1,uVar3,lVar23,lVar26,lVar27);
            if ((uVar19 & 1) == 0) goto LAB_03075470;
          }
          bVar15 = false;
          uVar19 = uVar18;
        }
        uVar30 = *param_4;
        if (uVar33 != ((int)(short)param_4[2] + uVar30) - 1) {
          uVar30 = uVar33 + 1;
        }
        uVar29 = uVar30 | param_7 & 0xffc00000;
        uVar30 = uVar30 & 0x3fffff;
        lVar23 = *(long *)(param_1 + 0x38);
        lVar26 = *(long *)(*(long *)(lVar23 + ((ulong)(uVar29 >> 0xe) & 0x3ff00)) + 0x20);
        iVar39 = *(int *)(lVar26 + 0x60);
        uVar33 = uVar30 - *(int *)(lVar26 + 0x30);
        if ((int)uVar30 < *(int *)(lVar26 + 0x30)) {
          if (*(int *)(lVar26 + 0x78) == 0) {
            uVar33 = uVar30;
LAB_03075510:
            lVar27 = *(long *)(lVar26 + 0x130) + (long)(int)(uVar33 * iVar39) * 4;
            lVar26 = *(long *)(lVar26 + 0xc0);
            goto LAB_03075520;
          }
          uVar33 = *(uint *)(*(long *)(lVar26 + 0x70) + (ulong)uVar30 * 4);
          if (uVar33 != 0xffffffff) goto LAB_03075510;
          lVar27 = *(long *)(lVar26 + 0x58) + (long)(int)(iVar39 * uVar30) * 4;
          lVar26 = *(long *)(lVar26 + 0x28) + (ulong)uVar30 * 0x14;
          lVar28 = lVar27 + (long)iVar39 * 4;
        }
        else {
          lVar27 = *(long *)(lVar26 + 0x150) + (long)(int)(iVar39 * uVar33) * 4;
          lVar26 = *(long *)(lVar26 + 0xe0);
LAB_03075520:
          lVar28 = lVar27 + (long)iVar39 * 4;
          lVar26 = lVar26 + (long)(int)uVar33 * 0x14;
        }
        if (*(int *)(lVar26 + 8) == -1) {
          if (!bVar15) {
            uVar18 = 0;
            goto LAB_03075610;
          }
        }
        else {
          bVar16 = (*(byte *)(lVar26 + 0x10) >> 5 ^ 0xff) & 1;
          if ((param_2 != (long *)0x0) && (bVar16 != 0)) {
            bVar16 = (**(code **)(*param_2 + 0x28))(param_2,param_1,uVar29,lVar26,lVar27,lVar28);
            bVar16 = bVar16 & 1;
          }
          if ((bVar16 != 0) || (!bVar15)) {
            iVar39 = -(uint)(bVar16 == 0);
            lVar23 = *(long *)(param_1 + 0x38);
            uVar40 = CONCAT13(~(byte)((uint)iVar39 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar39 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar39 >> 8),~(byte)iVar39)));
            uVar18 = uVar18 & CONCAT44(uVar40,uVar40);
LAB_03075610:
            iVar39 = *param_8;
            iVar21 = param_8[1];
            lVar26 = *(long *)(lVar23 + (ulong)(param_7 >> 0x16) * 0x100);
            lVar27 = *(long *)(lVar26 + 0x20);
            fVar46 = (float)*(undefined8 *)(lVar26 + 0x68);
            fVar47 = (float)((ulong)*(undefined8 *)(lVar26 + 0x68) >> 0x20);
            fVar38 = (float)*(undefined8 *)(lVar26 + 0x60);
            fVar44 = (float)((ulong)*(undefined8 *)(lVar26 + 0x60) >> 0x20);
            auVar86 = *(undefined1 (*) [16])(lVar26 + 0x80);
            iVar25 = *(int *)(lVar27 + 0x40);
            lVar23 = 0x38;
            if (iVar25 <= iVar39) {
              lVar23 = 0xf0;
            }
            iVar22 = 0;
            if (iVar25 <= iVar39) {
              iVar22 = iVar25;
            }
            puVar4 = (undefined8 *)(*(long *)(lVar27 + lVar23) + (long)(iVar39 - iVar22) * 0x10);
            uVar85 = *puVar4;
            fVar41 = (float)uVar85;
            lVar23 = 0x38;
            if (iVar25 <= iVar21) {
              lVar23 = 0xf0;
            }
            fVar45 = (float)((ulong)uVar85 >> 0x20);
            iVar39 = 0;
            if (iVar25 <= iVar21) {
              iVar39 = iVar25;
            }
            fVar49 = (float)puVar4[1];
            puVar4 = (undefined8 *)(*(long *)(lVar27 + lVar23) + (long)(iVar21 - iVar39) * 0x10);
            fVar51 = (float)puVar4[1];
            uVar85 = *puVar4;
            fVar43 = (float)uVar85;
            fVar42 = (float)((ulong)uVar85 >> 0x20);
            fVar64 = (float)*(undefined8 *)(lVar26 + 0x90);
            fVar69 = fVar64 + auVar86._0_4_ * fVar49 +
                              fVar38 * fVar41 + *(float *)(lVar26 + 0x70) * fVar45;
            fVar68 = (float)((ulong)*(undefined8 *)(lVar26 + 0x90) >> 0x20);
            fVar76 = fVar68 + auVar86._4_4_ * fVar49 +
                              fVar44 * fVar41 + *(float *)(lVar26 + 0x74) * fVar45;
            auVar72._0_8_ = CONCAT44(fVar76,fVar69);
            fVar48 = (float)*(undefined8 *)(lVar26 + 0x98);
            auVar72._8_4_ =
                 fVar48 + auVar86._8_4_ * fVar49 +
                          fVar46 * fVar41 + *(float *)(lVar26 + 0x78) * fVar45;
            fVar55 = (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20);
            auVar72._12_4_ =
                 fVar55 + auVar86._12_4_ * fVar49 +
                          fVar47 * fVar41 + *(float *)(lVar26 + 0x7c) * fVar45;
            fVar49 = (float)param_11[1];
            fVar61 = (float)((ulong)param_11[1] >> 0x20);
            fVar41 = (float)*param_11;
            fVar45 = (float)((ulong)*param_11 >> 0x20);
            fVar64 = fVar64 + auVar86._0_4_ * fVar51 +
                              fVar38 * fVar43 + *(float *)(lVar26 + 0x70) * fVar42;
            fVar68 = fVar68 + auVar86._4_4_ * fVar51 +
                              fVar44 * fVar43 + *(float *)(lVar26 + 0x74) * fVar42;
            auVar66._0_8_ = CONCAT44(fVar68,fVar64);
            auVar66._8_4_ =
                 fVar48 + auVar86._8_4_ * fVar51 +
                          fVar46 * fVar43 + *(float *)(lVar26 + 0x78) * fVar42;
            auVar66._12_4_ =
                 fVar55 + auVar86._12_4_ * fVar51 +
                          fVar47 * fVar43 + *(float *)(lVar26 + 0x7c) * fVar42;
            fVar69 = fVar41 * fVar69;
            fVar76 = fVar45 * fVar76;
            fVar38 = fVar69 + fVar76 + fVar49 * auVar72._8_4_;
            fVar46 = fVar69 + fVar76 + fVar49 * auVar72._8_4_;
            local_f0 = 0;
            local_e8 = 0x8000000000000000;
            fVar64 = fVar41 * fVar64;
            fVar68 = fVar45 * fVar68;
            fVar44 = fVar64 + fVar68 + fVar49 * auVar66._8_4_;
            fVar47 = fVar64 + fVar68 + fVar49 * auVar66._8_4_;
            lVar23 = tpidr_el0;
            lVar26 = *(long *)(lVar23 + 0x1000b8);
            if (lVar26 == 0) {
              lVar26 = FUN_00e5d3b4();
              auVar66._8_8_ = auVar66._8_8_;
              auVar72._8_8_ = auVar72._8_8_;
              *(long *)(lVar23 + 0x1000b8) = lVar26;
            }
            fVar69 = auVar72._0_4_ - fVar41 * fVar38;
            fVar64 = auVar72._4_4_ - fVar45 * fVar46;
            fVar76 = auVar72._8_4_ - fVar49 * fVar38;
            fVar68 = auVar72._12_4_ - fVar61 * fVar46;
            fVar38 = auVar66._0_4_ - fVar41 * fVar44;
            fVar46 = auVar66._4_4_ - fVar45 * fVar47;
            fVar44 = auVar66._8_4_ - fVar49 * fVar44;
            fVar47 = auVar66._12_4_ - fVar61 * fVar47;
            local_e0 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
            if (*(long *)(local_e0 + 8) == 0) {
              local_d0 = 0x100;
              local_98 = 0x100;
              if (local_e0 == 0) goto LAB_03075830;
              local_118 = 0x100;
              if (*(ulong *)(local_e0 + 0x28) < 0x100) {
LAB_03075750:
                local_d8 = FUN_031cf3b4(local_e0,&local_118);
              }
              else {
                local_d8 = *(long *)(local_e0 + 0x38);
                if (*(ulong *)(local_e0 + 0x40) < local_d8 + 0x100U) goto LAB_03075750;
                *(ulong *)(local_e0 + 0x38) = local_d8 + 0x100U;
              }
            }
            else {
              local_e0 = 0;
LAB_03075830:
              local_98 = 0x100;
              local_d0 = 0x100;
              local_d8 = (**(code **)PTR_DAT_047d1a08)(1,&local_98,0x40);
            }
            local_e8._4_4_ = 0x80000040;
            local_118 = 0;
            local_110 = 0x8000000000000000;
            lVar26 = *(long *)(lVar23 + 0x1000b8);
            local_f0 = local_d8;
            if (lVar26 == 0) {
              lVar26 = FUN_00e5d3b4();
              *(long *)(lVar23 + 0x1000b8) = lVar26;
            }
            local_108 = *(long *)(*(long *)(lVar26 + 0x3d0) + 0x10);
            if (*(long *)(local_108 + 8) == 0) {
              local_f8 = 0x100;
              local_b0[0] = 0x100;
              if (local_108 != 0) {
                local_98 = 0x100;
                if (0xff < *(ulong *)(local_108 + 0x28)) {
                  local_100 = *(long *)(local_108 + 0x38);
                  if (local_100 + 0x100U <= *(ulong *)(local_108 + 0x40)) {
                    *(ulong *)(local_108 + 0x38) = local_100 + 0x100U;
                    goto LAB_03075968;
                  }
                }
                local_100 = FUN_031cf3b4(local_108,&local_98);
                goto LAB_03075968;
              }
            }
            else {
              local_108 = 0;
            }
            local_b0[0] = 0x100;
            local_f8 = 0x100;
            local_100 = (**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
LAB_03075968:
            uVar24 = local_110 & 0xffffffff;
            local_110 = CONCAT44(0x80000040,(int)local_110);
            uVar85 = NEON_fmov(0x3f800000,4);
            uVar33 = 0x80000040;
            local_118 = local_100;
            do {
              iVar21 = (int)uVar24;
              iVar39 = iVar21 + 1;
              if ((int)(uVar33 & 0x7fffffff) <= iVar21) {
                FUN_0305c42c(&local_118,PTR_PTR_047d1a50,(long)iVar39);
                iVar21 = (int)local_110;
              }
              uVar36 = (uint)param_3;
              *(uint *)(local_118 + (long)iVar21 * 4) = uVar36;
              local_110 = CONCAT44(local_110._4_4_,iVar39);
              lVar27 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar36 >> 0x16) * 0x100);
              lVar23 = *(long *)(lVar27 + 0x20);
              iVar39 = *(int *)(lVar23 + 0x50);
              lVar26 = (long)iVar39;
              uVar33 = uVar36 & 0x3fffff;
              uVar30 = uVar33 - *(int *)(lVar23 + 0x20);
              if ((int)uVar33 < *(int *)(lVar23 + 0x20)) {
                if (*(int *)(lVar23 + 0x98) == 0) {
                  uVar30 = uVar33;
LAB_03075a68:
                  lVar28 = *(long *)(lVar23 + 0x120) + (long)(int)(uVar30 * iVar39) * 4;
                  lVar26 = lVar28 + lVar26 * 4;
                  lVar35 = *(long *)(lVar23 + 0xb0);
                  goto LAB_03075a7c;
                }
                uVar30 = *(uint *)(*(long *)(lVar23 + 0x90) + (ulong)uVar33 * 4);
                if (uVar30 != 0xffffffff) goto LAB_03075a68;
                lVar28 = *(long *)(lVar23 + 0x48) + (long)(int)(iVar39 * uVar33) * 4;
                lVar26 = lVar28 + lVar26 * 4;
                piVar37 = (int *)(*(long *)(lVar23 + 0x18) + (ulong)uVar33 * 0x10);
                if (param_2 != (long *)0x0) goto LAB_03075a84;
LAB_03075ab8:
                iVar39 = *piVar37;
                lVar26 = (long)iVar39;
                iVar21 = *(int *)(lVar23 + 0x30);
                lVar28 = *(long *)(lVar23 + 0x28);
                if (iVar39 < iVar21) {
                  iVar25 = iVar39;
                  if (*(int *)(lVar23 + 0x78) != 0) {
                    iVar25 = *(int *)(*(long *)(lVar23 + 0x70) + lVar26 * 4);
                  }
                  lVar35 = lVar28;
                  if (iVar25 != -1) {
                    plVar34 = (long *)(lVar23 + 0xc0);
                    iVar39 = iVar25;
                    goto LAB_03075b00;
                  }
                }
                else {
                  plVar34 = (long *)(lVar23 + 0xe0);
                  iVar39 = iVar39 - iVar21;
LAB_03075b00:
                  lVar35 = *plVar34;
                }
                iVar25 = *(int *)(lVar35 + (long)iVar39 * 0x14);
                iVar39 = *(int *)(lVar23 + 0x40);
                lVar35 = 0x38;
                if (iVar39 <= iVar25) {
                  lVar35 = 0xf0;
                }
                iVar22 = 0;
                if (iVar39 <= iVar25) {
                  iVar22 = iVar39;
                }
                iVar39 = (int)(short)piVar37[2];
                if (iVar39 != 0) {
                  puVar4 = (undefined8 *)
                           (*(long *)(lVar23 + lVar35) + (long)(iVar25 - iVar22) * 0x10);
                  uVar71 = *puVar4;
                  lVar35 = lVar26 * 0x14;
                  fVar43 = (float)uVar71;
                  fVar51 = (float)((ulong)uVar71 >> 0x20);
                  fVar55 = (float)puVar4[1];
                  fVar42 = *(float *)(lVar27 + 0x90) +
                           *(float *)(lVar27 + 0x80) * fVar55 +
                           (float)*(undefined8 *)(lVar27 + 0x60) * fVar43 +
                           (float)*(undefined8 *)(lVar27 + 0x70) * fVar51;
                  fVar48 = *(float *)(lVar27 + 0x94) +
                           *(float *)(lVar27 + 0x84) * fVar55 +
                           (float)((ulong)*(undefined8 *)(lVar27 + 0x60) >> 0x20) * fVar43 +
                           (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20) * fVar51;
                  fVar50 = *(float *)(lVar27 + 0x98) +
                           *(float *)(lVar27 + 0x88) * fVar55 +
                           (float)*(undefined8 *)(lVar27 + 0x68) * fVar43 +
                           (float)*(undefined8 *)(lVar27 + 0x78) * fVar51;
                  fVar53 = fVar41 * fVar42;
                  fVar56 = fVar45 * fVar48;
                  fVar57 = fVar49 * fVar50;
                  fVar54 = fVar57 + fVar53 + fVar56;
                  fVar57 = fVar57 + fVar53 + fVar56;
                  uVar71 = CONCAT44(fVar48 - fVar45 * fVar57,fVar42 - fVar41 * fVar54);
                  uVar65 = CONCAT44((*(float *)(lVar27 + 0x9c) +
                                    *(float *)(lVar27 + 0x8c) * fVar55 +
                                    (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20) * fVar43
                                    + (float)((ulong)*(undefined8 *)(lVar27 + 0x78) >> 0x20) *
                                      fVar51) - fVar61 * fVar57,fVar50 - fVar49 * fVar54);
                  do {
                    iVar39 = iVar39 + -1;
                    iVar25 = *(int *)(lVar23 + 0x60);
                    lVar31 = (long)iVar25;
                    uVar33 = (uint)lVar26;
                    if (lVar26 < iVar21) {
                      uVar30 = uVar33;
                      if (*(int *)(lVar23 + 0x78) != 0) {
                        uVar30 = *(uint *)(*(long *)(lVar23 + 0x70) + lVar26 * 4);
                      }
                      if (uVar30 == 0xffffffff) {
                        lVar28 = lVar28 + lVar35;
                        lVar20 = *(long *)(lVar23 + 0x58) + lVar26 * lVar31 * 4;
                        lVar31 = lVar20 + lVar31 * 4;
                      }
                      else {
                        lVar20 = *(long *)(lVar23 + 0x130) + (long)(int)(uVar30 * iVar25) * 4;
                        lVar31 = lVar20 + lVar31 * 4;
                        lVar28 = *(long *)(lVar23 + 0xc0) + (long)(int)uVar30 * 0x14;
                      }
                    }
                    else {
                      lVar20 = *(long *)(lVar23 + 0x150) +
                               (long)(int)(iVar25 * (uVar33 - iVar21)) * 4;
                      lVar31 = lVar20 + lVar31 * 4;
                      lVar28 = *(long *)(lVar23 + 0xe0) + (long)(int)(uVar33 - iVar21) * 0x14;
                    }
                    iVar21 = *(int *)(lVar28 + 4);
                    iVar25 = *(int *)(lVar23 + 0x40);
                    lVar2 = 0x38;
                    if (iVar25 <= iVar21) {
                      lVar2 = 0xf0;
                    }
                    iVar22 = 0;
                    if (iVar25 <= iVar21) {
                      iVar22 = iVar25;
                    }
                    puVar4 = (undefined8 *)
                             (*(long *)(lVar23 + lVar2) + (long)(iVar21 - iVar22) * 0x10);
                    fVar51 = (float)puVar4[1];
                    uVar8 = *puVar4;
                    fVar43 = (float)uVar8;
                    fVar42 = (float)((ulong)uVar8 >> 0x20);
                    uVar33 = uVar36 & 0xffc00000 | uVar33;
                    fVar55 = (float)*(undefined8 *)(lVar27 + 0x90) +
                             *(float *)(lVar27 + 0x80) * fVar51 +
                             (float)*(undefined8 *)(lVar27 + 0x60) * fVar43 +
                             *(float *)(lVar27 + 0x70) * fVar42;
                    fVar50 = (float)((ulong)*(undefined8 *)(lVar27 + 0x90) >> 0x20) +
                             *(float *)(lVar27 + 0x84) * fVar51 +
                             (float)((ulong)*(undefined8 *)(lVar27 + 0x60) >> 0x20) * fVar43 +
                             *(float *)(lVar27 + 0x74) * fVar42;
                    fVar48 = (float)*(undefined8 *)(lVar27 + 0x98) +
                             *(float *)(lVar27 + 0x88) * fVar51 +
                             (float)*(undefined8 *)(lVar27 + 0x68) * fVar43 +
                             *(float *)(lVar27 + 0x78) * fVar42;
                    fVar53 = fVar41 * fVar55;
                    fVar56 = fVar45 * fVar50;
                    fVar57 = fVar49 * fVar48;
                    fVar54 = fVar53 + fVar56 + fVar57;
                    fVar57 = fVar53 + fVar56 + fVar57;
                    fVar55 = fVar55 - fVar41 * fVar54;
                    fVar50 = fVar50 - fVar45 * fVar57;
                    auVar86._0_8_ = CONCAT44(fVar50,fVar55);
                    auVar86._8_4_ = fVar48 - fVar49 * fVar54;
                    auVar86._12_4_ =
                         ((float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20) +
                         *(float *)(lVar27 + 0x8c) * fVar51 +
                         (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20) * fVar43 +
                         *(float *)(lVar27 + 0x7c) * fVar42) - fVar61 * fVar57;
                    fVar43 = (float)uVar71;
                    fVar55 = fVar55 - fVar43;
                    fVar42 = (float)((ulong)uVar71 >> 0x20);
                    fVar50 = fVar50 - fVar42;
                    fVar51 = (float)uVar65;
                    fVar53 = auVar86._8_4_ - fVar51;
                    fVar48 = (float)((ulong)uVar65 >> 0x20);
                    fVar54 = auVar86._12_4_ - fVar48;
                    if (((uVar33 == uVar29) || (uVar33 == param_7)) || (uVar33 == uVar3)) {
LAB_03075cc0:
                      auVar67._0_4_ = fVar55 * fVar55;
                      auVar67._4_4_ = fVar50 * fVar50;
                      auVar67._8_4_ = fVar53 * fVar53;
                      auVar67._12_4_ = fVar54 * fVar54;
                      auVar73._0_4_ = (fVar69 - fVar43) * fVar55;
                      auVar73._4_4_ = (fVar64 - fVar42) * fVar50;
                      auVar73._8_4_ = (fVar76 - fVar51) * fVar53;
                      auVar73._12_4_ = (fVar68 - fVar48) * fVar54;
                      auVar66 = NEON_ext(auVar67,auVar67,8,1);
                      auVar72 = NEON_ext(auVar73,auVar73,8,1);
                      uVar65 = 0;
                      fVar56 = auVar66._0_4_ + auVar67._0_4_ + auVar67._4_4_;
                      fVar57 = auVar72._0_4_ + auVar73._0_4_ + auVar73._4_4_;
                      uVar71 = 0;
                      if (fVar56 != 0.0) {
                        auVar74._0_4_ = (fVar38 - fVar43) * fVar55;
                        auVar74._4_4_ = (fVar46 - fVar42) * fVar50;
                        auVar74._8_4_ = (fVar44 - fVar51) * fVar53;
                        auVar74._12_4_ = (fVar47 - fVar48) * fVar54;
                        auVar66 = NEON_ext(auVar74,auVar74,8,1);
                        uVar65 = CONCAT44(fVar57 / fVar56,fVar57 / fVar56);
                        fVar56 = (auVar66._0_4_ + auVar74._0_4_ + auVar74._4_4_) / fVar56;
                        uVar71 = CONCAT44(fVar56,fVar56);
                      }
                      uVar65 = NEON_fminnm(uVar65,uVar85,4);
                      uVar65 = NEON_fmax(uVar65,0,4);
                      uVar71 = NEON_fminnm(uVar71,uVar85,4);
                      fVar48 = (fVar69 - fVar43) - fVar55 * (float)uVar65;
                      fVar54 = (fVar64 - fVar42) - fVar50 * (float)((ulong)uVar65 >> 0x20);
                      fVar56 = (fVar76 - fVar51) - fVar53 * (float)uVar65;
                      uVar71 = NEON_fmax(uVar71,0,4);
                      fVar43 = (fVar38 - fVar43) - fVar55 * (float)uVar71;
                      fVar42 = (fVar46 - fVar42) - fVar50 * (float)((ulong)uVar71 >> 0x20);
                      fVar51 = (fVar44 - fVar51) - fVar53 * (float)uVar71;
                      fVar48 = fVar48 * fVar48;
                      fVar54 = fVar54 * fVar54;
                      fVar56 = fVar56 * fVar56;
                      fVar43 = fVar43 * fVar43;
                      fVar42 = fVar42 * fVar42;
                      fVar51 = fVar51 * fVar51;
                      fVar55 = fVar48 + fVar54 + fVar56;
                      fVar50 = fVar43 + fVar42 + fVar51;
                      if (((bool)(~((float)uVar19 <= fVar55) & 1)) ||
                         ((bool)(~((float)uVar18 <= fVar50) & 1))) {
                        if (*(int *)(lVar28 + 8) == -1) {
LAB_03075e68:
                          uVar19 = NEON_fmin(uVar19,CONCAT44(fVar48 + fVar54 + fVar56,fVar55),4);
                          uVar18 = NEON_fmin(uVar18,CONCAT44(fVar43 + fVar42 + fVar51,fVar50),4);
                        }
                        else {
                          bVar16 = *(byte *)(lVar28 + 0x10);
                          if ((param_2 == (long *)0x0) || ((bVar16 >> 5 & 1) != 0)) {
                            if ((bVar16 >> 5 & 1) != 0) goto LAB_03075e68;
                          }
                          else {
                            uVar24 = (**(code **)(*param_2 + 0x28))
                                               (param_2,param_1,uVar33,lVar28,lVar20,lVar31);
                            auVar86._8_8_ = auVar86._8_8_;
                            if ((uVar24 & 1) == 0) goto LAB_03075e68;
                            lVar23 = *(long *)(lVar27 + 0x20);
                            bVar16 = *(byte *)(lVar28 + 0x10);
                          }
                          uVar33 = *(uint *)(lVar28 + 0xc);
                          if (((bVar16 >> 6 & 1) == 0) && (uVar33 != 0xffffffff)) {
                            uVar33 = uVar33 & 0x3fffff | *(int *)(lVar23 + 0x17c) << 0x16;
                          }
                          lVar23 = (long)(int)local_e8;
                          if ((int)(local_e8._4_4_ & 0x7fffffff) <= (int)local_e8) {
                            FUN_0305c42c(&local_f0,PTR_PTR_047d1a50,lVar23 + 1);
                          }
                          *(uint *)(local_f0 + (long)(int)local_e8 * 4) = uVar33;
                          local_e8._0_4_ = (int)(lVar23 + 1);
                        }
                      }
                    }
                    else {
                      fVar56 = (fVar69 + (fVar38 - fVar69) * 0.5) - fVar43;
                      fVar58 = (fVar64 + (fVar46 - fVar64) * 0.5) - fVar42;
                      fVar60 = (fVar76 + (fVar44 - fVar76) * 0.5) - fVar51;
                      fVar62 = (fVar68 + (fVar47 - fVar68) * 0.5) - fVar48;
                      auVar6._4_4_ = fVar50;
                      auVar6._0_4_ = fVar55;
                      auVar6._8_4_ = fVar53;
                      auVar6._12_4_ = fVar54;
                      auVar7._4_4_ = fVar50;
                      auVar7._0_4_ = fVar55;
                      auVar7._8_4_ = fVar53;
                      auVar7._12_4_ = fVar54;
                      auVar66 = NEON_ext(auVar6,auVar7,4,1);
                      auVar9._4_4_ = fVar58;
                      auVar9._0_4_ = fVar56;
                      auVar9._8_4_ = fVar60;
                      auVar9._12_4_ = fVar62;
                      auVar10._4_4_ = fVar58;
                      auVar10._0_4_ = fVar56;
                      auVar10._8_4_ = fVar60;
                      auVar10._12_4_ = fVar62;
                      auVar72 = NEON_ext(auVar9,auVar10,4,1);
                      fVar57 = auVar72._0_4_ * fVar55 - fVar56 * auVar66._0_4_;
                      fVar59 = auVar72._4_4_ * fVar50 - fVar58 * auVar66._4_4_;
                      fVar56 = fVar56 * fVar53 - fVar60 * fVar55;
                      fVar58 = fVar58 * fVar54 - fVar62 * fVar50;
                      auVar11._4_4_ = fVar59;
                      auVar11._0_4_ = fVar57;
                      auVar11._8_4_ = fVar56;
                      auVar11._12_4_ = fVar58;
                      auVar12._4_4_ = fVar59;
                      auVar12._0_4_ = fVar57;
                      auVar12._8_4_ = fVar56;
                      auVar12._12_4_ = fVar58;
                      auVar66 = NEON_ext(auVar11,auVar12,4,1);
                      fVar56 = fVar41 * auVar66._0_4_;
                      fVar58 = fVar45 * auVar66._4_4_;
                      auVar13._4_4_ = fVar58;
                      auVar13._0_4_ = fVar56;
                      auVar13._8_4_ = fVar49 * fVar57;
                      auVar13._12_4_ = fVar61 * 0.0;
                      auVar14._4_4_ = fVar58;
                      auVar14._0_4_ = fVar56;
                      auVar14._8_4_ = fVar49 * fVar57;
                      auVar14._12_4_ = fVar61 * 0.0;
                      auVar66 = NEON_ext(auVar13,auVar14,8,1);
                      if (0.0 <= auVar66._0_4_ + fVar56 + fVar58) goto LAB_03075cc0;
                    }
                    if (iVar39 == 0) break;
                    lVar23 = *(long *)(lVar27 + 0x20);
                    lVar26 = lVar26 + 1;
                    lVar35 = lVar35 + 0x14;
                    iVar21 = *(int *)(lVar23 + 0x30);
                    lVar28 = *(long *)(lVar23 + 0x28);
                    uVar65 = auVar86._8_8_;
                    uVar71 = auVar86._0_8_;
                  } while( true );
                }
              }
              else {
                lVar28 = *(long *)(lVar23 + 0x140) + (long)(int)(iVar39 * uVar30) * 4;
                lVar26 = lVar28 + lVar26 * 4;
                lVar35 = *(long *)(lVar23 + 0xd0);
LAB_03075a7c:
                piVar37 = (int *)(lVar35 + (long)(int)uVar30 * 0x10);
                if (param_2 == (long *)0x0) goto LAB_03075ab8;
LAB_03075a84:
                uVar24 = (**(code **)(*param_2 + 0x20))
                                   (param_2,param_1,param_3 & 0xffffffff,piVar37,lVar28,lVar26);
                if ((uVar24 & 1) != 0) {
                  lVar23 = *(long *)(lVar27 + 0x20);
                  goto LAB_03075ab8;
                }
                lVar26 = *(long *)(lVar27 + 0x20);
                iVar39 = *piVar37;
                lVar23 = (long)iVar39;
                iVar21 = *(int *)(lVar26 + 0x30);
                iVar25 = (int)(short)piVar37[2];
                if (iVar39 < iVar21) {
                  iVar22 = iVar39;
                  if (*(int *)(lVar26 + 0x78) != 0) {
                    iVar22 = *(int *)(*(long *)(lVar26 + 0x70) + lVar23 * 4);
                  }
                  if (iVar22 != -1) {
                    plVar34 = (long *)(lVar26 + 0xc0);
                    iVar39 = iVar22;
                    goto LAB_03075ef0;
                  }
                  lVar28 = *(long *)(lVar26 + 0x28);
                }
                else {
                  iVar39 = iVar39 - iVar21;
                  plVar34 = (long *)(lVar26 + 0xe0);
LAB_03075ef0:
                  lVar28 = *plVar34;
                }
                iVar22 = *(int *)(lVar28 + (long)iVar39 * 0x14);
                iVar39 = *(int *)(lVar26 + 0x40);
                lVar28 = 0x38;
                if (iVar39 <= iVar22) {
                  lVar28 = 0xf0;
                }
                iVar1 = 0;
                if (iVar39 <= iVar22) {
                  iVar1 = iVar39;
                }
                if ((short)piVar37[2] != 0) {
                  fVar57 = (float)*(undefined8 *)(lVar27 + 0x78);
                  fVar58 = (float)((ulong)*(undefined8 *)(lVar27 + 0x78) >> 0x20);
                  fVar54 = (float)*(undefined8 *)(lVar27 + 0x70);
                  fVar56 = (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20);
                  pfVar5 = (float *)(*(long *)(lVar26 + lVar28) + (long)(iVar22 - iVar1) * 0x10);
                  fVar43 = *pfVar5;
                  fVar42 = pfVar5[1];
                  fVar51 = pfVar5[2];
                  fVar62 = (float)*(undefined8 *)(lVar27 + 0x88);
                  fVar63 = (float)((ulong)*(undefined8 *)(lVar27 + 0x88) >> 0x20);
                  fVar59 = (float)*(undefined8 *)(lVar27 + 0x80);
                  fVar60 = (float)((ulong)*(undefined8 *)(lVar27 + 0x80) >> 0x20);
                  auVar86 = *(undefined1 (*) [16])(lVar27 + 0x90);
                  fVar48 = (float)*(undefined8 *)(lVar27 + 0x60);
                  fVar55 = (float)((ulong)*(undefined8 *)(lVar27 + 0x60) >> 0x20);
                  fVar50 = (float)*(undefined8 *)(lVar27 + 0x68);
                  fVar53 = (float)((ulong)*(undefined8 *)(lVar27 + 0x68) >> 0x20);
                  lVar27 = (long)iVar21 * -0x14 + lVar23 * 0x14;
                  fVar70 = auVar86._0_4_ + fVar59 * fVar51 + fVar48 * fVar43 + fVar54 * fVar42;
                  fVar77 = auVar86._4_4_ + fVar60 * fVar51 + fVar55 * fVar43 + fVar56 * fVar42;
                  fVar78 = auVar86._8_4_ + fVar62 * fVar51 + fVar50 * fVar43 + fVar57 * fVar42;
                  fVar79 = fVar41 * fVar70;
                  fVar81 = fVar45 * fVar77;
                  fVar82 = fVar49 * fVar78;
                  fVar80 = fVar82 + fVar79 + fVar81;
                  fVar82 = fVar82 + fVar79 + fVar81;
                  auVar75._0_4_ = fVar70 - fVar41 * fVar80;
                  auVar75._4_4_ = fVar77 - fVar45 * fVar82;
                  auVar75._8_4_ = fVar78 - fVar49 * fVar80;
                  auVar75._12_4_ =
                       (auVar86._12_4_ + fVar63 * fVar51 + fVar53 * fVar43 + fVar58 * fVar42) -
                       fVar61 * fVar82;
                  do {
                    if (lVar23 < iVar21) {
                      if (*(int *)(lVar26 + 0x78) == 0) {
                        iVar22 = (int)lVar23;
                      }
                      else {
                        iVar22 = *(int *)(*(long *)(lVar26 + 0x70) + lVar23 * 4);
                      }
                      if (iVar22 == -1) {
                        lVar28 = *(long *)(lVar26 + 0x28) + lVar23 * 0x14;
                      }
                      else {
                        lVar28 = *(long *)(lVar26 + 0xc0) + (long)iVar22 * 0x14;
                      }
                    }
                    else {
                      lVar28 = *(long *)(lVar26 + 0xe0) + lVar27;
                    }
                    iVar22 = *(int *)(lVar28 + 4);
                    lVar28 = 0x38;
                    if (iVar39 <= iVar22) {
                      lVar28 = 0xf0;
                    }
                    iVar1 = 0;
                    if (iVar39 <= iVar22) {
                      iVar1 = iVar39;
                    }
                    puVar4 = (undefined8 *)
                             (*(long *)(lVar26 + lVar28) + (long)(iVar22 - iVar1) * 0x10);
                    uVar71 = *puVar4;
                    fVar77 = (float)uVar71;
                    fVar79 = (float)((ulong)uVar71 >> 0x20);
                    fVar81 = (float)puVar4[1];
                    fVar78 = auVar86._0_4_ + fVar59 * fVar81 + fVar48 * fVar77 + fVar54 * fVar79;
                    fVar80 = auVar86._4_4_ + fVar60 * fVar81 + fVar55 * fVar77 + fVar56 * fVar79;
                    fVar82 = auVar86._8_4_ + fVar62 * fVar81 + fVar50 * fVar77 + fVar57 * fVar79;
                    fVar43 = fVar41 * fVar78;
                    fVar42 = fVar45 * fVar80;
                    fVar84 = fVar49 * fVar82;
                    fVar83 = fVar43 + fVar42 + fVar84;
                    fVar84 = fVar43 + fVar42 + fVar84;
                    fVar43 = auVar75._0_4_;
                    fVar42 = auVar75._4_4_;
                    fVar51 = auVar75._8_4_;
                    fVar70 = auVar75._12_4_;
                    fVar78 = fVar78 - fVar41 * fVar83;
                    fVar80 = fVar80 - fVar45 * fVar84;
                    auVar75._4_4_ = fVar80;
                    auVar75._0_4_ = fVar78;
                    fVar82 = fVar82 - fVar49 * fVar83;
                    fVar77 = (auVar86._12_4_ + fVar63 * fVar81 + fVar53 * fVar77 + fVar58 * fVar79)
                             - fVar61 * fVar84;
                    auVar75._12_4_ = fVar77;
                    auVar75._8_4_ = fVar82;
                    fVar78 = fVar78 - fVar43;
                    fVar80 = fVar80 - fVar42;
                    fVar82 = fVar82 - fVar51;
                    fVar77 = fVar77 - fVar70;
                    auVar87._0_4_ = fVar78 * fVar78;
                    auVar87._4_4_ = fVar80 * fVar80;
                    auVar87._8_4_ = fVar82 * fVar82;
                    auVar87._12_4_ = fVar77 * fVar77;
                    auVar88._0_4_ = (fVar69 - fVar43) * fVar78;
                    auVar88._4_4_ = (fVar64 - fVar42) * fVar80;
                    auVar88._8_4_ = (fVar76 - fVar51) * fVar82;
                    auVar88._12_4_ = (fVar68 - fVar70) * fVar77;
                    auVar66 = NEON_ext(auVar87,auVar87,8,1);
                    auVar72 = NEON_ext(auVar88,auVar88,8,1);
                    uVar65 = 0;
                    fVar79 = auVar66._0_4_ + auVar87._0_4_ + auVar87._4_4_;
                    fVar81 = auVar72._0_4_ + auVar88._0_4_ + auVar88._4_4_;
                    uVar71 = 0;
                    if (fVar79 != 0.0) {
                      auVar89._0_4_ = (fVar38 - fVar43) * fVar78;
                      auVar89._4_4_ = (fVar46 - fVar42) * fVar80;
                      auVar89._8_4_ = (fVar44 - fVar51) * fVar82;
                      auVar89._12_4_ = (fVar47 - fVar70) * fVar77;
                      auVar66 = NEON_ext(auVar89,auVar89,8,1);
                      uVar65 = CONCAT44(fVar81 / fVar79,fVar81 / fVar79);
                      fVar79 = (auVar66._0_4_ + auVar89._0_4_ + auVar89._4_4_) / fVar79;
                      uVar71 = CONCAT44(fVar79,fVar79);
                    }
                    uVar65 = NEON_fminnm(uVar65,uVar85,4);
                    uVar65 = NEON_fmax(uVar65,0,4);
                    uVar71 = NEON_fminnm(uVar71,uVar85,4);
                    lVar23 = lVar23 + 1;
                    lVar27 = lVar27 + 0x14;
                    fVar70 = (fVar69 - fVar43) - fVar78 * (float)uVar65;
                    fVar77 = (fVar64 - fVar42) - fVar80 * (float)((ulong)uVar65 >> 0x20);
                    fVar79 = (fVar76 - fVar51) - fVar82 * (float)uVar65;
                    uVar71 = NEON_fmax(uVar71,0,4);
                    iVar25 = iVar25 + -1;
                    fVar43 = (fVar38 - fVar43) - fVar78 * (float)uVar71;
                    fVar42 = (fVar46 - fVar42) - fVar80 * (float)((ulong)uVar71 >> 0x20);
                    fVar51 = (fVar44 - fVar51) - fVar82 * (float)uVar71;
                    fVar70 = fVar70 * fVar70;
                    fVar77 = fVar77 * fVar77;
                    fVar79 = fVar79 * fVar79;
                    fVar43 = fVar43 * fVar43;
                    fVar42 = fVar42 * fVar42;
                    fVar51 = fVar51 * fVar51;
                    uVar19 = NEON_fmin(uVar19,CONCAT44(fVar70 + fVar77 + fVar79,
                                                       fVar70 + fVar77 + fVar79),4);
                    uVar18 = NEON_fmin(uVar18,CONCAT44(fVar43 + fVar42 + fVar51,
                                                       fVar43 + fVar42 + fVar51),4);
                  } while (iVar25 != 0);
                }
              }
              uVar24 = local_110 & 0xffffffff;
              lVar23 = (long)(int)local_e8;
              if ((int)local_110 < 1) {
                if ((int)local_e8 == 0) goto LAB_03076138;
                param_3 = (ulong)*(uint *)(local_f0 + (lVar23 + -1) * 4);
                local_e8._0_4_ = (int)(lVar23 + -1);
              }
              else {
                do {
                  if (lVar23 == 0) goto LAB_03076138;
                  lVar23 = lVar23 + -1;
                  uVar33 = *(uint *)(local_f0 + lVar23 * 4);
                  param_3 = (ulong)uVar33;
                  uVar32 = 0;
                  local_e8._0_4_ = (int)lVar23;
                  while (*(uint *)(local_118 + uVar32 * 4) != uVar33) {
                    uVar32 = uVar32 + 1;
                    if (uVar24 == uVar32) goto LAB_03076128;
                  }
                } while (-1 < (int)uVar32);
              }
LAB_03076128:
              uVar33 = local_110._4_4_;
            } while( true );
          }
        }
      }
    }
  }
  *param_13 = fVar52;
  *param_14 = fVar52;
LAB_030755ac:
  if ((local_c8 != (long *)0x0) && (local_c0 != '\0')) {
    lVar23 = *local_c8;
    if (((*(byte *)(lVar23 + 0x38) & 1) != 0) && (local_c8[6] != 0)) {
      puVar4 = (undefined8 *)local_c8[2];
      uVar18 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar18 <= (ulong)local_c8[3]) && (local_c8[2] = uVar18, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(local_c8[6] + 8);
      }
    }
    puVar4 = (undefined8 *)local_c8[2];
    uVar18 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar18 <= (ulong)local_c8[3]) && (local_c8[2] = uVar18, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar85 = nn::os::GetSystemTick();
      puVar4[1] = uVar85;
    }
    if (*(code **)(lVar23 + 0x20) != (code *)0x0) {
      (**(code **)(lVar23 + 0x20))(*(undefined8 *)(lVar23 + 0x28));
    }
  }
  lVar23 = nn::os::GetSystemTick();
  *(long *)(param_15 + 8) = (lVar23 - lVar17) + *(long *)(param_15 + 8);
  *(int *)(param_15 + 0x10) = *(int *)(param_15 + 0x10) + 1;
  return;
LAB_03076138:
  *param_13 = fVar52 + SQRT((float)uVar19);
  *param_14 = fVar52 + SQRT((float)uVar18);
  if (local_100 == local_118) {
    local_110 = (ulong)local_110._4_4_ << 0x20;
  }
  if (local_108 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar18 = local_f8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_108 + 0x28) < uVar18) ||
       (*(long *)(local_108 + 0x38) != uVar18 + local_100)) {
      if (local_100 != 0) {
        if (*(ulong *)(local_108 + 0x28) < uVar18 + 0x40) {
          *(int *)(*(long *)(local_108 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_108 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_108 + 0x10) + 0x18))
                    (*(long **)(local_108 + 0x10),local_100 - *(int *)(local_100 + -4),uVar18 + 0x44
                    );
        }
        else {
          if (*(long *)(local_108 + 0x38) == uVar18 + local_100) {
            *(long *)(local_108 + 0x38) = local_100;
            goto LAB_03076220;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_108 + 0x38) = local_100;
      if (*(long *)(local_108 + 0x48) == local_100) {
LAB_03076220:
        FUN_031cf578();
      }
    }
  }
  uVar18 = local_110;
  uVar19 = (ulong)local_110._4_4_;
  local_110 = (ulong)local_110._4_4_ << 0x20;
  if ((-1 < (long)uVar18) && (local_118 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_118,uVar19 << 2);
  }
  if (local_d8 == local_f0) {
    local_e8._0_4_ = 0;
  }
  if (local_e0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar18 = local_d0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_e0 + 0x28) < uVar18) || (*(long *)(local_e0 + 0x38) != uVar18 + local_d8))
    {
      if (local_d8 != 0) {
        if (*(ulong *)(local_e0 + 0x28) < uVar18 + 0x40) {
          *(int *)(*(long *)(local_e0 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_e0 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_e0 + 0x10) + 0x18))
                    (*(long **)(local_e0 + 0x10),local_d8 - *(int *)(local_d8 + -4),uVar18 + 0x44);
        }
        else {
          if (*(long *)(local_e0 + 0x38) == uVar18 + local_d8) {
            *(long *)(local_e0 + 0x38) = local_d8;
            goto LAB_03076318;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_e0 + 0x38) = local_d8;
      if (*(long *)(local_e0 + 0x48) == local_d8) {
LAB_03076318:
        FUN_031cf578();
      }
    }
  }
  uVar33 = local_e8._4_4_;
  uVar18 = (ulong)local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < (int)uVar33) && (local_f0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f0,uVar18 << 2);
  }
  goto LAB_030755ac;
}


