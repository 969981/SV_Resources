/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001bb240; name: FUN_001bb240
 */


undefined1 *
FUN_001bb240(undefined8 *param_1,float *param_2,uint *param_3,int *param_4,long param_5,int param_6,
            undefined1 *param_7,undefined8 param_8,undefined4 *param_9,int param_10,long *param_11,
            uint param_12,uint *param_13,int param_14)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  uint *puVar34;
  uint *puVar35;
  uint *puVar36;
  uint *puVar37;
  char *pcVar38;
  byte bVar39;
  uint *puVar40;
  uint *puVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  bool bVar45;
  undefined4 uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  long lVar86;
  long lVar87;
  ulong uVar88;
  undefined1 *puVar89;
  undefined8 uVar90;
  long lVar91;
  ulong uVar92;
  ulong uVar93;
  char *pcVar94;
  ulong uVar95;
  char *pcVar96;
  int iVar97;
  long lVar98;
  long lVar99;
  char *pcVar100;
  int iVar101;
  char cVar102;
  ulong uVar103;
  uint uVar104;
  byte *pbVar105;
  long lVar106;
  char *pcVar107;
  char *pcVar108;
  uint uVar109;
  undefined1 *puVar110;
  ulong uVar111;
  ulong uVar112;
  byte *pbVar113;
  ulong uVar114;
  char *pcVar115;
  int iVar116;
  undefined1 *puVar117;
  ulong uVar118;
  int *piVar119;
  int *__dest;
  ulong uVar120;
  long lVar121;
  undefined1 *puVar122;
  undefined1 *__dest_00;
  int *piVar123;
  undefined1 *puVar124;
  undefined8 uVar125;
  size_t __n;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined8 in_stack_fffffffffffff760;
  undefined4 uVar138;
  undefined8 in_stack_fffffffffffff768;
  undefined8 uVar139;
  ulong local_668;
  float local_65c;
  char *local_658 [4];
  char *local_638;
  char *local_630;
  char *local_628;
  char *local_620;
  char *local_618;
  char *local_610;
  char *local_608;
  char *local_600;
  char *local_5f8;
  char *local_5f0;
  char *local_5e8;
  char *local_5e0;
  char *local_5d8;
  char *local_5d0;
  char *local_5c8;
  char *local_5c0;
  char *local_5b8;
  char *local_5b0;
  char *local_5a8;
  char *local_5a0;
  char *local_598;
  char *local_590;
  char *local_588;
  char *local_580;
  char *local_578;
  char *local_570;
  char *local_568;
  char *local_560;
  ulong local_558 [4];
  ulong local_538;
  ulong local_530;
  ulong local_528;
  ulong local_520;
  ulong local_518;
  ulong local_510;
  ulong local_508;
  ulong local_500;
  ulong local_4f8;
  ulong local_4f0;
  ulong local_4e8;
  ulong local_4e0;
  undefined8 local_4d8;
  ulong local_4d0;
  ulong local_4c8;
  ulong local_4c0;
  ulong local_4b8;
  ulong local_4b0;
  ulong local_4a8;
  ulong local_4a0;
  float local_d8;
  uint local_d4;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  float local_b0;
  float local_ac [3];
  
  uVar138 = (undefined4)((ulong)in_stack_fffffffffffff760 >> 0x20);
  uVar46 = (undefined4)((ulong)in_stack_fffffffffffff768 >> 0x20);
  iVar97 = param_6 + (param_6 >> 4) + 0x100;
  uVar42 = param_9[0x12];
  uVar43 = param_9[1];
  fVar132 = (float)param_9[0x11];
  uVar118 = (ulong)param_12;
  lVar91 = *(long *)(param_9 + 2);
  *param_2 = 1.0737418e+09;
  uVar120 = param_11[2];
  uVar109 = *param_3;
  uVar92 = (ulong)uVar109;
  uVar93 = uVar120 & 0xffffffff;
  uVar125 = *param_1;
  FUN_00164c64(param_1 + 7,(long)iVar97,uVar125);
  pcVar94 = (char *)param_1[7];
  puVar117 = param_7;
  if (0 < (int)param_12) {
    uVar95 = uVar118 & 3;
    if (uVar118 - 1 < 3) {
      lVar98 = 0;
    }
    else {
      lVar98 = 0;
      do {
        puVar117 = (undefined1 *)(param_5 + lVar98);
        puVar110 = param_7 + lVar98;
        lVar98 = lVar98 + 4;
        *puVar110 = *puVar117;
        puVar110[1] = puVar117[1];
        puVar110[2] = puVar117[2];
        puVar110[3] = puVar117[3];
      } while (uVar118 - uVar95 != lVar98);
      puVar117 = param_7 + lVar98;
    }
    if ((param_12 & 3) != 0) {
      puVar110 = (undefined1 *)(param_5 + lVar98);
      puVar124 = puVar117;
      do {
        uVar95 = uVar95 - 1;
        puVar117 = puVar124 + 1;
        *puVar124 = *puVar110;
        puVar110 = puVar110 + 1;
        puVar124 = puVar117;
      } while (uVar95 != 0);
    }
  }
  local_b0 = 1.0737418e+09;
  local_ac[0] = 1.0737418e+09;
  iVar101 = (int)uVar120;
  iVar116 = iVar101;
  if (param_6 / 3 <= iVar101) {
    iVar116 = param_6 / 3;
  }
  iVar47 = iVar101 * 2;
  if (param_6 / 5 <= iVar101 * 2) {
    iVar47 = param_6 / 5;
  }
  FUN_0015c528(&local_d0,((long)iVar47 + (long)iVar116) * 5 + 0x10,uVar125,&local_b8);
  puVar110 = (undefined1 *)(local_b8 + iVar116);
  puVar124 = puVar110 + iVar47;
  uVar120 = (ulong)(puVar124 + 3) & 0xfffffffffffffffc;
  piVar1 = (int *)(uVar120 + (long)iVar116 * 4);
  piVar2 = piVar1 + iVar47;
  local_d4 = 0;
  puVar89 = puVar124;
  piVar123 = piVar2;
  if (iVar101 < 1) {
    iVar116 = 0;
    __dest = piVar1;
    __dest_00 = puVar110;
  }
  else {
    lVar98 = 0;
    iVar116 = 0;
    if (param_14 == 1) {
      uVar95 = uVar93;
      piVar119 = piVar1;
      puVar122 = puVar110;
      do {
        lVar86 = *param_11 + lVar98;
        if (0 < *(int *)(lVar86 + 0xc)) {
          *(int *)(uVar120 + (long)iVar116 * 4) = *(int *)(lVar86 + 0xc);
          iVar116 = iVar116 + 1;
        }
        iVar47 = *(int *)(lVar86 + 4);
        iVar48 = *(int *)(lVar86 + 8);
        iVar49 = iVar47 + -3;
        iVar50 = iVar48 + -9;
        __dest = piVar119;
        __dest_00 = puVar122;
        if (-1 < iVar49) {
          iVar51 = iVar49;
          if (0xfe < iVar49) {
            iVar51 = 0xff;
          }
          __dest_00 = puVar122 + 1;
          *puVar122 = (char)iVar51;
          if (0xfe < iVar49) {
            __dest = piVar119 + 1;
            *piVar119 = iVar47 + -0x102;
          }
        }
        if (-1 < iVar50) {
          iVar47 = iVar50;
          if (0xfe < iVar50) {
            iVar47 = 0xff;
          }
          puVar89 = puVar89 + -1;
          *puVar89 = (char)iVar47;
          if (0xfe < iVar50) {
            piVar123 = piVar123 + -1;
            *piVar123 = iVar48 + -0x108;
          }
        }
        lVar98 = lVar98 + 0x10;
        uVar95 = uVar95 - 1;
        piVar119 = __dest;
        puVar122 = __dest_00;
      } while (uVar95 != 0);
    }
    else {
      uVar95 = uVar93;
      piVar119 = piVar1;
      puVar122 = puVar110;
      do {
        lVar86 = *param_11 + lVar98;
        iVar47 = *(int *)(lVar86 + 0xc);
        if (0 < iVar47) {
          *(int *)(uVar120 + (long)iVar116 * 4) = iVar47;
          lVar87 = (long)iVar116;
          iVar116 = iVar116 + 1;
          bVar39 = 0xfU - (char)LZCOUNT(iVar47 + -0x7eff00) | 0xf0;
          if (iVar47 < 0x7fff08) {
            bVar39 = ((byte)(iVar47 + 0xf8) & 0xf) + (char)LZCOUNT(iVar47 + 0xf8) * -0x10 + 0x70;
          }
          *(byte *)(local_b8 + lVar87) = bVar39;
        }
        iVar47 = *(int *)(lVar86 + 4);
        iVar48 = *(int *)(lVar86 + 8);
        iVar49 = iVar47 + -3;
        iVar50 = iVar48 + -9;
        __dest = piVar119;
        __dest_00 = puVar122;
        if (-1 < iVar49) {
          iVar51 = iVar49;
          if (0xfe < iVar49) {
            iVar51 = 0xff;
          }
          __dest_00 = puVar122 + 1;
          *puVar122 = (char)iVar51;
          if (0xfe < iVar49) {
            __dest = piVar119 + 1;
            *piVar119 = iVar47 + -0x102;
          }
        }
        if (-1 < iVar50) {
          iVar47 = iVar50;
          if (0xfe < iVar50) {
            iVar47 = 0xff;
          }
          puVar89 = puVar89 + -1;
          *puVar89 = (char)iVar47;
          if (0xfe < iVar50) {
            piVar123 = piVar123 + -1;
            *piVar123 = iVar48 + -0x108;
          }
        }
        lVar98 = lVar98 + 0x10;
        uVar95 = uVar95 - 1;
        piVar119 = __dest;
        puVar122 = __dest_00;
      } while (uVar95 != 0);
    }
  }
  __n = (long)puVar124 - (long)puVar89;
  lVar98 = (long)__dest_00 - (long)puVar110;
  memmove(__dest_00,puVar89,__n);
  memmove(__dest,piVar123,(long)piVar2 - (long)piVar123);
  puVar41 = param_13 + 0x3403;
  puVar40 = param_13 + 0x3303;
  if (param_13 == (uint *)0x0) {
    puVar40 = (uint *)0x0;
    puVar41 = (uint *)0x0;
  }
  else {
    FUN_0015edc0(puVar110,lVar98,param_13 + 0x3202,0x100,0);
    FUN_0015edc0(__dest_00,__n,param_13 + 0x3102,0x100,0);
  }
  lVar86 = FUN_001c1e20(fVar132,0x53800000,puVar117,param_8,local_b8,uVar120,iVar116,uVar42,lVar91,
                        local_ac,CONCAT44(uVar138,param_14),CONCAT44(uVar46,1),&local_d4,uVar125,
                        uVar43,puVar40,puVar41);
  if (lVar86 < 0) {
LAB_001bd1c0:
    puVar124 = (undefined1 *)0xffffffffffffffff;
    goto joined_r0x001bd6dc;
  }
  uVar95 = lVar98 + __n;
  if (param_13 != (uint *)0x0) {
    param_13[0x3302] = local_d4;
  }
  uVar139 = 0;
  lVar98 = FUN_0017fa60(fVar132,puVar117 + lVar86,param_8,puVar110,uVar95,uVar42,lVar91,&local_b0,
                        uVar125,uVar43,0,lVar98);
  if (-1 < lVar98) {
    fVar126 = (float)(**(code **)(lVar91 + 0x30))(uVar95);
    uVar103 = (ulong)iVar101;
    uVar88 = (long)iVar116;
    if ((long)iVar116 <= (long)uVar95) {
      uVar88 = uVar95;
    }
    uVar112 = uVar92;
    if ((long)uVar92 <= (long)uVar103) {
      uVar112 = uVar103;
    }
    lVar87 = uVar92 + uVar103 + (long)(iVar116 << 2) + uVar95 * 4 + 0x20;
    if ((long)uVar88 <= (long)uVar112) {
      uVar88 = uVar112;
    }
    local_b0 = local_b0 + fVar132 * fVar126;
    puVar110 = (undefined1 *)(uVar95 + (long)(iVar116 << 1) + lVar87 + uVar88 + 0xc000);
    puVar124 = (undefined1 *)(long)param_6;
    if ((long)puVar110 <= (long)(puVar124 + lVar87)) {
      puVar110 = puVar124 + lVar87;
    }
    lVar87 = FUN_00151010(*param_9,puVar124);
    if (lVar87 < (long)(puVar110 + 0x1000)) {
      FUN_0015c3d0();
      if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
        (**(code **)PTR_PTR_047cb868)
                  (0,"v:\\devel\\projects\\oodle2\\core\\newlzhc.cpp",0x6f4,
                   "OODLE ERROR : newLZ chunk needs too much scratch for decoder!\n");
      }
      FUN_0015c3f0();
    }
    else {
      fVar126 = (float)uVar92 + 3.0;
      puVar117 = puVar117 + lVar86 + lVar98;
      local_d8 = 1.0737418e+09;
      if (uVar109 < 0x20) {
        *param_4 = 1;
        if (uVar109 != 0) {
          lVar98 = (long)(int)param_12;
          lVar86 = param_11[2];
          pcVar96 = pcVar94;
          if (0 < (int)lVar86) {
            lVar121 = 0;
            lVar87 = 0;
            lVar99 = *param_11;
            iVar47 = *(int *)(lVar99 + 4);
            while( true ) {
              if (iVar47 != 0) {
                memcpy(pcVar96,(void *)(param_5 + lVar98),(long)iVar47);
                pcVar96 = pcVar96 + iVar47;
                lVar86 = param_11[2];
              }
              lVar98 = lVar98 + (*(int *)(lVar99 + 8) + iVar47);
              lVar87 = lVar87 + 1;
              lVar121 = lVar121 + 0x10;
              if ((int)lVar86 <= lVar87) break;
              lVar99 = *param_11 + lVar121;
              iVar47 = *(int *)(lVar99 + 4);
            }
          }
          if (0 < (long)puVar124 - lVar98) {
            memcpy(pcVar96,(void *)(param_5 + lVar98),(long)(int)((long)puVar124 - lVar98));
          }
        }
        uVar46 = 0;
        lVar98 = FUN_00174a40(fVar132,0x53800000,puVar117,param_8,pcVar94,uVar92,uVar42,lVar91,
                              &local_d8,uVar125,uVar43,0);
        if (lVar98 < 0) goto joined_r0x001bd6dc;
        local_d8 = fVar126;
      }
      else {
        lVar98 = 0;
        do {
          lVar86 = lVar98 + 8;
          *(int *)((long)&local_4d8 + lVar98) =
               *(int *)((long)param_3 + lVar98 + 0x804) + *(int *)((long)param_3 + lVar98 + 0x404);
          *(int *)((long)&local_4d8 + lVar98 + 4) =
               *(int *)((long)param_3 + lVar98 + 0x808) + *(int *)((long)param_3 + lVar98 + 0x408);
          lVar98 = lVar86;
        } while (lVar86 != 0x400);
        if (param_13 != (uint *)0x0) {
          if (param_13 != param_3) {
            memcpy(param_13,param_3,0x9c04);
          }
          memcpy(param_13 + 0x2701,&local_4d8,0x400);
        }
        puVar40 = param_3 + 1;
        uVar46 = thunk_FUN_0015f210(puVar40,0x100);
        iVar47 = FUN_001845e0(puVar40,0x100,uVar46);
        uVar46 = thunk_FUN_0015f210(&local_4d8,0x100);
        iVar48 = FUN_001845e0(&local_4d8,0x100,uVar46);
        fVar127 = (float)(**(code **)(lVar91 + 0x48))(0x40c00000,0,0x80,0x14);
        puVar41 = param_3 + 0x101;
        fVar127 = fVar132 * fVar127;
        uVar46 = thunk_FUN_0015f210(puVar41,0x100);
        iVar49 = FUN_001845e0(puVar41,0x100,uVar46);
        uVar46 = thunk_FUN_0015f210(param_3 + 0x201,0x100);
        iVar50 = FUN_001845e0(param_3 + 0x201,0x100,uVar46);
        puVar4 = param_3 + 0x1301;
        uVar46 = thunk_FUN_0015f210(puVar4,0x100);
        iVar51 = FUN_001845e0(puVar4,0x100,uVar46);
        puVar5 = param_3 + 0x1401;
        uVar46 = thunk_FUN_0015f210(puVar5,0x100);
        iVar52 = FUN_001845e0(puVar5,0x100,uVar46);
        puVar6 = param_3 + 0x1501;
        uVar46 = thunk_FUN_0015f210(puVar6,0x100);
        iVar53 = FUN_001845e0(puVar6,0x100,uVar46);
        puVar7 = param_3 + 0x1601;
        uVar46 = thunk_FUN_0015f210(puVar7,0x100);
        iVar54 = FUN_001845e0(puVar7,0x100,uVar46);
        puVar8 = param_3 + 0x1701;
        fVar134 = fVar127 + (float)(iVar47 + 7U >> 3);
        uVar46 = thunk_FUN_0015f210(puVar8,0x100);
        iVar47 = FUN_001845e0(puVar8,0x100,uVar46);
        puVar9 = param_3 + 0x1801;
        uVar46 = thunk_FUN_0015f210(puVar9,0x100);
        iVar55 = FUN_001845e0(puVar9,0x100,uVar46);
        puVar10 = param_3 + 0x1901;
        uVar46 = thunk_FUN_0015f210(puVar10,0x100);
        iVar56 = FUN_001845e0(puVar10,0x100,uVar46);
        puVar11 = param_3 + 0x1a01;
        uVar46 = thunk_FUN_0015f210(puVar11,0x100);
        iVar57 = FUN_001845e0(puVar11,0x100,uVar46);
        puVar12 = param_3 + 0x1b01;
        uVar46 = thunk_FUN_0015f210(puVar12,0x100);
        iVar58 = FUN_001845e0(puVar12,0x100,uVar46);
        puVar13 = param_3 + 0x1c01;
        uVar46 = thunk_FUN_0015f210(puVar13,0x100);
        iVar59 = FUN_001845e0(puVar13,0x100,uVar46);
        puVar14 = param_3 + 0x1d01;
        uVar46 = thunk_FUN_0015f210(puVar14,0x100);
        iVar60 = FUN_001845e0(puVar14,0x100,uVar46);
        puVar15 = param_3 + 0x1e01;
        uVar46 = thunk_FUN_0015f210(puVar15,0x100);
        iVar61 = FUN_001845e0(puVar15,0x100,uVar46);
        puVar16 = param_3 + 0x1f01;
        uVar46 = thunk_FUN_0015f210(puVar16,0x100);
        iVar62 = FUN_001845e0(puVar16,0x100,uVar46);
        puVar17 = param_3 + 0x2001;
        uVar46 = thunk_FUN_0015f210(puVar17,0x100);
        iVar63 = FUN_001845e0(puVar17,0x100,uVar46);
        puVar18 = param_3 + 0x2101;
        uVar46 = thunk_FUN_0015f210(puVar18,0x100);
        iVar64 = FUN_001845e0(puVar18,0x100,uVar46);
        puVar19 = param_3 + 0x2201;
        uVar46 = thunk_FUN_0015f210(puVar19,0x100);
        iVar65 = FUN_001845e0(puVar19,0x100,uVar46);
        puVar20 = param_3 + 0x2301;
        uVar46 = thunk_FUN_0015f210(puVar20,0x100);
        iVar66 = FUN_001845e0(puVar20,0x100,uVar46);
        puVar21 = param_3 + 0x2401;
        uVar46 = thunk_FUN_0015f210(puVar21,0x100);
        iVar67 = FUN_001845e0(puVar21,0x100,uVar46);
        puVar22 = param_3 + 0x2501;
        uVar46 = thunk_FUN_0015f210(puVar22,0x100);
        iVar68 = FUN_001845e0(puVar22,0x100,uVar46);
        puVar23 = param_3 + 0x2601;
        uVar46 = thunk_FUN_0015f210(puVar23,0x100);
        iVar69 = FUN_001845e0(puVar23,0x100,uVar46);
        puVar3 = param_3 + 0x301;
        uVar46 = thunk_FUN_0015f210(puVar3,0x100);
        iVar70 = FUN_001845e0(puVar3,0x100,uVar46);
        puVar24 = param_3 + 0x401;
        uVar46 = thunk_FUN_0015f210(puVar24,0x100);
        iVar71 = FUN_001845e0(puVar24,0x100,uVar46);
        puVar25 = param_3 + 0x501;
        uVar46 = thunk_FUN_0015f210(puVar25,0x100);
        iVar72 = FUN_001845e0(puVar25,0x100,uVar46);
        puVar26 = param_3 + 0x601;
        uVar46 = thunk_FUN_0015f210(puVar26,0x100);
        iVar73 = FUN_001845e0(puVar26,0x100,uVar46);
        puVar27 = param_3 + 0x701;
        uVar46 = thunk_FUN_0015f210(puVar27,0x100);
        iVar74 = FUN_001845e0(puVar27,0x100,uVar46);
        puVar28 = param_3 + 0x801;
        uVar46 = thunk_FUN_0015f210(puVar28,0x100);
        iVar75 = FUN_001845e0(puVar28,0x100,uVar46);
        puVar29 = param_3 + 0x901;
        uVar46 = thunk_FUN_0015f210(puVar29,0x100);
        iVar76 = FUN_001845e0(puVar29,0x100,uVar46);
        puVar30 = param_3 + 0xa01;
        uVar46 = thunk_FUN_0015f210(puVar30,0x100);
        iVar77 = FUN_001845e0(puVar30,0x100,uVar46);
        puVar31 = param_3 + 0xb01;
        uVar46 = thunk_FUN_0015f210(puVar31,0x100);
        iVar78 = FUN_001845e0(puVar31,0x100,uVar46);
        puVar32 = param_3 + 0xc01;
        uVar46 = thunk_FUN_0015f210(puVar32,0x100);
        iVar79 = FUN_001845e0(puVar32,0x100,uVar46);
        puVar33 = param_3 + 0xd01;
        uVar46 = thunk_FUN_0015f210(puVar33,0x100);
        iVar80 = FUN_001845e0(puVar33,0x100,uVar46);
        puVar34 = param_3 + 0xe01;
        uVar46 = thunk_FUN_0015f210(puVar34,0x100);
        iVar81 = FUN_001845e0(puVar34,0x100,uVar46);
        puVar35 = param_3 + 0xf01;
        uVar46 = thunk_FUN_0015f210(puVar35,0x100);
        iVar82 = FUN_001845e0(puVar35,0x100,uVar46);
        puVar36 = param_3 + 0x1001;
        uVar46 = thunk_FUN_0015f210(puVar36,0x100);
        iVar83 = FUN_001845e0(puVar36,0x100,uVar46);
        puVar37 = param_3 + 0x1101;
        uVar46 = thunk_FUN_0015f210(puVar37,0x100);
        iVar84 = FUN_001845e0(puVar37,0x100,uVar46);
        param_3 = param_3 + 0x1201;
        uVar46 = thunk_FUN_0015f210(param_3,0x100);
        iVar85 = FUN_001845e0(param_3,0x100,uVar46);
        fVar128 = (float)(**(code **)(lVar91 + 0x98))(uVar92,0);
        fVar135 = fVar127 + (float)(iVar48 + 7U >> 3) + fVar132 * fVar128;
        fVar128 = (float)(**(code **)(lVar91 + 0x98))(uVar92,2);
        fVar133 = fVar127 + fVar127 + (float)((iVar50 + 7U >> 3) + (iVar49 + 7U >> 3)) +
                  fVar132 * fVar128;
        fVar128 = (float)(**(code **)(lVar91 + 0x98))(uVar92,3);
        fVar136 = fVar127 * 4.0 +
                  (float)((iVar52 + 7U >> 3) + (iVar51 + 7U >> 3) + (iVar53 + 7U >> 3) +
                         (iVar54 + 7U >> 3)) + fVar132 * fVar128;
        fVar128 = (float)(**(code **)(lVar91 + 0x98))(uVar92,5);
        fVar137 = fVar127 * 16.0 +
                  (float)((iVar55 + 7U >> 3) + (iVar47 + 7U >> 3) + (iVar56 + 7U >> 3) +
                          (iVar57 + 7U >> 3) + (iVar58 + 7U >> 3) + (iVar59 + 7U >> 3) +
                          (iVar60 + 7U >> 3) + (iVar61 + 7U >> 3) + (iVar62 + 7U >> 3) +
                          (iVar63 + 7U >> 3) + (iVar64 + 7U >> 3) + (iVar65 + 7U >> 3) +
                          (iVar66 + 7U >> 3) + (iVar67 + 7U >> 3) + (iVar68 + 7U >> 3) +
                         (iVar69 + 7U >> 3)) + fVar132 * fVar128;
        fVar128 = (float)(**(code **)(lVar91 + 0x98))(uVar92,4);
        uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
        fVar128 = fVar127 * 16.0 +
                  (float)((iVar71 + 7U >> 3) + (iVar70 + 7U >> 3) + (iVar72 + 7U >> 3) +
                          (iVar73 + 7U >> 3) + (iVar74 + 7U >> 3) + (iVar75 + 7U >> 3) +
                          (iVar76 + 7U >> 3) + (iVar77 + 7U >> 3) + (iVar78 + 7U >> 3) +
                          (iVar79 + 7U >> 3) + (iVar80 + 7U >> 3) + (iVar81 + 7U >> 3) +
                          (iVar82 + 7U >> 3) + (iVar83 + 7U >> 3) + (iVar84 + 7U >> 3) +
                         (iVar85 + 7U >> 3)) + fVar132 * fVar128;
        fVar127 = fVar133;
        if (fVar136 <= fVar133) {
          fVar127 = fVar136;
        }
        fVar131 = fVar137;
        if (fVar128 <= fVar137) {
          fVar131 = fVar128;
        }
        if (fVar131 <= fVar127) {
          fVar127 = fVar131;
        }
        fVar131 = fVar134;
        if (fVar135 <= fVar134 && param_14 != 1) {
          fVar131 = fVar135;
        }
        bVar45 = param_14 != 1;
        fVar44 = fVar128;
        if (bVar45) {
          fVar44 = fVar127;
        }
        fVar127 = 1.0737418e+09;
        if (bVar45) {
          fVar127 = fVar137;
        }
        fVar137 = 1.0737418e+09;
        if (bVar45) {
          fVar137 = fVar136;
        }
        fVar136 = 1.0737418e+09;
        if (bVar45) {
          fVar136 = fVar133;
        }
        fVar133 = 1.0737418e+09;
        if (bVar45) {
          fVar133 = fVar135;
        }
        if (fVar126 <= fVar44) {
          lVar98 = -1;
          if (fVar131 != fVar133) goto LAB_001bc59c;
LAB_001bcd7c:
          lVar87 = param_11[2];
          lVar86 = (long)(int)param_12;
          pcVar96 = pcVar94;
          if (0 < (int)lVar87) {
            lVar121 = 0;
            lVar106 = *param_11;
            iVar47 = *(int *)(lVar106 + 4);
            lVar99 = lVar106;
            while( true ) {
              uVar88 = (ulong)iVar47;
              if (iVar47 != 0) {
                pcVar115 = (char *)(param_5 + lVar86);
                lVar87 = -(long)*(int *)(lVar106 + lVar121 * 0x10);
                pcVar107 = pcVar96;
                uVar112 = uVar88;
                if (0xf < iVar47) {
                  uVar109 = ((uint)(uVar88 - 0x10 >> 4) & 0xfffffff) + 1;
                  if ((uVar109 & 3) != 0) {
                    lVar106 = -((ulong)uVar109 & 3);
                    pcVar100 = pcVar96;
                    pcVar108 = pcVar115;
                    do {
                      uVar90 = *(undefined8 *)(pcVar108 + lVar87 + 8);
                      uVar139 = *(undefined8 *)(pcVar108 + lVar87);
                      uVar112 = uVar112 - 0x10;
                      pcVar115 = pcVar108 + 0x10;
                      uVar130 = *(undefined8 *)(pcVar108 + 8);
                      uVar129 = *(undefined8 *)pcVar108;
                      pcVar107 = pcVar100 + 0x10;
                      *(ulong *)(pcVar100 + 8) =
                           CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                                    CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                             (char)((ulong)uVar90 >> 0x30),
                                             CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                      (char)((ulong)uVar90 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                               (char)((ulong)uVar90 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar130 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar90 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar130 >> 0x10) -
                                                  (char)((ulong)uVar90 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar130 >> 8) -
                                                           (char)((ulong)uVar90 >> 8),
                                                           (char)uVar130 - (char)uVar90)))))));
                      *(ulong *)pcVar100 =
                           CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                                    CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                             (char)((ulong)uVar139 >> 0x30),
                                             CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                      (char)((ulong)uVar139 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                               (char)((ulong)uVar139 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar129 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar139 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulong)
                                                  uVar129 >> 0x10) - (char)((ulong)uVar139 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar129 >> 8) -
                                                           (char)((ulong)uVar139 >> 8),
                                                           (char)uVar129 - (char)uVar139)))))));
                      bVar45 = lVar106 != -1;
                      lVar106 = lVar106 + 1;
                      pcVar100 = pcVar107;
                      pcVar108 = pcVar115;
                    } while (bVar45);
                  }
                  if (uVar88 - 0x10 < 0x30) {
                    uVar112 = uVar88 & 0xf;
                  }
                  else {
                    lVar106 = 0;
                    do {
                      pcVar100 = pcVar115 + lVar106 + lVar87;
                      pcVar108 = pcVar115 + lVar106;
                      uVar90 = *(undefined8 *)(pcVar100 + 8);
                      uVar139 = *(undefined8 *)pcVar100;
                      uVar130 = *(undefined8 *)(pcVar108 + 8);
                      uVar129 = *(undefined8 *)pcVar108;
                      pcVar38 = pcVar107 + lVar106;
                      lVar106 = lVar106 + 0x40;
                      uVar112 = uVar112 - 0x40;
                      *(ulong *)(pcVar38 + 8) =
                           CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                                    CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                             (char)((ulong)uVar90 >> 0x30),
                                             CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                      (char)((ulong)uVar90 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                               (char)((ulong)uVar90 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar130 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar90 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar130 >> 0x10) -
                                                  (char)((ulong)uVar90 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar130 >> 8) -
                                                           (char)((ulong)uVar90 >> 8),
                                                           (char)uVar130 - (char)uVar90)))))));
                      *(ulong *)pcVar38 =
                           CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                                    CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                             (char)((ulong)uVar139 >> 0x30),
                                             CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                      (char)((ulong)uVar139 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                               (char)((ulong)uVar139 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar129 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar139 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulong)
                                                  uVar129 >> 0x10) - (char)((ulong)uVar139 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar129 >> 8) -
                                                           (char)((ulong)uVar139 >> 8),
                                                           (char)uVar129 - (char)uVar139)))))));
                      uVar90 = *(undefined8 *)(pcVar100 + 0x18);
                      uVar139 = *(undefined8 *)(pcVar100 + 0x10);
                      uVar130 = *(undefined8 *)(pcVar108 + 0x18);
                      uVar129 = *(undefined8 *)(pcVar108 + 0x10);
                      *(ulong *)(pcVar38 + 0x18) =
                           CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                                    CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                             (char)((ulong)uVar90 >> 0x30),
                                             CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                      (char)((ulong)uVar90 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                               (char)((ulong)uVar90 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar130 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar90 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar130 >> 0x10) -
                                                  (char)((ulong)uVar90 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar130 >> 8) -
                                                           (char)((ulong)uVar90 >> 8),
                                                           (char)uVar130 - (char)uVar90)))))));
                      *(ulong *)(pcVar38 + 0x10) =
                           CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                                    CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                             (char)((ulong)uVar139 >> 0x30),
                                             CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                      (char)((ulong)uVar139 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                               (char)((ulong)uVar139 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar129 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar139 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulong)
                                                  uVar129 >> 0x10) - (char)((ulong)uVar139 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar129 >> 8) -
                                                           (char)((ulong)uVar139 >> 8),
                                                           (char)uVar129 - (char)uVar139)))))));
                      uVar90 = *(undefined8 *)(pcVar100 + 0x28);
                      uVar139 = *(undefined8 *)(pcVar100 + 0x20);
                      uVar130 = *(undefined8 *)(pcVar108 + 0x28);
                      uVar129 = *(undefined8 *)(pcVar108 + 0x20);
                      *(ulong *)(pcVar38 + 0x28) =
                           CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                                    CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                             (char)((ulong)uVar90 >> 0x30),
                                             CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                      (char)((ulong)uVar90 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                               (char)((ulong)uVar90 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar130 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar90 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar130 >> 0x10) -
                                                  (char)((ulong)uVar90 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar130 >> 8) -
                                                           (char)((ulong)uVar90 >> 8),
                                                           (char)uVar130 - (char)uVar90)))))));
                      *(ulong *)(pcVar38 + 0x20) =
                           CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                                    CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                             (char)((ulong)uVar139 >> 0x30),
                                             CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                      (char)((ulong)uVar139 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                               (char)((ulong)uVar139 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar129 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar139 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulong)
                                                  uVar129 >> 0x10) - (char)((ulong)uVar139 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar129 >> 8) -
                                                           (char)((ulong)uVar139 >> 8),
                                                           (char)uVar129 - (char)uVar139)))))));
                      uVar90 = *(undefined8 *)(pcVar100 + 0x38);
                      uVar139 = *(undefined8 *)(pcVar100 + 0x30);
                      uVar130 = *(undefined8 *)(pcVar108 + 0x38);
                      uVar129 = *(undefined8 *)(pcVar108 + 0x30);
                      *(ulong *)(pcVar38 + 0x38) =
                           CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                                    CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                             (char)((ulong)uVar90 >> 0x30),
                                             CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                      (char)((ulong)uVar90 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                               (char)((ulong)uVar90 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar130 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar90 >> 0x18
                                                                              ),CONCAT12((char)((
                                                  ulong)uVar130 >> 0x10) -
                                                  (char)((ulong)uVar90 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar130 >> 8) -
                                                           (char)((ulong)uVar90 >> 8),
                                                           (char)uVar130 - (char)uVar90)))))));
                      *(ulong *)(pcVar38 + 0x30) =
                           CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                                    CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                             (char)((ulong)uVar139 >> 0x30),
                                             CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                      (char)((ulong)uVar139 >> 0x28),
                                                      CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                               (char)((ulong)uVar139 >> 0x20),
                                                               CONCAT13((char)((ulong)uVar129 >>
                                                                              0x18) -
                                                                        (char)((ulong)uVar139 >>
                                                                              0x18),
                                                                        CONCAT12((char)((ulong)
                                                  uVar129 >> 0x10) - (char)((ulong)uVar139 >> 0x10),
                                                  CONCAT11((char)((ulong)uVar129 >> 8) -
                                                           (char)((ulong)uVar139 >> 8),
                                                           (char)uVar129 - (char)uVar139)))))));
                    } while (0xf < (long)uVar112);
                    pcVar115 = pcVar115 + lVar106;
                    pcVar107 = pcVar107 + lVar106;
                    uVar112 = uVar88 & 0xf;
                  }
                }
                if (uVar112 != 0) {
                  uVar114 = uVar112 - 1;
                  for (uVar111 = uVar112 & 3; uVar111 != 0; uVar111 = uVar111 - 1) {
                    uVar112 = uVar112 - 1;
                    *pcVar107 = *pcVar115 - pcVar115[lVar87];
                    pcVar107 = pcVar107 + 1;
                    pcVar115 = pcVar115 + 1;
                  }
                  if (2 < uVar114) {
                    pcVar115 = pcVar115 + 1;
                    do {
                      pcVar100 = pcVar115 + lVar87;
                      uVar112 = uVar112 - 4;
                      *pcVar107 = pcVar115[-1] - pcVar100[-1];
                      pcVar107[1] = *pcVar115 - *pcVar100;
                      pcVar107[2] = pcVar115[1] - pcVar100[1];
                      pcVar107[3] = pcVar115[2] - pcVar100[2];
                      pcVar115 = pcVar115 + 4;
                      pcVar107 = pcVar107 + 4;
                    } while (uVar112 != 0);
                  }
                }
                lVar87 = param_11[2];
                pcVar96 = pcVar96 + uVar88;
              }
              lVar86 = lVar86 + (*(int *)(lVar99 + 8) + iVar47);
              lVar121 = lVar121 + 1;
              if ((int)lVar87 <= lVar121) break;
              lVar106 = *param_11;
              lVar99 = lVar106 + lVar121 * 0x10;
              iVar47 = *(int *)(lVar99 + 4);
            }
          }
          uVar88 = (long)puVar124 - lVar86;
          if (0 < (long)uVar88) {
            uVar112 = (ulong)(int)uVar88;
            lVar87 = -(long)param_10;
            pcVar115 = (char *)(param_5 + lVar86);
            pcVar107 = pcVar96;
            pcVar100 = pcVar115;
            if (0xf00000000 < (long)(uVar88 << 0x20)) {
              do {
                uVar90 = *(undefined8 *)(pcVar100 + lVar87 + 8);
                uVar139 = *(undefined8 *)(pcVar100 + lVar87);
                uVar112 = uVar112 - 0x10;
                pcVar115 = pcVar100 + 0x10;
                uVar130 = *(undefined8 *)(pcVar100 + 8);
                uVar129 = *(undefined8 *)pcVar100;
                pcVar96 = pcVar107 + 0x10;
                *(ulong *)(pcVar107 + 8) =
                     CONCAT17((char)((ulong)uVar130 >> 0x38) - (char)((ulong)uVar90 >> 0x38),
                              CONCAT16((char)((ulong)uVar130 >> 0x30) -
                                       (char)((ulong)uVar90 >> 0x30),
                                       CONCAT15((char)((ulong)uVar130 >> 0x28) -
                                                (char)((ulong)uVar90 >> 0x28),
                                                CONCAT14((char)((ulong)uVar130 >> 0x20) -
                                                         (char)((ulong)uVar90 >> 0x20),
                                                         CONCAT13((char)((ulong)uVar130 >> 0x18) -
                                                                  (char)((ulong)uVar90 >> 0x18),
                                                                  CONCAT12((char)((ulong)uVar130 >>
                                                                                 0x10) -
                                                                           (char)((ulong)uVar90 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((ulong)
                                                  uVar130 >> 8) - (char)((ulong)uVar90 >> 8),
                                                  (char)uVar130 - (char)uVar90)))))));
                *(ulong *)pcVar107 =
                     CONCAT17((char)((ulong)uVar129 >> 0x38) - (char)((ulong)uVar139 >> 0x38),
                              CONCAT16((char)((ulong)uVar129 >> 0x30) -
                                       (char)((ulong)uVar139 >> 0x30),
                                       CONCAT15((char)((ulong)uVar129 >> 0x28) -
                                                (char)((ulong)uVar139 >> 0x28),
                                                CONCAT14((char)((ulong)uVar129 >> 0x20) -
                                                         (char)((ulong)uVar139 >> 0x20),
                                                         CONCAT13((char)((ulong)uVar129 >> 0x18) -
                                                                  (char)((ulong)uVar139 >> 0x18),
                                                                  CONCAT12((char)((ulong)uVar129 >>
                                                                                 0x10) -
                                                                           (char)((ulong)uVar139 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((ulong)
                                                  uVar129 >> 8) - (char)((ulong)uVar139 >> 8),
                                                  (char)uVar129 - (char)uVar139)))))));
                pcVar107 = pcVar96;
                pcVar100 = pcVar115;
              } while (0xf < (long)uVar112);
              uVar112 = uVar88 & 0xf;
            }
            if (uVar112 != 0) {
              uVar88 = uVar112;
              if ((uVar112 & 1) != 0) {
                cVar102 = *pcVar115;
                pcVar107 = pcVar115 + lVar87;
                pcVar115 = pcVar115 + 1;
                *pcVar96 = cVar102 - *pcVar107;
                pcVar96 = pcVar96 + 1;
                uVar88 = uVar112 - 1;
              }
              if (uVar112 != 1) {
                do {
                  uVar88 = uVar88 - 2;
                  *pcVar96 = *pcVar115 - pcVar115[lVar87];
                  pcVar96[1] = pcVar115[1] - (pcVar115 + lVar87)[1];
                  pcVar115 = pcVar115 + 2;
                  pcVar96 = pcVar96 + 2;
                } while (uVar88 != 0);
              }
            }
          }
          fVar127 = (float)(**(code **)(lVar91 + 0x98))(uVar92,0);
          local_d8 = local_d8 - fVar132 * fVar127;
          uVar139 = CONCAT44(uVar46,uVar43);
          lVar86 = FUN_00174230(fVar132,0x53800000,puVar117,param_8,pcVar94,uVar92,&local_4d8,uVar42
                                ,lVar91,&local_d8,uVar125,uVar139);
          local_d8 = fVar132 * fVar127 + local_d8;
          if (0 < lVar86) {
            *param_4 = 0;
LAB_001bd07c:
            lVar98 = lVar86;
          }
        }
        else {
          if (fVar44 == fVar128) {
            local_558[0] = thunk_FUN_0015f210(puVar3,0x100);
            local_558[0] = local_558[0] & 0xffffffff;
            local_558[1] = thunk_FUN_0015f210(puVar24,0x100);
            local_558[1] = local_558[1] & 0xffffffff;
            local_558[2] = thunk_FUN_0015f210(puVar25,0x100);
            local_558[2] = local_558[2] & 0xffffffff;
            local_558[3] = thunk_FUN_0015f210(puVar26,0x100);
            local_558[3] = local_558[3] & 0xffffffff;
            local_538 = thunk_FUN_0015f210(puVar27,0x100);
            local_538 = local_538 & 0xffffffff;
            local_530 = thunk_FUN_0015f210(puVar28,0x100);
            local_530 = local_530 & 0xffffffff;
            local_528 = thunk_FUN_0015f210(puVar29,0x100);
            local_528 = local_528 & 0xffffffff;
            local_520 = thunk_FUN_0015f210(puVar30,0x100);
            local_520 = local_520 & 0xffffffff;
            local_518 = thunk_FUN_0015f210(puVar31,0x100);
            local_518 = local_518 & 0xffffffff;
            local_510 = thunk_FUN_0015f210(puVar32,0x100);
            local_510 = local_510 & 0xffffffff;
            local_508 = thunk_FUN_0015f210(puVar33,0x100);
            local_508 = local_508 & 0xffffffff;
            local_500 = thunk_FUN_0015f210(puVar34,0x100);
            local_500 = local_500 & 0xffffffff;
            local_4f8 = thunk_FUN_0015f210(puVar35,0x100);
            local_4f8 = local_4f8 & 0xffffffff;
            local_4f0 = thunk_FUN_0015f210(puVar36,0x100);
            local_4f0 = local_4f0 & 0xffffffff;
            local_4e8 = thunk_FUN_0015f210(puVar37,0x100);
            local_4e8 = local_4e8 & 0xffffffff;
            uVar88 = thunk_FUN_0015f210(param_3,0x100);
            local_4e0 = uVar88 & 0xffffffff;
            *param_4 = 4;
            local_5d0 = pcVar94 + local_558[0];
            local_658[1] = local_5d0;
            local_5c8 = local_5d0 + local_558[1];
            local_5c0 = local_5c8 + local_558[2];
            local_658[2] = local_5c8;
            local_658[3] = local_5c0;
            local_5b8 = local_5c0 + local_558[3];
            local_5b0 = local_5b8 + local_538;
            local_638 = local_5b8;
            local_630 = local_5b0;
            local_5a8 = local_5b0 + local_530;
            local_5a0 = local_5a8 + local_528;
            local_628 = local_5a8;
            local_620 = local_5a0;
            local_598 = local_5a0 + local_520;
            local_590 = local_598 + local_518;
            local_618 = local_598;
            local_610 = local_590;
            local_588 = local_590 + local_510;
            local_580 = local_588 + local_508;
            local_608 = local_588;
            local_600 = local_580;
            local_578 = local_580 + local_500;
            local_570 = local_578 + local_4f8;
            local_5f8 = local_578;
            local_5d8 = pcVar94;
            local_658[0] = pcVar94;
            local_5f0 = local_570;
            local_568 = local_570 + local_4f0;
            local_560 = local_568 + local_4e8;
            local_5e0 = local_568 + local_4e8;
            local_5e8 = local_568;
            lVar98 = (long)(int)param_12;
            lVar86 = param_11[2];
            if (0 < (int)lVar86) {
              lVar87 = 0;
              lVar121 = *param_11;
              uVar109 = *(uint *)(lVar121 + 4);
              while( true ) {
                if (uVar109 != 0) {
                  lVar86 = lVar98;
                  uVar104 = uVar109;
                  if ((uVar109 & 1) != 0) {
                    uVar88 = (ulong)((byte)((undefined1 *)(param_5 + lVar98))[-1] >> 1) & 0x78;
                    uVar104 = uVar109 - 1;
                    puVar110 = *(undefined1 **)((long)local_658 + uVar88);
                    *puVar110 = *(undefined1 *)(param_5 + lVar98);
                    lVar86 = lVar98 + 1;
                    *(undefined1 **)((long)local_658 + uVar88) = puVar110 + 1;
                  }
                  if (uVar109 != 1) {
                    pbVar105 = (byte *)(param_5 + lVar86);
                    do {
                      uVar88 = (ulong)(pbVar105[-1] >> 1) & 0x78;
                      pbVar113 = *(byte **)((long)local_658 + uVar88);
                      *pbVar113 = *pbVar105;
                      *(byte **)((long)local_658 + uVar88) = pbVar113 + 1;
                      uVar88 = (ulong)(*pbVar105 >> 1) & 0x78;
                      pbVar113 = *(byte **)((long)local_658 + uVar88);
                      uVar104 = uVar104 - 2;
                      *pbVar113 = pbVar105[1];
                      pbVar105 = pbVar105 + 2;
                      *(byte **)((long)local_658 + uVar88) = pbVar113 + 1;
                    } while (uVar104 != 0);
                  }
                  lVar86 = param_11[2];
                }
                lVar98 = lVar98 + (int)(*(int *)(lVar121 + 8) + uVar109);
                lVar87 = lVar87 + 1;
                if ((int)lVar86 <= lVar87) break;
                lVar121 = *param_11 + lVar87 * 0x10;
                uVar109 = *(uint *)(lVar121 + 4);
              }
            }
            if (0 < (long)puVar124 - lVar98 && (int)((long)puVar124 - lVar98) != 0) {
              iVar47 = (int)lVar98 - param_6;
              puVar110 = (undefined1 *)(param_5 + lVar98);
              do {
                uVar88 = (ulong)((byte)puVar110[-1] >> 1) & 0x78;
                bVar45 = iVar47 != -1;
                iVar47 = iVar47 + 1;
                puVar89 = *(undefined1 **)((long)local_658 + uVar88);
                *puVar89 = *puVar110;
                *(undefined1 **)((long)local_658 + uVar88) = puVar89 + 1;
                puVar110 = puVar110 + 1;
              } while (bVar45);
            }
LAB_001bc8ac:
            uVar90 = 0x10;
LAB_001bcd38:
            uVar139 = CONCAT44(uVar46,uVar43);
            lVar98 = FUN_00182650(fVar132,puVar117,param_8,&local_5d8,local_558,uVar90,uVar42,lVar91
                                  ,&local_d8,uVar125,uVar139);
          }
          else {
            if (fVar44 == fVar137) {
              local_558[0] = thunk_FUN_0015f210(puVar4,0x100);
              local_558[0] = local_558[0] & 0xffffffff;
              local_558[1] = thunk_FUN_0015f210(puVar5,0x100);
              local_558[1] = local_558[1] & 0xffffffff;
              local_558[2] = thunk_FUN_0015f210(puVar6,0x100);
              local_558[2] = local_558[2] & 0xffffffff;
              uVar88 = thunk_FUN_0015f210(puVar7,0x100);
              local_558[3] = uVar88 & 0xffffffff;
              *param_4 = 3;
              local_5d0 = pcVar94 + local_558[0];
              local_658[2] = local_5d0 + local_558[1];
              local_658[1] = local_5d0;
              local_5d8 = pcVar94;
              local_658[0] = pcVar94;
              local_5c0 = local_658[2] + local_558[2];
              local_5c8 = local_658[2];
              local_658[3] = local_658[2] + local_558[2];
              uVar88 = (ulong)(int)param_12;
              lVar98 = param_11[2];
              if (0 < (int)lVar98) {
                lVar86 = 0;
                lVar121 = *param_11;
                uVar109 = *(uint *)(lVar121 + 4);
                lVar87 = lVar121;
                while( true ) {
                  if (uVar109 != 0) {
                    lVar98 = (long)*(int *)(lVar121 + lVar86 * 0x10);
                    uVar112 = uVar88;
                    uVar104 = uVar109;
                    if ((uVar109 & 1) != 0) {
                      uVar104 = uVar109 - 1;
                      pcVar96 = local_658[uVar88 & 3];
                      *pcVar96 = *(char *)(param_5 + uVar88) -
                                 *(char *)(param_5 + (uVar88 - lVar98));
                      uVar112 = uVar88 + 1;
                      local_658[uVar88 & 3] = pcVar96 + 1;
                    }
                    if (uVar109 != 1) {
                      uVar112 = uVar112 + 1;
                      do {
                        pcVar96 = (char *)(param_5 + uVar112);
                        pcVar115 = (char *)((param_5 - lVar98) + uVar112);
                        uVar111 = (ulong)((int)uVar112 - 1) & 3;
                        uVar104 = uVar104 - 2;
                        pcVar107 = local_658[uVar111];
                        *pcVar107 = pcVar96[-1] - pcVar115[-1];
                        local_658[uVar111] = pcVar107 + 1;
                        uVar111 = uVar112 & 3;
                        uVar112 = uVar112 + 2;
                        pcVar107 = local_658[uVar111];
                        *pcVar107 = *pcVar96 - *pcVar115;
                        local_658[uVar111] = pcVar107 + 1;
                      } while (uVar104 != 0);
                    }
                    lVar98 = param_11[2];
                  }
                  uVar88 = uVar88 + (long)(int)(*(int *)(lVar87 + 8) + uVar109);
                  lVar86 = lVar86 + 1;
                  if ((int)lVar98 <= lVar86) break;
                  lVar121 = *param_11;
                  lVar87 = lVar121 + lVar86 * 0x10;
                  uVar109 = *(uint *)(lVar87 + 4);
                }
              }
              if (0 < (long)((long)puVar124 - uVar88) && (int)((long)puVar124 - uVar88) != 0) {
                do {
                  uVar112 = uVar88 & 3;
                  pcVar96 = (char *)(param_5 + uVar88);
                  pcVar115 = (char *)((param_5 - param_10) + uVar88);
                  pcVar107 = local_658[uVar112];
                  uVar88 = uVar88 + 1;
                  *pcVar107 = *pcVar96 - *pcVar115;
                  local_658[uVar112] = pcVar107 + 1;
                } while (param_6 != (int)uVar88);
              }
              uVar90 = 4;
              goto LAB_001bcd38;
            }
            if (fVar44 == fVar127) {
              local_558[0] = thunk_FUN_0015f210(puVar8,0x100);
              local_558[0] = local_558[0] & 0xffffffff;
              local_558[1] = thunk_FUN_0015f210(puVar9,0x100);
              local_558[1] = local_558[1] & 0xffffffff;
              local_558[2] = thunk_FUN_0015f210(puVar10,0x100);
              local_558[2] = local_558[2] & 0xffffffff;
              local_558[3] = thunk_FUN_0015f210(puVar11,0x100);
              local_558[3] = local_558[3] & 0xffffffff;
              local_538 = thunk_FUN_0015f210(puVar12,0x100);
              local_538 = local_538 & 0xffffffff;
              local_530 = thunk_FUN_0015f210(puVar13,0x100);
              local_530 = local_530 & 0xffffffff;
              local_528 = thunk_FUN_0015f210(puVar14,0x100);
              local_528 = local_528 & 0xffffffff;
              local_520 = thunk_FUN_0015f210(puVar15,0x100);
              local_520 = local_520 & 0xffffffff;
              local_518 = thunk_FUN_0015f210(puVar16,0x100);
              local_518 = local_518 & 0xffffffff;
              local_510 = thunk_FUN_0015f210(puVar17,0x100);
              local_510 = local_510 & 0xffffffff;
              local_508 = thunk_FUN_0015f210(puVar18,0x100);
              local_508 = local_508 & 0xffffffff;
              local_500 = thunk_FUN_0015f210(puVar19,0x100);
              local_500 = local_500 & 0xffffffff;
              local_4f8 = thunk_FUN_0015f210(puVar20,0x100);
              local_4f8 = local_4f8 & 0xffffffff;
              local_4f0 = thunk_FUN_0015f210(puVar21,0x100);
              local_4f0 = local_4f0 & 0xffffffff;
              local_4e8 = thunk_FUN_0015f210(puVar22,0x100);
              local_4e8 = local_4e8 & 0xffffffff;
              uVar88 = thunk_FUN_0015f210(puVar23,0x100);
              local_4e0 = uVar88 & 0xffffffff;
              *param_4 = 5;
              local_5d8 = pcVar94;
              local_5d0 = pcVar94 + local_558[0];
              local_658[1] = local_5d0;
              local_5c8 = local_5d0 + local_558[1];
              local_5c0 = local_5c8 + local_558[2];
              local_658[2] = local_5c8;
              local_658[3] = local_5c0;
              local_5b8 = local_5c0 + local_558[3];
              local_5b0 = local_5b8 + local_538;
              local_638 = local_5b8;
              local_630 = local_5b0;
              local_5a8 = local_5b0 + local_530;
              local_5a0 = local_5a8 + local_528;
              local_628 = local_5a8;
              local_620 = local_5a0;
              local_598 = local_5a0 + local_520;
              local_590 = local_598 + local_518;
              local_618 = local_598;
              local_610 = local_590;
              local_588 = local_590 + local_510;
              local_580 = local_588 + local_508;
              local_608 = local_588;
              local_600 = local_580;
              local_578 = local_580 + local_500;
              local_570 = local_578 + local_4f8;
              local_5f8 = local_578;
              local_658[0] = pcVar94;
              local_5f0 = local_570;
              local_568 = local_570 + local_4f0;
              uVar88 = (ulong)(int)param_12;
              local_560 = local_568 + local_4e8;
              local_5e0 = local_568 + local_4e8;
              local_5e8 = local_568;
              lVar98 = param_11[2];
              if (0 < (int)lVar98) {
                lVar86 = 0;
                lVar121 = *param_11;
                uVar109 = *(uint *)(lVar121 + 4);
                lVar87 = lVar121;
                while( true ) {
                  if (uVar109 != 0) {
                    lVar98 = (long)*(int *)(lVar121 + lVar86 * 0x10);
                    uVar112 = uVar88;
                    uVar104 = uVar109;
                    if ((uVar109 & 1) != 0) {
                      uVar104 = uVar109 - 1;
                      pcVar96 = local_658[uVar88 & 0xf];
                      *pcVar96 = *(char *)(param_5 + uVar88) -
                                 *(char *)(param_5 + (uVar88 - lVar98));
                      uVar112 = uVar88 + 1;
                      local_658[uVar88 & 0xf] = pcVar96 + 1;
                    }
                    if (uVar109 != 1) {
                      uVar112 = uVar112 + 1;
                      do {
                        pcVar96 = (char *)(param_5 + uVar112);
                        pcVar115 = (char *)((param_5 - lVar98) + uVar112);
                        uVar111 = (ulong)((int)uVar112 - 1) & 0xf;
                        uVar104 = uVar104 - 2;
                        pcVar107 = local_658[uVar111];
                        *pcVar107 = pcVar96[-1] - pcVar115[-1];
                        local_658[uVar111] = pcVar107 + 1;
                        uVar111 = uVar112 & 0xf;
                        uVar112 = uVar112 + 2;
                        pcVar107 = local_658[uVar111];
                        *pcVar107 = *pcVar96 - *pcVar115;
                        local_658[uVar111] = pcVar107 + 1;
                      } while (uVar104 != 0);
                    }
                    lVar98 = param_11[2];
                  }
                  uVar88 = uVar88 + (long)(int)(*(int *)(lVar87 + 8) + uVar109);
                  lVar86 = lVar86 + 1;
                  if ((int)lVar98 <= lVar86) break;
                  lVar121 = *param_11;
                  lVar87 = lVar121 + lVar86 * 0x10;
                  uVar109 = *(uint *)(lVar87 + 4);
                }
              }
              if (0 < (long)((long)puVar124 - uVar88) && (int)((long)puVar124 - uVar88) != 0) {
                do {
                  uVar112 = uVar88 & 0xf;
                  pcVar96 = (char *)(param_5 + uVar88);
                  pcVar115 = (char *)((param_5 - param_10) + uVar88);
                  pcVar107 = local_658[uVar112];
                  uVar88 = uVar88 + 1;
                  *pcVar107 = *pcVar96 - *pcVar115;
                  local_658[uVar112] = pcVar107 + 1;
                } while (param_6 != (int)uVar88);
              }
              goto LAB_001bc8ac;
            }
            if (fVar44 == fVar136) {
              local_558[1] = thunk_FUN_0015f210(puVar41,0x100);
              local_558[1] = local_558[1] & 0xffffffff;
              *param_4 = 2;
              local_558[0] = uVar92 - local_558[1];
              local_5d0 = pcVar94 + local_558[0];
              lVar98 = (long)(int)param_12;
              pcVar96 = pcVar94;
              if ((int)param_11[2] < 1) {
                pcVar107 = local_5d0;
              }
              else {
                lVar86 = 0;
                lVar121 = *param_11;
                iVar47 = *(int *)(lVar121 + 4);
                pcVar115 = local_5d0;
                lVar87 = lVar121;
                while( true ) {
                  pcVar107 = pcVar115;
                  if (iVar47 != 0) {
                    lVar99 = (long)*(int *)(lVar121 + lVar86 * 0x10);
                    lVar121 = lVar98 - lVar99;
                    pcVar107 = pcVar115 + 1;
                    *pcVar115 = *(char *)(param_5 + lVar98) - *(char *)(param_5 + lVar121);
                    uVar109 = iVar47 - 1;
                    if (uVar109 != 0) {
                      lVar106 = lVar98;
                      if ((uVar109 & 3) != 0) {
                        lVar106 = 0;
                        do {
                          pcVar96[lVar106] =
                               *(char *)(param_5 + 1 + lVar98 + lVar106) -
                               *(char *)(param_5 + 1 + lVar121 + lVar106);
                          lVar106 = lVar106 + 1;
                        } while ((uVar109 & 3) != (uint)lVar106);
                        pcVar96 = pcVar96 + lVar106;
                        uVar109 = uVar109 - (uint)lVar106;
                        lVar106 = lVar98 + lVar106;
                      }
                      if (2 < iVar47 - 2U) {
                        pcVar115 = (char *)(param_5 + 2 + lVar106);
                        do {
                          pcVar100 = pcVar115 + -lVar99;
                          uVar109 = uVar109 - 4;
                          *pcVar96 = pcVar115[-1] - pcVar100[-1];
                          pcVar96[1] = *pcVar115 - *pcVar100;
                          pcVar96[2] = pcVar115[1] - pcVar100[1];
                          pcVar96[3] = pcVar115[2] - pcVar100[2];
                          pcVar96 = pcVar96 + 4;
                          pcVar115 = pcVar115 + 4;
                        } while (uVar109 != 0);
                      }
                    }
                  }
                  lVar98 = lVar98 + (*(int *)(lVar87 + 8) + iVar47);
                  lVar86 = lVar86 + 1;
                  if ((int)param_11[2] <= lVar86) break;
                  lVar121 = *param_11;
                  lVar87 = lVar121 + lVar86 * 0x10;
                  iVar47 = *(int *)(lVar87 + 4);
                  pcVar115 = pcVar107;
                }
              }
              if (0 < (long)puVar124 - lVar98) {
                lVar86 = (long)param_10;
                *pcVar107 = *(char *)(param_5 + lVar98) - *(char *)(param_5 + (lVar98 - lVar86));
                iVar47 = (int)((long)puVar124 - lVar98);
                uVar109 = iVar47 - 1;
                if (uVar109 != 0) {
                  iVar48 = (int)lVar98;
                  if ((uVar109 & 1) != 0) {
                    lVar98 = lVar98 + 1;
                    *pcVar96 = *(char *)(param_5 + lVar98) - *(char *)(param_5 + (lVar98 - lVar86));
                    uVar109 = iVar47 - 2;
                    pcVar96 = pcVar96 + 1;
                  }
                  if (param_6 + -2 != iVar48) {
                    pcVar115 = (char *)(lVar98 + param_5 + 1);
                    do {
                      uVar109 = uVar109 - 2;
                      *pcVar96 = *pcVar115 - pcVar115[-lVar86];
                      pcVar96[1] = pcVar115[1] - (pcVar115 + -lVar86)[1];
                      pcVar115 = pcVar115 + 2;
                      pcVar96 = pcVar96 + 2;
                    } while (uVar109 != 0);
                  }
                }
              }
              uVar90 = 2;
              local_5d8 = pcVar94;
              goto LAB_001bcd38;
            }
            lVar98 = -1;
          }
          fVar127 = (float)(**(code **)(lVar91 + 0x98))(uVar92,*param_4);
          uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
          local_d8 = local_d8 + fVar132 * fVar127;
          if (fVar131 == fVar133) goto LAB_001bcd7c;
LAB_001bc59c:
          uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
          if (fVar131 == fVar134) {
            lVar87 = param_11[2];
            lVar86 = (long)(int)param_12;
            pcVar96 = pcVar94;
            if (0 < (int)lVar87) {
              lVar99 = 0;
              lVar121 = 0;
              lVar106 = *param_11;
              iVar47 = *(int *)(lVar106 + 4);
              while( true ) {
                if (iVar47 != 0) {
                  memcpy(pcVar96,(void *)(param_5 + lVar86),(long)iVar47);
                  pcVar96 = pcVar96 + iVar47;
                  lVar87 = param_11[2];
                }
                uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
                lVar86 = lVar86 + (*(int *)(lVar106 + 8) + iVar47);
                lVar121 = lVar121 + 1;
                lVar99 = lVar99 + 0x10;
                if ((int)lVar87 <= lVar121) break;
                lVar106 = *param_11 + lVar99;
                iVar47 = *(int *)(lVar106 + 4);
              }
            }
            if (0 < (long)puVar124 - lVar86) {
              memcpy(pcVar96,(void *)(param_5 + lVar86),(long)(int)((long)puVar124 - lVar86));
            }
            uVar139 = CONCAT44(uVar46,uVar43);
            lVar86 = FUN_00174230(fVar132,0x53800000,puVar117,param_8,pcVar94,uVar92,puVar40,uVar42,
                                  lVar91,&local_d8,uVar125,uVar139);
            if (lVar86 < 1) goto LAB_001bd080;
            *param_4 = 1;
            goto LAB_001bd07c;
          }
        }
