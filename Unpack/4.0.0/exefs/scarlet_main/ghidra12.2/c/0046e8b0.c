/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046e8b0; name: FUN_0046e8b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0046e8b0(long param_1,uint param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  int local_bc;
  int local_b8;
  int local_b0;
  int local_a8;
  int local_a4;
  long local_80;
  uint local_74 [5];
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 8) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0046e91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3 & 0xffffffff,param_4,param_5);
    return uVar11;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 8) + 0x68);
  uVar25 = (uint)param_3;
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (uVar25 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0046e95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar11;
    }
    return 0;
  }
  if ((int)param_2 < 0x200) {
    uVar19 = 0x4e;
    uVar11 = 0x78;
  }
  else {
    iVar1 = uVar25 - 2;
    if ((1 < (int)uVar25) && (iVar7 = FUN_0046a5d0(param_2), (int)uVar25 <= iVar7)) {
      lVar24 = FUN_003ed1c0();
      if (lVar24 != 0) {
        FUN_003ed410(lVar24);
        uVar11 = FUN_003ed5c0(lVar24);
        uVar19 = FUN_003ed5c0(lVar24);
        lVar12 = FUN_003ed5c0(lVar24);
        if (lVar12 != 0) {
          uVar2 = 0;
          if (uVar25 != 0) {
            uVar2 = param_2 / uVar25;
          }
          lVar20 = (long)(int)(param_2 - uVar2 * uVar25);
          if (0xf < uVar25) {
            uVar21 = param_3 & 0xfffffff0;
            puVar22 = local_74 + 8;
            uVar23 = uVar21;
            lVar17 = _DAT_03cab730;
            lVar30 = _UNK_03cab738;
            lVar31 = _DAT_03caa7b0;
            lVar32 = _UNK_03caa7b8;
            do {
              lVar33 = lVar31 + 4;
              lVar34 = lVar32 + 4;
              lVar35 = lVar17 + 4;
              lVar36 = lVar30 + 4;
              uVar23 = uVar23 - 0x10;
              lVar37 = lVar31 + 8;
              lVar38 = lVar32 + 8;
              lVar39 = lVar31 + 0xc;
              lVar40 = lVar32 + 0xc;
              bVar3 = lVar31 < lVar20;
              bVar5 = lVar32 < lVar20;
              lVar41 = lVar17 + 8;
              lVar42 = lVar30 + 8;
              lVar43 = lVar17 + 0xc;
              lVar44 = lVar30 + 0xc;
              bVar4 = lVar17 < lVar20;
              bVar6 = lVar30 < lVar20;
              lVar17 = lVar17 + 0x10;
              lVar30 = lVar30 + 0x10;
              lVar31 = lVar31 + 0x10;
              lVar32 = lVar32 + 0x10;
              *(ulong *)(puVar22 + -6) = CONCAT44(uVar2 + bVar6,uVar2 + bVar4);
              *(ulong *)(puVar22 + -8) = CONCAT44(uVar2 + bVar5,uVar2 + bVar3);
              *(ulong *)(puVar22 + -2) =
                   CONCAT44(uVar2 + (lVar36 < lVar20),uVar2 + (lVar35 < lVar20));
              *(ulong *)(puVar22 + -4) =
                   CONCAT44(uVar2 + (lVar34 < lVar20),uVar2 + (lVar33 < lVar20));
              *(ulong *)(puVar22 + 2) =
                   CONCAT44(uVar2 + (lVar42 < lVar20),uVar2 + (lVar41 < lVar20));
              *(ulong *)puVar22 = CONCAT44(uVar2 + (lVar38 < lVar20),uVar2 + (lVar37 < lVar20));
              *(ulong *)(puVar22 + 6) =
                   CONCAT44(uVar2 + (lVar44 < lVar20),uVar2 + (lVar43 < lVar20));
              *(ulong *)(puVar22 + 4) =
                   CONCAT44(uVar2 + (lVar40 < lVar20),uVar2 + (lVar39 < lVar20));
              puVar22 = puVar22 + 0x10;
              if (uVar23 == 0) goto joined_r0x0046eb28;
            } while( true );
          }
          uVar21 = 0;
          do {
            uVar10 = uVar2;
            if ((long)uVar21 < lVar20) {
              uVar10 = uVar2 + 1;
            }
            local_74[uVar21] = uVar10;
            uVar21 = uVar21 + 1;
joined_r0x0046eb28:
          } while (uVar21 != (param_3 & 0xffffffff));
          if (*(long *)(param_1 + 0x18) == 0) {
            lVar20 = FUN_003eb5b0();
            *(long *)(param_1 + 0x18) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if (*(long *)(param_1 + 0x28) == 0) {
            lVar20 = FUN_003eb610();
            *(long *)(param_1 + 0x28) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if (*(long *)(param_1 + 0x20) == 0) {
            lVar20 = FUN_003eb5b0();
            *(long *)(param_1 + 0x20) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          pauVar28 = (undefined1 (*) [16])(param_1 + 0x30);
          if (*(long *)*pauVar28 == 0) {
            lVar20 = FUN_003eb610();
            *(long *)*pauVar28 = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          pauVar26 = (undefined1 (*) [16])(param_1 + 0x38);
          if (*(long *)*pauVar26 == 0) {
            lVar20 = FUN_003eb610();
            *(long *)*pauVar26 = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if (*(long *)(param_1 + 0x40) == 0) {
            lVar20 = FUN_003eb610();
            *(long *)(param_1 + 0x40) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if (*(long *)(param_1 + 0x48) == 0) {
            lVar20 = FUN_003eb610();
            *(long *)(param_1 + 0x48) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if (*(long *)(param_1 + 0x50) == 0) {
            lVar20 = FUN_003eb610();
            *(long *)(param_1 + 0x50) = lVar20;
            if (lVar20 == 0) goto LAB_0046f1a4;
          }
          if ((int)uVar25 < 3) {
            pauVar13 = (undefined1 (*) [16])0x0;
            local_80 = 0;
          }
          else {
            *(undefined4 *)(param_1 + 4) = 1;
            local_80 = FUN_0047dcf0(0,iVar1);
            if (local_80 == 0) goto LAB_0046f1a4;
            if (*(long *)(param_1 + 0x58) != 0) {
              FUN_0047e3b0(*(long *)(param_1 + 0x58),PTR_LAB_047cd4c8);
            }
            *(long *)(param_1 + 0x58) = local_80;
            iVar7 = iVar1;
            do {
              pauVar13 = (undefined1 (*) [16])FUN_0046a430();
              if (pauVar13 == (undefined1 (*) [16])0x0) goto LAB_0046f1a4;
              FUN_0047e2f0(local_80,pauVar13);
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          lVar20 = FUN_003eb8f0(*(undefined8 *)(param_1 + 0x20),param_4);
          if (lVar20 != 0) {
            iVar7 = 0;
            local_bc = 0;
            local_b8 = 0;
LAB_0046ec80:
            if (iVar7 == 0) {
              pauVar14 = pauVar28;
            }
            else {
              pauVar14 = pauVar26;
              if (iVar7 != 1) {
                pauVar13 = (undefined1 (*) [16])FUN_0047e450(local_80,iVar7 + -2);
                pauVar14 = pauVar13;
              }
            }
            uVar27 = *(undefined8 *)*pauVar14;
            FUN_003ec740(uVar27,4);
            uVar2 = local_74[iVar7];
            local_bc = uVar2 + local_bc;
            local_b0 = 0;
            local_a4 = 0;
            while (iVar8 = FUN_003fc410(uVar27,local_a4 + uVar2,0,0,0,param_5), iVar8 != 0) {
              local_a8 = local_b8;
              while( true ) {
                if (0 < iVar7) {
                  iVar8 = 0;
                  do {
                    while( true ) {
                      pauVar14 = pauVar28;
                      if ((iVar8 != 0) && (pauVar14 = pauVar26, iVar8 != 1)) {
                        pauVar14 = (undefined1 (*) [16])FUN_0047e450(local_80,iVar8 + -2);
                      }
                      iVar9 = FUN_003ebf70(uVar27,*(undefined8 *)*pauVar14);
                      if (iVar9 != 0) break;
                      iVar9 = FUN_003fc410(uVar27,local_a4 + uVar2,0,0,0,param_5);
                      iVar8 = 0;
                      if (iVar9 == 0) goto LAB_0046f1a4;
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 != iVar7);
                }
                uVar15 = FUN_003eb200();
                iVar8 = FUN_003f06e0(lVar12,uVar27,uVar15);
                if (iVar8 == 0) goto LAB_0046f1a4;
                FUN_00481590();
                FUN_003ec740(lVar12,4);
                lVar20 = FUN_003efe80(uVar19,lVar12,*(undefined8 *)(param_1 + 0x20),lVar24);
                if (lVar20 == 0) break;
                if (iVar7 != 1) {
                  if (iVar7 != 0) {
                    uVar18 = *(undefined8 *)(param_1 + 0x18);
                    uVar15 = uVar27;
                    goto LAB_0046ede4;
                  }
                  iVar8 = FUN_003fc3a0(param_5,3,0);
                  if (iVar8 == 0) goto LAB_0046f1a4;
LAB_0046ef54:
                  iVar7 = iVar7 + 1;
                  if (iVar7 < (int)uVar25) goto LAB_0046ec80;
                  iVar7 = FUN_003ebf70(*(undefined8 *)*pauVar28,*(undefined8 *)*pauVar26);
                  if (iVar7 < 0) {
                    uVar27 = *(undefined8 *)(param_1 + 0x38);
                    auVar29 = NEON_ext(*pauVar28,*pauVar28,8,1);
                    *(long *)(param_1 + 0x38) = auVar29._8_8_;
                    *(long *)*pauVar28 = auVar29._0_8_;
                  }
                  else {
                    uVar27 = *(undefined8 *)*pauVar28;
                  }
                  uVar15 = FUN_003eb200();
                  iVar7 = FUN_003f06e0(uVar19,uVar27,uVar15);
                  if (iVar7 == 0) goto LAB_0046f1a4;
                  uVar15 = *(undefined8 *)*pauVar26;
                  uVar27 = FUN_003eb200();
                  iVar7 = FUN_003f06e0(lVar12,uVar15,uVar27);
                  if ((iVar7 == 0) ||
                     (iVar7 = FUN_003f1d10(uVar11,uVar19,lVar12,lVar24), iVar7 == 0))
                  goto LAB_0046f1a4;
                  if ((int)uVar25 < 3) goto LAB_0046f038;
                  iVar7 = 0;
                  goto LAB_0046efe4;
                }
                uVar18 = *(undefined8 *)*pauVar28;
                uVar15 = *(undefined8 *)*pauVar26;
LAB_0046ede4:
                iVar8 = FUN_003f1d10(uVar19,uVar18,uVar15,lVar24);
                if ((iVar8 == 0) || (iVar8 = FUN_003f23a0(lVar12,uVar19,local_bc + -4), iVar8 == 0))
                goto LAB_0046f1a4;
                uVar10 = FUN_003eb9c0(lVar12);
                if (uVar10 - 9 < 7) {
                  if (((iVar7 < 2) ||
                      (lVar20 = FUN_003eb8f0(*(undefined8 *)(pauVar13[1] + 8),
                                             *(undefined8 *)(param_1 + 0x18)), lVar20 != 0)) &&
                     (lVar20 = FUN_003eb8f0(*(undefined8 *)(param_1 + 0x18),uVar19), lVar20 != 0)) {
                    iVar8 = FUN_003fc3a0(param_5,3,iVar7);
                    local_b8 = local_a8;
                    if (iVar8 != 0) goto LAB_0046ef54;
                  }
                  goto LAB_0046f1a4;
                }
                iVar8 = FUN_003fc3a0(param_5,2,local_a8);
                if (iVar8 == 0) goto LAB_0046f1a4;
                local_a8 = local_a8 + 1;
                if ((int)uVar25 < 5) {
                  if (local_b0 == 4) {
                    local_bc = 0;
                    iVar7 = -1;
                    local_b8 = local_a8;
                    goto LAB_0046ef54;
                  }
                }
                else if (uVar10 < 9) {
                  local_a4 = local_a4 + 1;
                }
                else {
                  local_a4 = local_a4 + -1;
                }
                local_b0 = local_b0 + 1;
                iVar8 = FUN_003fc410(uVar27,local_a4 + uVar2,0,0,0,param_5);
                if (iVar8 == 0) goto LAB_0046f1a4;
              }
              uVar21 = FUN_00480c80();
              if ((uVar21 & 0xff000fff) != 0x300006c) break;
              FUN_004815e0();
              local_b8 = local_a8 + 1;
              iVar8 = FUN_003fc3a0(param_5,2);
              if (iVar8 == 0) break;
            }
          }
        }
      }
      goto LAB_0046f1a4;
    }
    uVar11 = 0xa5;
    uVar19 = 0x54;
  }
  FUN_004806c0(4,0x81,uVar11,"external/openssl/crypto/rsa/rsa_gen.c",uVar19);
  lVar24 = 0;
  goto LAB_0046e9c4;
  while (iVar7 = iVar7 + 1, iVar1 != iVar7) {
LAB_0046efe4:
    puVar16 = (undefined8 *)FUN_0047e450(local_80,iVar7);
    uVar27 = *puVar16;
    uVar15 = puVar16[1];
    uVar18 = FUN_003eb200();
    iVar8 = FUN_003f06e0(uVar15,uVar27,uVar18);
    if ((iVar8 == 0) || (iVar8 = FUN_003f1d10(uVar11,uVar11,puVar16[1],lVar24), iVar8 == 0))
    goto LAB_0046f1a4;
  }
LAB_0046f038:
  lVar20 = FUN_003eb5b0();
  if (lVar20 != 0) {
    FUN_003ec690(lVar20,uVar11,4);
    lVar17 = FUN_003efe80(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),lVar20,
                          lVar24);
    FUN_003eb520(lVar20);
    if ((lVar17 != 0) && (lVar20 = FUN_003eb5b0(), lVar20 != 0)) {
      FUN_003ec690(lVar20,*(undefined8 *)(param_1 + 0x28),4);
      iVar7 = FUN_003ed910(0,*(undefined8 *)(param_1 + 0x40),lVar20,uVar19,lVar24);
      if ((iVar7 != 0) &&
         (iVar7 = FUN_003ed910(0,*(undefined8 *)(param_1 + 0x48),lVar20,lVar12,lVar24), iVar7 != 0))
      {
        if (2 < (int)uVar25) {
          iVar7 = 0;
          do {
            lVar12 = FUN_0047e450(local_80,iVar7);
            iVar8 = FUN_003ed910(0,*(undefined8 *)(lVar12 + 8),lVar20,*(undefined8 *)(lVar12 + 8),
                                 lVar24);
            if (iVar8 == 0) goto LAB_0046f1a0;
            iVar7 = iVar7 + 1;
          } while (iVar1 != iVar7);
        }
        FUN_003eb520(lVar20);
        lVar20 = FUN_003eb5b0();
        if (lVar20 == 0) goto LAB_0046f1a4;
        FUN_003ec690(lVar20,*(undefined8 *)(param_1 + 0x30),4);
        lVar12 = FUN_003efe80(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),lVar20
                              ,lVar24);
        if (lVar12 != 0) {
          if (2 < (int)uVar25) {
            iVar7 = 0;
            do {
              puVar16 = (undefined8 *)FUN_0047e450(local_80,iVar7);
              FUN_003ec690(lVar20,*puVar16,4);
              lVar12 = FUN_003efe80(puVar16[2],puVar16[3],lVar20,lVar24);
              if (lVar12 == 0) goto LAB_0046f1a0;
              iVar7 = iVar7 + 1;
            } while (iVar1 != iVar7);
          }
          FUN_003eb520(lVar20);
          uVar11 = 1;
          goto LAB_0046e9c8;
        }
      }
LAB_0046f1a0:
      FUN_003eb520(lVar20);
    }
  }
LAB_0046f1a4:
  FUN_004806c0(4,0x81,3,"external/openssl/crypto/rsa/rsa_gen.c",0x183);
LAB_0046e9c4:
  uVar11 = 0;
LAB_0046e9c8:
  FUN_003ed530(lVar24);
  FUN_003ed280(lVar24);
  return uVar11;
}


