/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017e880; name: FUN_0017e880
 */


long FUN_0017e880(byte *param_1,long param_2,byte *param_3,byte *param_4,undefined8 *param_5,
                 long param_6,long param_7,long *param_8,byte param_9,byte *param_10,byte *param_11)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte bVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong *puVar15;
  ulong *puVar16;
  code *pcVar17;
  ulong *puVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  ulong *puVar23;
  long lVar24;
  long *plVar25;
  byte *pbVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  int iVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  long *plVar43;
  uint *puVar44;
  ulong uVar45;
  ulong uVar46;
  ushort *puVar47;
  ushort *puVar48;
  byte *local_4b8;
  ulong uStack_4b0;
  undefined8 local_4a8;
  ulong local_4a0 [5];
  byte *local_478;
  byte *local_470;
  byte *local_468;
  byte *local_460;
  long local_458 [63];
  long local_260 [64];
  
  if (param_2 - (long)param_1 < 4) {
    return -1;
  }
  puVar47 = (ushort *)(param_1 + 1);
  bVar9 = *param_1;
  if (-1 < (char)bVar9) {
    return -1;
  }
  uVar2 = (uint)param_7;
  if ((bVar9 & 0x3f) != 0) {
    uVar2 = bVar9 & 0x3f;
  }
  if (param_3 == param_10) {
    pbVar19 = param_11 + (-0xbfff - (long)param_3);
    if (-1 < (long)(param_11 + (-0xc000 - (long)param_3))) {
      pbVar19 = param_11 + (-0xc000 - (long)param_3);
    }
    param_4 = param_3 + ((long)pbVar19 >> 1);
    param_10 = param_4;
  }
  pbVar19 = param_10;
  if ((int)uVar2 < 1) {
    pbVar41 = (byte *)0x0;
    *param_8 = 0;
  }
  else {
    bVar10 = (bVar9 & 0x3f) == 0;
    pbVar26 = param_4;
    if (!bVar10) {
      pbVar26 = param_11;
    }
    param_9 = bVar10 & param_9;
    uVar37 = (ulong)uVar2;
    pbVar41 = (byte *)0x0;
    if ((bVar9 & 0x3f) == 0) {
      plVar25 = local_260;
      plVar43 = local_458;
      pbVar22 = param_3;
      do {
        local_460 = pbVar22;
        lVar11 = FUN_0017f740(&local_460,puVar47,param_2,&local_4b8,(long)pbVar26 - (long)pbVar22,
                              param_9,param_10,param_11);
        if (lVar11 < 0) {
          return -1;
        }
        puVar47 = (ushort *)((long)puVar47 + lVar11);
        uVar37 = uVar37 - 1;
        pbVar22 = pbVar22 + (long)local_4b8;
        *plVar25 = (long)local_460;
        *plVar43 = (long)local_4b8;
        pbVar41 = local_4b8 + (long)pbVar41;
        plVar25 = plVar25 + 1;
        plVar43 = plVar43 + 1;
      } while (uVar37 != 0);
    }
    else {
      plVar25 = local_458;
      plVar43 = local_260;
      do {
        local_460 = param_10;
        lVar11 = FUN_0017f740(&local_460,puVar47,param_2,&local_4b8,(long)pbVar26 - (long)param_10,
                              param_9,pbVar19,param_11);
        if (lVar11 < 0) {
          return -1;
        }
        puVar47 = (ushort *)((long)puVar47 + lVar11);
        uVar37 = uVar37 - 1;
        param_10 = param_10 + (long)local_4b8;
        *plVar43 = (long)local_460;
        *plVar25 = (long)local_4b8;
        pbVar19 = pbVar19 + (long)local_4b8;
        pbVar41 = local_4b8 + (long)pbVar41;
        plVar25 = plVar25 + 1;
        plVar43 = plVar43 + 1;
      } while (uVar37 != 0);
    }
    *param_8 = (long)pbVar41;
  }
  if ((bVar9 & 0x3f) == 0) {
    if (0 < param_7) {
      lVar11 = 0;
      iVar20 = 1;
      do {
        param_5[lVar11] = local_260[lVar11];
        *(long *)(param_6 + lVar11 * 8) = local_458[lVar11];
        lVar11 = (long)iVar20;
        iVar20 = iVar20 + 1;
      } while (lVar11 < param_7);
    }
    return (long)puVar47 - (long)param_1;
  }
  if (param_2 - (long)puVar47 < 3) {
    FUN_0015c3d0();
    pcVar17 = *(code **)PTR_PTR_047cb868;
    if (pcVar17 == (code *)0x0) goto LAB_0017f430;
    pcVar14 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= 3\n";
    uVar13 = 0x171;
  }
  else {
    puVar48 = puVar47 + 1;
    uVar8 = *puVar47;
    lVar11 = FUN_00174c80(puVar48,param_2,&local_460,pbVar41);
    if (lVar11 < 1) {
      return -1;
    }
    pbVar41 = local_460 + -param_7;
    if ((long)pbVar41 < 1) {
      return -1;
    }
    if ((long)param_11 - (long)pbVar19 < (long)local_460) {
      return -1;
    }
    local_468 = pbVar19 + (long)local_460;
    if ((long)param_11 - (long)local_468 < (long)local_460) {
      return -1;
    }
    pbVar26 = local_468 + (long)local_460;
    local_470 = pbVar19;
    if ((short)uVar8 < 0) {
      local_4b8 = local_468;
      lVar11 = FUN_0017f740(&local_4b8,puVar48,param_2,&local_478,local_460,0,pbVar26);
      if (lVar11 < 0) {
        return -1;
      }
      if (local_478 != local_460) {
        return -1;
      }
      if ((long)local_478 < 4) {
        lVar12 = 0;
        puVar15 = (ulong *)((long)puVar48 + lVar11);
        pbVar41 = local_478;
        if (0 < (long)local_478) goto LAB_0017ec3c;
      }
      else {
        iVar20 = 0;
        do {
          uVar3 = *(uint *)(local_4b8 + iVar20);
          *(uint *)(local_470 + iVar20) = uVar3 >> 4 & 0xf0f0f0f;
          *(uint *)(local_468 + iVar20) = uVar3 & 0xf0f0f0f;
          iVar21 = iVar20 + 8;
          iVar20 = iVar20 + 4;
        } while ((long)iVar21 <= (long)local_460);
        lVar12 = (long)iVar20;
        puVar15 = (ulong *)((long)puVar48 + lVar11);
        pbVar41 = local_460;
        if (lVar12 < (long)local_460) {
LAB_0017ec3c:
          puVar15 = (ulong *)((long)puVar48 + lVar11);
          iVar20 = (int)lVar12;
          do {
            iVar20 = iVar20 + 1;
            bVar9 = local_4b8[lVar12];
            local_470[lVar12] = bVar9 >> 4;
            local_468[lVar12] = bVar9 & 0xf;
            lVar12 = (long)iVar20;
            pbVar41 = local_460;
          } while (lVar12 < (long)local_460);
        }
      }
    }
    else {
      lVar11 = FUN_0017f740(&local_468,puVar48,param_2,&local_4b8,local_460,0,pbVar26);
      if (lVar11 < 0) {
        return -1;
      }
      if (local_4b8 != local_460) {
        return -1;
      }
      lVar12 = FUN_0017f740(&local_470,(long)puVar48 + lVar11,param_2,&local_4b8,pbVar41,0,pbVar26,
                            param_11);
      if (lVar12 < 0) {
        return -1;
      }
      if (local_4b8 != pbVar41) {
        return -1;
      }
      puVar15 = (ulong *)((long)puVar48 + lVar11 + lVar12);
      pbVar19 = local_470;
      pbVar22 = pbVar41;
      do {
        if (0x10 < *pbVar19) {
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0017f430;
          pcVar14 = "OODLE ERROR : corruption : interval_lenlog2 > 16\n";
          uVar13 = 0x1ca;
          goto LAB_0017f428;
        }
        pbVar22 = pbVar22 + -1;
        pbVar19 = pbVar19 + 1;
      } while (pbVar22 != (byte *)0x0);
    }
    if ((long)param_11 - (long)pbVar26 < 4) {
      return -1;
    }
    uVar37 = (ulong)(pbVar26 + 3) & 0xfffffffffffffffc;
    if ((long)((long)param_11 - uVar37) < (long)pbVar41 * 4) {
      return -1;
    }
    if (param_2 - (long)puVar15 < (long)((ulong)uVar8 & 0x3fff)) {
      FUN_0015c3d0();
      pcVar17 = *(code **)PTR_PTR_047cb868;
      if (pcVar17 == (code *)0x0) goto LAB_0017f430;
      pcVar14 = "OODLE ERROR : corruption : rrPtrDiff(comp_end - comp_ptr) >= varbits_complen\n";
      uVar13 = 0x247;
    }
    else {
      puVar1 = (ulong *)((long)puVar15 + ((ulong)uVar8 & 0x3fff));
      puVar16 = puVar15;
      puVar23 = puVar1;
      if ((long)pbVar41 < 6) {
        lVar12 = 0;
        uVar46 = 0;
        uVar40 = 0;
        bVar10 = false;
        uVar42 = 0x3f;
        uVar45 = 0x3f;
      }
      else {
        bVar10 = false;
        uVar40 = 0;
        uVar46 = 0;
        uVar42 = 0x3f;
        puVar44 = (uint *)(uVar37 + 0xc);
        uVar45 = 0x3f;
        lVar11 = 0;
        if (puVar1 <= puVar15 + 2) goto LAB_0017ee88;
        while( true ) {
          puVar18 = puVar23 + -1;
          uVar28 = (*puVar16 & 0xff00ff00ff00ff00) >> 8 | (*puVar16 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          puVar16 = (ulong *)((long)puVar16 + ((long)uVar45 >> 3));
          puVar23 = (ulong *)((long)puVar23 - ((long)uVar42 >> 3));
          lVar12 = lVar11 + 6;
          pbVar19 = local_470 + lVar11;
          uVar34 = (ulong)*pbVar19;
          bVar9 = pbVar19[1];
          uVar31 = (ulong)bVar9;
          uVar40 = (uVar28 >> 0x20 | uVar28 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar40;
          uVar36 = uVar40 << (uVar34 & 0x3f);
          bVar7 = pbVar19[2];
          uVar35 = (ulong)bVar7;
          uVar46 = *puVar18 >> (0x3f - uVar42 & 0x3f) | uVar46;
          uVar29 = uVar46 << (uVar31 & 0x3f);
          bVar4 = pbVar19[3];
          uVar32 = (ulong)bVar4;
          bVar5 = pbVar19[4];
          uVar28 = (ulong)bVar5;
          bVar6 = pbVar19[5];
          uVar33 = (ulong)bVar6;
          uVar27 = uVar36 << (uVar35 & 0x3f);
          puVar44[-3] = 1 << (ulong)(*pbVar19 & 0x1f) |
                        (uint)((uVar40 >> 1) >> (0x3f - uVar34 & 0x3f));
          puVar44[-2] = 1 << (ulong)(bVar9 & 0x1f) | (uint)((uVar46 >> 1) >> (0x3f - uVar31 & 0x3f))
          ;
          uVar30 = uVar29 << (uVar32 & 0x3f);
          uVar40 = uVar27 << (uVar28 & 0x3f);
          puVar44[-1] = 1 << (ulong)(bVar7 & 0x1f) | (uint)((uVar36 >> 1) >> (0x3f - uVar35 & 0x3f))
          ;
          *puVar44 = 1 << (ulong)(bVar4 & 0x1f) | (uint)((uVar29 >> 1) >> (0x3f - uVar32 & 0x3f));
          uVar45 = (uVar45 & 7) + uVar34 + uVar35 + uVar28;
          uVar46 = uVar30 << (uVar33 & 0x3f);
          puVar44[1] = 1 << (ulong)(bVar5 & 0x1f) | (uint)((uVar27 >> 1) >> (0x3f - uVar28 & 0x3f));
          puVar44[2] = 1 << (ulong)(bVar6 & 0x1f) | (uint)((uVar30 >> 1) >> (0x3f - uVar33 & 0x3f));
          uVar42 = (uVar42 & 7) + uVar31 + uVar32 + uVar33;
          puVar44 = puVar44 + 6;
          if ((long)pbVar41 < lVar11 + 0xc) break;
          lVar11 = lVar12;
          if (puVar23 <= puVar16 + 2) {
LAB_0017ee88:
            if (bVar10) {
              if (puVar23 < puVar16 + -2) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= f-16\n";
                uVar13 = 0x266;
                goto LAB_0017f428;
              }
              if (puVar23 < &uStack_4b0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                uVar13 = 0x266;
                goto LAB_0017f428;
              }
              if (local_4a0 + 4 < puVar16) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
                uVar13 = 0x266;
                goto LAB_0017f428;
              }
              bVar10 = true;
            }
            else {
              if (puVar23 < puVar16) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= f\n";
                uVar13 = 0x266;
                goto LAB_0017f428;
              }
              lVar12 = (long)puVar16 - (long)puVar15;
              lVar24 = (long)puVar1 - (long)puVar23;
              if (0x17 < lVar12) {
                lVar12 = 0x18;
              }
              local_4a0[3] = 0;
              local_4a0[4] = 0;
              if (0x17 < lVar24) {
                lVar24 = 0x18;
              }
              local_4a0[1] = 0;
              local_4a0[2] = 0;
              local_4a8 = 0;
              local_4a0[0] = 0;
              local_4b8 = (byte *)0x0;
              uStack_4b0 = 0;
              memcpy((void *)((long)local_4a0 - lVar12),(void *)((long)puVar16 - lVar12),
                     ((long)puVar23 - (long)puVar16) + lVar24 + lVar12);
              puVar23 = (ulong *)((long)local_4a0 + ((long)puVar23 - (long)puVar16));
              bVar10 = true;
              puVar16 = local_4a0;
            }
          }
        }
      }
      if (lVar12 + 2 <= (long)pbVar41) {
        puVar44 = (uint *)(uVar37 + lVar12 * 4 + 4);
        lVar11 = lVar12;
        if (puVar23 <= puVar16 + 2) goto LAB_0017f024;
        while( true ) {
          uVar28 = (*puVar16 & 0xff00ff00ff00ff00) >> 8 | (*puVar16 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          puVar18 = puVar23 + -1;
          puVar23 = (ulong *)((long)puVar23 - (uVar42 >> 3));
          uVar28 = (uVar28 >> 0x20 | uVar28 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar40;
          bVar9 = local_470[lVar11];
          uVar36 = (ulong)bVar9;
          bVar7 = (local_470 + lVar11)[1];
          uVar31 = (ulong)bVar7;
          uVar32 = *puVar18 >> (0x3f - uVar42 & 0x3f) | uVar46;
          uVar40 = uVar28 << (uVar36 & 0x3f);
          lVar12 = lVar11 + 2;
          uVar46 = uVar32 << (uVar31 & 0x3f);
          uVar42 = (uVar42 & 7) + uVar31;
          puVar16 = (ulong *)((long)puVar16 + ((long)uVar45 >> 3));
          uVar45 = (uVar45 & 7) + uVar36;
          puVar44[-1] = 1 << (ulong)(bVar9 & 0x1f) | (uint)((uVar28 >> 1) >> (0x3f - uVar36 & 0x3f))
          ;
          *puVar44 = 1 << (ulong)(bVar7 & 0x1f) | (uint)((uVar32 >> 1) >> (0x3f - uVar31 & 0x3f));
          puVar44 = puVar44 + 2;
          if ((long)pbVar41 < lVar11 + 4) break;
          lVar11 = lVar12;
          if (puVar23 <= puVar16 + 2) {
LAB_0017f024:
            if (bVar10) {
              if (puVar23 < puVar16 + -2) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= f-16\n";
                uVar13 = 0x28c;
                goto LAB_0017f428;
              }
              if (puVar23 < &uStack_4b0) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
                uVar13 = 0x28c;
                goto LAB_0017f428;
              }
              if (local_4a0 + 4 < puVar16) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
                uVar13 = 0x28c;
                goto LAB_0017f428;
              }
              bVar10 = true;
            }
            else {
              if (puVar23 < puVar16) {
                FUN_0015c3d0();
                pcVar17 = *(code **)PTR_PTR_047cb868;
                if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                pcVar14 = "OODLE ERROR : corruption : b >= f\n";
                uVar13 = 0x28c;
                goto LAB_0017f428;
              }
              lVar12 = (long)puVar16 - (long)puVar15;
              local_4a0[3] = 0;
              local_4a0[4] = 0;
              lVar24 = (long)puVar1 - (long)puVar23;
              if (0x17 < lVar12) {
                lVar12 = 0x18;
              }
              local_4a0[1] = 0;
              local_4a0[2] = 0;
              if (0x17 < lVar24) {
                lVar24 = 0x18;
              }
              local_4a8 = 0;
              local_4a0[0] = 0;
              local_4b8 = (byte *)0x0;
              uStack_4b0 = 0;
              memcpy((void *)((long)local_4a0 - lVar12),(void *)((long)puVar16 - lVar12),
                     ((long)puVar23 - (long)puVar16) + lVar24 + lVar12);
              puVar23 = (ulong *)((long)local_4a0 + ((long)puVar23 - (long)puVar16));
              bVar10 = true;
              puVar16 = local_4a0;
            }
          }
        }
      }
      if (lVar12 < (long)pbVar41) {
        puVar18 = puVar16;
        if (puVar23 <= puVar16 + 2) {
          if (bVar10) {
            if (puVar23 < puVar16 + -2) {
              FUN_0015c3d0();
              pcVar17 = *(code **)PTR_PTR_047cb868;
              if (pcVar17 == (code *)0x0) goto LAB_0017f430;
              pcVar14 = "OODLE ERROR : corruption : b >= f-16\n";
              uVar13 = 0x2a2;
            }
            else if (puVar23 < &uStack_4b0) {
              FUN_0015c3d0();
              pcVar17 = *(code **)PTR_PTR_047cb868;
              if (pcVar17 == (code *)0x0) goto LAB_0017f430;
              pcVar14 = "OODLE ERROR : corruption : b >= safe_space+(8)\n";
              uVar13 = 0x2a2;
            }
            else {
              if (puVar16 <= local_4a0 + 4) goto LAB_0017f1a8;
              FUN_0015c3d0();
              pcVar17 = *(code **)PTR_PTR_047cb868;
              if (pcVar17 == (code *)0x0) goto LAB_0017f430;
              pcVar14 = "OODLE ERROR : corruption : f <= safe_space + sizeof(safe_space) -(8)\n";
              uVar13 = 0x2a2;
            }
          }
          else {
            if (puVar16 <= puVar23) {
              local_4a0[3] = 0;
              local_4a0[4] = 0;
              lVar24 = (long)puVar1 - (long)puVar23;
              lVar11 = (long)puVar16 - (long)puVar15;
              puVar18 = local_4a0;
              local_4a0[1] = 0;
              local_4a0[2] = 0;
              local_4a8 = 0;
              local_4a0[0] = 0;
              if (0x17 < lVar11) {
                lVar11 = 0x18;
              }
              if (0x17 < lVar24) {
                lVar24 = 0x18;
              }
              local_4b8 = (byte *)0x0;
              uStack_4b0 = 0;
              memcpy((void *)((long)puVar18 - lVar11),(void *)((long)puVar16 - lVar11),
                     (long)puVar23 + lVar11 + (lVar24 - (long)puVar16));
              goto LAB_0017f1a8;
            }
            FUN_0015c3d0();
            pcVar17 = *(code **)PTR_PTR_047cb868;
            if (pcVar17 == (code *)0x0) goto LAB_0017f430;
            pcVar14 = "OODLE ERROR : corruption : b >= f\n";
            uVar13 = 0x2a2;
          }
          goto LAB_0017f428;
        }
LAB_0017f1a8:
        uVar42 = (*puVar18 & 0xff00ff00ff00ff00) >> 8 | (*puVar18 & 0xff00ff00ff00ff) << 8;
        uVar42 = (uVar42 & 0xffff0000ffff0000) >> 0x10 | (uVar42 & 0xffff0000ffff) << 0x10;
        *(uint *)(uVar37 + lVar12 * 4) =
             1 << (ulong)(local_470[lVar12] & 0x1f) |
             (uint)((((uVar42 >> 0x20 | uVar42 << 0x20) >> (0x3f - uVar45 & 0x3f) | uVar40) >> 1) >>
                   (0x3f - (ulong)local_470[lVar12] & 0x3f));
      }
      if ((local_460 + (long)local_468)[-1] == 0) {
        if (param_7 < 1) {
          pbVar19 = (byte *)0x0;
          if (local_460 == (byte *)0x0) {
LAB_0017f3a0:
            if (pbVar41 == pbVar19) {
              if (0 < (int)uVar2) {
                uVar37 = (ulong)uVar2;
                plVar25 = local_458;
                do {
                  if (*plVar25 != 0) {
                    FUN_0015c3d0();
                    pcVar17 = *(code **)PTR_PTR_047cb868;
                    if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                    pcVar14 = "OODLE ERROR : corruption : entropy_array_lens[i] == 0\n";
                    uVar13 = 800;
                    goto LAB_0017f428;
                  }
                  plVar25 = plVar25 + 1;
                  uVar37 = uVar37 - 1;
                } while (uVar37 != 0);
              }
              return (long)puVar1 - (long)param_1;
            }
            FUN_0015c3d0();
            pcVar17 = *(code **)PTR_PTR_047cb868;
            if (pcVar17 == (code *)0x0) goto LAB_0017f430;
            pcVar14 = "OODLE ERROR : corruption : leni == num_lens\n";
            uVar13 = 0x303;
          }
          else {
LAB_0017f450:
            FUN_0015c3d0();
            pcVar17 = *(code **)PTR_PTR_047cb868;
            if (pcVar17 == (code *)0x0) goto LAB_0017f430;
            pcVar14 = "OODLE ERROR : corruption : indi == num_indices\n";
            uVar13 = 0x302;
          }
        }
        else {
          *param_5 = param_3;
          if (0 < (long)local_460) {
            lVar11 = 0;
            iVar20 = 0;
            iVar21 = 0;
            lVar12 = 0;
            pbVar19 = local_468;
            puVar38 = param_5;
            do {
              bVar9 = pbVar19[lVar11];
              iVar21 = iVar21 + 1;
              if (bVar9 == 0) {
                pbVar26 = param_3;
              }
              else {
                iVar39 = iVar21;
                do {
                  if ((int)uVar2 < (int)(uint)bVar9) {
                    FUN_0015c3d0();
                    pcVar17 = *(code **)PTR_PTR_047cb868;
                    if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                    pcVar14 = "OODLE ERROR : corruption : interval source > num_entropy_arrays\n";
                    uVar13 = 0x2e3;
                    goto LAB_0017f428;
                  }
                  if ((long)pbVar41 <= (long)iVar20) {
                    FUN_0015c3d0();
                    pcVar17 = *(code **)PTR_PTR_047cb868;
                    if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                    pcVar14 = "OODLE ERROR : corruption : leni < num_lens\n";
                    uVar13 = 0x2e8;
                    goto LAB_0017f428;
                  }
                  lVar11 = (ulong)bVar9 - 1;
                  uVar42 = (ulong)*(uint *)(uVar37 + (long)iVar20 * 4);
                  if ((local_458[lVar11] < (long)uVar42) ||
                     ((long)param_4 - (long)param_3 < (long)uVar42)) {
                    FUN_0015c3d0();
                    pcVar17 = *(code **)PTR_PTR_047cb868;
                    if (pcVar17 == (code *)0x0) goto LAB_0017f430;
                    pcVar14 = "OODLE ERROR : corruption : interval cur_len too large\n";
                    uVar13 = 0x2f2;
                    goto LAB_0017f428;
                  }
                  iVar20 = iVar20 + 1;
                  memcpy(param_3,(void *)local_260[lVar11],uVar42);
                  local_260[lVar11] = local_260[lVar11] + uVar42;
                  iVar21 = iVar39 + 1;
                  local_458[lVar11] = local_458[lVar11] - uVar42;
                  bVar9 = local_468[iVar39];
                  param_3 = param_3 + uVar42;
                  iVar39 = iVar21;
                } while (bVar9 != 0);
                pbVar19 = local_468;
                pbVar26 = (byte *)*puVar38;
              }
              *(long *)(param_6 + lVar12 * 8) = (long)param_3 - (long)pbVar26;
              lVar12 = (long)((int)lVar12 + 1);
              iVar20 = iVar20 + (uint)(uVar8 >> 0xf);
              if (param_7 <= lVar12) {
                pbVar19 = (byte *)(long)iVar20;
                if (local_460 == (byte *)(long)iVar21) goto LAB_0017f3a0;
                goto LAB_0017f450;
              }
              puVar38 = param_5 + lVar12;
              lVar11 = (long)iVar21;
              *puVar38 = param_3;
            } while (lVar11 < (long)local_460);
          }
          FUN_0015c3d0();
          pcVar17 = *(code **)PTR_PTR_047cb868;
          if (pcVar17 == (code *)0x0) goto LAB_0017f430;
          pcVar14 = "OODLE ERROR : corruption : indi < num_indices\n";
          uVar13 = 0x2d0;
        }
      }
      else {
        FUN_0015c3d0();
        pcVar17 = *(code **)PTR_PTR_047cb868;
        if (pcVar17 == (code *)0x0) goto LAB_0017f430;
        pcVar14 = "OODLE ERROR : corruption : interval_indices[num_indices-1] == 0\n";
        uVar13 = 0x2c3;
      }
    }
  }
LAB_0017f428:
  (*pcVar17)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_multiarrays.cpp",uVar13,pcVar14);
LAB_0017f430:
  FUN_0015c3f0();
  return -1;
}


