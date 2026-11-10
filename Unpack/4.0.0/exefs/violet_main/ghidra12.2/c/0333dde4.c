/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333dde4; name: FUN_0333dde4
 */


void FUN_0333dde4(long *param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  size_t sVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  byte bVar21;
  ulong *local_68;
  char *local_60;
  ulong *local_58;
  
  uVar19 = *param_2;
  uVar6 = (uint)uVar19;
  puVar7 = param_2;
  if ((uVar19 & 1) == 0) {
    do {
      puVar7 = (ulong *)puVar7[1];
    } while ((*puVar7 & 1) == 0);
  }
  switch((uint)puVar7[2] & 0x1f) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    *param_3 = param_2;
    return;
  case 3:
    puVar8 = (undefined8 *)(**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],0x38);
    lVar11 = param_1[3];
    *puVar8 = 0x30000d;
    puVar8[1] = 0;
    puVar8[4] = "const char*";
    puVar8[5] = 0x80008;
    puVar8[6] = 0;
    puVar8[2] = 3;
    puVar8[3] = lVar11;
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    *param_3 = puVar8;
    return;
  case 6:
    puVar7 = param_2;
    if ((uVar6 >> 1 & 1) == 0) {
      do {
        puVar7 = (ulong *)puVar7[1];
        if (puVar7 == (ulong *)0x0) {
          pbVar20 = (byte *)0x0;
          goto LAB_0333dfc4;
        }
      } while (((byte)*puVar7 >> 1 & 1) == 0);
    }
    pbVar20 = (byte *)puVar7[3];
LAB_0333dfc4:
    puVar7 = (ulong *)(**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],0x70);
    if (pbVar20 == (byte *)0x0) {
      *puVar7 = 0x30800f;
      puVar7[1] = 0;
      puVar7[2] = 6;
      puVar7[3] = 0;
      puVar9 = PTR_DAT_047e66c0;
      puVar7[7] = 0x80008;
      puVar7[8] = 0;
      puVar7[4] = (ulong)puVar9;
      puVar7[5] = (ulong)&DAT_03c62cc9;
      puVar7[0xb] = 1;
      puVar7[0xc] = 0;
      puVar7[10] = 0;
      puVar7[6] = (ulong)(puVar7 + 10);
      puVar7[0xd] = (ulong)&DAT_03c4f61e;
      puVar7[4] = param_1[5];
    }
    else {
      puVar14 = puVar7 + 3;
      *puVar14 = 0x22222222;
      *puVar7 = 0x30800f;
      puVar7[1] = 0;
      puVar7[2] = 6;
      puVar7[4] = (ulong)PTR_DAT_047e66c0;
      puVar7[5] = (ulong)&DAT_03c62cc9;
      puVar7[0xb] = 1;
      puVar7[0xc] = 0x22222222;
      puVar7[7] = 0x80008;
      puVar7[8] = 0;
      puVar7[10] = 0;
      puVar7[6] = (ulong)(puVar7 + 10);
      puVar7[0xd] = (ulong)&DAT_03c4f61e;
      puVar7[4] = param_1[5];
      for (; (*pbVar20 & 1) == 0; pbVar20 = *(byte **)(pbVar20 + 8)) {
      }
      if ((*(ulong *)(pbVar20 + 0x10) & 0x1f) == 7) {
        lVar11 = *param_1;
        puVar16 = param_2;
        do {
          if (((byte)*puVar16 >> 1 & 1) != 0) {
            uVar19 = puVar16[3];
            goto LAB_0333e19c;
          }
          puVar16 = (ulong *)puVar16[1];
        } while (puVar16 != (ulong *)0x0);
        uVar19 = 0;
LAB_0333e19c:
        iVar5 = *(int *)(lVar11 + 0xc0);
        lVar18 = (long)iVar5;
        if ((int)(*(uint *)(lVar11 + 0xc4) & 0x7fffffff) <= iVar5) {
          FUN_03340ab8(lVar11 + 0xb8,lVar18 + 1);
          iVar5 = *(int *)(lVar11 + 0xc0);
        }
        puVar8 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + (long)iVar5 * 0x20);
        *(int *)(lVar11 + 0xc0) = (int)(lVar18 + 1);
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0xffffffff;
        puVar8[2] = uVar19;
        puVar8[3] = puVar14;
        lVar11 = *param_1;
        do {
          if (((byte)*param_2 >> 1 & 1) != 0) {
            uVar19 = param_2[3];
            goto LAB_0333e228;
          }
          param_2 = (ulong *)param_2[1];
        } while (param_2 != (ulong *)0x0);
        uVar19 = 0;
LAB_0333e228:
        puVar14 = puVar7;
        do {
          uVar6 = (uint)*puVar14;
          if ((uVar6 >> 0xf & 1) != 0) {
            uVar13 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
            uVar13 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) +
                             2];
            goto LAB_0333e440;
          }
          if ((*puVar14 & 9) != 0) {
            uVar13 = 0;
            goto LAB_0333e440;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar13 = 0;
LAB_0333e440:
        iVar5 = *(int *)(lVar11 + 0xc0);
        lVar18 = (long)iVar5;
        if ((int)(*(uint *)(lVar11 + 0xc4) & 0x7fffffff) <= iVar5) {
          FUN_03340ab8(lVar11 + 0xb8,lVar18 + 1);
          iVar5 = *(int *)(lVar11 + 0xc0);
        }
        puVar8 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + (long)iVar5 * 0x20);
        *(int *)(lVar11 + 0xc0) = (int)(lVar18 + 1);
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0xffffffff;
        puVar8[2] = uVar19;
        puVar8[3] = uVar13 + 0x10;
      }
      else {
        puVar16 = param_2;
        do {
          if (((byte)*puVar16 >> 1 & 1) != 0) {
            uVar19 = puVar16[3];
            goto LAB_0333e200;
          }
          puVar16 = (ulong *)puVar16[1];
        } while (puVar16 != (ulong *)0x0);
        uVar19 = 0;
LAB_0333e200:
        FUN_0333dde4(param_1,uVar19,puVar14);
        do {
          if (((byte)*param_2 >> 1 & 1) != 0) {
            uVar19 = param_2[3];
            goto LAB_0333e250;
          }
          param_2 = (ulong *)param_2[1];
        } while (param_2 != (ulong *)0x0);
        uVar19 = 0;
LAB_0333e250:
        puVar14 = puVar7;
        do {
          uVar6 = (uint)*puVar14;
          if ((uVar6 >> 0xf & 1) != 0) {
            uVar13 = CONCAT44(uVar6,uVar6) & 0x7fff00007fff;
            uVar13 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))) +
                             2];
            goto LAB_0333e490;
          }
          if ((*puVar14 & 9) != 0) {
            uVar13 = 0;
            goto LAB_0333e490;
          }
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
        uVar13 = 0;
