/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00293b4c; name: FUN_00293b4c
 */


/* WARNING: Removing unreachable block (ram,0x00294290) */
/* WARNING: Removing unreachable block (ram,0x00294294) */
/* WARNING: Removing unreachable block (ram,0x0029429c) */
/* WARNING: Removing unreachable block (ram,0x002942a4) */
/* WARNING: Removing unreachable block (ram,0x002942a8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00293b4c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long ******pppppplVar3;
  char cVar4;
  bool bVar5;
  uint16_t uVar6;
  size_t __n;
  undefined8 *******pppppppuVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long lVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  long lVar19;
  long *******ppppppplVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  int *piVar25;
  undefined8 *******pppppppuVar26;
  undefined8 *******pppppppuVar27;
  long *******ppppppplVar28;
  char *__string;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 ******ppppppuVar31;
  long ******pppppplVar32;
  undefined1 auStack_378 [168];
  ulong local_2d0;
  long *******ppppppplStack_2c8;
  long ******pppppplStack_2c0;
  long ******local_2b8;
  long ******pppppplStack_2b0;
  long local_238 [19];
  undefined8 *local_1a0;
  long ******local_198;
  undefined8 ******local_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******ppppppuStack_178;
  ulong local_170;
  undefined8 *******local_168;
  ulong local_160;
  undefined1 local_124 [52];
  undefined8 local_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((char)param_1[9] != '\0') {
    return;
  }
  local_1a0 = (undefined8 *)0x0;
  local_198 = (long ******)0x0;
  local_238[0] = 0;
  if ((char)param_1[0x21] == '\0') {
    lVar15 = param_1[0x20];
    if (param_1[0xd] == 0) {
      lVar22 = 0;
      local_2d0 = 0;
      lVar19 = *(long *)(lVar15 + 0x10);
      lVar11 = *(long *)(lVar15 + 0x18);
      if (lVar11 != lVar19) goto LAB_00293c14;
    }
    else {
      lVar22 = *(long *)(param_1[0xd] + 0xf0);
      local_2d0 = 0;
      lVar19 = *(long *)(lVar15 + 0x10);
      lVar11 = *(long *)(lVar15 + 0x18);
      if (lVar11 != lVar19) {
LAB_00293c14:
        local_2d0 = 0;
        uVar14 = 0;
        do {
          piVar25 = (int *)(lVar19 + uVar14 * 0x4c);
          if ((*(short *)((long)piVar25 + 0x16) == 0 && *(char *)((long)piVar25 + 0x4a) == '\0') &&
             (*piVar25 == 0x10 || *piVar25 == 4)) {
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            pppppplStack_e8 = (long ******)0x0;
            local_f0 = (long *******)0x0;
            pppppplStack_d8 = (long ******)0x0;
            pppppplStack_e0 = (long ******)0x0;
            local_70 = 0;
            if (*(char *)((long)piVar25 + 0x4a) == '\0') {
                    /* try { // try from 00293cb4 to 00293cb7 has its CatchHandler @ 0029459c */
              uVar6 = htons((uint16_t)piVar25[5]);
              if (*piVar25 == 0x10) {
                lVar11 = lVar19 + uVar14 * 0x4c;
                local_70 = 0x1c;
                local_f0._0_2_ = CONCAT11(0x1c,(undefined1)local_f0);
                pppppplStack_e0 = *(long *******)(lVar11 + 0xc);
                pppppplStack_e8 = *(long *******)(lVar11 + 4);
              }
              else {
                if (*piVar25 != 4) goto LAB_00293d0c;
                local_70 = 0x10;
                local_f0._0_2_ = CONCAT11(2,(undefined1)local_f0);
                local_f0._0_4_ = (uint)(ushort)local_f0;
                local_f0 = (long *******)
                           CONCAT44(*(undefined4 *)(lVar19 + uVar14 * 0x4c + 4),(uint)local_f0);
              }
              local_f0._0_4_ = CONCAT22(uVar6,(ushort)local_f0);
            }
