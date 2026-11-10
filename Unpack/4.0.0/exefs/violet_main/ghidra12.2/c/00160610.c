/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00160610; name: FUN_00160610
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0016075c) */
/* WARNING: Removing unreachable block (ram,0x0016070c) */

void FUN_00160610(long param_1,uint *param_2,uint param_3,uint param_4,undefined8 param_5,
                 int param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  int __c;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  byte *pbVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ushort *puVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  ushort *puVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  ushort *puVar34;
  float fVar35;
  long local_218;
  long local_210;
  long local_208;
  int local_200;
  undefined8 local_1fc;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined8 local_1a4;
  undefined8 local_19c;
  undefined8 local_194;
  undefined8 local_18c;
  undefined4 local_184;
  long local_180 [33];
  long local_78;
  long local_70;
  long local_68;
  
  uVar20 = *(uint *)(param_1 + 0x284);
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  memset(*(void **)(param_1 + 0x2a0),0,(long)(int)uVar20);
  local_210 = 0;
  local_208 = 0;
  uVar2 = 0xf;
  if (param_4 - 1 < 0xf) {
    uVar2 = param_4;
  }
  local_218 = 0;
  if (param_3 < 0x10000) goto LAB_001609fc;
  puVar12 = (uint *)FUN_001617e8(&local_218,(long)*(int *)(param_1 + 0x284) << 2,param_5);
  if (puVar12 == (uint *)0x0) {
    iVar11 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x6e6,
                          "rrHuffman_BuildCodeLens","dest != NULL");
    if (iVar11 != 0) {
      halt_baddata();
    }
    uVar16 = *(uint *)(param_1 + 0x284);
    uVar15 = (ulong)uVar16;
    if ((int)uVar16 < 1) goto LAB_001609fc;
    if (uVar16 == 1) {
      lVar28 = 0;
      uVar27 = 0;
      uVar33 = 0;
LAB_00160944:
      uVar5 = param_2[lVar28];
      uVar3 = uVar5;
      if (uVar5 <= uVar33) {
        uVar3 = uVar33;
      }
      uVar27 = uVar5 + uVar27;
      uVar33 = uVar3;
    }
    else {
      lVar28 = 0;
      uVar27 = 0;
      uVar33 = 0;
      do {
        puVar12 = param_2 + lVar28;
        lVar28 = lVar28 + 2;
        uVar5 = *puVar12;
        uVar4 = puVar12[1];
        uVar3 = uVar5;
        if (uVar5 <= uVar33) {
          uVar3 = uVar33;
        }
        uVar27 = uVar4 + uVar5 + uVar27;
        uVar33 = uVar4;
        if (uVar4 <= uVar3) {
          uVar33 = uVar3;
        }
      } while (uVar15 - (uVar15 & 1) != lVar28);
      if ((uVar16 & 1) != 0) goto LAB_00160944;
    }
    if ((uVar27 | uVar33) >> 0x10 == 0) {
LAB_001609fc:
      puVar34 = *(ushort **)(param_1 + 0x2a8);
      puVar12 = param_2;
    }
    else {
      fVar35 = 65535.0 / (float)uVar33;
      if (65535.0 / (float)uVar27 <= 65535.0 / (float)uVar33) {
        fVar35 = 65535.0 / (float)uVar27;
      }
      if (0 < (int)uVar16) {
        memset((void *)0x0,__c,uVar15 << 2);
        uVar16 = 0;
        uVar27 = *param_2;
        if (uVar27 != 0) goto LAB_001609c0;
        while (uVar15 = uVar15 - 1, uVar15 != 0) {
          while( true ) {
            param_2 = param_2 + 1;
            uVar27 = *param_2;
            if (uVar27 == 0) break;
LAB_001609c0:
            uVar27 = (uint)(fVar35 * (float)uVar27 + 0.5);
            if (0xfffe < uVar27) {
              uVar27 = 0xffff;
            }
            if (uVar27 < 2) {
              uVar27 = 1;
            }
            uVar16 = uVar27 + uVar16;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_001609f0;
          }
        }
LAB_001609f0:
        if (uVar16 >> 0x10 != 0) {
          halt_baddata();
        }
        param_2 = (uint *)0x0;
        goto LAB_001609fc;
      }
      puVar12 = (uint *)0x0;
      puVar34 = *(ushort **)(param_1 + 0x2a8);
    }
    puVar26 = puVar34;
    if (0 < (int)(uVar20 & 0xfffffff8)) goto LAB_00160a0c;
LAB_00160b3c:
    uVar15 = 0;
    puVar26 = puVar34;
  }
  else {
    uVar16 = *(uint *)(param_1 + 0x284);
    uVar15 = (ulong)uVar16;
    if ((int)uVar16 < 1) goto LAB_001609fc;
    if (uVar16 == 1) {
      lVar28 = 0;
      uVar27 = 0;
      iVar11 = 0;
      uVar33 = 0;
LAB_001607c8:
      uVar5 = param_2[lVar28];
      uVar3 = uVar5;
      iVar29 = (int)lVar28;
      if (uVar5 <= uVar33) {
        uVar3 = uVar33;
        iVar29 = iVar11;
      }
      iVar11 = iVar29;
      uVar27 = uVar5 + uVar27;
      uVar33 = uVar3;
    }
    else {
      lVar28 = 0;
      uVar27 = 0;
      iVar11 = 0;
      uVar33 = 0;
      do {
        uVar3 = param_2[lVar28];
        uVar5 = (param_2 + lVar28)[1];
        iVar29 = (int)lVar28;
        uVar4 = uVar3;
        if (uVar3 <= uVar33) {
          iVar29 = iVar11;
          uVar4 = uVar33;
        }
        uVar33 = uVar4;
        uVar27 = uVar5 + uVar3 + uVar27;
        if (uVar33 < uVar5) {
          uVar33 = uVar5;
          iVar11 = (int)lVar28 + 1;
        }
        else {
          iVar11 = iVar29;
        }
        lVar28 = lVar28 + 2;
      } while (uVar15 - (uVar15 & 1) != lVar28);
      if ((uVar16 & 1) != 0) goto LAB_001607c8;
    }
    if ((uVar27 | uVar33) >> 0x10 == 0) goto LAB_001609fc;
    fVar35 = 65535.0 / (float)uVar33;
    if (65535.0 / (float)uVar27 <= 65535.0 / (float)uVar33) {
      fVar35 = 65535.0 / (float)uVar27;
    }
    if (0 < (int)uVar16) {
      uVar16 = 0;
      uVar27 = *param_2;
      puVar22 = puVar12;
      if (uVar27 != 0) goto LAB_00160848;
      do {
        *puVar22 = 0;
        while( true ) {
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            param_2 = puVar12;
            if (((uVar16 >> 0x10 != 0) &&
                (uVar16 = (puVar12[iVar11] - uVar16) + 0xffff, puVar12[iVar11] = uVar16, uVar16 == 0
                )) && (iVar11 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",
                                             0x11c,"rrHuffman_ScaleCounts","destCounts[maxi] > 0"),
                      iVar11 != 0)) {
              halt_baddata();
            }
            goto LAB_001609fc;
          }
          param_2 = param_2 + 1;
          puVar22 = puVar22 + 1;
          uVar27 = *param_2;
          if (uVar27 == 0) break;
LAB_00160848:
          uVar27 = (uint)(fVar35 * (float)uVar27 + 0.5);
          if (0xfffe < uVar27) {
            uVar27 = 0xffff;
          }
          if (uVar27 < 2) {
            uVar27 = 1;
          }
          uVar16 = uVar27 + uVar16;
          *puVar22 = uVar27;
        }
      } while( true );
    }
    puVar34 = *(ushort **)(param_1 + 0x2a8);
    puVar26 = puVar34;
    if ((int)(uVar20 & 0xfffffff8) < 1) goto LAB_00160b3c;
