/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00411840; name: FUN_00411840
 */


undefined8 FUN_00411840(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *local_100;
  long local_f8;
  undefined1 local_e8 [136];
  
  if (param_2 == 0) {
    lVar13 = 0;
    lVar14 = 0;
    lVar7 = 0;
    lVar12 = 0;
    lVar5 = 0;
    uVar6 = 0x43;
  }
  else {
    lVar5 = FUN_003ed1c0();
    if (lVar5 == 0) {
      lVar13 = 0;
      lVar14 = 0;
      lVar12 = 0;
    }
    else {
      iVar2 = FUN_0040d5a0(param_2);
      if (iVar2 != 0) {
        iVar2 = FUN_003e94e0(param_1,param_3,0x80);
        if ((iVar2 != 0) && (iVar2 = FUN_0040d580(param_2), iVar2 != 0)) {
          uVar6 = FUN_0045bce0();
          iVar3 = FUN_003e6880(param_1,"ASN1 OID: %s",uVar6);
          if ((0 < iVar3) && (iVar3 = FUN_003e6880(param_1,&DAT_03c67c74), 0 < iVar3)) {
            lVar7 = FUN_004066b0(iVar2);
            if (lVar7 == 0) {
              lVar7 = 0;
              lVar14 = 0;
              lVar13 = 0;
              uVar6 = 1;
              lVar12 = 0;
              goto LAB_00411a74;
            }
            iVar2 = FUN_003e94e0(param_1,param_3,0x80);
            if (iVar2 != 0) {
              iVar2 = FUN_003e6880(param_1,"NIST CURVE: %s\n",lVar7);
              lVar12 = 0;
              if (0 < iVar2) {
                uVar6 = 1;
                lVar7 = 0;
                lVar14 = 0;
                lVar13 = 0;
                goto LAB_00411a74;
              }
              uVar6 = 0x20;
              lVar13 = 0;
              lVar14 = 0;
              lVar7 = 0;
              goto LAB_00411a58;
            }
          }
        }
        lVar13 = 0;
        lVar14 = 0;
        lVar7 = 0;
        lVar12 = 0;
        goto LAB_00411978;
      }
      FUN_0040d100(param_2);
      iVar2 = FUN_0040d110();
      lVar12 = FUN_003eb5b0();
      if (lVar12 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = FUN_003eb5b0();
        if (lVar13 != 0) {
          lVar14 = FUN_003eb5b0();
          if (lVar14 == 0) goto LAB_00411a54;
          iVar3 = FUN_0040d6e0(param_2,lVar12,lVar13,lVar14,lVar5);
          if (iVar3 == 0) {
LAB_00411ac0:
            lVar7 = 0;
            uVar6 = 0x10;
          }
          else {
            lVar8 = FUN_0040d4a0(param_2);
            lVar7 = 0;
            if (lVar8 != 0) {
              lVar9 = FUN_0040d4f0(param_2);
              lVar10 = FUN_0040d560(param_2);
              if (lVar9 == 0) goto LAB_00411ac0;
              iVar3 = FUN_0040d5c0(param_2);
              lVar7 = FUN_00411df0(param_2,lVar8,iVar3,0,lVar5);
              if (lVar7 != 0) {
                local_100 = (undefined1 *)FUN_0040d680(param_2);
                if (local_100 == (undefined1 *)0x0) {
                  local_f8 = 0;
                }
                else {
                  local_f8 = FUN_0040d690(param_2);
                }
                iVar4 = FUN_003e94e0(param_1,param_3,0x80);
                if (iVar4 != 0) {
                  uVar6 = FUN_0045bce0(iVar2);
                  iVar4 = FUN_003e6880(param_1,"Field Type: %s\n",uVar6);
                  if (0 < iVar4) {
                    if (iVar2 == 0x197) {
                      iVar2 = FUN_004043a0(param_2);
                      if ((iVar2 != 0) && (iVar4 = FUN_003e94e0(param_1,param_3,0x80), iVar4 != 0))
                      {
                        uVar6 = FUN_0045bce0(iVar2);
                        iVar2 = FUN_003e6880(param_1,"Basis Type: %s\n",uVar6);
                        if (0 < iVar2) {
                          pcVar11 = "Polynomial:";
                          goto LAB_00411b9c;
                        }
                      }
                    }
                    else {
                      pcVar11 = "Prime:";
LAB_00411b9c:
                      iVar2 = FUN_003f86c0(param_1,pcVar11,lVar12,0,param_3);
                      if (((iVar2 != 0) &&
                          (iVar2 = FUN_003f86c0(param_1,"A:   ",lVar13,0,param_3), iVar2 != 0)) &&
                         (iVar2 = FUN_003f86c0(param_1,"B:   ",lVar14,0,param_3), iVar2 != 0)) {
                        if (iVar3 == 4) {
                          pcVar11 = "Generator (uncompressed):";
                        }
                        else if (iVar3 == 2) {
                          pcVar11 = "Generator (compressed):";
                        }
                        else {
                          pcVar11 = "Generator (hybrid):";
                        }
                        iVar2 = FUN_003f86c0(param_1,pcVar11,lVar7,0,param_3);
                        if (((iVar2 != 0) &&
                            (iVar2 = FUN_003f86c0(param_1,"Order: ",lVar9,0,param_3), iVar2 != 0))
                           && ((lVar10 == 0 ||
                               (iVar2 = FUN_003f86c0(param_1,"Cofactor: ",lVar10,0,param_3),
                               iVar2 != 0)))) {
                          if (local_100 == (undefined1 *)0x0) {
                            uVar6 = 1;
                            goto LAB_00411a74;
                          }
                          if (param_3 < 1) {
                            param_3 = 0;
                          }
                          else {
                            if (0x7f < param_3) {
                              param_3 = 0x80;
                            }
                            memset(local_e8,0x20,(long)param_3);
                            iVar2 = FUN_003e8f00(param_1,local_e8,param_3);
                            if (iVar2 < 1) goto LAB_00411978;
                          }
                          iVar2 = FUN_003e6880(param_1,&DAT_03bf359a,"Seed:");
                          if (0 < iVar2) {
                            lVar8 = 0;
                            uVar15 = 0;
                            do {
                              if (local_f8 == 0) {
                                uVar6 = 1;
                                iVar2 = FUN_003e8f00(param_1,&DAT_03c67c74,1);
                                if (0 < iVar2) goto LAB_00411a74;
                                break;
                              }
                              if (lVar8 + (uVar15 / 0xf) * 0xf == 0) {
                                local_e8[0] = 10;
                                memset((void *)((ulong)local_e8 | 1),0x20,(ulong)(param_3 + 4));
                                iVar2 = FUN_003e8f00(param_1,local_e8,param_3 + 5);
                                if (iVar2 < 1) break;
                              }
                              local_f8 = local_f8 + -1;
                              puVar1 = &DAT_03c886bc;
                              if (local_f8 != 0) {
                                puVar1 = &DAT_03c9c9c5;
                              }
                              uVar15 = uVar15 + 1;
                              iVar2 = FUN_003e6880(param_1,"%02x%s",*local_100,puVar1);
                              lVar8 = lVar8 + -1;
                              local_100 = local_100 + 1;
                            } while (0 < iVar2);
                          }
                        }
                      }
                    }
                  }
                }
LAB_00411978:
                uVar6 = 0x20;
                goto LAB_00411a58;
              }
            }
            uVar6 = 0x10;
          }
          goto LAB_00411a58;
        }
      }
      lVar14 = 0;
    }
LAB_00411a54:
    lVar7 = 0;
    uVar6 = 0x41;
  }
LAB_00411a58:
  FUN_004806c0(0x10,0x95,uVar6,"external/openssl/crypto/ec/eck_prn.c",0xd6);
  uVar6 = 0;
LAB_00411a74:
  FUN_003eb520(lVar12);
  FUN_003eb520(lVar13);
  FUN_003eb520(lVar14);
  FUN_003eb520(lVar7);
  FUN_003ed280(lVar5);
  return uVar6;
}


