/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e26d8; name: FUN_002e26d8
 */


undefined8 FUN_002e26d8(long *param_1,uint param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte **ppbVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  ulong uVar20;
  char *pcVar21;
  byte *pbVar22;
  char *pcVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *local_e0;
  ulong uStack_d8;
  byte *local_d0;
  ulong uStack_c8;
  undefined4 local_b8;
  long local_b0;
  long lStack_a8;
  undefined4 *local_a0;
  char *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  byte *local_70;
  uint local_64;
  
  local_78 = 0;
  local_70 = (byte *)0x0;
  puVar4 = local_88;
  if (param_3 != (undefined4 *)0x0) {
    puVar4 = param_3;
  }
  local_80 = 0;
  lStack_a8 = param_1[1];
  local_b0 = *param_1;
  local_8c = 0x10ffff;
  if ((param_2 & 0x20) != 0) {
    local_8c = 0xff;
  }
  local_90 = 0;
  local_88[0] = 0;
  local_98 = (char *)0x0;
  uStack_c8 = param_1[1];
  local_d0 = (byte *)*param_1;
  puVar6 = PTR_FUN_047cba38;
  local_b8 = param_2;
  local_a0 = puVar4;
  if ((param_2 >> 5 & 1) != 0) {
    pbVar22 = (byte *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (pbVar22 != (byte *)0x0) {
      pbVar22[0] = 0;
      pbVar22[1] = 0;
      pbVar22[2] = 0;
      pbVar22[3] = 0;
      pbVar22[4] = 0;
      pbVar22[5] = 0;
      pbVar22[6] = 0;
      pbVar22[7] = 0;
      pbVar22[8] = 0;
      pbVar22[9] = 0;
      pbVar22[10] = 0;
      pbVar22[0xb] = 0;
      pbVar22[0xc] = 0;
      pbVar22[0xd] = 0;
      pbVar22[0xe] = 0;
      pbVar22[0xf] = 0;
      pbVar22[0x10] = 0;
      pbVar22[0x11] = 0;
      pbVar22[0x12] = 0;
      pbVar22[0x13] = 0;
      pbVar22[0x14] = 0;
      pbVar22[0x15] = 0;
      pbVar22[0x16] = 0;
      pbVar22[0x17] = 0;
    }
    pbVar22[0] = 0;
    pbVar22[1] = 0;
    if (uStack_c8 != 0) {
      uVar24 = 0;
      do {
        local_64 = (uint)local_d0[uVar24];
                    /* try { // try from 002e27d0 to 002e27eb has its CatchHandler @ 002e334c */
        iVar7 = FUN_002ea9e0(&local_e0,&local_64);
        FUN_0021d540(pbVar22,&local_e0,(long)iVar7);
        uVar24 = uVar24 + 1;
      } while (uVar24 < uStack_c8);
    }
    puVar2 = local_88;
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_3;
    }
    pbVar25 = *(byte **)(puVar2 + 6);
    ppbVar3 = &local_70;
    if (param_3 != (undefined4 *)0x0) {
      ppbVar3 = (byte **)(param_3 + 6);
    }
    if (pbVar25 != (byte *)0x0) {
      if ((*pbVar25 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(pbVar25 + 0x10));
      }
      FUN_0049e790(PTR_LAB_047cba48,pbVar25);
    }
    *ppbVar3 = pbVar22;
    uStack_c8 = *(ulong *)(pbVar22 + 8);
    local_d0 = *(byte **)(pbVar22 + 0x10);
    puVar6 = PTR_FUN_047cba38;
    if ((*pbVar22 & 1) == 0) {
      local_d0 = pbVar22 + 1;
      uStack_c8 = (ulong)(*pbVar22 >> 1);
    }
  }
  PTR_FUN_047cba38 = puVar6;
  if ((param_2 >> 1 & 1) == 0) {
    if (uStack_c8 != 0) {
      uVar24 = 0;
      uVar5 = *(uint *)PTR_DAT_047cc918;
      pbVar22 = (byte *)0x0;
LAB_002e2934:
      uVar18 = local_b8;
      pbVar25 = local_d0;
      uVar11 = 7;
      switch(*local_d0) {
      case 0x24:
                    /* try { // try from 002e2964 to 002e296b has its CatchHandler @ 002e3344 */
        FUN_002dea28(&local_b8);
        break;
      default:
        uVar16 = (undefined4)uStack_c8;
        if (3 < uStack_c8) {
          uVar16 = 4;
        }
                    /* try { // try from 002e2bc0 to 002e2c13 has its CatchHandler @ 002e333c */
        iVar7 = FUN_002eaaa0(local_d0,uVar16);
        if (iVar7 != 0) {
          iVar7 = FUN_002ea8f0(&local_e0,local_d0);
          if ((int)local_e0 < 0x110000) {
            if ((iVar7 != 1) || ((int)local_e0 != 0xfffd)) {
              local_d0 = local_d0 + iVar7;
              uStack_c8 = uStack_c8 - (long)iVar7;
              if (-1 < iVar7) {
                FUN_002de8d8(&local_b8,(ulong)local_e0 & 0xffffffff);
                goto LAB_002e2928;
              }
              goto LAB_002e2910;
            }
          }
          else {
LAB_002e32b4:
            local_e0 = (byte *)CONCAT44(local_e0._4_4_,0xfffd);
          }
        }
LAB_002e32b8:
        puVar4 = local_88;
        if (param_3 != (undefined4 *)0x0) {
          puVar4 = param_3;
        }
        *puVar4 = 0xc;
        puVar15 = &local_80;
        if (param_3 != (undefined4 *)0x0) {
          puVar15 = (undefined8 *)(param_3 + 2);
        }
        goto LAB_002e290c;
      case 0x28:
        if (((1 < uStack_c8) && ((local_b8 >> 9 & 1) != 0)) && (local_d0[1] == 0x3f)) {
          uVar24 = FUN_002e21fc(&local_b8,&local_d0);
          if ((uVar24 & 1) != 0) goto LAB_002e2928;
          goto LAB_002e2910;
        }
        if ((local_b8 >> 0xc & 1) == 0) {
          local_e0 = (byte *)0x0;
          uStack_d8 = 0;
                    /* try { // try from 002e2c20 to 002e2c2b has its CatchHandler @ 002e3320 */
          FUN_002df188(&local_b8,&local_e0);
        }
        else {
          lVar8 = FUN_0049e770(puVar6,0x28);
          if (lVar8 != 0) {
            FUN_002e4418(lVar8,0x16,local_b8);
          }
          *(undefined4 *)(lVar8 + 0x18) = 0xffffffff;
          FUN_002de558(&local_b8,lVar8);
        }
        break;
      case 0x29:
                    /* try { // try from 002e29dc to 002e2a2b has its CatchHandler @ 002e3344 */
        uVar24 = FUN_002df3fc(&local_b8);
        if ((uVar24 & 1) == 0) goto LAB_002e2910;
        break;
      case 0x2a:
        goto switchD_002e2960_caseD_2a;
      case 0x2b:
        uVar11 = 8;
        goto switchD_002e2960_caseD_2a;
      case 0x2e:
        FUN_002dead0(&local_b8);
        break;
      case 0x3f:
        uVar11 = 9;
switchD_002e2960_caseD_2a:
        pbVar19 = local_d0 + 1;
        uVar17 = uStack_c8 - 1;
        uStack_d8 = uStack_c8;
        local_e0 = local_d0;
        if ((local_b8._1_1_ >> 1 & 1) == 0) {
          uVar13 = 0;
          local_d0 = pbVar19;
          uStack_c8 = uVar17;
        }
        else {
          if ((uVar17 == 0) || (*pbVar19 != 0x3f)) {
            uVar13 = 0;
            local_d0 = pbVar19;
            uStack_c8 = uVar17;
          }
          else {
            local_d0 = local_d0 + 2;
            uStack_c8 = uStack_c8 - 2;
            uVar13 = 1;
          }
          if (uVar24 != 0) {
            puVar4 = local_88;
            if (param_3 != (undefined4 *)0x0) {
              puVar4 = param_3;
            }
            *puVar4 = 10;
            *(byte **)(puVar4 + 2) = pbVar22;
            *(long *)(puVar4 + 4) = (long)local_d0 - (long)pbVar22;
            goto LAB_002e2910;
          }
        }
        uVar24 = (long)local_d0 - (long)pbVar25;
                    /* try { // try from 002e2ac8 to 002e2ad7 has its CatchHandler @ 002e3340 */
        uStack_d8 = uVar24;
        uVar17 = FUN_002deb98(&local_b8,uVar11,&local_e0,uVar13);
LAB_002e2ad8:
        if ((uVar17 & 1) != 0) goto LAB_002e2930;
        goto LAB_002e2910;
      case 0x5b:
                    /* try { // try from 002e2a3c to 002e2a5f has its CatchHandler @ 002e3338 */
        uVar24 = FUN_002e1d28(&local_b8,&local_d0,&local_e0,puVar4);
        if ((uVar24 & 1) != 0) {
          FUN_002de558(&local_b8,local_e0);
LAB_002e2928:
          uVar24 = 0;
          pbVar25 = (byte *)0x0;
          goto LAB_002e2930;
        }
        goto LAB_002e2910;
      case 0x5c:
        if ((local_b8 >> 8 & 1) != 0) {
          if (1 < uStack_c8) {
            if (local_d0[1] == 0x42) {
              lVar8 = FUN_0049e770(puVar6,0x28);
              if (lVar8 != 0) {
                FUN_002e4418(lVar8,0x11,local_b8);
              }
              FUN_002de558(&local_b8,lVar8);
            }
            else {
              if (local_d0[1] != 0x62) goto LAB_002e2b2c;
              lVar8 = FUN_0049e770(puVar6,0x28);
              if (lVar8 != 0) {
                FUN_002e4418(lVar8,0x10,local_b8);
              }
              FUN_002de558(&local_b8,lVar8);
            }
            goto LAB_002e3044;
          }
LAB_002e2e8c:
          uVar18 = local_b8;
          pbVar22 = local_d0;
          if (((((local_b8 >> 7 & 1) != 0) && (uVar24 = uStack_c8 - 2, 1 < uStack_c8)) &&
              (*local_d0 == 0x5c)) && (0 < (int)uVar5)) {
            puVar15 = (undefined8 *)PTR_PTR_047cc920;
            uVar17 = (ulong)uVar5;
            do {
              pbVar25 = (byte *)*puVar15;
              if (((pbVar25 != (byte *)0x0) && (sVar10 = strlen((char *)pbVar25), sVar10 == 2)) &&
                 ((pbVar25 == pbVar22 || (*(short *)pbVar25 == *(short *)pbVar22)))) {
                local_d0 = pbVar22 + 2;
                uStack_c8 = uVar24;
                lVar8 = FUN_0049e770(puVar6,0x28);
                if (lVar8 != 0) {
                    /* try { // try from 002e2f98 to 002e2fa3 has its CatchHandler @ 002e330c */
                  FUN_002e4418(lVar8,0x14,uVar18 & 0x3ffe);
                }
                lVar9 = FUN_0049e770(puVar6,0x28);
                if (lVar9 != 0) {
                    /* try { // try from 002e2fc0 to 002e2feb has its CatchHandler @ 002e3318 */
                  FUN_002e6250(lVar9);
                }
                *(long *)(lVar8 + 0x20) = lVar9;
                FUN_002e1250(lVar9,puVar15,*(undefined4 *)(puVar15 + 1),local_b8);
                FUN_002de558(&local_b8,lVar8);
                uVar24 = 0;
                pbVar25 = (byte *)0x0;
                goto LAB_002e2930;
              }
              puVar15 = puVar15 + 6;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
                    /* try { // try from 002e2ec0 to 002e2f03 has its CatchHandler @ 002e3334 */
          uVar24 = FUN_002e1510(&local_d0,&local_e0,puVar4,local_8c);
          if ((uVar24 & 1) != 0) {
            FUN_002de8d8(&local_b8,(ulong)local_e0 & 0xffffffff);
            goto LAB_002e2928;
          }
          goto LAB_002e2910;
        }
LAB_002e2b2c:
        if ((local_b8 >> 9 & 1) == 0) {
          if (1 < uStack_c8) {
            bVar14 = local_d0[1];
            goto LAB_002e2b3c;
          }
          goto LAB_002e2e8c;
        }
        if (uStack_c8 < 2) goto LAB_002e2e8c;
        bVar14 = local_d0[1];
        if (bVar14 < 0x51) {
          if (bVar14 == 0x41) {
            lVar8 = FUN_0049e770(puVar6,0x28);
            if (lVar8 != 0) {
                    /* try { // try from 002e302c to 002e3043 has its CatchHandler @ 002e3344 */
              FUN_002e4418(lVar8,0x12,local_b8);
            }
            FUN_002de558(&local_b8,lVar8);
          }
          else {
            if (bVar14 != 0x43) goto LAB_002e2b3c;
            lVar8 = FUN_0049e770(puVar6,0x28);
            if (lVar8 != 0) {
              FUN_002e4418(lVar8,0xd,local_b8);
            }
            FUN_002de558(&local_b8,lVar8);
          }
        }
        else {
          if (bVar14 == 0x51) {
            local_d0 = local_d0 + 2;
            uStack_c8 = uStack_c8 - 2;
            do {
              if (uStack_c8 != 1) {
                if (uStack_c8 == 0) goto LAB_002e2928;
                if ((*local_d0 == 0x5c) && (local_d0[1] == 0x45)) goto LAB_002e31bc;
              }
              uVar16 = (undefined4)uStack_c8;
              if (3 < uStack_c8) {
                uVar16 = 4;
              }
                    /* try { // try from 002e309c to 002e30ef has its CatchHandler @ 002e3324 */
              iVar7 = FUN_002eaaa0(local_d0,uVar16);
              if (iVar7 == 0) goto LAB_002e32b8;
              iVar7 = FUN_002ea8f0(&local_e0,local_d0);
              if (0x10ffff < (int)local_e0) goto LAB_002e32b4;
              if ((iVar7 == 1) && ((int)local_e0 == 0xfffd)) goto LAB_002e32b8;
              local_d0 = local_d0 + iVar7;
              uStack_c8 = uStack_c8 - (long)iVar7;
              if (iVar7 < 0) goto LAB_002e2910;
              FUN_002de8d8(&local_b8,(ulong)local_e0 & 0xffffffff);
            } while( true );
          }
          if (bVar14 != 0x7a) {
LAB_002e2b3c:
            if ((bVar14 | 0x20) == 0x70) {
              lVar8 = FUN_0049e770(puVar6,0x28);
              if (lVar8 != 0) {
                    /* try { // try from 002e2b60 to 002e2b6b has its CatchHandler @ 002e3314 */
                FUN_002e4418(lVar8,0x14,uVar18 & 0x3ffe);
              }
              lVar9 = FUN_0049e770(puVar6,0x28);
              if (lVar9 != 0) {
                    /* try { // try from 002e2b80 to 002e2b9f has its CatchHandler @ 002e331c */
                FUN_002e6250(lVar9);
              }
              *(long *)(lVar8 + 0x20) = lVar9;
              iVar7 = FUN_002e0e60(&local_d0,local_b8,lVar9,puVar4);
              if (iVar7 == 0) {
                    /* try { // try from 002e2918 to 002e2923 has its CatchHandler @ 002e331c */
                FUN_002de558(&local_b8,lVar8);
                goto LAB_002e2928;
              }
              if (iVar7 != 2) {
                if (iVar7 != 1) goto LAB_002e2e8c;
                    /* try { // try from 002e32dc to 002e32e3 has its CatchHandler @ 002e3308 */
                FUN_002e4804(lVar8);
                goto LAB_002e2910;
              }
                    /* try { // try from 002e2e84 to 002e2e8b has its CatchHandler @ 002e331c */
              FUN_002e4804(lVar8);
            }
            goto LAB_002e2e8c;
          }
          lVar8 = FUN_0049e770(puVar6,0x28);
          if (lVar8 != 0) {
            FUN_002e4418(lVar8,0x13,local_b8);
          }
          FUN_002de558(&local_b8,lVar8);
        }
LAB_002e3044:
        local_d0 = local_d0 + 2;
        uStack_c8 = uStack_c8 - 2;
        goto LAB_002e2cf4;
      case 0x5e:
        lVar8 = FUN_0049e770(puVar6,0x28);
        if ((uVar18 >> 4 & 1) == 0) {
          if (lVar8 != 0) {
                    /* try { // try from 002e2b08 to 002e2b1f has its CatchHandler @ 002e3344 */
            FUN_002e4418(lVar8,0xe,local_b8);
          }
          FUN_002de558(&local_b8,lVar8);
        }
        else {
          if (lVar8 != 0) {
                    /* try { // try from 002e2c3c to 002e2e4b has its CatchHandler @ 002e3344 */
            FUN_002e4418(lVar8,0x12,local_b8);
          }
          FUN_002de558(&local_b8,lVar8);
        }
        break;
      case 0x7b:
        uStack_d8 = uStack_c8;
        local_e0 = local_d0;
        if (uStack_c8 == 1) {
LAB_002e29b0:
                    /* try { // try from 002e29b0 to 002e29bb has its CatchHandler @ 002e3330 */
          FUN_002de8d8(&local_b8,0x7b);
          local_d0 = local_d0 + 1;
          uStack_c8 = uStack_c8 - 1;
          uVar24 = 0;
          pbVar25 = (byte *)0x0;
          goto LAB_002e2930;
        }
        uVar18 = local_d0[1] - 0x30;
        if ((9 < uVar18) ||
           (((1 < uStack_c8 - 1 && (local_d0[1] == 0x30)) && (local_d0[2] - 0x30 < 10))))
        goto LAB_002e29b0;
        iVar7 = 0;
        uVar17 = 0;
        lVar8 = 3 - uStack_c8;
        do {
          lVar9 = lVar8;
          uVar20 = uVar17;
          if ((99999999 < iVar7) || (uStack_c8 - 2 == uVar20)) goto LAB_002e29b0;
          iVar7 = uVar18 + iVar7 * 10;
          uVar17 = uVar20 + 1;
          bVar14 = local_d0[uVar20 + 2];
          uVar18 = bVar14 - 0x30;
          lVar8 = lVar9 + 1;
        } while (uVar18 < 10);
        if (bVar14 != 0x2c) {
          uVar17 = ~uVar17 + uStack_c8;
          pbVar19 = local_d0 + uVar20 + 2;
          iVar12 = iVar7;
          if (bVar14 == 0x7d) goto LAB_002e2e68;
          goto LAB_002e29b0;
        }
        if (uStack_c8 - 2 == uVar17) goto LAB_002e29b0;
        bVar14 = local_d0[uVar20 + 3];
        pbVar19 = local_d0 + uVar20 + 3;
        uVar17 = (uStack_c8 - uVar17) - 2;
        if (bVar14 != 0x7d) {
          uVar18 = bVar14 - 0x30;
          if ((uVar18 < 10) &&
             (((uVar17 < 2 || (bVar14 != 0x30)) || (9 < local_d0[uVar20 + 4] - 0x30)))) {
            iVar12 = 0;
            do {
              if ((99999999 < iVar12) || (lVar9 == -1)) goto LAB_002e29b0;
              pbVar1 = pbVar19 + 1;
              iVar12 = uVar18 + iVar12 * 10;
              pbVar19 = pbVar19 + 1;
              uVar18 = *pbVar1 - 0x30;
              lVar9 = lVar9 + 1;
            } while (uVar18 < 10);
            uVar17 = -lVar9;
            if (*pbVar1 == 0x7d) goto LAB_002e2e68;
          }
          goto LAB_002e29b0;
        }
        iVar12 = -1;
LAB_002e2e68:
        local_d0 = pbVar19 + 1;
        uStack_c8 = uVar17 - 1;
        if ((local_b8._1_1_ >> 1 & 1) == 0) {
          uVar11 = 0;
        }
        else {
          if ((uStack_c8 == 0) || (*local_d0 != 0x3f)) {
            uVar11 = 0;
          }
          else {
            local_d0 = pbVar19 + 2;
            uStack_c8 = uVar17 - 2;
            uVar11 = 1;
          }
          if (uVar24 != 0) {
            puVar4 = local_88;
            if (param_3 != (undefined4 *)0x0) {
              puVar4 = param_3;
            }
            *puVar4 = 10;
            *(byte **)(puVar4 + 2) = pbVar22;
            *(long *)(puVar4 + 4) = (long)local_d0 - (long)pbVar22;
            goto LAB_002e2910;
          }
        }
        uVar24 = (long)local_d0 - (long)pbVar25;
                    /* try { // try from 002e3138 to 002e3143 has its CatchHandler @ 002e3310 */
        uStack_d8 = uVar24;
        uVar17 = FUN_002dee34(&local_b8,iVar7,iVar12,&local_e0,uVar11);
        goto LAB_002e2ad8;
      case 0x7c:
        FUN_002df2a0(&local_b8);
      }
      local_d0 = local_d0 + 1;
      uStack_c8 = uStack_c8 - 1;
LAB_002e2cf4:
      pbVar25 = (byte *)0x0;
      uVar24 = 0;
      goto LAB_002e2930;
    }
LAB_002e31d4:
                    /* try { // try from 002e31d4 to 002e31db has its CatchHandler @ 002e332c */
    uVar11 = FUN_002df540(&local_b8);
  }
  else {
    while (uStack_c8 != 0) {
      uVar16 = (undefined4)uStack_c8;
      if (3 < uStack_c8) {
        uVar16 = 4;
      }
                    /* try { // try from 002e2884 to 002e28d7 has its CatchHandler @ 002e3348 */
      iVar7 = FUN_002eaaa0(local_d0,uVar16);
      if (iVar7 == 0) {
LAB_002e28f0:
        puVar4 = local_88;
        if (param_3 != (undefined4 *)0x0) {
          puVar4 = param_3;
        }
        *puVar4 = 0xc;
        puVar15 = &local_80;
        if (param_3 != (undefined4 *)0x0) {
          puVar15 = (undefined8 *)(param_3 + 2);
        }
LAB_002e290c:
        *puVar15 = 0;
        puVar15[1] = 0;
LAB_002e2910:
        uVar11 = 0;
        goto LAB_002e31e0;
      }
      iVar7 = FUN_002ea8f0(&local_e0,local_d0);
      if (0x10ffff < (int)local_e0) {
        local_e0 = (byte *)CONCAT44(local_e0._4_4_,0xfffd);
        goto LAB_002e28f0;
      }
      if ((iVar7 == 1) && ((int)local_e0 == 0xfffd)) goto LAB_002e28f0;
      local_d0 = local_d0 + iVar7;
      uStack_c8 = uStack_c8 - (long)iVar7;
      if (iVar7 < 0) goto LAB_002e2910;
      FUN_002de8d8(&local_b8,(ulong)local_e0 & 0xffffffff);
    }
                    /* try { // try from 002e28e0 to 002e28e7 has its CatchHandler @ 002e3328 */
    uVar11 = FUN_002df540(&local_b8);
  }
LAB_002e31e0:
  puVar6 = PTR_LAB_047cba48;
  pcVar21 = local_98;
  while (pbVar22 = local_70, pcVar21 != (char *)0x0) {
    pcVar23 = *(char **)(pcVar21 + 0x10);
    pcVar21[0x10] = '\0';
    pcVar21[0x11] = '\0';
    pcVar21[0x12] = '\0';
    pcVar21[0x13] = '\0';
    pcVar21[0x14] = '\0';
    pcVar21[0x15] = '\0';
    pcVar21[0x16] = '\0';
    pcVar21[0x17] = '\0';
    if ((*pcVar21 == '\x16') && (pbVar22 = *(byte **)(pcVar21 + 0x20), pbVar22 != (byte *)0x0)) {
      if ((*pbVar22 & 1) != 0) {
        FUN_0049e790(puVar6,*(undefined8 *)(pbVar22 + 0x10));
      }
      FUN_0049e790(puVar6,pbVar22);
    }
                    /* try { // try from 002e31fc to 002e3203 has its CatchHandler @ 002e33e8 */
    FUN_002e4804(pcVar21);
    pcVar21 = pcVar23;
  }
  if (local_70 != (byte *)0x0) {
    if ((*local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(local_70 + 0x10));
    }
    FUN_0049e790(PTR_LAB_047cba48,pbVar22);
  }
  return uVar11;
LAB_002e31bc:
  local_d0 = local_d0 + 2;
  uStack_c8 = uStack_c8 - 2;
  pbVar25 = (byte *)0x0;
  uVar24 = 0;
LAB_002e2930:
  pbVar22 = pbVar25;
  if (uStack_c8 == 0) goto LAB_002e31d4;
  goto LAB_002e2934;
}


