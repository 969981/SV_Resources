/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c9e00; name: FUN_003c9e00
 */


/* WARNING: Removing unreachable block (ram,0x003ca1cc) */
/* WARNING: Removing unreachable block (ram,0x003ca51c) */
/* WARNING: Removing unreachable block (ram,0x003ca1e8) */
/* WARNING: Removing unreachable block (ram,0x003ca21c) */
/* WARNING: Removing unreachable block (ram,0x003ca33c) */
/* WARNING: Removing unreachable block (ram,0x003ca548) */
/* WARNING: Removing unreachable block (ram,0x003ca10c) */
/* WARNING: Removing unreachable block (ram,0x003ca444) */

undefined8 FUN_003c9e00(int *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong local_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong local_190;
  int local_180;
  byte local_17c;
  byte local_17b;
  byte local_17a;
  byte local_179;
  undefined1 local_178;
  undefined1 local_177;
  byte local_176;
  byte local_175;
  byte local_174;
  byte local_173;
  byte local_172;
  byte local_171;
  undefined1 auStack_170 [256];
  ulong local_70;
  long local_68;
  
  lVar16 = *(long *)(param_1 + 0x2c);
  *(undefined8 *)(lVar16 + 0x1c8) = 0;
  *(undefined8 *)(lVar16 + 0x1c0) = 0;
  *(undefined8 *)(lVar16 + 0x1d8) = 0;
  *(undefined8 *)(lVar16 + 0x1d0) = 0;
  *(undefined8 *)(lVar16 + 0x1a8) = 0;
  *(undefined8 *)(lVar16 + 0x1a0) = 0;
  *(undefined8 *)(lVar16 + 0x1b8) = 0;
  *(undefined8 *)(lVar16 + 0x1b0) = 0;
  *(undefined8 *)(lVar16 + 0x1e0) = 0;
  *(undefined8 *)(lVar16 + 0x198) = 0;
  *(undefined8 *)(lVar16 + 400) = 0;
LAB_003c9e6c:
  do {
    lVar8 = FUN_003a2e00(*(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x118));
    if (lVar8 != 0) {
      do {
        lVar18 = *(long *)(lVar8 + 8);
        lVar15 = *(long *)(param_1 + 0x2c);
        if (*(ushort *)(lVar15 + 0x110) <= *(ushort *)(lVar18 + 0x10)) {
          if (*(ushort *)(lVar15 + 0x110) == *(ushort *)(lVar18 + 0x10) &&
              *(long *)(lVar18 + 0x60) == 0) {
            uVar11 = *(undefined8 *)(lVar18 + 0x20);
            FUN_003a2e10(*(undefined8 *)(lVar15 + 0x118));
            iVar7 = FUN_003cb350(param_1,lVar18);
            if (iVar7 == 0) {
              if (*(int *)(lVar18 + 0x28) != 0) {
                FUN_00439e00(*(undefined8 *)(lVar18 + 0x30));
                FUN_0042bbe0(*(undefined8 *)(lVar18 + 0x38));
              }
              FUN_00452f80(*(undefined8 *)(lVar18 + 0x58),
                           "external/openssl/ssl/statem/statem_dtls.c",0x67);
              FUN_00452f80(*(undefined8 *)(lVar18 + 0x60),
                           "external/openssl/ssl/statem/statem_dtls.c",0x68);
              FUN_00452f80(lVar18,"external/openssl/ssl/statem/statem_dtls.c",0x69);
              FUN_003a2cd0(lVar8);
              iVar7 = 0;
              param_1[0x26] = 0;
              param_1[0x27] = 0;
              goto LAB_003ca278;
            }
            if (*(size_t *)(lVar18 + 0x20) != 0) {
              memcpy((void *)(*(long *)(*(long *)(param_1 + 0x22) + 8) + *(long *)(lVar18 + 0x18) +
                             0xc),*(void **)(lVar18 + 0x58),*(size_t *)(lVar18 + 0x20));
            }
            if (*(int *)(lVar18 + 0x28) != 0) {
              FUN_00439e00(*(undefined8 *)(lVar18 + 0x30));
              FUN_0042bbe0(*(undefined8 *)(lVar18 + 0x38));
            }
            FUN_00452f80(*(undefined8 *)(lVar18 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",
                         0x67);
            FUN_00452f80(*(undefined8 *)(lVar18 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",
                         0x68);
            FUN_00452f80(lVar18,"external/openssl/ssl/statem/statem_dtls.c",0x69);
            FUN_003a2cd0(lVar8);
            *(undefined8 *)(param_1 + 0x26) = uVar11;
            goto LAB_003ca614;
          }
          break;
        }
        FUN_003a2e10(*(undefined8 *)(lVar15 + 0x118));
        if (lVar18 != 0) {
          if (*(int *)(lVar18 + 0x28) != 0) {
            FUN_00439e00(*(undefined8 *)(lVar18 + 0x30));
            FUN_0042bbe0(*(undefined8 *)(lVar18 + 0x38));
          }
          FUN_00452f80(*(undefined8 *)(lVar18 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",
                       0x67);
          FUN_00452f80(*(undefined8 *)(lVar18 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",
                       0x68);
          FUN_00452f80(lVar18,"external/openssl/ssl/statem/statem_dtls.c",0x69);
        }
        FUN_003a2cd0(lVar8);
        lVar8 = FUN_003a2e00(*(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x118));
      } while (lVar8 != 0);
    }
    iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                      (param_1,0x16,&local_180,&local_17c,0xc,0,&local_1e8);
    uVar5 = local_177;
    uVar4 = local_178;
    bVar6 = local_17c;
    if (iVar7 < 1) {
LAB_003ca0f8:
      iVar7 = 0;
      param_1[10] = 3;
      goto LAB_003ca278;
    }
    if (local_180 == 0x14) {
      if (local_17c == 1) {
        memcpy(*(void **)(*(long *)(param_1 + 0x22) + 8),&local_17c,local_1e8);
        *(ulong *)(param_1 + 0x26) = local_1e8 - 1;
        *(long *)(param_1 + 0x24) = *(long *)(*(long *)(param_1 + 0x22) + 8) + 1;
        lVar8 = *(long *)(param_1 + 0x2a);
        *(undefined4 *)(lVar8 + 0x230) = 0x101;
        *(ulong *)(lVar8 + 0x228) = local_1e8 - 1;
        goto LAB_003ca614;
      }
      uVar11 = 10;
      uVar12 = 0x67;
      uVar14 = 0x304;
LAB_003ca264:
      FUN_003c3950(param_1,uVar11,0x172,uVar12,"external/openssl/ssl/statem/statem_dtls.c",uVar14);
LAB_003ca268:
      iVar7 = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    else {
      if (local_1e8 != 0xc) {
        uVar11 = 10;
        uVar12 = 0xf4;
        uVar14 = 0x314;
        goto LAB_003ca264;
      }
      uVar19 = (ulong)local_17b << 0x10 | (ulong)local_17a << 8 | (ulong)local_179;
      uVar17 = (ulong)local_176 << 0x10 | (ulong)local_175 << 8 | (ulong)local_174;
      uVar1 = (uint)CONCAT11(local_178,local_177);
      local_190 = 0;
      uVar20 = (ulong)local_173 << 0x10 | (ulong)local_172 << 8 | (ulong)local_171;
      local_1e0 = (ulong)local_17c;
      local_1d0 = (ulong)CONCAT11(local_178,local_177);
      uStack_1b8 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      local_1a0 = 0;
      uStack_1d8 = uVar19;
      local_1c8 = uVar17;
      local_1c0 = uVar20;
      uVar9 = FUN_003a6980(param_1 + 0x252);
      if (uVar9 < uVar20) {
        FUN_003c3950(param_1,0x2f,0x172,0x10f,"external/openssl/ssl/statem/statem_dtls.c",0x325);
LAB_003ca208:
        iVar7 = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        goto LAB_003ca278;
      }
      lVar8 = *(long *)(param_1 + 0x2c);
      if (uVar1 == *(ushort *)(lVar8 + 0x110)) {
        if ((uVar20 != 0) && (uVar20 < uVar19)) {
          iVar7 = FUN_003cb000(param_1,&local_1e0);
          goto LAB_003ca278;
        }
        if ((((param_1[0xe] != 0) || (*(long *)(lVar8 + 0x1a8) != 0)) || (param_1[0x17] == 1)) ||
           (local_17c != 0)) {
          iVar7 = FUN_003cb350(param_1,&local_1e0);
          if (iVar7 != 0) {
            if (uVar20 == 0) {
              local_1e8 = 0;
            }
            else {
              iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                (param_1,0x16,0,
                                 *(long *)(*(long *)(param_1 + 0x22) + 8) + uVar17 + 0xc,uVar20,0,
                                 &local_1e8);
              if (iVar7 < 1) goto LAB_003ca0f8;
              if (local_1e8 != uVar20) {
                uVar11 = 0x2f;
                uVar12 = 0x10f;
                uVar14 = 0x372;
                goto LAB_003ca264;
              }
            }
            *(ulong *)(param_1 + 0x26) = uVar20;
LAB_003ca614:
            iVar7 = *(int *)(*(long *)(param_1 + 0x2a) + 0x230);
            *param_2 = iVar7;
            puVar13 = *(undefined1 **)(*(long *)(param_1 + 0x22) + 8);
            *param_3 = *(undefined8 *)(param_1 + 0x26);
            if (iVar7 == 0x101) {
              if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
                (**(code **)(param_1 + 0x2e))
                          (0,*param_1,0x14,puVar13,1,param_1,*(undefined8 *)(param_1 + 0x30));
                return 1;
              }
            }
            else {
              lVar8 = *(long *)(lVar16 + 0x198);
              *puVar13 = *(undefined1 *)(lVar16 + 400);
              uVar4 = (undefined1)((ulong)lVar8 >> 8);
              puVar13[2] = uVar4;
              uVar5 = (undefined1)((ulong)lVar8 >> 0x10);
              puVar13[1] = uVar5;
              puVar13[3] = (char)lVar8;
              puVar13[4] = *(undefined1 *)(lVar16 + 0x1a1);
              puVar13[5] = *(undefined1 *)(lVar16 + 0x1a0);
              *(undefined2 *)(puVar13 + 6) = 0;
              puVar13[8] = 0;
              puVar13[9] = uVar5;
              puVar13[10] = uVar4;
              puVar13[0xb] = (char)lVar8;
              if (*param_1 != 0x100) {
                lVar8 = lVar8 + 0xc;
              }
              puVar2 = puVar13 + 0xc;
              if (*param_1 != 0x100) {
                puVar2 = puVar13;
              }
              if ((*param_2 == 0x14) && (iVar7 = FUN_003cc940(param_1), iVar7 == 0)) {
                return 0;
              }
              iVar7 = FUN_003acec0(param_1,puVar2,lVar8);
              if (iVar7 == 0) {
                return 0;
              }
              if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
                (**(code **)(param_1 + 0x2e))
                          (0,*param_1,0x16,puVar2,lVar8,param_1,*(undefined8 *)(param_1 + 0x30));
              }
              *(undefined8 *)(lVar16 + 0x1e0) = 0;
              *(undefined8 *)(lVar16 + 0x1c8) = 0;
              *(undefined8 *)(lVar16 + 0x1c0) = 0;
              *(undefined8 *)(lVar16 + 0x1d8) = 0;
              *(undefined8 *)(lVar16 + 0x1d0) = 0;
              *(undefined8 *)(lVar16 + 0x198) = 0;
              *(undefined8 *)(lVar16 + 400) = 0;
              *(undefined8 *)(lVar16 + 0x1a8) = 0;
              *(undefined8 *)(lVar16 + 0x1a0) = 0;
              *(undefined8 *)(lVar16 + 0x1b8) = 0;
              *(undefined8 *)(lVar16 + 0x1b0) = 0;
              *(short *)(*(long *)(param_1 + 0x2c) + 0x110) =
                   *(short *)(*(long *)(param_1 + 0x2c) + 0x110) + 1;
              *(long *)(param_1 + 0x24) = *(long *)(*(long *)(param_1 + 0x22) + 8) + 0xc;
            }
            return 1;
          }
          goto LAB_003ca268;
        }
        if ((local_17a != 0 || local_17b != 0) || local_179 != 0) {
          FUN_003c3950(param_1,10,0x172,0xf4,"external/openssl/ssl/statem/statem_dtls.c",0x34e);
          goto LAB_003ca208;
        }
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (0,*param_1,0x16,&local_17c,0xc,param_1,*(undefined8 *)(param_1 + 0x30));
        }
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        goto LAB_003c9e6c;
      }
      if (uVar19 < uVar20 + uVar17) {
        iVar7 = 0;
      }
      else {
        local_68 = (ulong)CONCAT11(uVar5,uVar4) << 0x30;
        lVar8 = FUN_003a2e30(*(undefined8 *)(lVar8 + 0x118),&local_68);
        uVar3 = *(ushort *)(*(long *)(param_1 + 0x2c) + 0x110);
        if (((uVar3 < uVar1) && (uVar20 != uVar19 || lVar8 == 0)) &&
           ((uVar1 <= uVar3 + 10 && ((bVar6 != 0x14 || (uVar3 != 0)))))) {
          if (uVar20 == uVar19) {
            uVar20 = *(ulong *)(param_1 + 0x1aa);
            if (uVar20 < 0x454d) {
              uVar20 = 0x454c;
            }
            if (uVar19 <= uVar20) {
              puVar10 = (ulong *)FUN_00452c30(0x68,"external/openssl/ssl/statem/statem_dtls.c",0x3e)
              ;
              if (puVar10 != (ulong *)0x0) {
                if (uVar19 == 0) {
                  puVar10[0xb] = 0;
                  puVar10[0xc] = 0;
                  puVar10[1] = uStack_1d8;
                  *puVar10 = local_1e0;
                  puVar10[3] = local_1c8;
                  puVar10[2] = local_1d0;
                  puVar10[10] = local_190;
                  puVar10[7] = uStack_1a8;
                  puVar10[6] = uStack_1b0;
                  puVar10[9] = uStack_198;
                  puVar10[8] = local_1a0;
                  puVar10[5] = uStack_1b8;
                  puVar10[4] = local_1c0;
LAB_003ca574:
                  lVar8 = FUN_003a2c60(&local_68,puVar10);
                  if ((lVar8 != 0) &&
                     (lVar8 = FUN_003a2d50(*(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x118),lVar8)
                     , lVar8 != 0)) goto LAB_003ca330;
LAB_003ca598:
                  if ((int)puVar10[5] != 0) {
                    FUN_00439e00(puVar10[6]);
                    FUN_0042bbe0(puVar10[7]);
                  }
                  FUN_00452f80(puVar10[0xb],"external/openssl/ssl/statem/statem_dtls.c",0x67);
                  FUN_00452f80(puVar10[0xc],"external/openssl/ssl/statem/statem_dtls.c",0x68);
                  uVar11 = 0x69;
                }
                else {
                  uVar20 = FUN_00452c30(uVar19,"external/openssl/ssl/statem/statem_dtls.c",0x44);
                  if (uVar20 != 0) {
                    puVar10[0xb] = uVar20;
                    puVar10[0xc] = 0;
                    puVar10[1] = uStack_1d8;
                    *puVar10 = local_1e0;
                    puVar10[3] = local_1c8;
                    puVar10[2] = local_1d0;
                    puVar10[10] = local_190;
                    puVar10[7] = uStack_1a8;
                    puVar10[6] = uStack_1b0;
                    puVar10[9] = uStack_198;
                    puVar10[8] = local_1a0;
                    puVar10[5] = uStack_1b8;
                    puVar10[4] = local_1c0;
                    iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                      (param_1,0x16,0,uVar20,uVar19,0,&local_70);
                    if ((0 < iVar7) && (local_70 == uVar19)) goto LAB_003ca574;
                    goto LAB_003ca598;
                  }
                  FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x45);
                  uVar11 = 0x46;
                }
                FUN_00452f80(puVar10,"external/openssl/ssl/statem/statem_dtls.c",uVar11);
LAB_003ca608:
                iVar7 = 0;
                goto LAB_003ca278;
              }
              FUN_004806c0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x3f);
            }
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_003cb000(param_1,&local_1e0);
          }
        }
        else {
          for (; uVar20 != 0; uVar20 = uVar20 - local_70) {
            uVar9 = uVar20;
            if (0xff < uVar20) {
              uVar9 = 0x100;
            }
            iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                              (param_1,0x16,0,auStack_170,uVar9,0,&local_70);
            if (iVar7 < 1) goto LAB_003ca608;
          }
LAB_003ca330:
          iVar7 = -3;
        }
      }
    }
LAB_003ca278:
    if (1 < iVar7 + 3U) {
      return 0;
    }
  } while( true );
}


