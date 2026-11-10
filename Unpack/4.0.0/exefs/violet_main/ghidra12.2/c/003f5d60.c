/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f5d60; name: FUN_003f5d60
 */


/* WARNING: Removing unreachable block (ram,0x003f5fe0) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003f5d60(long param_1,byte *param_2,long *param_3,byte *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  size_t sVar9;
  long lVar10;
  char *__s;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  char cVar15;
  byte bVar16;
  byte *pbVar17;
  byte bVar18;
  int iVar19;
  ulong uVar20;
  byte *pbVar21;
  
  plVar8 = (long *)FUN_003f3110();
  if (plVar8 != (long *)0x0) {
    sVar9 = strlen((char *)param_4);
    lVar10 = FUN_003f31c0(plVar8,(long)((int)sVar9 + 1));
    if (lVar10 != 0) {
      uVar20 = 0;
      bVar5 = 0;
LAB_003f5df4:
      do {
        while( true ) {
          bVar18 = *param_4;
          iVar19 = (int)uVar20;
          if (-1 < (char)bVar18) break;
LAB_003f5e2c:
          param_4 = param_4 + 1;
          *(byte *)(plVar8[1] + (long)iVar19) = bVar18;
          uVar20 = (ulong)(iVar19 + 1);
        }
        lVar10 = *(long *)(param_1 + 8);
        uVar1 = *(ushort *)(lVar10 + (ulong)bVar18 * 2);
        if ((uVar1 >> 6 & 1) == 0) {
          if ((uVar1 >> 10 & 1) == 0) {
            if ((uVar1 >> 5 & 1) == 0) {
              if ((uVar1 >> 3 & 1) != 0) goto LAB_003f6190;
              pbVar11 = param_4 + 1;
              if (bVar18 != 0x24) goto LAB_003f5e2c;
              bVar18 = *pbVar11;
              if (bVar18 == 0x7b) {
                bVar16 = 0x7d;
LAB_003f5fac:
                pbVar11 = param_4 + 2;
                bVar18 = *pbVar11;
                bVar4 = false;
                bVar14 = bVar16;
                if (-1 < (char)bVar18) goto LAB_003f5fc0;
LAB_003f5ffc:
                *pbVar11 = 0;
                pbVar17 = pbVar11;
                bVar16 = bVar14;
joined_r0x003f6014:
                pbVar6 = (byte *)0x0;
                pbVar7 = param_2;
              }
              else {
                if (bVar18 == 0x28) {
                  bVar16 = 0x29;
                  goto LAB_003f5fac;
                }
                bVar14 = 0;
                bVar16 = 0;
                bVar4 = true;
                if ((char)bVar18 < '\0') goto LAB_003f5ffc;
LAB_003f5fc0:
                pbVar21 = pbVar11 + 2;
                while ((*(ushort *)(lVar10 + (ulong)bVar18 * 2) & 0x107) != 0) {
                  bVar18 = pbVar21[-1];
                  pbVar21 = pbVar21 + 1;
                }
                pbVar17 = pbVar21 + -2;
                if (bVar18 != 0x3a) {
LAB_003f607c:
                  *pbVar17 = 0;
                  goto joined_r0x003f6014;
                }
                if (pbVar21[-1] != 0x3a) {
                  bVar18 = 0x3a;
                  goto LAB_003f607c;
                }
                bVar18 = *pbVar21;
                pbVar21[-2] = 0;
                pbVar6 = pbVar17;
                pbVar7 = pbVar11;
                pbVar11 = pbVar21;
                if ((char)bVar18 < '\0') {
                  bVar5 = 0x3a;
                  *pbVar21 = 0;
                  pbVar17 = pbVar21;
                }
                else {
                  do {
                    if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar18 * 2) & 0x107) == 0)
                    break;
                    pbVar21 = pbVar21 + 1;
                    bVar18 = *pbVar21;
                  } while (-1 < (char)bVar18);
                  bVar5 = 0x3a;
                  *pbVar21 = 0;
                  pbVar17 = pbVar21;
                }
              }
              pbVar21 = pbVar17;
              if (!bVar4) {
                if (bVar16 == bVar18) {
                  pbVar21 = pbVar17 + 1;
                  goto LAB_003f60a4;
                }
                uVar12 = 0x66;
                uVar13 = 0x26a;
              }
              else {
LAB_003f60a4:
                __s = (char *)FUN_003f63c0(param_1,pbVar7,pbVar11);
                if (pbVar6 != (byte *)0x0) {
                  *pbVar6 = bVar5;
                }
                *pbVar17 = bVar18;
                if (__s == (char *)0x0) {
                  uVar12 = 0x68;
                  uVar13 = 0x27e;
                }
                else {
                  sVar9 = strlen(__s);
                  if (param_4 + *plVar8 + (sVar9 - (long)pbVar21) < (byte *)0x10001) {
                    lVar10 = FUN_003f3310(plVar8);
                    if (lVar10 != 0) {
                      cVar15 = *__s;
                      param_4 = pbVar21;
                      if (cVar15 == '\0') {
                        *pbVar17 = bVar18;
                      }
                      else {
                        lVar10 = (long)iVar19;
                        do {
                          __s = __s + 1;
                          *(char *)(plVar8[1] + lVar10) = cVar15;
                          cVar15 = *__s;
                          lVar10 = lVar10 + 1;
                          uVar20 = (ulong)((int)uVar20 + 1);
                        } while (cVar15 != '\0');
                        *pbVar17 = bVar18;
                      }
                      goto LAB_003f5df4;
                    }
                    uVar12 = 0x41;
                    uVar13 = 0x287;
                  }
                  else {
                    uVar12 = 0x74;
                    uVar13 = 0x283;
                  }
                }
              }
              FUN_004806c0(0xe,0x65,uVar12,"external/openssl/crypto/conf/conf_def.c",uVar13);
              break;
            }
            bVar18 = param_4[1];
            if ((-1 < (char)bVar18) && ((*(ushort *)(lVar10 + (ulong)bVar18 * 2) >> 3 & 1) != 0)) {
LAB_003f6190:
              *(undefined1 *)(plVar8[1] + (long)iVar19) = 0;
              FUN_00452f80(*param_3,"external/openssl/crypto/conf/conf_def.c",0x29e);
              *param_3 = plVar8[1];
              FUN_00452f80(plVar8,"external/openssl/crypto/conf/conf_def.c",0x2a0);
              return 1;
            }
            uVar3 = (int)(char)bVar18 - 0x62;
            uVar2 = uVar3 * 0x80;
            uVar3 = uVar3 >> 1 & 0x7f;
            param_4 = param_4 + 2;
            if ((uVar2 & 0xff | uVar3) < 10) {
                    /* WARNING: Could not recover jumptable at 0x003f5f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar12 = (*(code *)(&UNK_003f5f48 +
                                 (ulong)(byte)(&DAT_03cde09e)[(ulong)(uVar2 | uVar3) & 0xff] * 4))()
              ;
              return uVar12;
            }
            *(byte *)(plVar8[1] + (long)iVar19) = bVar18;
            uVar20 = (ulong)(iVar19 + 1);
          }
          else {
            uVar20 = (ulong)iVar19;
            while( true ) {
              pbVar11 = param_4 + 1;
              bVar16 = *pbVar11;
              if ((-1 < (char)bVar16) &&
                 ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar16 * 2) >> 3 & 1) != 0)) break;
              pbVar17 = pbVar11;
              if (bVar16 == bVar18) {
                pbVar17 = param_4 + 2;
                bVar16 = bVar18;
                if (*pbVar17 != bVar18) break;
              }
              *(byte *)(plVar8[1] + uVar20) = bVar16;
              uVar20 = uVar20 + 1;
              param_4 = pbVar17;
            }
            param_4 = param_4 + 2;
            if (bVar16 != bVar18) {
              param_4 = pbVar11;
            }
          }
          goto LAB_003f5df4;
        }
        uVar20 = (ulong)iVar19;
        pbVar11 = param_4;
LAB_003f5e68:
        param_4 = pbVar11 + 1;
        bVar16 = *param_4;
        if (-1 < (char)bVar16) {
          if (bVar16 == bVar18) goto LAB_003f5dec;
          uVar1 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar16 * 2);
          if ((uVar1 >> 3 & 1) != 0) goto LAB_003f5dec;
          if ((uVar1 >> 5 & 1) != 0) {
            param_4 = pbVar11 + 2;
            bVar16 = *param_4;
            if ((-1 < (char)bVar16) &&
               ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar16 * 2) >> 3 & 1) != 0))
            goto LAB_003f5dec;
          }
LAB_003f5e58:
          *(byte *)(plVar8[1] + uVar20) = bVar16;
          uVar20 = uVar20 + 1;
          pbVar11 = param_4;
          goto LAB_003f5e68;
        }
        if (bVar16 != bVar18) goto LAB_003f5e58;
        bVar16 = bVar18;
LAB_003f5dec:
        if (bVar16 == bVar18) {
          param_4 = param_4 + 1;
        }
      } while( true );
    }
    FUN_003f3160(plVar8);
  }
  return 0;
}