LAB_00160a0c:
    uVar15 = 0;
    puVar22 = puVar12 + 4;
    puVar34 = puVar26;
    do {
      if (((*(long *)(puVar22 + -2) != 0 || *(long *)(puVar22 + -4) != 0) || *(long *)puVar22 != 0)
          || *(long *)(puVar22 + 2) != 0) {
        iVar11 = (int)uVar15;
        *(int *)puVar34 = iVar11 + (int)*(long *)(puVar22 + -4) * 0x10000;
        puVar34 = puVar34 + (ulong)(puVar22[-4] != 0) * 2;
        *(uint *)puVar34 = iVar11 + puVar22[-3] * 0x10000 + 1;
        puVar34 = puVar34 + (ulong)(puVar22[-3] != 0) * 2;
        *(uint *)puVar34 = iVar11 + puVar22[-2] * 0x10000 + 2;
        puVar34 = puVar34 + (ulong)(puVar22[-2] != 0) * 2;
        *(uint *)puVar34 = iVar11 + puVar22[-1] * 0x10000 + 3;
        puVar34 = puVar34 + (ulong)(puVar22[-1] != 0) * 2;
        *(uint *)puVar34 = iVar11 + *puVar22 * 0x10000 + 4;
        puVar34 = puVar34 + (ulong)(*puVar22 != 0) * 2;
        *(uint *)puVar34 = iVar11 + puVar22[1] * 0x10000 + 5;
        puVar34 = puVar34 + (ulong)(puVar22[1] != 0) * 2;
        *(uint *)puVar34 = iVar11 + puVar22[2] * 0x10000 + 6;
        uVar16 = puVar22[2];
        *(uint *)(puVar34 + (ulong)(uVar16 != 0) * 2) = iVar11 + puVar22[3] * 0x10000 + 7;
        puVar34 = puVar34 + (ulong)(uVar16 != 0) * 2 + (ulong)(puVar22[3] != 0) * 2;
      }
      uVar15 = uVar15 + 8;
      puVar22 = puVar22 + 8;
    } while ((long)uVar15 < (long)((long)(int)uVar20 & 0xfffffffffffffff8U));
  }
  if ((int)uVar15 < (int)uVar20) {
    uVar17 = uVar15 & 0xffffffff;
    uVar23 = ~uVar17;
    if ((uVar20 & 1) != 0) {
      uVar16 = puVar12[uVar17];
      uVar17 = uVar17 + 1;
      *(uint *)puVar34 = (int)uVar15 + uVar16 * 0x10000;
      puVar34 = puVar34 + (ulong)(uVar16 != 0) * 2;
    }
    if (uVar23 + uVar20 != 0) {
      do {
        uVar16 = puVar12[uVar17];
        *(uint *)puVar34 = (int)uVar17 + uVar16 * 0x10000;
        uVar27 = (puVar12 + uVar17)[1];
        *(uint *)(puVar34 + (ulong)(uVar16 != 0) * 2) = (int)uVar17 + uVar27 * 0x10000 + 1;
        puVar34 = puVar34 + (ulong)(uVar16 != 0) * 2 + (ulong)(uVar27 != 0) * 2;
        uVar17 = uVar17 + 2;
      } while (uVar20 != uVar17);
    }
  }
  uVar15 = (ulong)((long)puVar34 - (long)puVar26) >> 2;
  iVar11 = (int)uVar15;
  *(uint *)(param_1 + 0x294) =
       (uint)*(ushort *)
              ((long)puVar26 + (((long)puVar34 - (long)puVar26) * 0x40000000 + -0x100000000 >> 0x1e)
              );
  *(int *)(param_1 + 0x288) = iVar11;
  if (iVar11 < 2) {
    *(uint *)(param_1 + 0x290) = (uint)*puVar26;
    goto joined_r0x0016142c;
  }
  FUN_00161930(puVar26,uVar15,param_5);
  uVar20 = *(int *)(param_1 + 0x288) - 1;
  *(uint *)(param_1 + 0x290) =
       (uint)*(ushort *)
              ((long)puVar26 + (-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2))
  ;
  FUN_00160270(param_1,uVar2,puVar26);
  iVar11 = *(int *)(param_1 + 0x29c);
  if ((int)uVar2 < iVar11) {
    if (param_6 != 0) {
      iVar11 = *(int *)(param_1 + 0x284);
      lVar28 = *(long *)(param_1 + 0x2a8);
      if (0 < iVar11) {
        lVar18 = 0;
        iVar29 = 0;
        uVar20 = *puVar12;
        do {
          if (uVar20 == 0) {
            if ((long)iVar11 <= lVar18 + 1) goto LAB_00160d3c;
          }
          else {
            puVar1 = (undefined2 *)(lVar28 + (long)iVar29 * 4);
            iVar29 = iVar29 + 1;
            *puVar1 = (short)lVar18;
            puVar1[1] = (short)puVar12[lVar18];
            iVar11 = *(int *)(param_1 + 0x284);
            if ((long)iVar11 <= lVar18 + 1) goto LAB_00160d3c;
          }
          lVar18 = lVar18 + 1;
          uVar20 = puVar12[lVar18];
        } while( true );
      }
      iVar29 = 0;
LAB_00160d3c:
      *(int *)(param_1 + 0x288) = iVar29;
      FUN_00161930(lVar28,iVar29,param_5);
      if (*(uint *)(param_1 + 0x288) < 2) {
        if (0x7fffffff < uVar2) goto LAB_00160d84;
      }
      else if ((int)uVar2 < 0x20 - (int)LZCOUNT(*(uint *)(param_1 + 0x288) - 1)) {
LAB_00160d84:
        iVar11 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x249,
                              "rrHuffman_BuildCodeLens_Limited_PackageMerge",
                              "Impossible short code limit requested!\n");
        if (iVar11 != 0) {
          halt_baddata();
        }
      }
      *(undefined2 *)(lVar28 + (long)iVar29 * 4 + 2) = 0xffff;
      uVar16 = iVar29 * 2 - 2;
      uVar20 = uVar16 * (uVar2 - 1);
      FUN_0015c528(local_180 + 0x20,
                   -(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar20 << 2,param_5,
                   &local_68);
      uVar20 = uVar2 - 1;
      local_180[0x1e] = 0;
      local_180[0x1f] = 0;
      local_180[0x1c] = 0;
      local_180[0x1d] = 0;
      local_180[0x1a] = 0;
      local_180[0x1b] = 0;
      local_180[0x18] = 0;
      local_180[0x19] = 0;
      local_180[0x16] = 0;
      local_180[0x17] = 0;
      local_180[0x14] = 0;
      local_180[0x15] = 0;
      local_180[0x12] = 0;
      local_180[0x13] = 0;
      local_180[0x10] = 0;
      local_180[0x11] = 0;
      local_180[0xe] = 0;
      local_180[0xf] = 0;
      local_180[0xc] = 0;
      local_180[0xd] = 0;
      local_180[10] = 0;
      local_180[0xb] = 0;
      local_180[8] = 0;
      local_180[9] = 0;
      local_180[6] = 0;
      local_180[7] = 0;
      local_180[4] = 0;
      local_180[5] = 0;
      local_180[2] = 0;
      local_180[3] = 0;
      local_180[0] = lVar28;
      local_180[1] = 0;
      if (uVar20 == 0 || (int)uVar2 < 1) {
        local_184 = 0;
        local_18c = 0;
        local_194 = 0;
        local_19c = 0;
        local_1a4 = 0;
        local_1ac = 0;
        local_1b4 = 0;
        local_1bc = 0;
        local_1c4 = 0;
        local_1cc = 0;
        local_1d4 = 0;
        local_1dc = 0;
        local_1e4 = 0;
        local_1ec = 0;
        local_1f4 = 0;
        local_1fc = 0;
        local_200 = iVar29;
      }
      else {
        uVar17 = (ulong)uVar2;
        uVar15 = (ulong)uVar20 & 3;
        lVar18 = (long)(int)uVar16 * 4;
        if (uVar17 - 2 < 3) {
          lVar24 = 1;
          lVar14 = local_68;
        }
        else {
          plVar25 = local_180 + 2;
          lVar24 = 1;
          do {
            lVar19 = local_68;
            plVar25[-1] = lVar19;
            lVar14 = lVar19 + lVar18 + lVar18;
            lVar24 = lVar24 + 4;
            *plVar25 = lVar19 + lVar18;
            plVar25[1] = lVar14;
            lVar14 = lVar14 + lVar18;
            plVar25[2] = lVar14;
            plVar25 = plVar25 + 4;
            local_68 = lVar14 + lVar18;
          } while (uVar17 - uVar15 != lVar24);
          lVar14 = lVar19 + (long)(int)uVar16 * 0x10;
        }
        if ((uVar20 & 3) != 0) {
          plVar25 = local_180 + lVar24;
          do {
            *plVar25 = lVar14;
            uVar15 = uVar15 - 1;
            lVar14 = lVar14 + lVar18;
            plVar25 = plVar25 + 1;
          } while (uVar15 != 0);
        }
        local_184 = 0;
        local_18c = 0;
        local_194 = 0;
        local_19c = 0;
        local_1a4 = 0;
        local_1ac = 0;
        local_1b4 = 0;
        local_1bc = 0;
        local_1c4 = 0;
        local_1cc = 0;
        local_1d4 = 0;
        local_1dc = 0;
        local_1e4 = 0;
        local_1ec = 0;
        local_1f4 = 0;
        local_1fc = 0;
        local_200 = iVar29;
        if ((int)uVar16 < 1) {
          memset(&local_1fc,0,(ulong)uVar20 << 2);
        }
        else {
          uVar15 = 1;
          do {
            lVar18 = 0;
            uVar23 = 0;
            iVar11 = 0;
            iVar32 = 0;
            do {
              while( true ) {
                uVar7 = *(ushort *)(lVar28 + (long)iVar32 * 4 + 2);
                if ((iVar11 + 1 < iVar29) &&
                   (uVar27 = (uint)*(ushort *)(local_180[uVar15 - 1] + (long)(iVar11 + 1) * 4 + 2) +
                             (uint)*(ushort *)(local_180[uVar15 - 1] + (long)iVar11 * 4 + 2),
                   uVar27 <= uVar7)) break;
                if (uVar7 == 0xffff) goto LAB_00160f60;
                lVar24 = local_180[uVar15];
                lVar14 = (long)iVar32;
                iVar32 = iVar32 + 1;
                ((undefined2 *)(lVar24 + lVar18))[1] = uVar7;
                *(undefined2 *)(lVar24 + lVar18) = *(undefined2 *)(lVar28 + lVar14 * 4);
                uVar23 = uVar23 + 1;
                lVar18 = lVar18 + 4;
                if (uVar16 == uVar23) goto LAB_00160f60;
              }
              lVar24 = local_180[uVar15];
              ((ushort *)(lVar24 + lVar18))[1] = (ushort)uVar27;
              uVar7 = (ushort)iVar11;
              iVar11 = iVar11 + 2;
              *(ushort *)(lVar24 + lVar18) = uVar7 | 0x8000;
              uVar23 = uVar23 + 1;
              lVar18 = lVar18 + 4;
            } while (uVar16 != uVar23);
LAB_00160f60:
            iVar29 = (int)uVar23;
            *(int *)((long)local_180 + uVar15 * 4 + -0x80) = iVar29;
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar17);
        }
      }
      memset(*(void **)(param_1 + 0x2a0),0,(long)*(int *)(param_1 + 0x284));
      if (-1 < (int)uVar20) {
        lVar28 = (long)(int)uVar20;
        iVar11 = *(int *)((long)local_180 + lVar28 * 4 + -0x80);
        if (0 < iVar11) goto LAB_00161230;
LAB_00161218:
        iVar11 = 0;
LAB_0016121c:
        if (0 < (int)lVar28) {
          do {
            lVar28 = lVar28 + -1;
            if (iVar11 < 1) goto LAB_00161218;
LAB_00161230:
            puVar34 = (ushort *)local_180[lVar28];
            uVar17 = (ulong)iVar11;
            uVar15 = uVar17 & 1;
            if (iVar11 != 1) {
              lVar18 = 0;
              iVar11 = 0;
              puVar26 = puVar34 + 2;
              uVar23 = (ulong)*puVar34;
              if (-1 < (short)*puVar34) goto LAB_0016129c;
LAB_001612bc:
              iVar11 = (int)uVar23 + -0x7ffe;
              uVar23 = (ulong)*puVar26;
              if (-1 < (short)*puVar26) goto LAB_00161270;
              do {
                iVar11 = (int)uVar23 + -0x7ffe;
                puVar30 = puVar26;
                while( true ) {
                  lVar18 = lVar18 + 2;
                  puVar26 = puVar30 + 4;
                  if (uVar17 - uVar15 == lVar18) goto LAB_001612d4;
                  uVar23 = (ulong)puVar30[2];
                  if ((short)puVar30[2] < 0) goto LAB_001612bc;
LAB_0016129c:
                  *(char *)(*(long *)(param_1 + 0x2a0) + uVar23) =
                       *(char *)(*(long *)(param_1 + 0x2a0) + uVar23) + '\x01';
                  uVar23 = (ulong)*puVar26;
                  if ((short)*puVar26 < 0) break;
LAB_00161270:
                  *(char *)(*(long *)(param_1 + 0x2a0) + uVar23) =
                       *(char *)(*(long *)(param_1 + 0x2a0) + uVar23) + '\x01';
                  puVar30 = puVar26;
                }
              } while( true );
            }
            lVar18 = 0;
            iVar11 = 0;
LAB_001612d4:
            if (uVar15 == 0) goto LAB_0016121c;
            uVar7 = puVar34[lVar18 * 2];
            uVar20 = (uint)uVar7;
            if ((short)uVar7 < 0) {
              iVar11 = uVar20 - 0x7ffe;
            }
            else {
              *(char *)(*(long *)(param_1 + 0x2a0) + (ulong)uVar20) =
                   *(char *)(*(long *)(param_1 + 0x2a0) + (ulong)uVar20) + '\x01';
            }
            if ((int)lVar28 < 1) break;
          } while( true );
        }
      }
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      *(undefined8 *)(param_1 + 0x250) = 0;
      *(undefined8 *)(param_1 + 600) = 0;
      *(undefined8 *)(param_1 + 0x240) = 0;
      *(undefined8 *)(param_1 + 0x248) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x210) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      iVar11 = *(int *)(param_1 + 0x294);
      if (-1 < iVar11) {
        pbVar21 = *(byte **)(param_1 + 0x2a0);
        iVar29 = 0;
        bVar6 = *pbVar21;
        while( true ) {
          if ((ulong)bVar6 != 0) {
            lVar28 = param_1 + (ulong)bVar6 * 4;
            *(int *)(lVar28 + 0x200) = *(int *)(lVar28 + 0x200) + 1;
          }
          if (iVar11 < iVar29 + 1) break;
          iVar29 = iVar29 + 1;
          bVar6 = pbVar21[iVar29];
        }
      }
      iVar29 = 0;
      do {
        iVar29 = iVar29 + 1;
      } while (*(int *)(param_1 + (long)iVar29 * 4 + 0x200) == 0);
      iVar11 = 0x20;
      do {
        iVar11 = iVar11 + -1;
      } while (*(int *)(param_1 + (long)iVar11 * 4 + 0x200) == 0);
      *(int *)(param_1 + 0x298) = iVar29;
      *(int *)(param_1 + 0x29c) = iVar11;
      if (local_78 != 0) {
        if ((local_180[0x20] == 0) ||
           ((local_70 + 0xfU & 0xfffffffffffffff0) + local_78 != *(long *)(local_180[0x20] + 8))) {
          (**(code **)PTR_PTR_047cb898)();
        }
        else {
          *(long *)(local_180[0x20] + 8) = local_78;
        }
        local_78 = 0;
        iVar11 = *(int *)(param_1 + 0x29c);
      }
      goto LAB_001613fc;
    }
    iVar11 = (int)((long)(int)uVar2 + 1);
    if (iVar11 < 0) {
      *(undefined4 *)((long)local_180 + ((long)(int)uVar2 + 1) * 4 + -0x80) = 0;
LAB_0016102c:
      uVar15 = 0;
      local_200 = 0;
LAB_00161038:
      do {
        if (0x100000000 < uVar15) {
          uVar17 = LZCOUNT((int)uVar15);
          if ((uVar15 >> 0x1e & 3) == 0) {
            uVar17 = (ulong)((int)uVar17 -
                            (uint)(*(uint *)((long)local_180 + uVar17 * 4) <
                                  (uint)((int)uVar15 << 1)));
          }
          iVar11 = (int)uVar17;
          if (iVar11 < (int)uVar2) {
            lVar28 = ((long)iVar11 << 0x20) + -0x100000000;
            piVar13 = (int *)((long)local_180 + (long)iVar11 * 4 + -0x80);
            lVar18 = (long)(int)uVar2 - (long)iVar11;
            iVar11 = -0x80000000;
            iVar29 = -1;
            do {
              iVar32 = *piVar13;
              if (*(int *)((long)local_180 + (lVar28 >> 0x1e) + -0x80) != iVar32) {
                iVar31 = puVar12[puVar26[(long)iVar32 * 2]] << (ulong)((uint)uVar17 & 0x1f);
                if (iVar11 < -iVar31) {
                  iVar11 = -iVar31;
                  iVar29 = iVar32;
                }
                else {
                }
              }
              lVar28 = lVar28 + 0x100000000;
              lVar18 = lVar18 + -1;
              uVar17 = (ulong)((uint)uVar17 + 1);
              piVar13 = piVar13 + 1;
            } while (lVar18 != 0);
            if (-1 < iVar29) {
              lVar28 = (ulong)puVar26[(long)iVar29 * 2 + 1] + 1;
              lVar18 = (ulong)puVar26[(long)iVar29 * 2 + 1] * 4;
              uVar15 = uVar15 - *(uint *)((long)local_180 + lVar28 * 4);
              *(int *)((long)local_180 + lVar18 + -0x80) =
                   *(int *)((long)local_180 + lVar18 + -0x80) + 1;
              puVar26[(long)iVar29 * 2 + 1] = (ushort)lVar28;
              if (uVar15 >> 0x20 == 0) goto LAB_00161154;
              goto LAB_00161084;
            }
            if (uVar15 == 0x100000000) break;
          }
          if ((int)uVar2 < 2) {
            uVar17 = (ulong)puVar26[-1];
            do {
              uVar20 = ((uint)uVar17 & 0xffff) + 1;
              lVar28 = (uVar17 & 0xffff) * 4;
              uVar15 = uVar15 - *(uint *)((long)local_180 + (ulong)uVar20 * 4);
              *(int *)((long)local_180 + lVar28 + -0x80) =
                   *(int *)((long)local_180 + lVar28 + -0x80) + 1;
              uVar17 = (ulong)uVar20;
            } while (0x100000000 < uVar15);
            puVar26[-1] = (ushort)uVar20;
          }
          else {
            uVar17 = (ulong)uVar2 - 1 & 1;
            uVar10 = local_1fc;
            do {
              if (uVar2 != 2) {
                lVar28 = 0;
                iVar29 = -0x80000000;
                iVar11 = -1;
                local_1fc._0_4_ = (int)uVar10;
                piVar13 = &local_200;
                if (local_200 == (int)local_1fc) goto LAB_0016158c;
LAB_0016159c:
                iVar32 = puVar12[puVar26[(long)(int)local_1fc * 2]] <<
                         (ulong)((int)lVar28 + 1U & 0x1f);
                if (iVar29 < -iVar32) {
                  iVar29 = -iVar32;
                  iVar11 = (int)local_1fc;
                }
                else {
                }
                iVar32 = piVar13[2];
                lVar18 = lVar28;
                if ((int)local_1fc == iVar32) goto LAB_00161570;
                do {
                  iVar31 = puVar12[puVar26[(long)iVar32 * 2]] << (ulong)((int)lVar28 + 2U & 0x1f);
                  if (iVar29 < -iVar31) {
                    iVar29 = -iVar31;
                    iVar11 = iVar32;
                  }
                  else {
                  }
                  lVar18 = lVar28;
LAB_00161570:
                  do {
                    lVar28 = lVar18 + 2;
                    if (((ulong)uVar2 - 1) - uVar17 == lVar28) {
                      lVar18 = lVar18 + 3;
                      iVar31 = iVar11;
                      if (uVar17 == 0) goto LAB_001614d8;
                      goto LAB_00161524;
                    }
                    piVar13 = &local_200 + lVar28;
                    local_1fc._0_4_ = *(int *)((long)local_180 + lVar28 * 4 + -0x7c);
                    if (iVar32 != (int)local_1fc) goto LAB_0016159c;
LAB_0016158c:
                    iVar32 = piVar13[2];
                    lVar18 = lVar28;
                  } while ((int)local_1fc == iVar32);
                } while( true );
              }
              iVar29 = -0x80000000;
              lVar18 = 1;
              iVar32 = local_200;
              iVar31 = -1;
LAB_00161524:
              iVar9 = (&local_200)[lVar18];
              iVar11 = iVar31;
              if ((iVar32 != iVar9) &&
                 (iVar11 = iVar9,
                 (int)-(puVar12[puVar26[(long)iVar9 * 2]] << (ulong)((uint)lVar18 & 0x1f)) <= iVar29
                 )) {
                iVar11 = iVar31;
              }
LAB_001614d8:
              uVar23 = (ulong)puVar26[(long)iVar11 * 2 + 1];
              uVar15 = uVar15 - *(uint *)((long)local_180 + (uVar23 + 1) * 4);
              local_1fc = uVar10;
              (&local_200)[uVar23] = (&local_200)[uVar23] + 1;
              puVar26[(long)iVar11 * 2 + 1] = (ushort)(uVar23 + 1);
              uVar10 = local_1fc;
            } while (0x100000000 < uVar15);
          }
          if (uVar15 >> 0x20 == 0) {
            if ((int)uVar2 < 2) {
              uVar17 = (ulong)puVar26[-1];
              do {
                uVar23 = uVar17 & 0xffff;
                uVar17 = uVar23 - 1;
                uVar15 = uVar15 + *(uint *)((long)local_180 + uVar23 * 4);
                *(int *)((long)local_180 + uVar17 * 4 + -0x80) =
                     *(int *)((long)local_180 + uVar17 * 4 + -0x80) + -1;
              } while (uVar15 >> 0x20 == 0);
              puVar26[-1] = (ushort)uVar17;
            }
            else {
              do {
                iVar29 = -0x80000000;
                lVar28 = 2;
                uVar20 = 0xffffffff;
                uVar16 = 0xffffffff;
                iVar32 = (int)local_1fc;
                iVar11 = local_1fc._4_4_;
                if ((int)local_1fc != local_1fc._4_4_) goto LAB_00161718;
                while( true ) {
                  iVar32 = iVar11;
                  iVar31 = (int)lVar28 + 1;
                  if ((int)uVar2 < iVar31) break;
                  iVar11 = *(int *)((long)local_180 + (long)iVar31 * 4 + -0x80);
                  lVar28 = (long)iVar31;
                  uVar16 = uVar20;
                  if (iVar32 != iVar11) {
LAB_00161718:
                    uVar20 = uVar16;
                    if (uVar15 + *(uint *)((long)local_180 + lVar28 * 4) < 0x100000001) {
                      uVar20 = iVar32 - 1;
                      iVar32 = puVar12[*(ushort *)
                                        ((long)puVar26 +
                                        (-(ulong)(uVar20 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar20 << 2))] << (ulong)((uint)lVar28 & 0x1f);
                      if (iVar32 <= iVar29) {
                        uVar20 = uVar16;
                        iVar32 = iVar29;
                      }
                      iVar29 = iVar32;
                    }
                  }
                }
                lVar28 = (ulong)puVar26[(long)(int)uVar20 * 2 + 1] - 1;
                lVar18 = lVar28 * 4;
                uVar15 = uVar15 + *(uint *)((long)local_180 +
                                           (ulong)puVar26[(long)(int)uVar20 * 2 + 1] * 4);
                *(int *)((long)local_180 + lVar18 + -0x80) =
                     *(int *)((long)local_180 + lVar18 + -0x80) + -1;
                puVar26[(long)(int)uVar20 * 2 + 1] = (ushort)lVar28;
              } while (uVar15 >> 0x20 == 0);
            }
          }
          break;
        }
LAB_00161154:
        uVar27 = -(int)uVar15;
        lVar28 = LZCOUNT(uVar27);
        uVar33 = (uint)lVar28;
        uVar20 = uVar33 + 1;
        uVar16 = uVar20;
        if ((uVar27 >> 0x1e == 0) &&
           (uVar16 = uVar33, (uint)((int)uVar15 * -2) <= *(uint *)((long)local_180 + lVar28 * 4))) {
          uVar16 = uVar20;
        }
        uVar20 = 0xffffffff;
        if ((int)uVar16 <= (int)uVar2) {
          iVar11 = -0x80000000;
          uVar20 = 0xffffffff;
          do {
            iVar29 = *(int *)((long)local_180 + (long)(int)(uVar16 - 1) * 4 + -0x80);
            if (iVar29 != *(int *)((long)local_180 + (long)(int)uVar16 * 4 + -0x80)) {
              uVar27 = iVar29 - 1;
              iVar29 = puVar12[*(ushort *)
                                ((long)puVar26 +
                                (-(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2)
                                )] << (ulong)(uVar16 & 0x1f);
              if (iVar29 <= iVar11) {
                iVar29 = iVar11;
                uVar27 = uVar20;
              }
              uVar20 = uVar27;
              iVar11 = iVar29;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 <= (int)uVar2);
        }
        lVar18 = (ulong)puVar26[(long)(int)uVar20 * 2 + 1] - 1;
        lVar28 = lVar18 * 4;
        uVar15 = uVar15 + *(uint *)((long)local_180 + (ulong)puVar26[(long)(int)uVar20 * 2 + 1] * 4)
        ;
        *(int *)((long)local_180 + lVar28 + -0x80) = *(int *)((long)local_180 + lVar28 + -0x80) + -1
        ;
        puVar26[(long)(int)uVar20 * 2 + 1] = (ushort)lVar18;
LAB_00161084:
      } while (uVar15 != 0x100000000);
    }
    else {
      iVar29 = 0;
      uVar20 = 0;
      do {
        uVar16 = uVar20 & 0x1f;
        uVar20 = uVar20 - 1;
        *(int *)((long)local_180 + (long)iVar29 * 4) = 1 << (ulong)uVar16;
        iVar29 = iVar29 + 1;
      } while (iVar29 <= iVar11);
      *(undefined4 *)((long)local_180 + (long)iVar11 * 4 + -0x80) = 0;
      if ((int)uVar2 < 1) goto LAB_0016102c;
      lVar28 = (long)(int)uVar2;
      uVar15 = 0;
      iVar11 = 0;
      do {
        lVar18 = lVar28 * 4;
        lVar28 = lVar28 + -1;
        iVar29 = *(int *)(param_1 + 0x200 + lVar18);
        *(int *)((long)local_180 + lVar18 + -0x80) = iVar11;
        uVar15 = uVar15 + (uint)(*(int *)((long)local_180 + lVar18) * iVar29);
        iVar11 = iVar29 + iVar11;
      } while (0 < lVar28);
      local_200 = iVar11;
      if (uVar15 != 0x100000000) goto LAB_00161038;
    }
    iVar11 = *(int *)(param_1 + 0x288);
    uVar7 = puVar26[(long)(iVar11 + -1) * 2 + 1];
    uVar8 = puVar26[1];
    lVar28 = *(long *)(param_1 + 0x2a0);
    if (0 < (int)uVar2) {
      uVar15 = 1;
      iVar11 = local_200;
      do {
        uVar17 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
        uVar20 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar20;
        iVar29 = *(int *)((long)local_180 + (uVar17 - 0x80));
        *(int *)(param_1 + uVar17 + 0x200) = iVar11 - iVar29;
        iVar11 = iVar29;
      } while ((int)uVar20 <= (int)uVar2);
      iVar11 = *(int *)(param_1 + 0x288);
    }
    if (0 < iVar11) {
      lVar18 = 0;
      puVar26 = puVar26 + 1;
      do {
        lVar18 = lVar18 + 1;
        *(char *)(lVar28 + (ulong)puVar26[-1]) = (char)*puVar26;
        puVar26 = puVar26 + 2;
      } while (lVar18 < *(int *)(param_1 + 0x288));
    }
    *(uint *)(param_1 + 0x29c) = (uint)uVar8;
    *(uint *)(param_1 + 0x298) = (uint)uVar7;
    if (uVar8 == uVar2 || (int)(uint)uVar8 < (int)uVar2) goto joined_r0x0016142c;
  }
  else {
LAB_001613fc:
    if (iVar11 <= (int)uVar2) goto joined_r0x0016142c;
  }
  iVar11 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\rrhuffman.cpp",0x775,
                        "rrHuffman_BuildCodeLens","HI->maxCodeLen <= limitCodeLen");
  if (iVar11 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
joined_r0x0016142c:
  if (local_210 != 0) {
    if ((local_218 == 0) ||
       ((local_208 + 0xfU & 0xfffffffffffffff0) + local_210 != *(long *)(local_218 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_218 + 8) = local_210;
    }
  }
  return;
}