LAB_00293d0c:
            __string = (char *)(lVar19 + uVar14 * 0x4c + 0x18);
            if (*__string == '\0') {
              local_124[0] = 0;
            }
            else {
                    /* try { // try from 00293d18 to 00293d23 has its CatchHandler @ 002945e4 */
              __n = strnlen(__string,0x32);
              memcpy(local_124,__string,__n);
              local_124[__n] = 0;
            }
            local_170 = 0;
                    /* try { // try from 00293d4c to 00293d67 has its CatchHandler @ 002945f0 */
            FUN_00344250(&local_190,"grpc.grpclb_address_lb_token",local_124,&PTR_LAB_0448d798);
            bVar5 = (local_170 & 1) != 0;
            pppppppuVar27 = &local_168;
            if (bVar5) {
              pppppppuVar27 = local_168;
            }
            uVar2 = 2;
            if (bVar5) {
              uVar2 = local_160;
            }
            if (local_170 >> 1 == uVar2) {
              pppppppuVar7 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar2 << 6);
              pppppppuVar18 = pppppppuVar7 + uVar2 * 4;
              pppppppuVar18[1] = ppppppuStack_188;
              *pppppppuVar18 = local_190;
              pppppppuVar18[3] = ppppppuStack_178;
              pppppppuVar18[2] = ppppppuStack_180;
              if (pppppppuVar7 != (undefined8 *******)0x0) {
                if (uVar2 != 0) {
                  uVar12 = uVar2 & 3;
                  if (uVar2 - 1 < 3) {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = 0;
                    pppppppuVar18 = pppppppuVar7 + 8;
                    pppppppuVar26 = pppppppuVar27;
                    do {
                      pppppppuVar27 = pppppppuVar26 + 0x10;
                      ppppppuVar29 = *pppppppuVar26;
                      ppppppuVar31 = pppppppuVar26[3];
                      ppppppuVar30 = pppppppuVar26[2];
                      pppppppuVar18[-7] = pppppppuVar26[1];
                      pppppppuVar18[-8] = ppppppuVar29;
                      pppppppuVar18[-5] = ppppppuVar31;
                      pppppppuVar18[-6] = ppppppuVar30;
                      uVar17 = uVar17 + 4;
                      ppppppuVar29 = pppppppuVar26[4];
                      ppppppuVar31 = pppppppuVar26[7];
                      ppppppuVar30 = pppppppuVar26[6];
                      pppppppuVar18[-3] = pppppppuVar26[5];
                      pppppppuVar18[-4] = ppppppuVar29;
                      pppppppuVar18[-1] = ppppppuVar31;
                      pppppppuVar18[-2] = ppppppuVar30;
                      ppppppuVar29 = pppppppuVar26[8];
                      ppppppuVar31 = pppppppuVar26[0xb];
                      ppppppuVar30 = pppppppuVar26[10];
                      pppppppuVar18[1] = pppppppuVar26[9];
                      *pppppppuVar18 = ppppppuVar29;
                      pppppppuVar18[3] = ppppppuVar31;
                      pppppppuVar18[2] = ppppppuVar30;
                      ppppppuVar29 = pppppppuVar26[0xc];
                      ppppppuVar31 = pppppppuVar26[0xf];
                      ppppppuVar30 = pppppppuVar26[0xe];
                      pppppppuVar18[5] = pppppppuVar26[0xd];
                      pppppppuVar18[4] = ppppppuVar29;
                      pppppppuVar18[7] = ppppppuVar31;
                      pppppppuVar18[6] = ppppppuVar30;
                      pppppppuVar18 = pppppppuVar18 + 0x10;
                      pppppppuVar26 = pppppppuVar27;
                    } while ((uVar2 & 0xfffffffffffffffc) != uVar17);
                  }
                  if (uVar12 != 0) {
                    pppppppuVar18 = pppppppuVar7 + uVar17 * 4;
                    do {
                      ppppppuVar29 = *pppppppuVar27;
                      ppppppuVar31 = pppppppuVar27[3];
                      ppppppuVar30 = pppppppuVar27[2];
                      uVar12 = uVar12 - 1;
                      pppppppuVar18[1] = pppppppuVar27[1];
                      *pppppppuVar18 = ppppppuVar29;
                      pppppppuVar18[3] = ppppppuVar31;
                      pppppppuVar18[2] = ppppppuVar30;
                      pppppppuVar18 = pppppppuVar18 + 4;
                      pppppppuVar27 = pppppppuVar27 + 4;
                    } while (uVar12 != 0);
                  }
                }
                if ((local_170 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_168);
                }
                local_170 = local_170 | 1;
                local_168 = pppppppuVar7;
                local_160 = uVar2 << 1;
              }
            }
            else {
              pppppppuVar27 = pppppppuVar27 + (local_170 >> 1) * 4;
              pppppppuVar27[1] = ppppppuStack_188;
              *pppppppuVar27 = local_190;
              pppppppuVar27[3] = ppppppuStack_178;
              pppppppuVar27[2] = ppppppuStack_180;
            }
            local_170 = local_170 + 2;
            if (lVar22 != 0) {
                    /* try { // try from 00293ea0 to 00293ebb has its CatchHandler @ 002945ec */
              FUN_00344250(&local_190,"grpc.grpclb_address_client_stats",lVar22,&PTR_LAB_0448d7b0);
              bVar5 = (local_170 & 1) != 0;
              pppppppuVar27 = &local_168;
              if (bVar5) {
                pppppppuVar27 = local_168;
              }
              uVar2 = 2;
              if (bVar5) {
                uVar2 = local_160;
              }
              if (local_170 >> 1 == uVar2) {
                pppppppuVar7 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar2 << 6);
                pppppppuVar18 = pppppppuVar7 + uVar2 * 4;
                pppppppuVar18[1] = ppppppuStack_188;
                *pppppppuVar18 = local_190;
                pppppppuVar18[3] = ppppppuStack_178;
                pppppppuVar18[2] = ppppppuStack_180;
                if (pppppppuVar7 != (undefined8 *******)0x0) {
                  if (uVar2 != 0) {
                    uVar12 = uVar2 & 3;
                    if (uVar2 - 1 < 3) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = 0;
                      pppppppuVar18 = pppppppuVar7 + 8;
                      pppppppuVar26 = pppppppuVar27;
                      do {
                        pppppppuVar27 = pppppppuVar26 + 0x10;
                        ppppppuVar29 = *pppppppuVar26;
                        ppppppuVar31 = pppppppuVar26[3];
                        ppppppuVar30 = pppppppuVar26[2];
                        pppppppuVar18[-7] = pppppppuVar26[1];
                        pppppppuVar18[-8] = ppppppuVar29;
                        pppppppuVar18[-5] = ppppppuVar31;
                        pppppppuVar18[-6] = ppppppuVar30;
                        uVar17 = uVar17 + 4;
                        ppppppuVar29 = pppppppuVar26[4];
                        ppppppuVar31 = pppppppuVar26[7];
                        ppppppuVar30 = pppppppuVar26[6];
                        pppppppuVar18[-3] = pppppppuVar26[5];
                        pppppppuVar18[-4] = ppppppuVar29;
                        pppppppuVar18[-1] = ppppppuVar31;
                        pppppppuVar18[-2] = ppppppuVar30;
                        ppppppuVar29 = pppppppuVar26[8];
                        ppppppuVar31 = pppppppuVar26[0xb];
                        ppppppuVar30 = pppppppuVar26[10];
                        pppppppuVar18[1] = pppppppuVar26[9];
                        *pppppppuVar18 = ppppppuVar29;
                        pppppppuVar18[3] = ppppppuVar31;
                        pppppppuVar18[2] = ppppppuVar30;
                        ppppppuVar29 = pppppppuVar26[0xc];
                        ppppppuVar31 = pppppppuVar26[0xf];
                        ppppppuVar30 = pppppppuVar26[0xe];
                        pppppppuVar18[5] = pppppppuVar26[0xd];
                        pppppppuVar18[4] = ppppppuVar29;
                        pppppppuVar18[7] = ppppppuVar31;
                        pppppppuVar18[6] = ppppppuVar30;
                        pppppppuVar18 = pppppppuVar18 + 0x10;
                        pppppppuVar26 = pppppppuVar27;
                      } while ((uVar2 & 0xfffffffffffffffc) != uVar17);
                    }
                    if (uVar12 != 0) {
                      pppppppuVar18 = pppppppuVar7 + uVar17 * 4;
                      do {
                        ppppppuVar29 = *pppppppuVar27;
                        ppppppuVar31 = pppppppuVar27[3];
                        ppppppuVar30 = pppppppuVar27[2];
                        uVar12 = uVar12 - 1;
                        pppppppuVar18[1] = pppppppuVar27[1];
                        *pppppppuVar18 = ppppppuVar29;
                        pppppppuVar18[3] = ppppppuVar31;
                        pppppppuVar18[2] = ppppppuVar30;
                        pppppppuVar18 = pppppppuVar18 + 4;
                        pppppppuVar27 = pppppppuVar27 + 4;
                      } while (uVar12 != 0);
                    }
                  }
                  if ((local_170 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_168);
                  }
                  local_170 = local_170 | 1;
                  local_168 = pppppppuVar7;
                  local_160 = uVar2 << 1;
                }
              }
              else {
                pppppppuVar27 = pppppppuVar27 + (local_170 >> 1) * 4;
                pppppppuVar27[1] = ppppppuStack_188;
                *pppppppuVar27 = local_190;
                pppppppuVar27[3] = ppppppuStack_178;
                pppppppuVar27[2] = ppppppuStack_180;
              }
              local_170 = local_170 + 2;
            }
            pppppppuVar27 = &local_168;
            if ((local_170 & 1) != 0) {
              pppppppuVar27 = local_168;
            }
                    /* try { // try from 00293ff0 to 0029400b has its CatchHandler @ 002945f4 */
            local_190 = (undefined8 ******)FUN_00343590(0,pppppppuVar27,local_170 >> 1);
            FUN_00294760(&local_2d0,&local_f0,&local_190);
            if ((local_170 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_168);
            }
            lVar19 = *(long *)(lVar15 + 0x10);
            lVar11 = *(long *)(lVar15 + 0x18);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < (ulong)((lVar11 - lVar19 >> 2) * -0x79435e50d79435e5));
      }
    }
                    /* try { // try from 00293bf4 to 00293bff has its CatchHandler @ 002944b4 */
    FUN_002814ac(local_238,&local_2d0);
    if ((local_2d0 & 1) == 0) {
      ppppppplVar13 = (long *******)&ppppppplStack_2c8;
LAB_00294030:
      ppppppplVar13 = ppppppplVar13 + (local_2d0 >> 1) * 0x12 + -1;
      lVar15 = (local_2d0 >> 1) + 1;
      while (lVar15 = lVar15 + -1, lVar15 != 0) {
        pppppplVar9 = *ppppppplVar13;
        ppppppplVar13 = ppppppplVar13 + -0x12;
                    /* try { // try from 00294054 to 00294057 has its CatchHandler @ 00294668 */
        FUN_00343d90(pppppplVar9);
      }
      if ((local_2d0 & 1) != 0) goto LAB_00294074;
    }
    else {
      ppppppplVar13 = ppppppplStack_2c8;
      if (ppppppplStack_2c8 != (long *******)0x0) goto LAB_00294030;
      ppppppplStack_2c8 = (long *******)0x0;
LAB_00294074:
      FUN_0049e790(PTR_LAB_047cba48,ppppppplStack_2c8);
    }
    iVar21 = 1;
  }
  else {
    if (param_1 + 0x22 != local_238) {
      plVar23 = param_1 + 0x23;
      if ((param_1[0x22] & 1U) != 0) {
        plVar23 = (long *)param_1[0x23];
      }
                    /* try { // try from 00293bac to 00293bb3 has its CatchHandler @ 00294594 */
      FUN_0027b208(local_238,plVar23,(ulong)param_1[0x22] >> 1);
    }
    iVar21 = 0;
  }
  local_2d0 = 0;
                    /* try { // try from 00294088 to 0029409b has its CatchHandler @ 002945b8 */
  FUN_00344230(&local_f0,"grpc.address_is_backend_from_grpclb_load_balancer",iVar21);
  pppppplStack_2b0 = pppppplStack_d8;
  local_2b8 = pppppplStack_e0;
  pppppplStack_2c0 = pppppplStack_e8;
  ppppppplStack_2c8 = local_f0;
  local_2d0 = local_2d0 + 2;
  if (iVar21 != 0) {
                    /* try { // try from 002940c0 to 002940d3 has its CatchHandler @ 00294590 */
    FUN_00344230(&local_f0,"grpc.inhibit_health_checking",1);
    pppppplVar10 = pppppplStack_d8;
    pppppplVar9 = pppppplStack_e0;
    ppppppplVar20 = local_f0;
    bVar5 = (local_2d0 & 1) != 0;
    ppppppplVar13 = (long *******)&ppppppplStack_2c8;
    if (bVar5) {
      ppppppplVar13 = ppppppplStack_2c8;
    }
    pppppplVar3 = (long ******)0x2;
    if (bVar5) {
      pppppplVar3 = pppppplStack_2c0;
    }
    if ((long ******)(local_2d0 >> 1) == pppppplVar3) {
      ppppppplVar8 = (long *******)FUN_0049e770(PTR_FUN_047cba38,(long)pppppplVar3 << 6);
      ppppppplVar20 = ppppppplVar8 + (long)pppppplVar3 * 4;
      ppppppplVar20[1] = pppppplStack_e8;
      *ppppppplVar20 = (long ******)local_f0;
      ppppppplVar20[3] = pppppplStack_d8;
      ppppppplVar20[2] = pppppplStack_e0;
      if (ppppppplVar8 != (long *******)0x0) {
        if (pppppplVar3 != (long ******)0x0) {
          if (pppppplVar3 == (long ******)0x1) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            ppppppplVar20 = ppppppplVar8 + 4;
            ppppppplVar28 = ppppppplVar13;
            do {
              ppppppplVar13 = ppppppplVar28 + 8;
              pppppplVar9 = *ppppppplVar28;
              pppppplVar32 = ppppppplVar28[3];
              pppppplVar10 = ppppppplVar28[2];
              ppppppplVar20[-3] = ppppppplVar28[1];
              ppppppplVar20[-4] = pppppplVar9;
              ppppppplVar20[-1] = pppppplVar32;
              ppppppplVar20[-2] = pppppplVar10;
              uVar14 = uVar14 + 2;
              pppppplVar9 = ppppppplVar28[4];
              pppppplVar32 = ppppppplVar28[7];
              pppppplVar10 = ppppppplVar28[6];
              ppppppplVar20[1] = ppppppplVar28[5];
              *ppppppplVar20 = pppppplVar9;
              ppppppplVar20[3] = pppppplVar32;
              ppppppplVar20[2] = pppppplVar10;
              ppppppplVar20 = ppppppplVar20 + 8;
              ppppppplVar28 = ppppppplVar13;
            } while (((ulong)pppppplVar3 & 0xfffffffffffffffe) != uVar14);
          }
          if (((ulong)pppppplVar3 & 1) != 0) {
            pppppplVar9 = *ppppppplVar13;
            pppppplVar32 = ppppppplVar13[3];
            pppppplVar10 = ppppppplVar13[2];
            ppppppplVar20 = ppppppplVar8 + uVar14 * 4;
            ppppppplVar20[1] = ppppppplVar13[1];
            *ppppppplVar20 = pppppplVar9;
            ppppppplVar20[3] = pppppplVar32;
            ppppppplVar20[2] = pppppplVar10;
          }
        }
        if ((local_2d0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,ppppppplStack_2c8);
        }
        local_2d0 = local_2d0 | 1;
        ppppppplStack_2c8 = ppppppplVar8;
        pppppplStack_2c0 = (long ******)((long)pppppplVar3 << 1);
      }
    }
    else {
      ppppppplVar13 = ppppppplVar13 + (long)(local_2d0 >> 1) * 4;
      ppppppplVar13[1] = pppppplStack_e8;
      *ppppppplVar13 = (long ******)ppppppplVar20;
      ppppppplVar13[3] = pppppplVar10;
      ppppppplVar13[2] = pppppplVar9;
    }
    local_2d0 = local_2d0 + 2;
  }
  ppppppplVar13 = (long *******)&ppppppplStack_2c8;
  if ((local_2d0 & 1) != 0) {
    ppppppplVar13 = ppppppplStack_2c8;
  }
                    /* try { // try from 002941d4 to 002941d7 has its CatchHandler @ 002945b4 */
  pppppplVar9 = (long ******)FUN_00343590(param_1[8],ppppppplVar13,local_2d0 >> 1);
  if ((local_2d0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,ppppppplStack_2c8);
  }
  puVar16 = local_1a0;
  local_198 = pppppplVar9;
  if (pppppplVar9 == (long ******)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002944ac to 002944af has its CatchHandler @ 00294594 */
    abort();
  }
  lVar15 = param_1[7];
  lVar19 = *(long *)(lVar15 + 0x10);
  if (lVar19 == 0) {
    uVar24 = 0;
  }
  else {
    plVar23 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar24 = *(undefined8 *)(lVar15 + 0x10);
  }
  if (local_1a0 != (undefined8 *)0x0) {
    plVar23 = local_1a0 + 1;
    do {
      lVar15 = *plVar23;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)*local_1a0)(local_1a0);
      FUN_0049e790(PTR_LAB_047cba48,puVar16);
      plVar23 = (long *)param_1[0x40];
      pppppplVar9 = local_198;
      pppppplVar10 = local_2b8;
      goto joined_r0x00294258;
    }
  }
  plVar23 = (long *)param_1[0x40];
  pppppplVar10 = local_2b8;