LAB_001bd080:
        uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
        if ((((long)uVar92 <= lVar98) || (fVar126 <= local_d8)) &&
           ((lVar98 != uVar92 + 3 || ((local_d8 != fVar126 || (*param_4 != 1)))))) {
          *param_4 = 1;
          lVar86 = param_11[2];
          lVar98 = (long)(int)param_12;
          pcVar96 = pcVar94;
          if (0 < (int)lVar86) {
            lVar121 = 0;
            lVar87 = 0;
            lVar99 = *param_11;
            iVar47 = *(int *)(lVar99 + 4);
            while( true ) {
              if (iVar47 != 0) {
                memcpy(pcVar96,(void *)(param_5 + lVar98),(long)iVar47);
                pcVar96 = pcVar96 + iVar47;
                lVar86 = param_11[2];
              }
              uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
              lVar98 = lVar98 + (*(int *)(lVar99 + 8) + iVar47);
              lVar87 = lVar87 + 1;
              lVar121 = lVar121 + 0x10;
              if ((int)lVar86 <= lVar87) break;
              lVar99 = *param_11 + lVar121;
              iVar47 = *(int *)(lVar99 + 4);
            }
          }
          if (0 < (long)puVar124 - lVar98) {
            memcpy(pcVar96,(void *)(param_5 + lVar98),(long)(int)((long)puVar124 - lVar98));
          }
          lVar98 = FUN_00174980(puVar117,param_8,pcVar94,uVar92);
          local_d8 = fVar126;
        }
        if (lVar98 < 0) goto joined_r0x001bd6dc;
      }
      local_65c = 1.0737418e+09;
      if (iVar97 < iVar101) goto LAB_001bd1c0;
      puVar117 = puVar117 + lVar98;
      uVar109 = param_6 + 0xe;
      if (-1 < (int)(param_6 + 7U)) {
        uVar109 = param_6 + 7U;
      }
      lVar98 = (long)((ulong)uVar109 << 0x20) >> 0x23;
      FUN_0015c528(local_658,
                   -(ulong)((uint)((int)uVar109 >> 3) >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uint)((int)uVar109 >> 3) << 3,uVar125,&local_668);
      local_4d0 = local_668 + lVar98;
      local_4d8 = local_668;
      local_558[0] = local_668;
      local_4c8 = local_4d0 + lVar98;
      local_558[1] = local_4d0;
      local_4c0 = local_4c8 + lVar98;
      local_558[2] = local_4c8;
      local_4b8 = local_4c0 + lVar98;
      local_558[3] = local_4c0;
      local_4b0 = local_4b8 + lVar98;
      local_538 = local_4b8;
      local_4a8 = local_4b0 + lVar98;
      local_530 = local_4b0;
      local_4a0 = local_4a8 + lVar98;
      local_520 = local_4a8 + lVar98;
      local_528 = local_4a8;
      if (0 < iVar101) {
        lVar98 = 0;
        pcVar96 = pcVar94;
        do {
          lVar86 = *param_11 + lVar98;
          lVar98 = lVar98 + 0x10;
          iVar97 = *(int *)(lVar86 + 4);
          iVar101 = *(int *)(lVar86 + 8) + -2;
          if (2 < iVar97) {
            iVar97 = 3;
          }
          if (6 < iVar101) {
            iVar101 = 7;
          }
          cVar102 = -0x20;
          if (*(int *)(lVar86 + 0xc) < 1) {
            cVar102 = (char)*(int *)(lVar86 + 0xc) * -0x20;
          }
          uVar93 = uVar93 - 1;
          cVar102 = (char)iVar101 + (char)iVar97 * '\b' + cVar102;
          uVar109 = (uint)uVar118 & 7;
          *pcVar96 = cVar102;
          pcVar115 = (char *)local_558[uVar109];
          *pcVar115 = cVar102;
          local_558[uVar109] = (ulong)(pcVar115 + 1);
          uVar118 = (ulong)(*(int *)(lVar86 + 4) + (uint)uVar118 + *(int *)(lVar86 + 8));
          pcVar96 = pcVar96 + 1;
        } while (uVar93 != 0);
      }
      local_5d8 = (char *)(local_558[0] - local_4d8);
      if (param_13 == (uint *)0x0) {
        local_5d0 = (char *)(local_558[1] - local_4d0);
        local_5c8 = (char *)(local_558[2] - local_4c8);
        local_5c0 = (char *)(local_558[3] - local_4c0);
        local_5b0 = (char *)(local_530 - local_4b0);
        local_5b8 = (char *)(local_538 - local_4b8);
        local_5a0 = (char *)(local_520 - local_4a0);
        local_5a8 = (char *)(local_528 - local_4a8);
      }
      else {
        FUN_0015edc0(local_4d8,local_5d8,param_13 + 0x2901,0x100,0);
        local_5d0 = (char *)(local_558[1] - local_4d0);
        FUN_0015edc0(local_4d0,local_5d0,param_13 + 0x2a01,0x100,0);
        local_5c8 = (char *)(local_558[2] - local_4c8);
        FUN_0015edc0(local_4c8,local_5c8,param_13 + 0x2b01,0x100,0);
        local_5c0 = (char *)(local_558[3] - local_4c0);
        FUN_0015edc0(local_4c0,local_5c0,param_13 + 0x2c01,0x100,0);
        local_5b8 = (char *)(local_538 - local_4b8);
        FUN_0015edc0(local_4b8,local_5b8,param_13 + 0x2d01,0x100,0);
        local_5b0 = (char *)(local_530 - local_4b0);
        FUN_0015edc0(local_4b0,local_5b0,param_13 + 0x2e01,0x100,0);
        local_5a8 = (char *)(local_528 - local_4a8);
        FUN_0015edc0(local_4a8,local_5a8,param_13 + 0x2f01,0x100,0);
        local_5a0 = (char *)(local_520 - local_4a0);
        FUN_0015edc0(local_4a0,local_5a0,param_13 + 0x3001,0x100,0);
      }
      *puVar117 = 0x83;
      uVar139 = uVar125;
      lVar98 = FUN_00182650(fVar132,puVar117 + 1,param_8,&local_4d8,&local_5d8,8,uVar42,lVar91,
                            &local_65c,uVar125,CONCAT44(uVar46,uVar43));
      uVar46 = (undefined4)((ulong)uVar139 >> 0x20);
      if (lVar98 != -1) {
        fVar126 = (float)(**(code **)(lVar91 + 0xa0))(uVar103);
        local_65c = local_65c + fVar132 * fVar126;
      }
      local_65c = local_65c + 1.0;
      lVar86 = FUN_00174a40(fVar132,0x53800000,puVar117,param_8,pcVar94,uVar103,uVar42,lVar91,
                            &local_65c,uVar125,CONCAT44(uVar46,uVar43),0);
      if (param_13 != (uint *)0x0) {
        FUN_0015edc0(pcVar94,uVar103,param_13 + 0x2801,0x100,0);
        *(undefined1 *)(param_13 + 0x3101) = 0;
      }
      if (lVar86 < 0) {
        lVar86 = lVar98 + 1;
        if (param_13 != (uint *)0x0) {
          *(undefined1 *)(param_13 + 0x3101) = 1;
        }
        if (-1 < lVar86) goto LAB_001bd5b8;
        bVar45 = true;
      }
      else {
LAB_001bd5b8:
        bVar45 = false;
        puVar117 = puVar117 + lVar86;
      }
      if (local_658[1] != (char *)0x0) {
        if ((local_658[0] == (char *)0x0) ||
           (local_658[1] + ((ulong)(local_658[2] + 0xf) & 0xfffffffffffffff0) !=
            *(char **)(local_658[0] + 8))) {
          (**(code **)PTR_PTR_047cb898)();
        }
        else {
          *(char **)(local_658[0] + 8) = local_658[1];
        }
        local_658[1] = (char *)0x0;
      }
      if (((!bVar45) &&
          (lVar98 = FUN_001c15f0(puVar117,param_8,local_b8,uVar120,iVar116,local_d4,piVar1,
                                 ((long)__dest - (long)piVar1 >> 2) +
                                 ((long)piVar2 - (long)piVar123 >> 2),0,0), -1 < lVar98)) &&
         ((long)(puVar117 + (lVar98 - (long)param_7)) < (long)puVar124)) {
        fVar126 = (float)(**(code **)(lVar91 + 0x90))(puVar124,uVar103,uVar95);
        *param_2 = fVar132 * fVar126 + (float)(lVar98 + (int)param_12) +
                   local_d8 + local_65c + local_ac[0] + local_b0;
        puVar124 = puVar117 + (lVar98 - (long)param_7);
        goto joined_r0x001bd6dc;
      }
    }
  }
  puVar124 = (undefined1 *)(long)param_6;
joined_r0x001bd6dc:
  if (local_c8 != 0) {
    if ((local_d0 == 0) ||
       ((local_c0 + 0xfU & 0xfffffffffffffff0) + local_c8 != *(long *)(local_d0 + 8))) {
      (**(code **)PTR_PTR_047cb898)();
    }
    else {
      *(long *)(local_d0 + 8) = local_c8;
    }
  }
  return puVar124;
}