LAB_0333e490:
        FUN_0333dde4(param_1,uVar19,uVar13 + 0x10);
      }
    }
    goto LAB_0333e49c;
  case 7:
    lVar11 = *param_1;
    puVar7 = param_2;
    uVar12 = uVar6;
    if ((uVar6 >> 3 & 1) == 0) {
      uVar13 = uVar19;
      do {
        if (((uVar13 & 1) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0))
        goto LAB_0333df8c;
        uVar13 = *puVar7;
        uVar12 = (uint)uVar13;
      } while ((uVar12 >> 3 & 1) == 0);
    }
    if (puVar7 == (ulong *)0x0) {
LAB_0333df8c:
      local_60 = (char *)0x0;
      local_68 = (ulong *)0x0;
    }
    else {
      puVar7 = (ulong *)puVar7[(ulong)(byte)POPCOUNT((byte)uVar12 & 7) + 2];
      local_68 = puVar7;
      if (puVar7 == (ulong *)0x0) {
        local_60 = (char *)0x0;
      }
      else {
        sVar2 = strlen((char *)puVar7);
        local_60 = (char *)((long)puVar7 + sVar2);
      }
    }
    puVar7 = param_2;
    if ((uVar6 >> 4 & 1) == 0) {
      do {
        if (((uVar19 & 9) != 0) || (puVar7 = (ulong *)puVar7[1], puVar7 == (ulong *)0x0)) {
          uVar4 = 0;
          goto LAB_0333e2d0;
        }
        uVar19 = *puVar7;
        uVar6 = (uint)uVar19;
      } while ((uVar6 >> 4 & 1) == 0);
    }
    uVar4 = (undefined4)puVar7[(ulong)(byte)POPCOUNT((byte)uVar6 & 0xf) + 2];