joined_r0x00294258:
  local_2b8 = pppppplVar9;
  local_1a0 = (undefined8 *)uVar24;
  local_198 = local_2b8;
  if (plVar23 == (long *)0x0) {
    pppppplStack_2c0 = (long ******)0x0;
    local_2d0 = param_1[2];
    ppppppplStack_2c8 = (long *******)param_1[3];
    if (ppppppplStack_2c8 != (long *******)0x0) {
      ppppppplVar13 = ppppppplStack_2c8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar5) {
          *ppppppplVar13 = (long ******)((long)*ppppppplVar13 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar23 = param_1 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar5) {
        *plVar23 = *plVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    pppppplVar10 = (long ******)FUN_0049e770(PTR_FUN_047cba38,0x10);
    pppppplVar9 = pppppplStack_2c0;
    plVar23 = param_1;
    if (pppppplVar10 != (long ******)0x0) {
      *pppppplVar10 = (long *****)&PTR_FUN_0448d7d8;
      pppppplVar10[1] = (long *****)param_1;
      plVar23 = (long *)0x0;
    }
    if (pppppplStack_2c0 != (long ******)0x0) {
      puVar16 = *pppppplStack_2c0;
      pppppplStack_2c0 = pppppplVar10;
      (*(code *)*puVar16)(pppppplVar9);
      FUN_0049e790(PTR_LAB_047cba48,pppppplVar9);
      pppppplVar10 = pppppplStack_2c0;
    }
    pppppplStack_2c0 = pppppplVar10;
    if (plVar23 != (long *)0x0) {
      plVar1 = plVar23 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar23 + 8))(plVar23);
        FUN_0049e790(PTR_LAB_047cba48,plVar23);
      }
    }
    local_f0 = (long *******)PTR_DAT_047cc610;
                    /* try { // try from 00294358 to 00294363 has its CatchHandler @ 00294524 */
    plVar23 = (long *)FUN_0027ad24(&local_2d0,&local_f0);
                    /* try { // try from 00294370 to 00294373 has its CatchHandler @ 00294508 */
    FUN_00358260(plVar23[4],param_1[4]);
    pppppplVar9 = pppppplStack_2c0;
    pppppplStack_2c0 = (long ******)0x0;
    if (pppppplVar9 != (long ******)0x0) {
      (*(code *)**pppppplVar9)(pppppplVar9);
      FUN_0049e790(PTR_LAB_047cba48,pppppplVar9);
    }
    if (ppppppplStack_2c8 != (long *******)0x0) {
      ppppppplVar13 = ppppppplStack_2c8 + 1;
      do {
        pppppplVar9 = *ppppppplVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar5) {
          *ppppppplVar13 = (long ******)((long)pppppplVar9 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pppppplVar9 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_2c8)[2])(ppppppplStack_2c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar16 = (undefined8 *)param_1[0x40];
    param_1[0x40] = (long)plVar23;
    pppppplVar10 = local_2b8;
    if (puVar16 != (undefined8 *)0x0) {
                    /* try { // try from 002943ec to 002943ef has its CatchHandler @ 002944b0 */
      (**(code **)*puVar16)();
      plVar23 = (long *)param_1[0x40];
      pppppplVar10 = local_2b8;
    }
  }
  local_2b8 = pppppplVar10;
  FUN_0032d470(auStack_378,local_238);
                    /* try { // try from 00294408 to 00294413 has its CatchHandler @ 002945a4 */
  (**(code **)(*plVar23 + 0x20))(plVar23,auStack_378);
  FUN_00275228(auStack_378);
  FUN_00275228(local_238);
  return;
}


