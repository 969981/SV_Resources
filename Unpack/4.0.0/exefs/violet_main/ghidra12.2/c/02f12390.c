/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f12390; name: FUN_02f12390
 */


/* WARNING: Removing unreachable block (ram,0x02f13fac) */

undefined8 FUN_02f12390(long param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined6 uVar13;
  undefined2 uVar14;
  byte bVar15;
  char cVar16;
  bool bVar17;
  void *pvVar18;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  ulong uVar29;
  int *piVar30;
  ulong uVar31;
  void *pvVar32;
  ulong uVar33;
  long lVar34;
  void *pvVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  float fVar40;
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
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  int iVar61;
  uint5 uVar62;
  int iVar66;
  uint uVar67;
  uint uVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  
  if (*(char *)(param_1 + 0x300) == '\0') {
    return 0;
  }
  uVar33 = param_1 + 0x308;
  uVar29 = uVar33 & 0xf;
  *(undefined1 *)(param_1 + 0x300) = 0;
  if (uVar29 == 0) {
    lVar34 = 0;
    puVar20 = (undefined8 *)(param_1 + 0x348);
LAB_02f12438:
    puVar24 = (undefined8 *)(param_1 + lVar34 * 4 + 0x308);
    do {
      puVar23 = puVar24 + 2;
      puVar24[1] = 0xffffffffffffffff;
      *puVar24 = 0xffffffffffffffff;
      lVar34 = lVar34 + 4;
      puVar24 = puVar23;
    } while (puVar23 < puVar20);
  }
  else {
    lVar34 = 4 - (uVar29 >> 2);
    if (uVar33 < uVar33 + lVar34 * 4) {
      memset((void *)(param_1 + 0x308),0xff,0x10 - (uVar33 & 0xc));
    }
    else {
      lVar34 = 0;
    }
    uVar29 = (uVar29 >> 2) + 0xf & 0x1c;
    if (uVar29 != 0) {
      puVar20 = (undefined8 *)(uVar33 + lVar34 * 4 + uVar29 * 4);
      goto LAB_02f12438;
    }
  }
  if (lVar34 < 0x13) {
    memset((void *)(param_1 + lVar34 * 4 + 0x308),0xff,lVar34 * -4 + 0x4c);
  }
  pvVar35 = (void *)(param_1 + 0x354);
  pvVar18 = (void *)(param_1 + 0x3a0);
  uVar33 = (ulong)pvVar35 & 0xf;
  if (uVar33 == 0) {
    pvVar32 = (void *)(param_1 + 0x394);
LAB_02f12500:
    pvVar6 = pvVar32;
    if (pvVar32 <= (void *)((long)pvVar35 + 0x10U)) {
      pvVar6 = (void *)((long)pvVar35 + 0x10U);
    }
    memset(pvVar35,0xff,(long)pvVar6 + ~(ulong)pvVar35 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar35 = (void *)((long)pvVar35 + 0x10);
    } while (pvVar35 < pvVar32);
  }
  else {
    uVar29 = (uVar33 >> 2) + 0xf;
    pvVar32 = (void *)((long)pvVar35 + (4 - (uVar33 >> 2)) * 4);
    uVar33 = (param_1 - ((ulong)pvVar35 & 0xc)) + 0x364;
    if (uVar33 <= param_1 + 0x358U) {
      uVar33 = param_1 + 0x358U;
    }
    memset(pvVar35,0xff,(uVar33 - param_1) - 0x351 & 0xfffffffffffffffc);
    do {
      pvVar35 = (void *)((long)pvVar35 + 4);
    } while (pvVar35 < pvVar32);
    if ((uVar29 & 0x1c) != 0) {
      pvVar32 = (void *)((long)pvVar35 + ((ulong)(uint)((int)uVar29 << 2) & 0x70));
      goto LAB_02f12500;
    }
  }
  if (pvVar35 < pvVar18) {
    memset(pvVar35,0xff,(param_1 - (long)pvVar35) + 0x3a3U & 0xfffffffffffffffc);
  }
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  uVar33 = (ulong)pvVar18 & 0xf;
  *(undefined4 *)(param_1 + 0x304) = 0;
  if (uVar33 == 0) {
    lVar34 = 0;
    puVar20 = (undefined8 *)(param_1 + 0x3e0);
LAB_02f125c8:
    puVar24 = (undefined8 *)(param_1 + lVar34 * 4 + 0x3a0);
    do {
      puVar23 = puVar24 + 2;
      puVar24[1] = 0xffffffffffffffff;
      *puVar24 = 0xffffffffffffffff;
      lVar34 = lVar34 + 4;
      puVar24 = puVar23;
    } while (puVar23 < puVar20);
  }
  else {
    lVar34 = 4 - (uVar33 >> 2);
    if (pvVar18 < (void *)((long)pvVar18 + lVar34 * 4)) {
      memset(pvVar18,0xff,0x10 - ((ulong)pvVar18 & 0xc));
    }
    else {
      lVar34 = 0;
    }
    uVar33 = (uVar33 >> 2) + 0xf & 0x1c;
    if (uVar33 != 0) {
      puVar20 = (undefined8 *)((long)pvVar18 + uVar33 * 4 + lVar34 * 4);
      goto LAB_02f125c8;
    }
  }
  if (lVar34 < 0x13) {
    memset((void *)((long)pvVar18 + lVar34 * 4),0xff,lVar34 * -4 + 0x4c);
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  if (*(int *)(param_1 + 0x3f8) != 0) {
    if (*(int *)(param_1 + 0x3fc) == 0) {
      *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3f8);
    }
    *(undefined4 *)(param_1 + 0x3f8) = 0;
  }
  FUN_02f15150(param_1,param_1 + 0x50,0);
  uVar67 = *(uint *)(param_1 + 0x3f8);
  puVar2 = (uint *)(param_1 + 0x3fc);
  iVar61 = uVar67 + 0x10;
  *(uint *)(param_1 + 0x3ec) = uVar67;
  uVar68 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *puVar2 = uVar67;
    uVar68 = uVar67;
  }
  puVar12 = PTR_DAT_047d1a08;
  uVar9 = uVar68 & 0x7fffffff;
  if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
    uVar9 = uVar67;
  }
  if ((int)uVar9 < iVar61) {
    uVar68 = uVar67 + 0xf | (int)(uVar67 + 0xf) >> 0x10;
    uVar68 = uVar68 | (int)uVar68 >> 8;
    uVar68 = uVar68 | (int)uVar68 >> 4;
    uVar68 = uVar68 | (int)uVar68 >> 2;
    uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
    if ((int)uVar68 < iVar61) goto LAB_02f144f0;
    local_140 = (long)(int)uVar68;
    pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
    pvVar35 = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
    }
    memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
    if (*(int *)(param_1 + 0x3fc) < 0) {
      lVar34 = 0;
      if (*plVar1 != 0) {
        lVar34 = *plVar1 + (long)plVar1;
      }
      (**(code **)(puVar12 + 8))(0,lVar34,0);
    }
    lVar34 = 0;
    if (pvVar18 != (void *)0x0) {
      lVar34 = (long)pvVar18 - (long)plVar1;
    }
    *plVar1 = lVar34;
    *puVar2 = uVar68 | 0x80000000;
  }
  else {
    lVar34 = *plVar1;
  }
  *(int *)(param_1 + 0x3f8) = iVar61;
  puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar34);
  uVar25 = *(undefined8 *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0x30c) = uVar67;
  uVar7 = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((long)puVar20 + 0xc) = uVar7;
  *puVar20 = uVar25;
  bVar15 = *(char *)(param_1 + 0x34) == '\x02';
  bVar27 = 2;
  if (!(bool)bVar15) {
    bVar27 = 1;
  }
  cVar16 = *(char *)(param_1 + 0x33);
  if (*(char *)(param_1 + 0x35) == '\x02') {
    bVar15 = bVar27;
  }
  bVar27 = bVar15;
  if (cVar16 == '\x02') {
    bVar27 = bVar15 + 1;
  }
  if (bVar27 < 3) {
    if (*(char *)(param_1 + 0xf2) == '\0') {
      lVar34 = 0;
      piVar26 = (int *)(param_1 + 0x3bc);
      lVar37 = 4;
      do {
        lVar39 = param_1 + lVar34 * 0x10;
        if ((*(char *)(lVar39 + 0x152) != '\0') &&
           (*(char *)(param_1 + lVar34 + 3 + 0x30) != '\x02')) {
          uVar67 = *(uint *)(param_1 + 0x3f8);
          iVar61 = uVar67 + 0x10;
          *(uint *)(param_1 + 0x3ec) = uVar67;
          uVar68 = *(uint *)(param_1 + 0x3fc);
          if (*(uint *)(param_1 + 0x3fc) == 0) {
            *puVar2 = uVar67;
            uVar68 = uVar67;
          }
          uVar9 = uVar68 & 0x7fffffff;
          if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
            uVar9 = uVar67;
          }
          if ((int)uVar9 < iVar61) {
            uVar68 = uVar67 + 0xf | (int)(uVar67 + 0xf) >> 0x10;
            uVar68 = uVar68 | (int)uVar68 >> 8;
            uVar68 = uVar68 | (int)uVar68 >> 4;
            uVar68 = uVar68 | (int)uVar68 >> 2;
            uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
            if ((int)uVar68 < iVar61) goto LAB_02f144f0;
            local_140 = (long)(int)uVar68;
            pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
            pvVar35 = (void *)0x0;
            if (*(long *)(param_1 + 0x3f0) != 0) {
              pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
            }
            memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
            if (*(int *)(param_1 + 0x3fc) < 0) {
              lVar38 = 0;
              if (*plVar1 != 0) {
                lVar38 = *plVar1 + (long)plVar1;
              }
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar38,0);
            }
            lVar38 = 0;
            if (pvVar18 != (void *)0x0) {
              lVar38 = (long)pvVar18 - (long)plVar1;
            }
            *plVar1 = lVar38;
            *puVar2 = uVar68 | 0x80000000;
          }
          else {
            lVar38 = *plVar1;
          }
          *(int *)(param_1 + 0x3f8) = iVar61;
          puVar3 = (undefined4 *)((long)plVar1 + (int)uVar67 + lVar38);
          *(uint *)(param_1 + (lVar34 + 3) * 4 + 0x308) = uVar67;
          uVar25 = *(undefined8 *)(lVar39 + 0x154);
          uVar7 = *(undefined4 *)(lVar39 + 0x15c);
          *puVar3 = *(undefined4 *)(lVar39 + 0x150);
          *(undefined8 *)(puVar3 + 1) = uVar25;
          puVar3[3] = uVar7;
          uVar33 = (ulong)*(byte *)(lVar39 + 0x154);
          if (uVar33 != 0) {
            uVar29 = uVar33 * 2;
            *(undefined4 *)(param_1 + (lVar34 * 2 + 4) * 4 + 0x354) =
                 *(undefined4 *)(param_1 + 0x3ec);
            iVar61 = *(int *)(param_1 + 0x304);
            if (uVar29 - 1 < 3) {
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              piVar30 = piVar26;
              do {
                iVar66 = iVar61 + (int)uVar31;
                uVar31 = uVar31 + 4;
                *(int *)(param_1 + 0x304) = iVar66 + 1;
                piVar30[-3] = iVar66;
                *(int *)(param_1 + 0x304) = iVar66 + 2;
                piVar30[-2] = iVar66 + 1;
                *(int *)(param_1 + 0x304) = iVar66 + 3;
                piVar30[-1] = iVar66 + 2;
                *(int *)(param_1 + 0x304) = iVar66 + 4;
                *piVar30 = iVar66 + 3;
                piVar30 = piVar30 + 4;
              } while ((uVar29 & 0x1fc) != uVar31);
              iVar61 = iVar61 + (int)uVar31;
            }
            if (((uint)uVar29 >> 1 & 1) != 0) {
              lVar39 = (uVar33 & 1) * -2;
              piVar30 = (int *)(param_1 + 0x3a0 + (uVar31 + lVar37) * 4);
              do {
                *(int *)(param_1 + 0x304) = iVar61 + 1;
                bVar17 = lVar39 != -1;
                lVar39 = lVar39 + 1;
                *piVar30 = iVar61;
                piVar30 = piVar30 + 1;
                iVar61 = iVar61 + 1;
              } while (bVar17);
            }
          }
        }
        lVar34 = lVar34 + 1;
        piVar26 = piVar26 + 2;
        lVar37 = lVar37 + 2;
      } while (lVar34 != 3);
    }
    else {
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar61 = uVar67 + 0x60;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      puVar12 = PTR_DAT_047d1a08;
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar61) {
        uVar68 = uVar67 + 0x5f | (int)(uVar67 + 0x5f) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar61) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar34 = 0;
          if (*plVar1 != 0) {
            lVar34 = *plVar1 + (long)plVar1;
          }
          (**(code **)(puVar12 + 8))(0,lVar34,0);
        }
        lVar34 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar34 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar34;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar34 = *plVar1;
      }
      puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar34);
      uVar7 = *(undefined4 *)(param_1 + 0xf8);
      uVar8 = *(undefined4 *)(param_1 + 0xfc);
      *(int *)(param_1 + 0x3f8) = iVar61;
      *(uint *)(param_1 + 0x310) = uVar67;
      *puVar20 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined4 *)(puVar20 + 1) = uVar7;
      *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x108);
      uVar8 = *(undefined4 *)(param_1 + 0x10c);
      puVar20[2] = *(undefined8 *)(param_1 + 0x100);
      *(undefined4 *)(puVar20 + 3) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x1c) = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x118);
      uVar8 = *(undefined4 *)(param_1 + 0x11c);
      puVar20[4] = *(undefined8 *)(param_1 + 0x110);
      *(undefined4 *)(puVar20 + 5) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x2c) = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x128);
      uVar8 = *(undefined4 *)(param_1 + 300);
      puVar20[6] = *(undefined8 *)(param_1 + 0x120);
      *(undefined4 *)(puVar20 + 7) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x3c) = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x138);
      uVar8 = *(undefined4 *)(param_1 + 0x13c);
      puVar20[8] = *(undefined8 *)(param_1 + 0x130);
      *(undefined4 *)(puVar20 + 9) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x4c) = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x148);
      uVar8 = *(undefined4 *)(param_1 + 0x14c);
      puVar20[10] = *(undefined8 *)(param_1 + 0x140);
      *(undefined4 *)(puVar20 + 0xb) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x5c) = uVar8;
      iVar61 = *(int *)(param_1 + 0x304);
      *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x3ec);
      *(int *)(param_1 + 0x3b0) = iVar61;
      *(int *)(param_1 + 0x3b4) = iVar61 + 1;
      *(int *)(param_1 + 0x3b8) = iVar61 + 2;
      *(int *)(param_1 + 0x3bc) = iVar61 + 3;
      *(int *)(param_1 + 0x3c0) = iVar61 + 4;
      *(int *)(param_1 + 0x304) = iVar61 + 6;
      *(int *)(param_1 + 0x3c4) = iVar61 + 5;
    }
    uVar13 = local_140._2_6_;
    uVar14 = local_140._6_2_;
    if (bVar15 == 1) {
      cVar28 = *(char *)(param_1 + 0x34);
      local_140 = CONCAT62(uVar13,0xd);
      uStack_138 = 0xbf800000bf800000;
      uVar67 = 1;
      if (cVar28 == '\x02') {
        uVar67 = 2;
      }
      if (cVar16 == '\x02') {
        bVar17 = cVar28 == '\x02';
        uVar11 = 1;
        if (bVar17) {
          uVar11 = 2;
        }
        local_140._0_3_ = CONCAT12(!bVar17 << 1,0xd);
        local_140._0_5_ = CONCAT14(uVar11,CONCAT13(bVar17,(undefined3)local_140));
        local_140._0_6_ = CONCAT15(2,(undefined5)local_140);
        local_140 = CONCAT26(uVar14,(undefined6)local_140);
        uVar33 = 0x11;
        if (bVar17) {
          uVar33 = 0x12;
        }
        FUN_02f15350(param_1,&local_140,0x13);
        iVar66 = *(int *)(param_1 + 0x304);
        iVar61 = iVar66 + 1;
        *(int *)(param_1 + 0x3e0) = iVar66;
        *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x3ec);
        iVar66 = iVar66 + 2;
      }
      else {
        if (cVar16 == '\x01') {
          FUN_02f15540(param_1,param_1 + 0x180);
        }
        uVar25 = local_140;
        local_140._0_4_ = (float)CONCAT22(2,(undefined2)local_140);
        local_140._0_5_ = CONCAT14((char)uVar67,(float)local_140);
        local_140._6_2_ = SUB82(uVar25,6);
        local_140._0_6_ = CONCAT15(1,(undefined5)local_140);
        FUN_02f15350(param_1,&local_140,0x13);
        uVar33 = (ulong)(uVar67 | 0x10);
        iVar61 = *(int *)(param_1 + 0x304);
        iVar66 = iVar61 + 1;
      }
      *(int *)(param_1 + 0x304) = iVar66;
      lVar34 = param_1 + uVar33 * 4;
      *(int *)(lVar34 + 0x3a0) = iVar61;
      *(undefined4 *)(lVar34 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
      if (*(char *)(param_1 + (ulong)(uVar67 + 3) + 0x30) == '\x01') {
        uVar68 = *(uint *)(param_1 + 0x3f8);
        iVar61 = uVar68 + 0x20;
        uVar9 = *(uint *)(param_1 + 0x38 + (ulong)(uVar67 * 2 - 2) * 4);
        uVar10 = *(uint *)(param_1 + 0x38 + (ulong)(uVar67 * 2 - 1) * 4);
        *(uint *)(param_1 + 0x3ec) = uVar68;
        uVar19 = *(uint *)(param_1 + 0x3fc);
        if (*(uint *)(param_1 + 0x3fc) == 0) {
          *puVar2 = uVar68;
          uVar19 = uVar68;
        }
        puVar12 = PTR_DAT_047d1a08;
        uVar5 = uVar19 & 0x7fffffff;
        if ((int)(uVar19 & 0x7fffffff) <= (int)uVar68) {
          uVar5 = uVar68;
        }
        if ((int)uVar5 < iVar61) {
          uVar19 = uVar68 + 0x1f | (int)(uVar68 + 0x1f) >> 0x10;
          uVar19 = uVar19 | (int)uVar19 >> 8;
          uVar19 = uVar19 | (int)uVar19 >> 4;
          uVar19 = uVar19 | (int)uVar19 >> 2;
          uVar19 = (uVar19 | (int)uVar19 >> 1) + 1;
          if ((int)uVar19 < iVar61) goto LAB_02f144f0;
          local_a0[0] = (long)(int)uVar19;
          pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,local_a0,0);
          pvVar35 = (void *)0x0;
          if (*(long *)(param_1 + 0x3f0) != 0) {
            pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
          }
          memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
          if (*(int *)(param_1 + 0x3fc) < 0) {
            lVar34 = 0;
            if (*plVar1 != 0) {
              lVar34 = *plVar1 + (long)plVar1;
            }
            (**(code **)(puVar12 + 8))(0,lVar34,0);
          }
          lVar34 = 0;
          if (pvVar18 != (void *)0x0) {
            lVar34 = (long)pvVar18 - (long)plVar1;
          }
          *plVar1 = lVar34;
          *puVar2 = uVar19 | 0x80000000;
        }
        else {
          lVar34 = *plVar1;
        }
        *(int *)(param_1 + 0x3f8) = iVar61;
        puVar4 = (uint *)((long)plVar1 + (int)uVar68 + lVar34);
        *puVar4 = uVar67 << 0x18 | 0x1000e;
        puVar4[1] = 0;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        puVar4[4] = 0x3f4ccccd;
        puVar4[5] = 0x3f800000;
        lVar34 = 0x44;
        if (cVar28 != '\x02') {
          lVar34 = 0x48;
        }
        *(undefined4 *)(param_1 + lVar34 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
        iVar61 = *(int *)(param_1 + 0x304);
        *(int *)(param_1 + 0x304) = iVar61 + 1;
        *(int *)(param_1 + lVar34 + 0x3a0) = iVar61;
      }
    }
    else if (bVar15 == 2) {
      uStack_138 = 0xbf800000bf800000;
      local_140 = CONCAT26(local_140._6_2_,0x2000201000d);
      FUN_02f15350(param_1,&local_140,0x11);
      if (cVar16 == '\x01') {
        FUN_02f15540(param_1,param_1 + 0x180);
      }
    }
    else {
      if (cVar16 == '\x02') {
        uStack_138 = 0xbf800000bf800000;
        local_140 = CONCAT26(local_140._6_2_,0x1020100000d);
        FUN_02f15350(param_1,&local_140,0x10);
      }
      else if (cVar16 == '\x01') {
        FUN_02f15540(param_1,param_1 + 0x180);
      }
      fVar40 = *(float *)(param_1 + 0x3c);
      fVar86 = *(float *)(param_1 + 0x38) * 0.5 + fVar40 * 0.5;
      fVar50 = *(float *)(param_1 + 0x44);
      fVar87 = *(float *)(param_1 + 0x40) * 0.5 + fVar50 * 0.5;
      if (fVar86 != 0.0 || fVar87 != 0.0) {
        fVar40 = fVar86 * 0.5;
        local_b0 = CONCAT44(fVar40,fVar40);
        uStack_a8 = CONCAT44(fVar40,fVar40);
        FUN_01170160(&local_b0,&local_140,local_a0);
        fVar50 = (float)local_140;
        fVar40 = *(float *)(param_1 + 0xb0) * fVar50;
        fVar47 = *(float *)(param_1 + 0xb4) * fVar50;
        fVar50 = *(float *)(param_1 + 0xb8) * fVar50;
        fVar54 = (float)((ulong)local_a0[0] >> 0x20);
        fVar58 = fVar47 + fVar47;
        fVar59 = fVar50 + fVar50;
        fVar60 = (fVar40 + fVar40) * fVar40;
        fVar51 = (fVar40 + fVar40) * fVar54;
        fVar78 = fVar59 * fVar47 - fVar51;
        fVar41 = 1.0 - fVar50 * fVar59;
        fVar97 = fVar41 - fVar58 * fVar47;
        fVar82 = fVar59 * fVar40 + fVar58 * fVar54;
        fVar73 = fVar59 * fVar40 - fVar58 * fVar54;
        fVar91 = fVar58 * fVar40 + fVar59 * fVar54;
        fVar74 = fVar58 * fVar40 - fVar59 * fVar54;
        fVar41 = fVar41 - fVar60;
        fVar51 = fVar59 * fVar47 + fVar51;
        fVar42 = (1.0 - fVar60) - fVar58 * fVar47;
        fVar40 = fVar87 * 0.5;
        local_b0 = CONCAT44(fVar40,fVar40);
        uStack_a8 = CONCAT44(fVar40,fVar40);
        FUN_01170160(&local_b0,&local_140,local_a0);
        lVar34 = local_140;
        local_140 = CONCAT62(local_140._2_6_,2);
        fVar40 = (float)lVar34;
        fVar47 = (float)*(undefined8 *)(param_1 + 0xc0) * fVar40;
        fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20) * fVar40;
        fVar40 = (float)*(undefined8 *)(param_1 + 200) * fVar40;
        fVar50 = (float)((ulong)local_a0[0] >> 0x20);
        local_130 = *(undefined8 *)(param_1 + 0x60);
        uStack_128 = *(undefined8 *)(param_1 + 0x68);
        uStack_120 = *(undefined8 *)(param_1 + 0x70);
        uStack_118 = *(undefined8 *)(param_1 + 0x78);
        local_110 = *(undefined8 *)(param_1 + 0x80);
        uStack_108 = *(undefined8 *)(param_1 + 0x88);
        uStack_100 = *(undefined8 *)(param_1 + 0x90);
        uStack_f8 = *(undefined8 *)(param_1 + 0x98);
        fVar58 = fVar54 + fVar54;
        fVar59 = fVar40 + fVar40;
        local_c0 = *(undefined8 *)(param_1 + 0xd0);
        uStack_b8 = *(undefined8 *)(param_1 + 0xd8);
        fVar60 = (fVar47 + fVar47) * fVar47;
        fVar43 = (fVar47 + fVar47) * fVar50;
        fVar52 = 1.0 - fVar40 * fVar59;
        fVar103 = fVar58 * fVar47 + fVar59 * fVar50;
        fVar92 = fVar58 * fVar47 - fVar59 * fVar50;
        fVar98 = fVar59 * fVar47 + fVar58 * fVar50;
        fVar101 = fVar52 - fVar58 * fVar54;
        fVar52 = fVar52 - fVar60;
        fVar53 = fVar59 * fVar54 - fVar43;
        fVar43 = fVar59 * fVar54 + fVar43;
        fVar44 = fVar59 * fVar47 - fVar58 * fVar50;
        fVar45 = (1.0 - fVar60) - fVar58 * fVar54;
        fVar40 = *(float *)(param_1 + 0xc0);
        fVar50 = *(float *)(param_1 + 0xc4);
        fVar47 = *(float *)(param_1 + 200);
        fVar46 = fVar98 * fVar73 + fVar92 * fVar91 + fVar101 * fVar97;
        fVar48 = fVar53 * fVar73 + fVar52 * fVar91 + fVar103 * fVar97;
        fVar49 = fVar45 * fVar73 + fVar43 * fVar91 + fVar44 * fVar97;
        fVar73 = fVar73 * 0.0 + fVar98 * fVar91 + fVar53 * fVar97;
        fVar91 = fVar98 * fVar51 + fVar92 * fVar41 + fVar101 * fVar74;
        fVar97 = fVar53 * fVar51 + fVar52 * fVar41 + fVar103 * fVar74;
        fVar55 = fVar45 * fVar51 + fVar43 * fVar41 + fVar44 * fVar74;
        fVar74 = fVar51 * 0.0 + fVar98 * fVar41 + fVar53 * fVar74;
        fVar41 = *(float *)(param_1 + 0xa0);
        fVar51 = *(float *)(param_1 + 0xa4);
        fVar54 = *(float *)(param_1 + 0xa8);
        fVar58 = *(float *)(param_1 + 0xb0);
        fVar59 = *(float *)(param_1 + 0xb4);
        fVar60 = *(float *)(param_1 + 0xb8);
        fVar92 = fVar98 * fVar42 + fVar92 * fVar78 + fVar101 * fVar82;
        fVar52 = fVar53 * fVar42 + fVar52 * fVar78 + fVar103 * fVar82;
        fVar43 = fVar45 * fVar42 + fVar43 * fVar78 + fVar44 * fVar82;
        fVar42 = fVar42 * 0.0 + fVar98 * fVar78 + fVar53 * fVar82;
        local_f0 = CONCAT44(fVar52 * fVar54 + fVar48 * fVar41 + fVar97 * fVar51,
                            fVar92 * fVar54 + fVar46 * fVar41 + fVar91 * fVar51);
        uStack_e8 = CONCAT44(fVar42 * fVar54 + fVar73 * fVar41 + fVar74 * fVar51,
                             fVar43 * fVar54 + fVar49 * fVar41 + fVar55 * fVar51);
        auVar57._0_8_ =
             CONCAT44(fVar52 * fVar60 + fVar48 * fVar58 + fVar97 * fVar59,
                      fVar92 * fVar60 + fVar46 * fVar58 + fVar91 * fVar59);
        auVar57._8_4_ = fVar43 * fVar60 + fVar49 * fVar58 + fVar55 * fVar59;
        auVar57._12_4_ = fVar42 * fVar60 + fVar73 * fVar58 + fVar74 * fVar59;
        local_d0 = CONCAT44(fVar52 * fVar47 + fVar48 * fVar40 + fVar97 * fVar50,
                            fVar92 * fVar47 + fVar46 * fVar40 + fVar91 * fVar50);
        uStack_c8 = CONCAT44(fVar42 * fVar47 + fVar73 * fVar40 + fVar74 * fVar50,
                             fVar43 * fVar47 + fVar49 * fVar40 + fVar55 * fVar50);
        uStack_d8 = auVar57._8_8_;
        uStack_e0 = auVar57._0_8_;
        FUN_02f15150(param_1,&local_140,0x13);
        fVar40 = *(float *)(param_1 + 0x3c);
        fVar50 = *(float *)(param_1 + 0x44);
      }
      fVar40 = fVar40 - fVar86;
      fVar50 = fVar50 - fVar87;
      *(float *)(param_1 + 0x1a8) = fVar40;
      *(float *)(param_1 + 0x1ac) = fVar50;
      *(undefined2 *)(param_1 + 0x1a3) = 0;
      if (fVar40 == fVar50) {
        *(float *)(param_1 + 0x1b0) = fVar40;
        if (3.1414928 <= fVar40) {
          fVar47 = 3.7699115;
        }
        else {
          fVar47 = 0.01;
          if (0.01 < fVar40) {
            auVar56._4_4_ = fVar40;
            auVar56._0_4_ = fVar40;
            auVar56._8_4_ = fVar40;
            auVar56._12_4_ = fVar40;
            iVar61 = (int)(ABS(fVar40) * 1.2732395) + 1;
            iVar66 = (int)(ABS(fVar40) * 1.2732395) + 1;
            uVar67 = (int)(ABS(fVar40) * 1.2732395) + 1;
            uVar68 = (int)(ABS(fVar40) * 1.2732395) + 1;
            auVar79._0_8_ = CONCAT44(iVar66,iVar61) & 0xfffffffefffffffe;
            auVar79._8_4_ = uVar67 & 0xfffffffe;
            auVar79._12_4_ = uVar68 & 0xfffffffe;
            auVar88._8_4_ = 0xffffffe1;
            auVar88._0_8_ = 0xffffffe1ffffffe1;
            auVar88._12_4_ = 0xffffffe1;
            auVar57 = NEON_sshl(auVar56,auVar88,4);
            auVar83 = NEON_scvtf(auVar79,4);
            fVar47 = auVar83._0_4_;
            fVar41 = auVar83._4_4_;
            fVar51 = auVar83._8_4_;
            fVar54 = auVar83._12_4_;
            bVar15 = (byte)iVar61;
            uVar62 = CONCAT14((char)iVar66,(uint)(bVar15 & 2)) & 0x2ffffffff;
            fVar47 = ABS(fVar40) + fVar47 * -0.78515625 + fVar47 * -0.00024187565 +
                     fVar47 * -3.774895e-08;
            fVar41 = ABS(fVar40) + fVar41 * -0.78515625 + fVar41 * -0.00024187565 +
                     fVar41 * -3.774895e-08;
            fVar51 = ABS(fVar40) + fVar51 * -0.78515625 + fVar51 * -0.00024187565 +
                     fVar51 * -3.774895e-08;
            fVar54 = ABS(fVar40) + fVar54 * -0.78515625 + fVar54 * -0.00024187565 +
                     fVar54 * -3.774895e-08;
            auVar63._0_4_ = -(uint)((int)uVar62 == 0);
            auVar63._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar63._8_4_ = -(uint)((uVar67 & 2) == 0);
            auVar63._12_4_ = -(uint)((uVar68 & 2) == 0);
            fVar58 = fVar47 * fVar47;
            fVar59 = fVar41 * fVar41;
            fVar60 = fVar51 * fVar51;
            fVar42 = fVar54 * fVar54;
            auVar93 = NEON_fmov(0x3f800000,4);
            auVar89._0_4_ =
                 fVar58 * fVar58 * (fVar58 * (fVar58 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar58 * -0.5 + auVar93._0_4_;
            auVar89._4_4_ =
                 fVar59 * fVar59 * (fVar59 * (fVar59 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar59 * -0.5 + auVar93._4_4_;
            auVar89._8_4_ =
                 fVar60 * fVar60 * (fVar60 * (fVar60 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar60 * -0.5 + auVar93._8_4_;
            auVar89._12_4_ =
                 fVar42 * fVar42 * (fVar42 * (fVar42 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar42 * -0.5 + auVar93._12_4_;
            auVar69._0_4_ =
                 fVar47 + fVar47 * fVar58 * (fVar58 * (fVar58 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar69._4_4_ =
                 fVar41 + fVar41 * fVar59 * (fVar59 * (fVar59 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar69._8_4_ =
                 fVar51 + fVar51 * fVar60 * (fVar60 * (fVar60 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar69._12_4_ =
                 fVar54 + fVar54 * fVar42 * (fVar42 * (fVar42 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar83 = NEON_fmin(auVar89 ^ (auVar89 ^ auVar69) & auVar63,auVar93,4);
            uVar62 = CONCAT14((char)(auVar79._0_8_ >> 0x20) + '\x02',
                              (uint)((char)auVar79._0_8_ + 2U & 2)) & 0x2ffffffff;
            auVar64._0_4_ = -(uint)((int)uVar62 == 0);
            auVar64._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar64._8_4_ = -(uint)(((char)auVar79._8_4_ + 2U & 2) == 0);
            auVar64._12_4_ = -(uint)(((char)auVar79._12_4_ + 2U & 2) == 0);
            auVar93 = NEON_fmin(auVar89 ^ (auVar89 ^ auVar69) & auVar64,auVar93,4);
            fVar47 = (float)CONCAT13((byte)(((uint)(bVar15 & 4) << 0x1d) >> 0x18) ^
                                     (byte)((uint)(auVar57._0_4_ << 0x1f) >> 0x18) ^ auVar83[3],
                                     auVar83._0_3_) *
                     SQRT(2.0 / ((float)CONCAT13((byte)(((uint)(1U - (char)auVar79._0_8_ & 4) <<
                                                        0x1d) >> 0x18) ^ auVar93[3],auVar93._0_3_) +
                                1.0));
          }
        }
        *(undefined1 *)(param_1 + 0x1a4) = 1;
        *(float *)(param_1 + 0x1b4) = fVar47;
        *(float *)(param_1 + 0x1b8) = fVar47;
        *(float *)(param_1 + 0x1bc) = fVar47;
        if (1.1920929e-07 < ABS(fVar47)) {
          fVar47 = 1.0 / fVar47;
          *(float *)(param_1 + 0x1c0) = fVar47;
          goto LAB_02f14370;
        }
        *(undefined8 *)(param_1 + 0x1c0) = 0x3f8000003f800000;
      }
      else {
        *(undefined1 *)(param_1 + 0x1a3) = 1;
        local_140 = CONCAT44(fVar50,fVar40);
        fVar41 = *(float *)((long)&local_140 + (ulong)(fVar50 < fVar40) * 4);
        fVar51 = *(float *)((long)&local_140 + (ulong)(fVar40 <= fVar50) * 4);
        fVar41 = fVar41 + fVar41;
        fVar47 = fVar40;
        if (fVar41 < fVar51) {
          *(float *)(param_1 + 0x1b0) = fVar51;
          if (3.1414928 <= fVar51) {
            fVar47 = 3.7699115;
          }
          else {
            fVar47 = 0.01;
            if (0.01 < fVar51) {
              auVar83._4_4_ = fVar51;
              auVar83._0_4_ = fVar51;
              auVar83._8_4_ = fVar51;
              auVar83._12_4_ = fVar51;
              iVar61 = (int)(ABS(fVar51) * 1.2732395) + 1;
              iVar66 = (int)(ABS(fVar51) * 1.2732395) + 1;
              uVar67 = (int)(ABS(fVar51) * 1.2732395) + 1;
              uVar68 = (int)(ABS(fVar51) * 1.2732395) + 1;
              auVar94._0_8_ = CONCAT44(iVar66,iVar61) & 0xfffffffefffffffe;
              auVar94._8_4_ = uVar67 & 0xfffffffe;
              auVar94._12_4_ = uVar68 & 0xfffffffe;
              auVar104._8_4_ = 0xffffffe1;
              auVar104._0_8_ = 0xffffffe1ffffffe1;
              auVar104._12_4_ = 0xffffffe1;
              auVar57 = NEON_sshl(auVar83,auVar104,4);
              auVar83 = NEON_scvtf(auVar94,4);
              fVar47 = auVar83._0_4_;
              fVar54 = auVar83._4_4_;
              fVar58 = auVar83._8_4_;
              fVar59 = auVar83._12_4_;
              fVar47 = ABS(fVar51) + fVar47 * -0.78515625 + fVar47 * -0.00024187565 +
                       fVar47 * -3.774895e-08;
              fVar54 = ABS(fVar51) + fVar54 * -0.78515625 + fVar54 * -0.00024187565 +
                       fVar54 * -3.774895e-08;
              fVar58 = ABS(fVar51) + fVar58 * -0.78515625 + fVar58 * -0.00024187565 +
                       fVar58 * -3.774895e-08;
              fVar59 = ABS(fVar51) + fVar59 * -0.78515625 + fVar59 * -0.00024187565 +
                       fVar59 * -3.774895e-08;
              fVar60 = fVar47 * fVar47;
              fVar42 = fVar54 * fVar54;
              fVar43 = fVar58 * fVar58;
              fVar44 = fVar59 * fVar59;
              bVar15 = (byte)iVar61;
              uVar62 = CONCAT14((char)iVar66,(uint)(bVar15 & 2)) & 0x2ffffffff;
              auVar93._0_4_ = -(uint)((int)uVar62 == 0);
              auVar93._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
              auVar93._8_4_ = -(uint)((uVar67 & 2) == 0);
              auVar93._12_4_ = -(uint)((uVar68 & 2) == 0);
              auVar104 = NEON_fmov(0x3f800000,4);
              auVar102._0_4_ =
                   fVar60 * fVar60 * (fVar60 * (fVar60 * 2.4433157e-05 + -0.0013887316) +
                                     0.041666646) + fVar60 * -0.5 + auVar104._0_4_;
              auVar102._4_4_ =
                   fVar42 * fVar42 * (fVar42 * (fVar42 * 2.4433157e-05 + -0.0013887316) +
                                     0.041666646) + fVar42 * -0.5 + auVar104._4_4_;
              auVar102._8_4_ =
                   fVar43 * fVar43 * (fVar43 * (fVar43 * 2.4433157e-05 + -0.0013887316) +
                                     0.041666646) + fVar43 * -0.5 + auVar104._8_4_;
              auVar102._12_4_ =
                   fVar44 * fVar44 * (fVar44 * (fVar44 * 2.4433157e-05 + -0.0013887316) +
                                     0.041666646) + fVar44 * -0.5 + auVar104._12_4_;
              auVar84._0_4_ =
                   fVar47 + fVar47 * fVar60 * (fVar60 * (fVar60 * -0.00019515296 + 0.008332161) +
                                              -0.16666655);
              auVar84._4_4_ =
                   fVar54 + fVar54 * fVar42 * (fVar42 * (fVar42 * -0.00019515296 + 0.008332161) +
                                              -0.16666655);
              auVar84._8_4_ =
                   fVar58 + fVar58 * fVar43 * (fVar43 * (fVar43 * -0.00019515296 + 0.008332161) +
                                              -0.16666655);
              auVar84._12_4_ =
                   fVar59 + fVar59 * fVar44 * (fVar44 * (fVar44 * -0.00019515296 + 0.008332161) +
                                              -0.16666655);
              auVar83 = NEON_fmin(auVar102 ^ (auVar102 ^ auVar84) & auVar93,auVar104,4);
              uVar62 = CONCAT14((char)(auVar94._0_8_ >> 0x20) + '\x02',
                                (uint)((char)auVar94._0_8_ + 2U & 2)) & 0x2ffffffff;
              auVar80._0_4_ = -(uint)((int)uVar62 == 0);
              auVar80._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
              auVar80._8_4_ = -(uint)(((char)auVar94._8_4_ + 2U & 2) == 0);
              auVar80._12_4_ = -(uint)(((char)auVar94._12_4_ + 2U & 2) == 0);
              auVar93 = NEON_fmin(auVar102 ^ (auVar102 ^ auVar84) & auVar80,auVar104,4);
              fVar47 = (float)CONCAT13((byte)(((uint)(bVar15 & 4) << 0x1d) >> 0x18) ^
                                       (byte)((uint)(auVar57._0_4_ << 0x1f) >> 0x18) ^ auVar83[3],
                                       auVar83._0_3_) *
                       SQRT(2.0 / ((float)CONCAT13((byte)(((uint)(1U - (char)auVar94._0_8_ & 4) <<
                                                          0x1d) >> 0x18) ^ auVar93[3],auVar93._0_3_)
                                  + 1.0));
            }
          }
          *(undefined1 *)(param_1 + 0x1a4) = 1;
          *(float *)(param_1 + 0x1bc) = fVar47;
          fVar41 = fVar51 / (fVar41 + 1.1920929e-07);
          fVar54 = fVar41 + -1.0;
          fVar47 = 0.0;
          if (1.0 <= fVar41) {
            fVar47 = fVar54 + fVar54;
          }
          fVar51 = fVar51 * 1.1;
          *(float *)((long)&local_140 + (ulong)(fVar40 <= fVar50) * 4) =
               fVar51 + ((fVar51 * 1.2 + (float)(&DAT_03cb55a8)[0.0 < fVar51]) - fVar51) * fVar47;
          fVar47 = (float)local_140;
        }
        if (3.1414928 <= fVar47) {
          fVar41 = 3.7699115;
        }
        else {
          fVar41 = 0.01;
          if (0.01 < fVar47) {
            auVar65._4_4_ = fVar47;
            auVar65._0_4_ = fVar47;
            auVar65._8_4_ = fVar47;
            auVar65._12_4_ = fVar47;
            iVar61 = (int)(ABS(fVar47) * 1.2732395) + 1;
            iVar66 = (int)(ABS(fVar47) * 1.2732395) + 1;
            uVar67 = (int)(ABS(fVar47) * 1.2732395) + 1;
            uVar68 = (int)(ABS(fVar47) * 1.2732395) + 1;
            auVar85._0_8_ = CONCAT44(iVar66,iVar61) & 0xfffffffefffffffe;
            auVar85._8_4_ = uVar67 & 0xfffffffe;
            auVar85._12_4_ = uVar68 & 0xfffffffe;
            auVar95._8_4_ = 0xffffffe1;
            auVar95._0_8_ = 0xffffffe1ffffffe1;
            auVar95._12_4_ = 0xffffffe1;
            auVar57 = NEON_sshl(auVar65,auVar95,4);
            auVar83 = NEON_scvtf(auVar85,4);
            fVar41 = auVar83._0_4_;
            fVar51 = auVar83._4_4_;
            fVar54 = auVar83._8_4_;
            fVar58 = auVar83._12_4_;
            fVar41 = ABS(fVar47) + fVar41 * -0.78515625 + fVar41 * -0.00024187565 +
                     fVar41 * -3.774895e-08;
            fVar51 = ABS(fVar47) + fVar51 * -0.78515625 + fVar51 * -0.00024187565 +
                     fVar51 * -3.774895e-08;
            fVar54 = ABS(fVar47) + fVar54 * -0.78515625 + fVar54 * -0.00024187565 +
                     fVar54 * -3.774895e-08;
            fVar47 = ABS(fVar47) + fVar58 * -0.78515625 + fVar58 * -0.00024187565 +
                     fVar58 * -3.774895e-08;
            fVar58 = fVar41 * fVar41;
            fVar59 = fVar51 * fVar51;
            fVar60 = fVar54 * fVar54;
            fVar42 = fVar47 * fVar47;
            bVar15 = (byte)iVar61;
            uVar62 = CONCAT14((char)iVar66,(uint)(bVar15 & 2)) & 0x2ffffffff;
            auVar70._0_4_ = -(uint)((int)uVar62 == 0);
            auVar70._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar70._8_4_ = -(uint)((uVar67 & 2) == 0);
            auVar70._12_4_ = -(uint)((uVar68 & 2) == 0);
            auVar93 = NEON_fmov(0x3f800000,4);
            auVar96._0_4_ =
                 fVar58 * fVar58 * (fVar58 * (fVar58 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar58 * -0.5 + auVar93._0_4_;
            auVar96._4_4_ =
                 fVar59 * fVar59 * (fVar59 * (fVar59 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar59 * -0.5 + auVar93._4_4_;
            auVar96._8_4_ =
                 fVar60 * fVar60 * (fVar60 * (fVar60 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar60 * -0.5 + auVar93._8_4_;
            auVar96._12_4_ =
                 fVar42 * fVar42 * (fVar42 * (fVar42 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar42 * -0.5 + auVar93._12_4_;
            auVar75._0_4_ =
                 fVar41 + fVar41 * fVar58 * (fVar58 * (fVar58 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar75._4_4_ =
                 fVar51 + fVar51 * fVar59 * (fVar59 * (fVar59 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar75._8_4_ =
                 fVar54 + fVar54 * fVar60 * (fVar60 * (fVar60 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar75._12_4_ =
                 fVar47 + fVar47 * fVar42 * (fVar42 * (fVar42 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar83 = NEON_fmin(auVar96 ^ (auVar96 ^ auVar75) & auVar70,auVar93,4);
            uVar62 = CONCAT14((char)(auVar85._0_8_ >> 0x20) + '\x02',
                              (uint)((char)auVar85._0_8_ + 2U & 2)) & 0x2ffffffff;
            auVar71._0_4_ = -(uint)((int)uVar62 == 0);
            auVar71._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar71._8_4_ = -(uint)(((char)auVar85._8_4_ + 2U & 2) == 0);
            auVar71._12_4_ = -(uint)(((char)auVar85._12_4_ + 2U & 2) == 0);
            auVar93 = NEON_fmin(auVar96 ^ (auVar96 ^ auVar75) & auVar71,auVar93,4);
            fVar41 = (float)CONCAT13((byte)(((uint)(bVar15 & 4) << 0x1d) >> 0x18) ^
                                     (byte)((uint)(auVar57._0_4_ << 0x1f) >> 0x18) ^ auVar83[3],
                                     auVar83._0_3_) *
                     SQRT(2.0 / ((float)CONCAT13((byte)(((uint)(1U - (char)auVar85._0_8_ & 4) <<
                                                        0x1d) >> 0x18) ^ auVar93[3],auVar93._0_3_) +
                                1.0));
          }
        }
        *(float *)(param_1 + 0x1b4) = fVar41;
        if (3.1414928 <= local_140._4_4_) {
          fVar47 = 3.7699115;
        }
        else {
          fVar47 = 0.01;
          if (0.01 < local_140._4_4_) {
            auVar72._4_4_ = local_140._4_4_;
            auVar72._0_4_ = local_140._4_4_;
            auVar72._8_4_ = local_140._4_4_;
            auVar72._12_4_ = local_140._4_4_;
            iVar61 = (int)(ABS(local_140._4_4_) * 1.2732395) + 1;
            iVar66 = (int)(ABS(local_140._4_4_) * 1.2732395) + 1;
            uVar67 = (int)(ABS(local_140._4_4_) * 1.2732395) + 1;
            uVar68 = (int)(ABS(local_140._4_4_) * 1.2732395) + 1;
            auVar90._0_8_ = CONCAT44(iVar66,iVar61) & 0xfffffffefffffffe;
            auVar90._8_4_ = uVar67 & 0xfffffffe;
            auVar90._12_4_ = uVar68 & 0xfffffffe;
            auVar99._8_4_ = 0xffffffe1;
            auVar99._0_8_ = 0xffffffe1ffffffe1;
            auVar99._12_4_ = 0xffffffe1;
            auVar57 = NEON_sshl(auVar72,auVar99,4);
            auVar83 = NEON_scvtf(auVar90,4);
            fVar47 = auVar83._0_4_;
            fVar51 = auVar83._4_4_;
            fVar54 = auVar83._8_4_;
            fVar58 = auVar83._12_4_;
            fVar47 = ABS(local_140._4_4_) + fVar47 * -0.78515625 + fVar47 * -0.00024187565 +
                     fVar47 * -3.774895e-08;
            fVar51 = ABS(local_140._4_4_) + fVar51 * -0.78515625 + fVar51 * -0.00024187565 +
                     fVar51 * -3.774895e-08;
            fVar54 = ABS(local_140._4_4_) + fVar54 * -0.78515625 + fVar54 * -0.00024187565 +
                     fVar54 * -3.774895e-08;
            fVar58 = ABS(local_140._4_4_) + fVar58 * -0.78515625 + fVar58 * -0.00024187565 +
                     fVar58 * -3.774895e-08;
            fVar59 = fVar47 * fVar47;
            fVar60 = fVar51 * fVar51;
            fVar42 = fVar54 * fVar54;
            fVar43 = fVar58 * fVar58;
            bVar15 = (byte)iVar61;
            uVar62 = CONCAT14((char)iVar66,(uint)(bVar15 & 2)) & 0x2ffffffff;
            auVar76._0_4_ = -(uint)((int)uVar62 == 0);
            auVar76._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar76._8_4_ = -(uint)((uVar67 & 2) == 0);
            auVar76._12_4_ = -(uint)((uVar68 & 2) == 0);
            auVar93 = NEON_fmov(0x3f800000,4);
            auVar100._0_4_ =
                 fVar59 * fVar59 * (fVar59 * (fVar59 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar59 * -0.5 + auVar93._0_4_;
            auVar100._4_4_ =
                 fVar60 * fVar60 * (fVar60 * (fVar60 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar60 * -0.5 + auVar93._4_4_;
            auVar100._8_4_ =
                 fVar42 * fVar42 * (fVar42 * (fVar42 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar42 * -0.5 + auVar93._8_4_;
            auVar100._12_4_ =
                 fVar43 * fVar43 * (fVar43 * (fVar43 * 2.4433157e-05 + -0.0013887316) + 0.041666646)
                 + fVar43 * -0.5 + auVar93._12_4_;
            auVar81._0_4_ =
                 fVar47 + fVar47 * fVar59 * (fVar59 * (fVar59 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar81._4_4_ =
                 fVar51 + fVar51 * fVar60 * (fVar60 * (fVar60 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar81._8_4_ =
                 fVar54 + fVar54 * fVar42 * (fVar42 * (fVar42 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar81._12_4_ =
                 fVar58 + fVar58 * fVar43 * (fVar43 * (fVar43 * -0.00019515296 + 0.008332161) +
                                            -0.16666655);
            auVar83 = NEON_fmin(auVar100 ^ (auVar100 ^ auVar81) & auVar76,auVar93,4);
            uVar62 = CONCAT14((char)(auVar90._0_8_ >> 0x20) + '\x02',
                              (uint)((char)auVar90._0_8_ + 2U & 2)) & 0x2ffffffff;
            auVar77._0_4_ = -(uint)((int)uVar62 == 0);
            auVar77._4_4_ = -(uint)((char)(uVar62 >> 0x20) == '\0');
            auVar77._8_4_ = -(uint)(((char)auVar90._8_4_ + 2U & 2) == 0);
            auVar77._12_4_ = -(uint)(((char)auVar90._12_4_ + 2U & 2) == 0);
            auVar93 = NEON_fmin(auVar100 ^ (auVar100 ^ auVar81) & auVar77,auVar93,4);
            fVar47 = (float)CONCAT13((byte)(((uint)(bVar15 & 4) << 0x1d) >> 0x18) ^
                                     (byte)((uint)(auVar57._0_4_ << 0x1f) >> 0x18) ^ auVar83[3],
                                     auVar83._0_3_) *
                     SQRT(2.0 / ((float)CONCAT13((byte)(((uint)(1U - (char)auVar90._0_8_ & 4) <<
                                                        0x1d) >> 0x18) ^ auVar93[3],auVar93._0_3_) +
                                1.0));
          }
        }
        *(float *)(param_1 + 0x1b8) = fVar47;
        *(float *)(param_1 + 0x1c0) = 1.0 / fVar41;
        fVar47 = 1.0 / fVar47;
LAB_02f14370:
        *(float *)(param_1 + 0x1c4) = fVar47;
      }
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar61 = uVar67 + 0x30;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      puVar12 = PTR_DAT_047d1a08;
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar61) {
        uVar68 = uVar67 + 0x2f | (int)(uVar67 + 0x2f) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar61) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar34 = 0;
          if (*plVar1 != 0) {
            lVar34 = *plVar1 + (long)plVar1;
          }
          (**(code **)(puVar12 + 8))(0,lVar34,0);
        }
        lVar34 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar34 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar34;
        *puVar2 = uVar68 | 0x80000000;
        fVar40 = *(float *)(param_1 + 0x1a8);
        fVar50 = *(float *)(param_1 + 0x1ac);
      }
      else {
        lVar34 = *plVar1;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x1a0);
      puVar3 = (undefined4 *)((long)plVar1 + (int)uVar67 + lVar34);
      uVar8 = *(undefined4 *)(param_1 + 0x1a4);
      *(uint *)(param_1 + 0x324) = uVar67;
      *(int *)(param_1 + 0x3f8) = iVar61;
      puVar3[2] = fVar40;
      puVar3[3] = fVar50;
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x1b8);
      uVar8 = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x1b0);
      puVar3[6] = uVar7;
      puVar3[7] = uVar8;
      uVar7 = *(undefined4 *)(param_1 + 0x1c8);
      uVar8 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_1 + 0x1c0);
      puVar3[10] = uVar7;
      puVar3[0xb] = uVar8;
      *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x3ec);
      iVar61 = *(int *)(param_1 + 0x304);
      *(int *)(param_1 + 0x3e4) = iVar61;
      *(int *)(param_1 + 0x304) = iVar61 + 2;
      *(int *)(param_1 + 1000) = iVar61 + 1;
      if (fVar86 != 0.0 || fVar87 != 0.0) {
        FUN_02f15150(param_1,param_1 + 0x50,0x13);
      }
    }
  }
  else {
    uStack_138 = 0xbf800000bf800000;
    local_140 = CONCAT26(local_140._6_2_,0x3020100000d);
    FUN_02f15350(param_1,&local_140,0x10);
  }
  cVar16 = *(char *)(param_1 + 0x30) == '\x02';
  cVar28 = '\x02';
  if (!(bool)cVar16) {
    cVar28 = '\x01';
  }
  if (*(char *)(param_1 + 0x31) == '\x02') {
    cVar16 = cVar28;
  }
  if (*(char *)(param_1 + 0x32) == '\x02') {
    cVar16 = cVar16 + '\x01';
  }
  if (*(float *)(param_1 + 0x1e4) == 0.0) {
    if ((cVar16 == '\x03') || (*(float *)(param_1 + 0x1ec) < 0.0)) {
LAB_02f12b94:
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar61 = uVar67 + 0x10;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      puVar12 = PTR_DAT_047d1a08;
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar61) {
        uVar68 = uVar67 + 0xf | (int)(uVar67 + 0xf) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar61) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar34 = 0;
          if (*plVar1 != 0) {
            lVar34 = *plVar1 + (long)plVar1;
          }
          (**(code **)(puVar12 + 8))(0,lVar34,0);
        }
        lVar34 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar34 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar34;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar34 = *plVar1;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x2f8);
      puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar34);
      *(int *)(param_1 + 0x3f8) = iVar61;
      uVar8 = *(undefined4 *)(param_1 + 0x2fc);
      *(uint *)(param_1 + 0x32c) = uVar67;
      *puVar20 = *(undefined8 *)(param_1 + 0x2f0);
      *(undefined4 *)(puVar20 + 1) = uVar7;
      *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
      iVar61 = *(int *)(param_1 + 0x304);
      *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
      *(int *)(param_1 + 0x3a0) = iVar61;
      *(int *)(param_1 + 0x3a4) = iVar61 + 1;
      *(int *)(param_1 + 0x304) = iVar61 + 3;
      *(int *)(param_1 + 0x3a8) = iVar61 + 2;
      goto LAB_02f1318c;
    }
  }
  else if (cVar16 == '\x03') goto LAB_02f12b94;
  lVar34 = 0;
  lVar37 = 0;
  lVar39 = 0x3cc;
  do {
    if ((*(char *)(param_1 + lVar37 + 0x30) != '\x02') &&
       (lVar38 = param_1 + lVar34, *(char *)(lVar38 + 0x292) != '\0')) {
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar61 = uVar67 + 0x20;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar61) {
        uVar68 = uVar67 + 0x1f | (int)(uVar67 + 0x1f) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar61) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar36 = 0;
          if (*plVar1 != 0) {
            lVar36 = *plVar1 + (long)plVar1;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar36,0);
        }
        lVar36 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar36 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar36;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar36 = *plVar1;
      }
      *(int *)(param_1 + 0x3f8) = iVar61;
      puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar36);
      *(uint *)(param_1 + lVar37 * 4 + 0x348) = uVar67;
      uVar7 = *(undefined4 *)(lVar38 + 0x298);
      uVar8 = *(undefined4 *)(lVar38 + 0x29c);
      *puVar20 = *(undefined8 *)(lVar38 + 0x290);
      *(undefined4 *)(puVar20 + 1) = uVar7;
      *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
      uVar7 = *(undefined4 *)(lVar38 + 0x2a8);
      uVar8 = *(undefined4 *)(lVar38 + 0x2ac);
      puVar20[2] = *(undefined8 *)(lVar38 + 0x2a0);
      *(undefined4 *)(puVar20 + 3) = uVar7;
      *(undefined4 *)((long)puVar20 + 0x1c) = uVar8;
      piVar26 = (int *)(param_1 + lVar39);
      piVar26[-0x14] = *(int *)(param_1 + 0x3ec);
      iVar61 = *(int *)(param_1 + 0x304);
      piVar26[-1] = iVar61;
      *(int *)(param_1 + 0x304) = iVar61 + 2;
      *piVar26 = iVar61 + 1;
    }
    lVar34 = lVar34 + 0x20;
    lVar37 = lVar37 + 1;
    lVar39 = lVar39 + 8;
  } while (lVar34 != 0x60);
  uVar67 = *(uint *)(param_1 + 0x3f8);
  iVar61 = uVar67 + 0x30;
  *(uint *)(param_1 + 0x3ec) = uVar67;
  uVar68 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *puVar2 = uVar67;
    uVar68 = uVar67;
  }
  uVar9 = uVar68 & 0x7fffffff;
  if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
    uVar9 = uVar67;
  }
  if ((int)uVar9 < iVar61) {
    uVar68 = uVar67 + 0x2f | (int)(uVar67 + 0x2f) >> 0x10;
    uVar68 = uVar68 | (int)uVar68 >> 8;
    uVar68 = uVar68 | (int)uVar68 >> 4;
    uVar68 = uVar68 | (int)uVar68 >> 2;
    uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
    if ((int)uVar68 < iVar61) {
LAB_02f144f0:
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_140 = (long)(int)uVar68;
    pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
    pvVar35 = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
    }
    memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
    if (*(int *)(param_1 + 0x3fc) < 0) {
      lVar34 = 0;
      if (*plVar1 != 0) {
        lVar34 = *plVar1 + (long)plVar1;
      }
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar34,0);
    }
    lVar34 = 0;
    if (pvVar18 != (void *)0x0) {
      lVar34 = (long)pvVar18 - (long)plVar1;
    }
    *plVar1 = lVar34;
    *puVar2 = uVar68 | 0x80000000;
  }
  else {
    lVar34 = *plVar1;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x1d8);
  puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar34);
  *(uint *)(param_1 + 0x328) = uVar67;
  uVar8 = *(undefined4 *)(param_1 + 0x1dc);
  *(int *)(param_1 + 0x3f8) = iVar61;
  *puVar20 = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined4 *)(puVar20 + 1) = uVar7;
  *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
  uVar7 = *(undefined4 *)(param_1 + 0x1e8);
  uVar8 = *(undefined4 *)(param_1 + 0x1ec);
  puVar20[2] = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined4 *)(puVar20 + 3) = uVar7;
  *(undefined4 *)((long)puVar20 + 0x1c) = uVar8;
  uVar7 = *(undefined4 *)(param_1 + 0x1f8);
  uVar8 = *(undefined4 *)(param_1 + 0x1fc);
  puVar20[4] = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined4 *)(puVar20 + 5) = uVar7;
  *(undefined4 *)((long)puVar20 + 0x2c) = uVar8;
  iVar66 = *(int *)(param_1 + 0x304);
  lVar39 = 0;
  lVar34 = 0;
  iVar61 = 7;
  lVar37 = 0x30;
  lVar38 = 0x330;
  lVar36 = 0x37c;
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x3ec);
  *(int *)(param_1 + 0x304) = iVar66 + 1;
  *(int *)(param_1 + 0x3ac) = iVar66;
  do {
    if (*(char *)(param_1 + lVar37) == '\x01') {
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar66 = uVar67 + 0x20;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar66) {
        uVar68 = uVar67 + 0x1f | (int)(uVar67 + 0x1f) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar66) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar21 = 0;
          if (*plVar1 != 0) {
            lVar21 = *plVar1 + (long)plVar1;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar21,0);
        }
        lVar21 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar21 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar21;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar21 = *plVar1;
      }
      *(int *)(param_1 + 0x3f8) = iVar66;
      puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar21);
      *(uint *)(param_1 + lVar38) = uVar67;
      lVar21 = param_1 + lVar39;
      uVar7 = *(undefined4 *)(lVar21 + 0x208);
      uVar8 = *(undefined4 *)(lVar21 + 0x20c);
      *puVar20 = *(undefined8 *)(lVar21 + 0x200);
      *(undefined4 *)(puVar20 + 1) = uVar7;
      *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
      uVar7 = *(undefined4 *)(lVar21 + 0x218);
      iVar66 = *(int *)(lVar21 + 0x21c);
      puVar20[2] = *(undefined8 *)(lVar21 + 0x210);
      *(undefined4 *)(puVar20 + 3) = uVar7;
      piVar26 = (int *)((long)puVar20 + 0x1c);
LAB_02f12fd4:
      *piVar26 = iVar66;
      *(undefined4 *)(param_1 + lVar38 + 0x24) = *(undefined4 *)(param_1 + 0x3ec);
      iVar66 = *(int *)(param_1 + 0x304);
      *(int *)(param_1 + 0x304) = iVar66 + 1;
      *(int *)(param_1 + lVar38 + 0x70) = iVar66;
    }
    else if (*(char *)(param_1 + lVar37) == '\x02') {
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar66 = uVar67 + 0x10;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar66) {
        uVar68 = uVar67 + 0xf | (int)(uVar67 + 0xf) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar66) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar21 = 0;
          if (*plVar1 != 0) {
            lVar21 = *plVar1 + (long)plVar1;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar21,0);
        }
        lVar21 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar21 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar21;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar21 = *plVar1;
      }
      *(int *)(param_1 + 0x3f8) = iVar66;
      piVar26 = (int *)((long)plVar1 + (int)uVar67 + lVar21);
      *piVar26 = iVar61;
      piVar26[1] = -0x40800000;
      piVar26 = piVar26 + 2;
      iVar66 = -0x40800000;
      goto LAB_02f12fd4;
    }
    lVar21 = param_1 + lVar34;
    if ((*(float *)(lVar21 + 0x264) != 0.0) && (*(char *)(param_1 + lVar39 + 0x292) == '\0')) {
      uVar67 = *(uint *)(param_1 + 0x3f8);
      iVar66 = uVar67 + 0x10;
      *(uint *)(param_1 + 0x3ec) = uVar67;
      uVar68 = *(uint *)(param_1 + 0x3fc);
      if (*(uint *)(param_1 + 0x3fc) == 0) {
        *puVar2 = uVar67;
        uVar68 = uVar67;
      }
      uVar9 = uVar68 & 0x7fffffff;
      if ((int)(uVar68 & 0x7fffffff) <= (int)uVar67) {
        uVar9 = uVar67;
      }
      if ((int)uVar9 < iVar66) {
        uVar68 = uVar67 + 0xf | (int)(uVar67 + 0xf) >> 0x10;
        uVar68 = uVar68 | (int)uVar68 >> 8;
        uVar68 = uVar68 | (int)uVar68 >> 4;
        uVar68 = uVar68 | (int)uVar68 >> 2;
        uVar68 = (uVar68 | (int)uVar68 >> 1) + 1;
        if ((int)uVar68 < iVar66) goto LAB_02f144f0;
        local_140 = (long)(int)uVar68;
        pvVar18 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_140,0);
        pvVar35 = (void *)0x0;
        if (*(long *)(param_1 + 0x3f0) != 0) {
          pvVar35 = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar1);
        }
        memcpy(pvVar18,pvVar35,(long)*(int *)(param_1 + 0x3f8));
        if (*(int *)(param_1 + 0x3fc) < 0) {
          lVar22 = 0;
          if (*plVar1 != 0) {
            lVar22 = *plVar1 + (long)plVar1;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar22,0);
        }
        lVar22 = 0;
        if (pvVar18 != (void *)0x0) {
          lVar22 = (long)pvVar18 - (long)plVar1;
        }
        *plVar1 = lVar22;
        *puVar2 = uVar68 | 0x80000000;
      }
      else {
        lVar22 = *plVar1;
      }
      *(int *)(param_1 + 0x3f8) = iVar66;
      puVar20 = (undefined8 *)((long)plVar1 + (int)uVar67 + lVar22);
      *(uint *)(param_1 + lVar38 + 0xc) = uVar67;
      uVar7 = *(undefined4 *)(lVar21 + 0x268);
      uVar8 = *(undefined4 *)(lVar21 + 0x26c);
      *puVar20 = *(undefined8 *)(lVar21 + 0x260);
      *(undefined4 *)(puVar20 + 1) = uVar7;
      *(undefined4 *)((long)puVar20 + 0xc) = uVar8;
      puVar3 = (undefined4 *)(param_1 + lVar36);
      *puVar3 = *(undefined4 *)(param_1 + 0x3ec);
      iVar66 = *(int *)(param_1 + 0x304);
      puVar3[0x13] = iVar66;
      *(int *)(param_1 + 0x304) = iVar66 + 2;
      puVar3[0x14] = iVar66 + 1;
    }
    lVar34 = lVar34 + 0x10;
    lVar37 = lVar37 + 1;
    iVar61 = iVar61 + 0x10000;
    lVar39 = lVar39 + 0x20;
    lVar38 = lVar38 + 4;
    lVar36 = lVar36 + 8;
  } while (lVar34 != 0x30);
LAB_02f1318c:
  if (-1 < (int)*(uint *)(param_1 + 0x310)) {
    lVar37 = (ulong)*(uint *)(param_1 + 0x310) + *(long *)(param_1 + 0x3f0);
    lVar34 = 0;
    if (*(long *)(param_1 + 0x130) != 0) {
      lVar34 = (*(long *)(param_1 + 0x130) + param_1 + 0x130) - ((long)plVar1 + lVar37 + 0x40);
    }
    *(long *)((long)plVar1 + lVar37 + 0x40) = lVar34;
    lVar34 = 0;
    if (*(long *)(param_1 + 0x138) != 0) {
      lVar34 = (*(long *)(param_1 + 0x138) + param_1 + 0x138) - ((long)plVar1 + lVar37 + 0x48);
    }
    *(long *)((long)plVar1 + lVar37 + 0x48) = lVar34;
    lVar34 = 0;
    if (*(long *)(param_1 + 0x140) != 0) {
      lVar34 = ((param_1 + 0x140) - ((long)plVar1 + lVar37 + 0x50)) + *(long *)(param_1 + 0x140);
    }
    *(long *)((long)plVar1 + lVar37 + 0x50) = lVar34;
  }
  if (-1 < (int)*(uint *)(param_1 + 0x348)) {
    lVar37 = (ulong)*(uint *)(param_1 + 0x348) + *(long *)(param_1 + 0x3f0);
    lVar34 = 0;
    if (*(long *)(param_1 + 0x298) != 0) {
      lVar34 = (*(long *)(param_1 + 0x298) + param_1 + 0x298) - ((long)plVar1 + lVar37 + 8);
    }
    *(long *)((long)plVar1 + lVar37 + 8) = lVar34;
  }
  if (-1 < (int)*(uint *)(param_1 + 0x34c)) {
    lVar37 = (ulong)*(uint *)(param_1 + 0x34c) + *(long *)(param_1 + 0x3f0);
    lVar34 = 0;
    if (*(long *)(param_1 + 0x2b8) != 0) {
      lVar34 = (*(long *)(param_1 + 0x2b8) + param_1 + 0x2b8) - ((long)plVar1 + lVar37 + 8);
    }
    *(long *)((long)plVar1 + lVar37 + 8) = lVar34;
  }
  if (-1 < (int)*(uint *)(param_1 + 0x350)) {
    lVar37 = (ulong)*(uint *)(param_1 + 0x350) + *(long *)(param_1 + 0x3f0);
    lVar34 = 0;
    if (*(long *)(param_1 + 0x2d8) != 0) {
      lVar34 = (*(long *)(param_1 + 0x2d8) + param_1 + 0x2d8) - ((long)plVar1 + lVar37 + 8);
    }
    *(long *)((long)plVar1 + lVar37 + 8) = lVar34;
  }
  return 1;
}