LAB_0333e2d0:
    lVar18 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x100) + 0x68) + 0x90),
                          &local_68,uVar4);
    uVar6 = *(uint *)(lVar11 + 100);
    if ((int)uVar6 < 1) {
LAB_0333e398:
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = 0x22222222;
      }
      lVar18 = *param_1;
      iVar5 = *(int *)(lVar18 + 0xc0);
      lVar11 = (long)iVar5;
      if ((int)(*(uint *)(lVar18 + 0xc4) & 0x7fffffff) <= iVar5) {
        FUN_03340ab8(lVar18 + 0xb8,lVar11 + 1);
        iVar5 = *(int *)(lVar18 + 0xc0);
      }
      puVar8 = (undefined8 *)(*(long *)(lVar18 + 0xb8) + (long)iVar5 * 0x20);
      *(int *)(lVar18 + 0xc0) = (int)(lVar11 + 1);
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0xffffffff;
      puVar8[2] = param_2;
      puVar8[3] = param_3;
      return;
    }
    uVar12 = (int)lVar18 * -0x61c8864f;
    uVar1 = (int)((ulong)lVar18 >> 0x20) * -0x61c8864f;
    uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar19 = (ulong)((uVar12 + (uVar12 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1) & uVar6);
    lVar15 = *(long *)(lVar11 + 0x58);
    lVar17 = *(long *)(lVar15 + uVar19 * 0x10);
    if (lVar17 == -1) goto LAB_0333e398;
    if (lVar17 != lVar18) {
      do {
        uVar19 = (ulong)((int)uVar19 + 1U & uVar6);
        lVar17 = *(long *)(lVar15 + uVar19 * 0x10);
        if (lVar17 == -1) goto LAB_0333e398;
      } while (lVar17 != lVar18);
    }
    uVar19 = *(ulong *)(lVar15 + uVar19 * 0x10 + 8);
    iVar5 = (int)uVar19;
    if (((iVar5 < 0) || (iVar5 == 0x50000000)) ||
       (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x48) + (uVar19 & 0xffffffff) * 8),
       puVar8 == (undefined8 *)0x0)) goto LAB_0333e398;
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    puVar9 = (undefined *)*puVar8;
    break;
  case 8:
    puVar9 = PTR_DAT_047e6240;
    local_68 = param_2;
    if (param_2 != (ulong *)PTR_DAT_047e6240) {
      while ((uVar6 >> 0xd & 1) == 0) {
        if (((uVar19 & 1) != 0) || (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
        goto LAB_0333df98;
        uVar19 = *local_68;
        uVar6 = (uint)uVar19;
      }
      if (local_68 == (ulong *)0x0) {
LAB_0333df98:
        local_68 = (ulong *)0x0;
      }
      else {
        uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
        local_68 = local_68 +
                   (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2;
      }
      local_58 = (ulong *)PTR_DAT_047e6240;
      while( true ) {
        uVar6 = (uint)*local_58;
        if ((uVar6 >> 0xd & 1) != 0) break;
        if (((*local_58 & 1) != 0) || (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
        goto LAB_0333e13c;
      }
      if ((local_58 != (ulong *)0x0) &&
         (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
         local_58 = local_58 +
                    (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2,
         local_68 != (ulong *)0x0)) {
        uVar19 = FUN_031dd354(&local_68,&local_58);
        if ((uVar19 & 1) != 0) goto LAB_0333e12c;
        goto LAB_0333e16c;
      }
LAB_0333e13c:
      puVar7 = (ulong *)PTR_DAT_047e6240;
      do {
        if ((*puVar7 & 1) != 0) break;
        puVar7 = (ulong *)puVar7[1];
      } while (puVar7 != (ulong *)0x0);
      if (param_2 != (ulong *)0x0) {
        puVar14 = param_2;
        do {
          if (puVar14 == puVar7) goto LAB_0333e12c;
          puVar14 = (ulong *)puVar14[1];
        } while (puVar14 != (ulong *)0x0);
      }
LAB_0333e16c:
      puVar9 = PTR_DAT_047e6238;
      if (param_2 != (ulong *)PTR_DAT_047e6238) {
        local_68 = param_2;
        while( true ) {
          uVar6 = (uint)*local_68;
          if ((uVar6 >> 0xd & 1) != 0) break;
          if (((*local_68 & 1) != 0) || (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
          goto LAB_0333e4d4;
        }
        if (local_68 != (ulong *)0x0) {
          uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
          local_68 = local_68 +
                     (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2;
          goto LAB_0333e4dc;
        }
LAB_0333e4d4:
        local_68 = (ulong *)0x0;
LAB_0333e4dc:
        local_58 = (ulong *)PTR_DAT_047e6238;
        while( true ) {
          uVar6 = (uint)*local_58;
          if ((uVar6 >> 0xd & 1) != 0) break;
          if (((*local_58 & 1) != 0) || (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
          goto LAB_0333e548;
        }
        if ((local_58 != (ulong *)0x0) &&
           (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
           local_58 = local_58 +
                      (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2,
           local_68 != (ulong *)0x0)) {
          uVar19 = FUN_031dd354(&local_68,&local_58);
          if ((uVar19 & 1) != 0) goto LAB_0333e538;
          goto LAB_0333e578;
        }
LAB_0333e548:
        puVar7 = (ulong *)PTR_DAT_047e6238;
        do {
          if ((*puVar7 & 1) != 0) break;
          puVar7 = (ulong *)puVar7[1];
        } while (puVar7 != (ulong *)0x0);
        if (param_2 != (ulong *)0x0) {
          puVar14 = param_2;
          do {
            if (puVar14 == puVar7) goto LAB_0333e538;
            puVar14 = (ulong *)puVar14[1];
          } while (puVar14 != (ulong *)0x0);
        }
LAB_0333e578:
        puVar9 = PTR_DAT_047e5a48;
        if (param_2 != (ulong *)PTR_DAT_047e5a48) {
          local_68 = param_2;
          while( true ) {
            uVar6 = (uint)*local_68;
            if ((uVar6 >> 0xd & 1) != 0) break;
            if (((*local_68 & 1) != 0) ||
               (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0)) goto LAB_0333e5d0;
          }
          if (local_68 != (ulong *)0x0) {
            uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
            local_68 = local_68 +
                       (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2;
            goto LAB_0333e5d8;
          }
LAB_0333e5d0:
          local_68 = (ulong *)0x0;
LAB_0333e5d8:
          local_58 = (ulong *)PTR_DAT_047e5a48;
          while( true ) {
            uVar6 = (uint)*local_58;
            if ((uVar6 >> 0xd & 1) != 0) break;
            if (((*local_58 & 1) != 0) ||
               (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0)) goto LAB_0333e644;
          }
          if ((local_58 != (ulong *)0x0) &&
             (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
             local_58 = local_58 +
                        (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2,
             local_68 != (ulong *)0x0)) {
            uVar19 = FUN_031dd354(&local_68,&local_58);
            if ((uVar19 & 1) != 0) goto LAB_0333e634;
            goto LAB_0333e674;
          }
LAB_0333e644:
          puVar7 = (ulong *)PTR_DAT_047e5a48;
          do {
            if ((*puVar7 & 1) != 0) break;
            puVar7 = (ulong *)puVar7[1];
          } while (puVar7 != (ulong *)0x0);
          if (param_2 != (ulong *)0x0) {
            puVar14 = param_2;
            do {
              if (puVar14 == puVar7) goto LAB_0333e634;
              puVar14 = (ulong *)puVar14[1];
            } while (puVar14 != (ulong *)0x0);
          }
LAB_0333e674:
          puVar9 = PTR_DAT_047e6708;
          if (param_2 != (ulong *)PTR_DAT_047e6708) {
            local_68 = param_2;
            while( true ) {
              uVar6 = (uint)*local_68;
              if ((uVar6 >> 0xd & 1) != 0) break;
              if (((*local_68 & 1) != 0) ||
                 (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0)) goto LAB_0333e6cc;
            }
            if (local_68 != (ulong *)0x0) {
              uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
              local_68 = local_68 +
                         (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2;
              goto LAB_0333e6d4;
            }
LAB_0333e6cc:
            local_68 = (ulong *)0x0;
LAB_0333e6d4:
            local_58 = (ulong *)PTR_DAT_047e6708;
            while( true ) {
              uVar6 = (uint)*local_58;
              if ((uVar6 >> 0xd & 1) != 0) break;
              if (((*local_58 & 1) != 0) ||
                 (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0)) goto LAB_0333e740;
            }
            if ((local_58 != (ulong *)0x0) &&
               (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
               local_58 = local_58 +
                          (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2,
               local_68 != (ulong *)0x0)) {
              uVar19 = FUN_031dd354(&local_68,&local_58);
              if ((uVar19 & 1) != 0) goto LAB_0333e730;
              goto LAB_0333e770;
            }
LAB_0333e740:
            puVar7 = (ulong *)PTR_DAT_047e6708;
            do {
              if ((*puVar7 & 1) != 0) break;
              puVar7 = (ulong *)puVar7[1];
            } while (puVar7 != (ulong *)0x0);
            if (param_2 != (ulong *)0x0) {
              puVar14 = param_2;
              do {
                if (puVar14 == puVar7) goto LAB_0333e730;
                puVar14 = (ulong *)puVar14[1];
              } while (puVar14 != (ulong *)0x0);
            }
LAB_0333e770:
            puVar9 = PTR_DAT_047e5840;
            if (param_2 != (ulong *)PTR_DAT_047e5840) {
              local_68 = param_2;
              while( true ) {
                uVar6 = (uint)*local_68;
                if ((uVar6 >> 0xd & 1) != 0) break;
                if (((*local_68 & 1) != 0) ||
                   (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0)) goto LAB_0333e7c8;
              }
              if (local_68 != (ulong *)0x0) {
                uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                local_68 = local_68 +
                           (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) + 2
                ;
                goto LAB_0333e7d0;
              }
LAB_0333e7c8:
              local_68 = (ulong *)0x0;
LAB_0333e7d0:
              local_58 = (ulong *)PTR_DAT_047e5840;
              while( true ) {
                uVar6 = (uint)*local_58;
                if ((uVar6 >> 0xd & 1) != 0) break;
                if (((*local_58 & 1) != 0) ||
                   (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0)) goto LAB_0333e83c;
              }
              if ((local_58 != (ulong *)0x0) &&
                 (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                 local_58 = local_58 +
                            (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) +
                            2, local_68 != (ulong *)0x0)) {
                uVar19 = FUN_031dd354(&local_68,&local_58);
                if ((uVar19 & 1) != 0) goto LAB_0333e82c;
                goto LAB_0333e86c;
              }
LAB_0333e83c:
              puVar7 = (ulong *)PTR_DAT_047e5840;
              do {
                if ((*puVar7 & 1) != 0) break;
                puVar7 = (ulong *)puVar7[1];
              } while (puVar7 != (ulong *)0x0);
              if (param_2 != (ulong *)0x0) {
                puVar14 = param_2;
                do {
                  if (puVar14 == puVar7) goto LAB_0333e82c;
                  puVar14 = (ulong *)puVar14[1];
                } while (puVar14 != (ulong *)0x0);
              }
LAB_0333e86c:
              puVar9 = PTR_DAT_047e6710;
              if (param_2 != (ulong *)PTR_DAT_047e6710) {
                local_68 = param_2;
                while( true ) {
                  uVar6 = (uint)*local_68;
                  if ((uVar6 >> 0xd & 1) != 0) break;
                  if (((*local_68 & 1) != 0) ||
                     (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0)) goto LAB_0333e8c4;
                }
                if (local_68 != (ulong *)0x0) {
                  uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                  local_68 = local_68 +
                             (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))) +
                             2;
                  goto LAB_0333e8cc;
                }
LAB_0333e8c4:
                local_68 = (ulong *)0x0;
LAB_0333e8cc:
                local_58 = (ulong *)PTR_DAT_047e6710;
                while( true ) {
                  uVar6 = (uint)*local_58;
                  if ((uVar6 >> 0xd & 1) != 0) break;
                  if (((*local_58 & 1) != 0) ||
                     (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0)) goto LAB_0333e938;
                }
                if ((local_58 != (ulong *)0x0) &&
                   (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                   local_58 = local_58 +
                              (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)))
                              + 2, local_68 != (ulong *)0x0)) {
                  uVar19 = FUN_031dd354(&local_68,&local_58);
                  if ((uVar19 & 1) != 0) goto LAB_0333e928;
                  goto LAB_0333e968;
                }
LAB_0333e938:
                puVar7 = (ulong *)PTR_DAT_047e6710;
                do {
                  if ((*puVar7 & 1) != 0) break;
                  puVar7 = (ulong *)puVar7[1];
                } while (puVar7 != (ulong *)0x0);
                if (param_2 != (ulong *)0x0) {
                  puVar14 = param_2;
                  do {
                    if (puVar14 == puVar7) goto LAB_0333e928;
                    puVar14 = (ulong *)puVar14[1];
                  } while (puVar14 != (ulong *)0x0);
                }
LAB_0333e968:
                puVar9 = PTR_DAT_047e6718;
                if (param_2 != (ulong *)PTR_DAT_047e6718) {
                  local_68 = param_2;
                  while( true ) {
                    uVar6 = (uint)*local_68;
                    if ((uVar6 >> 0xd & 1) != 0) break;
                    if (((*local_68 & 1) != 0) ||
                       (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                    goto LAB_0333e9c0;
                  }
                  if (local_68 != (ulong *)0x0) {
                    uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                    local_68 = local_68 +
                               (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)))
                               + 2;
                    goto LAB_0333e9c8;
                  }
LAB_0333e9c0:
                  local_68 = (ulong *)0x0;
LAB_0333e9c8:
                  local_58 = (ulong *)PTR_DAT_047e6718;
                  while( true ) {
                    uVar6 = (uint)*local_58;
                    if ((uVar6 >> 0xd & 1) != 0) break;
                    if (((*local_58 & 1) != 0) ||
                       (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                    goto LAB_0333ea34;
                  }
                  if ((local_58 != (ulong *)0x0) &&
                     (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                     local_58 = local_58 +
                                (ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8))
                                             ) + 2, local_68 != (ulong *)0x0)) {
                    uVar19 = FUN_031dd354(&local_68,&local_58);
                    if ((uVar19 & 1) != 0) goto LAB_0333ea24;
                    goto LAB_0333ea64;
                  }
LAB_0333ea34:
                  puVar7 = (ulong *)PTR_DAT_047e6718;
                  do {
                    if ((*puVar7 & 1) != 0) break;
                    puVar7 = (ulong *)puVar7[1];
                  } while (puVar7 != (ulong *)0x0);
                  if (param_2 != (ulong *)0x0) {
                    puVar14 = param_2;
                    do {
                      if (puVar14 == puVar7) goto LAB_0333ea24;
                      puVar14 = (ulong *)puVar14[1];
                    } while (puVar14 != (ulong *)0x0);
                  }
LAB_0333ea64:
                  puVar9 = PTR_DAT_047e6720;
                  if (param_2 != (ulong *)PTR_DAT_047e6720) {
                    local_68 = param_2;
                    while( true ) {
                      uVar6 = (uint)*local_68;
                      if ((uVar6 >> 0xd & 1) != 0) break;
                      if (((*local_68 & 1) != 0) ||
                         (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                      goto LAB_0333eabc;
                    }
                    if (local_68 != (ulong *)0x0) {
                      uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                      local_68 = local_68 +
                                 (ulong)(byte)(POPCOUNT((char)uVar19) +
                                              POPCOUNT((char)(uVar19 >> 8))) + 2;
                      goto LAB_0333eac4;
                    }
LAB_0333eabc:
                    local_68 = (ulong *)0x0;
LAB_0333eac4:
                    local_58 = (ulong *)PTR_DAT_047e6720;
                    while( true ) {
                      uVar6 = (uint)*local_58;
                      if ((uVar6 >> 0xd & 1) != 0) break;
                      if (((*local_58 & 1) != 0) ||
                         (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                      goto LAB_0333eb30;
                    }
                    if ((local_58 != (ulong *)0x0) &&
                       (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                       local_58 = local_58 +
                                  (ulong)(byte)(POPCOUNT((char)uVar19) +
                                               POPCOUNT((char)(uVar19 >> 8))) + 2,
                       local_68 != (ulong *)0x0)) {
                      uVar19 = FUN_031dd354(&local_68,&local_58);
                      if ((uVar19 & 1) != 0) goto LAB_0333eb20;
                      goto LAB_0333eb60;
                    }
LAB_0333eb30:
                    puVar7 = (ulong *)PTR_DAT_047e6720;
                    do {
                      if ((*puVar7 & 1) != 0) break;
                      puVar7 = (ulong *)puVar7[1];
                    } while (puVar7 != (ulong *)0x0);
                    if (param_2 != (ulong *)0x0) {
                      puVar14 = param_2;
                      do {
                        if (puVar14 == puVar7) goto LAB_0333eb20;
                        puVar14 = (ulong *)puVar14[1];
                      } while (puVar14 != (ulong *)0x0);
                    }
LAB_0333eb60:
                    puVar9 = PTR_DAT_047e5a60;
                    if (param_2 != (ulong *)PTR_DAT_047e5a60) {
                      local_68 = param_2;
                      while( true ) {
                        uVar6 = (uint)*local_68;
                        if ((uVar6 >> 0xd & 1) != 0) break;
                        if (((*local_68 & 1) != 0) ||
                           (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                        goto LAB_0333ebb8;
                      }
                      if (local_68 != (ulong *)0x0) {
                        uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                        local_68 = local_68 +
                                   (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                POPCOUNT((char)(uVar19 >> 8))) + 2;
                        goto LAB_0333ebc0;
                      }
LAB_0333ebb8:
                      local_68 = (ulong *)0x0;
LAB_0333ebc0:
                      local_58 = (ulong *)PTR_DAT_047e5a60;
                      while( true ) {
                        uVar6 = (uint)*local_58;
                        if ((uVar6 >> 0xd & 1) != 0) break;
                        if (((*local_58 & 1) != 0) ||
                           (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                        goto LAB_0333ec2c;
                      }
                      if ((local_58 != (ulong *)0x0) &&
                         (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                         local_58 = local_58 +
                                    (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                 POPCOUNT((char)(uVar19 >> 8))) + 2,
                         local_68 != (ulong *)0x0)) {
                        uVar19 = FUN_031dd354(&local_68,&local_58);
                        if ((uVar19 & 1) != 0) goto LAB_0333ec1c;
                        goto LAB_0333ec5c;
                      }
LAB_0333ec2c:
                      puVar7 = (ulong *)PTR_DAT_047e5a60;
                      do {
                        if ((*puVar7 & 1) != 0) break;
                        puVar7 = (ulong *)puVar7[1];
                      } while (puVar7 != (ulong *)0x0);
                      if (param_2 != (ulong *)0x0) {
                        puVar14 = param_2;
                        do {
                          if (puVar14 == puVar7) goto LAB_0333ec1c;
                          puVar14 = (ulong *)puVar14[1];
                        } while (puVar14 != (ulong *)0x0);
                      }
LAB_0333ec5c:
                      puVar9 = PTR_DAT_047e6728;
                      if (param_2 != (ulong *)PTR_DAT_047e6728) {
                        local_68 = param_2;
                        while( true ) {
                          uVar6 = (uint)*local_68;
                          if ((uVar6 >> 0xd & 1) != 0) break;
                          if (((*local_68 & 1) != 0) ||
                             (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                          goto LAB_0333ecb4;
                        }
                        if (local_68 != (ulong *)0x0) {
                          uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                          local_68 = local_68 +
                                     (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                  POPCOUNT((char)(uVar19 >> 8))) + 2;
                          goto LAB_0333ecbc;
                        }
LAB_0333ecb4:
                        local_68 = (ulong *)0x0;
LAB_0333ecbc:
                        local_58 = (ulong *)PTR_DAT_047e6728;
                        while( true ) {
                          uVar6 = (uint)*local_58;
                          if ((uVar6 >> 0xd & 1) != 0) break;
                          if (((*local_58 & 1) != 0) ||
                             (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                          goto LAB_0333ed28;
                        }
                        if ((local_58 != (ulong *)0x0) &&
                           (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                           local_58 = local_58 +
                                      (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                   POPCOUNT((char)(uVar19 >> 8))) + 2,
                           local_68 != (ulong *)0x0)) {
                          uVar19 = FUN_031dd354(&local_68,&local_58);
                          if ((uVar19 & 1) != 0) goto LAB_0333ed18;
                          goto LAB_0333ed58;
                        }
LAB_0333ed28:
                        puVar7 = (ulong *)PTR_DAT_047e6728;
                        do {
                          if ((*puVar7 & 1) != 0) break;
                          puVar7 = (ulong *)puVar7[1];
                        } while (puVar7 != (ulong *)0x0);
                        if (param_2 != (ulong *)0x0) {
                          puVar14 = param_2;
                          do {
                            if (puVar14 == puVar7) goto LAB_0333ed18;
                            puVar14 = (ulong *)puVar14[1];
                          } while (puVar14 != (ulong *)0x0);
                        }
LAB_0333ed58:
                        puVar9 = PTR_DAT_047e5a78;
                        if (param_2 != (ulong *)PTR_DAT_047e5a78) {
                          local_68 = param_2;
                          while( true ) {
                            uVar6 = (uint)*local_68;
                            if ((uVar6 >> 0xd & 1) != 0) break;
                            if (((*local_68 & 1) != 0) ||
                               (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                            goto LAB_0333edb0;
                          }
                          if (local_68 != (ulong *)0x0) {
                            uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                            local_68 = local_68 +
                                       (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                    POPCOUNT((char)(uVar19 >> 8))) + 2;
                            goto LAB_0333edb8;
                          }
LAB_0333edb0:
                          local_68 = (ulong *)0x0;
LAB_0333edb8:
                          local_58 = (ulong *)PTR_DAT_047e5a78;
                          while( true ) {
                            uVar6 = (uint)*local_58;
                            if ((uVar6 >> 0xd & 1) != 0) break;
                            if (((*local_58 & 1) != 0) ||
                               (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                            goto LAB_0333ee24;
                          }
                          if ((local_58 != (ulong *)0x0) &&
                             (uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff,
                             local_58 = local_58 +
                                        (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                     POPCOUNT((char)(uVar19 >> 8))) + 2,
                             local_68 != (ulong *)0x0)) {
                            uVar19 = FUN_031dd354(&local_68,&local_58);
                            if ((uVar19 & 1) != 0) goto LAB_0333ee14;
                            goto LAB_0333ee54;
                          }
LAB_0333ee24:
                          puVar7 = (ulong *)PTR_DAT_047e5a78;
                          do {
                            if ((*puVar7 & 1) != 0) break;
                            puVar7 = (ulong *)puVar7[1];
                          } while (puVar7 != (ulong *)0x0);
                          if (param_2 != (ulong *)0x0) {
                            puVar14 = param_2;
                            do {
                              if (puVar14 == puVar7) goto LAB_0333ee14;
                              puVar14 = (ulong *)puVar14[1];
                            } while (puVar14 != (ulong *)0x0);
                          }
LAB_0333ee54:
                          puVar9 = PTR_DAT_047e6730;
                          if (param_2 != (ulong *)PTR_DAT_047e6730) {
                            local_68 = param_2;
                            while( true ) {
                              uVar6 = (uint)*local_68;
                              if ((uVar6 >> 0xd & 1) != 0) break;
                              if (((*local_68 & 1) != 0) ||
                                 (local_68 = (ulong *)local_68[1], local_68 == (ulong *)0x0))
                              goto LAB_0333eeac;
                            }
                            if (local_68 != (ulong *)0x0) {
                              uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                              local_68 = local_68 +
                                         (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                      POPCOUNT((char)(uVar19 >> 8))) + 2;
                              goto LAB_0333eeb4;
                            }
LAB_0333eeac:
                            local_68 = (ulong *)0x0;
LAB_0333eeb4:
                            local_58 = (ulong *)PTR_DAT_047e6730;
                            while( true ) {
                              uVar6 = (uint)*local_58;
                              puVar7 = param_2;
                              if ((uVar6 >> 0xd & 1) != 0) break;
                              if (((*local_58 & 1) != 0) ||
                                 (local_58 = (ulong *)local_58[1], local_58 == (ulong *)0x0))
                              goto LAB_0333ef40;
                            }
                            if (local_58 != (ulong *)0x0) {
                              uVar19 = CONCAT44(uVar6,uVar6) & 0x1fff00001fff;
                              local_58 = local_58 +
                                         (ulong)(byte)(POPCOUNT((char)uVar19) +
                                                      POPCOUNT((char)(uVar19 >> 8))) + 2;
                              if (local_68 == (ulong *)0x0) goto LAB_0333ef44;
                              uVar19 = FUN_031dd354(&local_68,&local_58);
                              if ((uVar19 & 1) != 0) goto LAB_0333ef14;
                              goto LAB_0333ef78;
                            }
LAB_0333ef40:
                            local_58 = (ulong *)0x0;
LAB_0333ef44:
                            puVar14 = (ulong *)PTR_DAT_047e6730;
                            do {
                              if ((*puVar14 & 1) != 0) break;
                              puVar14 = (ulong *)puVar14[1];
                            } while (puVar14 != (ulong *)0x0);
                            if (param_2 != (ulong *)0x0) {
                              puVar16 = param_2;
                              do {
                                if (puVar16 == puVar14) goto LAB_0333ef14;
                                puVar16 = (ulong *)puVar16[1];
                              } while (puVar16 != (ulong *)0x0);
                            }
LAB_0333ef78:
                            do {
                              puVar14 = param_2;
                              if ((*puVar7 & 1) != 0) {
                                if ((puVar7 != (ulong *)0x0) && (0 < (int)(puVar7[2] >> 8))) {
                                  puVar7 = param_2;
                                  goto LAB_0333efcc;
                                }
                                break;
                              }
                              puVar16 = puVar7 + 1;
                              puVar7 = (ulong *)*puVar16;
                            } while ((ulong *)*puVar16 != (ulong *)0x0);
                            do {
                              if (((byte)*puVar14 >> 1 & 1) != 0) {
                                if (puVar14[3] != 0) {
                                  puVar7 = (ulong *)(param_1 + 2);
                                  goto LAB_0333f008;
                                }
                                break;
                              }
                              puVar7 = puVar14 + 1;
                              puVar14 = (ulong *)*puVar7;
                            } while ((ulong *)*puVar7 != (ulong *)0x0);
                            puVar7 = (ulong *)(param_1 + 4);
LAB_0333f008:
                            uVar19 = *puVar7;
                            puVar7 = param_2;
                            do {
                              if (((byte)*puVar7 >> 1 & 1) != 0) {
                                plVar3 = (long *)param_1[1];
                                pcVar10 = *(code **)(*plVar3 + 0x18);
                                if (puVar7[3] == 0) goto LAB_0333f0b0;
                                puVar7 = (ulong *)(*pcVar10)(plVar3,0x78);
                                *puVar7 = 0x30800f;
                                puVar7[1] = 0;
                                puVar7[2] = 8;
                                puVar7[3] = 0x22222222;
                                puVar7[0xb] = 2;
                                puVar7[4] = uVar19;
                                puVar7[5] = (ulong)"hkArray";
                                puVar7[7] = 0;
                                puVar7[8] = 0;
                                puVar7[10] = 0;
                                puVar7[6] = (ulong)(puVar7 + 10);
                                puVar9 = PTR_DAT_047e4b78;
                                puVar7[0xc] = 0x22222222;
                                puVar7[0xd] = (ulong)&DAT_03c4f61e;
                                puVar7[0xe] = (ulong)puVar9;
                                puVar7[0xf] = (ulong)"tAllocator";
                                goto LAB_0333f1a0;
                              }
                              puVar7 = (ulong *)puVar7[1];
                            } while (puVar7 != (ulong *)0x0);
                            plVar3 = (long *)param_1[1];
                            pcVar10 = *(code **)(*plVar3 + 0x18);
LAB_0333f0b0:
                            puVar7 = (ulong *)(*pcVar10)(plVar3,0x40);
                            *puVar7 = 0x30000f;
                            puVar7[1] = 0;
                            puVar7[2] = 8;
                            puVar7[3] = 0;
                            puVar7[4] = uVar19;
                            puVar7[5] = (ulong)"hkArray";
                            puVar7[6] = 0;
                            puVar7[7] = 0;
                            goto LAB_0333f1a0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0333ef1c;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch");
  }
  goto LAB_0333ef20;
LAB_0333e12c:
  puVar9 = PTR_DAT_047e6240;
  goto LAB_0333ef1c;
LAB_0333e538:
  puVar9 = PTR_DAT_047e6238;
  goto LAB_0333ef1c;
LAB_0333e634:
  puVar9 = PTR_DAT_047e5a48;
  goto LAB_0333ef1c;
LAB_0333e730:
  puVar9 = PTR_DAT_047e6708;
  goto LAB_0333ef1c;
LAB_0333e82c:
  puVar9 = PTR_DAT_047e5840;
  goto LAB_0333ef1c;
LAB_0333e928:
  puVar9 = PTR_DAT_047e6710;
  goto LAB_0333ef1c;
LAB_0333ea24:
  puVar9 = PTR_DAT_047e6718;
  goto LAB_0333ef1c;
LAB_0333eb20:
  puVar9 = PTR_DAT_047e6720;
  goto LAB_0333ef1c;
LAB_0333ec1c:
  puVar9 = PTR_DAT_047e5a60;
  goto LAB_0333ef1c;
LAB_0333ed18:
  puVar9 = PTR_DAT_047e6728;
  goto LAB_0333ef1c;
LAB_0333ee14:
  puVar9 = PTR_DAT_047e5a78;
  goto LAB_0333ef1c;
  while (puVar7 = (ulong *)puVar7[1], puVar7 != (ulong *)0x0) {
LAB_0333efcc:
    if (((byte)*puVar7 >> 1 & 1) != 0) {
      if (puVar7[3] != 0) {
        uVar19 = 0x22222222;
        goto LAB_0333f0fc;
      }
      break;
    }
  }
  uVar19 = 0;
LAB_0333f0fc:
  puVar7 = param_2;
  do {
    if ((*puVar7 & 1) != 0) {
      if (puVar7 != (ulong *)0x0) {
        iVar5 = (int)(puVar7[2] >> 8);
        goto LAB_0333f12c;
      }
      break;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  iVar5 = 0;
LAB_0333f12c:
  puVar7 = (ulong *)(**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],0x68);
  *puVar7 = 0x30800f;
  puVar7[1] = 0;
  uVar6 = 8;
  if (iVar5 != 0) {
    uVar6 = 0x28;
  }
  puVar7[2] = (long)(int)(uVar6 | iVar5 << 8);
  puVar7[3] = uVar19;
  puVar7[4] = (ulong)PTR_DAT_047e66f8;
  puVar7[5] = (ulong)&DAT_03bec20a;
  puVar7[0xb] = 1;
  puVar7[0xc] = uVar19;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[10] = 0;
  puVar7[6] = (ulong)(puVar7 + 10);
  puVar7[0xd] = (ulong)&DAT_03c4f61e;
LAB_0333f1a0:
  puVar14 = param_2;
  do {
    if (((byte)*puVar14 >> 1 & 1) != 0) {
      if (puVar14[3] != 0) {
        puVar14 = param_2;
        goto LAB_0333f1c4;
      }
      break;
    }
    puVar14 = (ulong *)puVar14[1];
  } while (puVar14 != (ulong *)0x0);
  goto LAB_0333f284;
  while (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0) {
LAB_0333f1c4:
    if (((byte)*puVar14 >> 1 & 1) != 0) {
      uVar19 = puVar14[3];
      goto LAB_0333f1e0;
    }
  }
  uVar19 = 0;
LAB_0333f1e0:
  FUN_0333dde4(param_1,uVar19,puVar7 + 3);
  puVar14 = param_2;
  do {
    if (((byte)*puVar14 >> 1 & 1) != 0) {
      uVar19 = puVar14[3];
      goto LAB_0333f20c;
    }
    puVar14 = (ulong *)puVar14[1];
  } while (puVar14 != (ulong *)0x0);
  uVar19 = 0;
LAB_0333f20c:
  FUN_0333dde4(param_1,uVar19,puVar7[6] + 0x10);
  do {
    if ((*param_2 & 1) != 0) {
      if ((param_2 != (ulong *)0x0) && (0 < (int)(param_2[2] >> 8))) {
        uVar6 = (uint)*puVar7;
        uVar19 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
        bVar21 = POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                 POPCOUNT((char)(uVar19 >> 0x10));
        if ((uVar6 >> 0x14 & 1) == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = puVar7[(ulong)bVar21 + 2] & 0xf0000000;
        }
        puVar7[(ulong)bVar21 + 2] = uVar19;
        lVar18 = *param_1;
        iVar5 = *(int *)(lVar18 + 0xe0);
        lVar11 = (long)iVar5;
        if ((int)(*(uint *)(lVar18 + 0xe4) & 0x7fffffff) <= iVar5) {
          FUN_031dee78(lVar18 + 0xd8,PTR_PTR_047d1a50,lVar11 + 1);
          iVar5 = *(int *)(lVar18 + 0xe0);
        }
        *(ulong **)(*(long *)(lVar18 + 0xd8) + (long)iVar5 * 8) = puVar7;
        *(int *)(lVar18 + 0xe0) = (int)(lVar11 + 1);
        goto LAB_0333e49c;
      }
      break;
    }
    param_2 = (ulong *)param_2[1];
  } while (param_2 != (ulong *)0x0);
LAB_0333f284:
  uVar6 = (uint)*puVar7 & 0xfffff;
  bVar21 = POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) + POPCOUNT((char)(uVar6 >> 0x10));
  if (((uint)*puVar7 >> 0x14 & 1) == 0) {
    uVar19 = 0x80008;
  }
  else {
    uVar19 = puVar7[(ulong)bVar21 + 2] & 0xf0000000 | 0x80008;
  }
  puVar7[(ulong)bVar21 + 2] = uVar19 | 0x10;
LAB_0333e49c:
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  *param_3 = puVar7;
  return;
LAB_0333ef14:
  puVar9 = PTR_DAT_047e6730;
LAB_0333ef1c:
  if (param_3 != (undefined8 *)0x0) {
LAB_0333ef20:
    *param_3 = puVar9;
  }
  return;
}


