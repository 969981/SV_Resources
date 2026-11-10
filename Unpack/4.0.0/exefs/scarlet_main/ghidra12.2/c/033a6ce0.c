/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a6ce0; name: FUN_033a6ce0
 */


long FUN_033a6ce0(long param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  void *pvVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  ThreadType *pTVar14;
  ulong *puVar15;
  longlong lVar16;
  size_t sVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  FILE *__stream;
  int *piVar22;
  ulong *puVar23;
  long *plVar24;
  byte *pbVar25;
  char *pcVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  byte *pbVar30;
  undefined8 *puVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  ulong uVar37;
  ulong uVar38;
  int local_62c;
  undefined *local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  void *local_610;
  undefined8 local_608;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined *puStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [24];
  int local_5a8;
  long local_598;
  undefined4 local_578;
  int *local_570;
  undefined8 local_568;
  undefined4 local_560;
  long local_558;
  long lStack_550;
  undefined8 **local_548;
  undefined8 local_540;
  undefined8 *local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 **local_520;
  undefined8 local_518;
  char *local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 *local_4f8 [8];
  int local_4b8;
  ushort local_3f4 [2];
  undefined8 local_3f0;
  undefined1 *local_3e8;
  int local_3e0;
  uint local_3dc;
  undefined1 auStack_3d8 [128];
  undefined1 *local_358;
  int local_350;
  uint local_34c;
  undefined1 auStack_348 [128];
  undefined1 *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined1 auStack_2b8 [8];
  uint *local_2b0;
  undefined *local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  uint *local_288;
  undefined8 local_280;
  char *local_278;
  undefined8 local_270;
  undefined8 local_268;
  uint local_260 [2];
  undefined8 local_258;
  ulong local_250;
  long local_248 [2];
  undefined8 *local_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_1d0;
  long local_1b0;
  ulong local_1a8;
  long local_1a0;
  undefined8 local_190;
  long local_178;
  long local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  uint local_8c;
  long local_88;
  long local_80;
  
  *(uint *)(param_1 + 0x108) = -(uint)(*(int *)(param_1 + 0x120) < 1);
  iVar13 = *(int *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (0 < iVar13) {
    lVar33 = 0;
    lVar34 = 0;
    do {
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0x128) + lVar33);
      (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))
                (*(long **)(param_1 + 0xf8),*puVar31,puVar31[1]);
      iVar13 = *(int *)(param_1 + 0x130);
      lVar34 = lVar34 + 1;
      lVar33 = lVar33 + 0x10;
    } while (lVar34 < iVar13);
  }
  if (iVar13 != 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  puVar9 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (lVar34 = *(long *)(param_1 + 0x78), lVar34 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,lVar34,(ulong)*(uint *)(param_1 + 0x84) * 0x18);
  }
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  lVar34 = (long)*(int *)(param_1 + 0x188) + 1;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) <= *(int *)(param_1 + 0x188)) {
    FUN_033ad8c4(param_1 + 0x180,lVar34);
  }
  *(int *)(param_1 + 0x188) = (int)lVar34;
  local_628 = PTR_DAT_047e6828 + 0x10;
  local_620 = 0xffffffff;
  uStack_618 = 1;
  local_610 = (void *)(**(code **)(*(long *)puVar9 + 0x18))(puVar9,0x180);
  memset(local_610,0xff,0x180);
  local_5e8 = 0;
  local_608 = 0xf00000000;
  local_5f8 = 0;
  uStack_5f0 = 0x8000000000000000;
  puStack_5d8 = PTR_DAT_047e6830 + 0x10;
  local_5d0 = 0xffffffff;
  uStack_5c8 = 1;
  local_5e0 = 0x8000000000000000;
  FUN_033b3f48(auStack_5c0,param_2);
  local_578 = 0;
  local_570 = (int *)0x0;
  local_568 = 0x8000000000000000;
  local_560 = 6;
  uVar12 = FUN_033b2ad0(&local_628);
  if ((uVar12 & 0xfffffffe) != 6) {
    do {
      if (uVar12 - 1 < 2) {
        if ((int)local_568 < 1) {
          plVar21 = (long *)0x0;
          lVar34 = 0;
        }
        else {
          plVar21 = (long *)(local_598 + local_5a8 + (long)*local_570);
          lVar34 = local_598 + local_5a8 + (long)local_570[1];
        }
        if ((lVar34 - (long)plVar21 == 9) &&
           (*plVar21 == 0x6c69666761746b68 && (char)plVar21[1] == 'e')) {
          iVar13 = FUN_033b2d68(&local_628,"version",&local_62c);
          lVar34 = 0;
          if ((local_62c != 3) || (iVar13 < 0)) goto LAB_033a6fc4;
          iVar13 = FUN_033a6b98(&local_628,"hktagfile");
          if (iVar13 < 0) goto LAB_033a90e4;
          plVar21 = (long *)(param_1 + 0x138);
          lVar34 = param_1 + 8;
          __stream = *(FILE **)PTR_stdout_047cb860;
          puVar1 = (uint *)(PTR_DAT_047e5b58 + 0x10);
          puVar2 = PTR_DAT_047e5b60 + 0x10;
          goto LAB_033a7120;
        }
        break;
      }
      uVar12 = FUN_033b2ad0(&local_628);
    } while ((uVar12 & 0xfffffffe) != 6);
  }
  if (DAT_0488e218 < 2) {
    if (DAT_046aaf68 != '\0') goto LAB_033a91d8;
  }
  else {
    if (DAT_046aaf68 == '\0') {
      local_2a0 = &DAT_0488e1c8;
      local_2b0 = (uint *)0x0;
      local_298 = 2;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_290 = nn::os::GetThreadId(pTVar14);
      local_288 = (uint *)0x0;
      local_280 = 0;
      local_278 = (char *)0x0;
      local_270 = 0;
      local_268 = 0;
      FUN_0322c554(&local_2b0,"File does not begin with a \'tagfile\' element",PTR_DAT_047d1b38);
      local_278 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
      ;
      local_270 = 0x12e;
      FUN_0322c8e0(&local_2b0);
    }
    else {
LAB_033a91d8:
      local_2a0 = &DAT_0488e1c8;
      local_298 = 2;
      pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
      local_290 = nn::os::GetThreadId(pTVar14);
      local_280 = 0;
      local_278 = (char *)0x0;
      local_270 = 0;
      local_268 = 0;
      local_2a8 = (undefined *)0x10000000000;
      local_260[0] = local_260[0] & 0xffffff00;
      local_2b0 = local_260;
      local_288 = local_260;
      FUN_0322c554(&local_2b0,"File does not begin with a \'tagfile\' element",PTR_DAT_047d1b38);
      local_278 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
      ;
      local_270 = 0x12e;
      if ((char)local_260[0] != '\0') {
        sVar17 = strlen((char *)local_260);
        *(undefined2 *)((long)local_260 + (long)(int)((int)sVar17 - (uint)((int)sVar17 == 0xff))) =
             10;
        printf("%s",local_260);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
    }
    if (((ulong)local_288 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_288 + -1),0);
    }
  }
LAB_033a6fc0:
  lVar34 = 0;
LAB_033a6fc4:
  FUN_033b20bc(&local_628);
  return lVar34;
LAB_033a7120:
  do {
    pvVar10 = local_610;
    if ((int)local_568 < 1) {
      piVar22 = (int *)0x0;
      lVar33 = 0;
    }
    else {
      piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
      lVar33 = local_598 + local_5a8 + (long)local_570[1];
    }
    if ((lVar33 - (long)piVar22 == 4) && (*piVar22 == 0x65707974)) {
      uVar12 = local_608._4_4_;
      uVar37 = (ulong)(int)local_608._4_4_;
      local_8c = 0;
      for (uVar35 = (ulong)(local_608._4_4_ & 0x37386ae0);
          lVar33 = *(long *)((long)pvVar10 + uVar35 * 0x18), lVar33 != -1;
          uVar35 = uVar35 + 1 & uVar37) {
        if ((lVar33 == 0x37386ae0) &&
           (iVar13 = strcmp("id",*(char **)((long)pvVar10 + uVar35 * 0x18 + 8)), iVar13 == 0))
        goto LAB_033a73b0;
      }
      uVar35 = (ulong)(uVar12 + 1);
LAB_033a73b0:
      if (((int)uVar12 < (int)uVar35) ||
         (uVar35 = *(ulong *)((long)pvVar10 + (long)(int)uVar35 * 0x18 + 0x10), (int)uVar35 < 0))
      goto LAB_033a6fc0;
      iVar13 = local_570[(uVar35 & 0xffffffff) * 2];
      iVar28 = (local_570 + (uVar35 & 0xffffffff) * 2)[1];
      pbVar25 = (byte *)(local_598 + local_5a8 + (long)iVar28);
      piVar22 = (int *)(local_598 + local_5a8 + (long)iVar13);
      if (iVar13 != iVar28) {
        if ((char)*piVar22 == '\"') {
          piVar22 = (int *)((long)piVar22 + 1);
          pbVar25 = pbVar25 + -1;
        }
      }
      if (((ulong)((long)pbVar25 - (long)piVar22) < 4) || (*piVar22 != 0x65707974))
      goto LAB_033a6fc0;
      pbVar3 = (byte *)(piVar22 + 1);
      uVar35 = (long)pbVar25 - (long)pbVar3;
      if ((int)uVar35 < 1) goto LAB_033a6fc0;
      pbVar30 = (byte *)((long)piVar22 + 5);
      if ((char)piVar22[1] != '-') {
        pbVar30 = pbVar3;
      }
      if (pbVar25 <= pbVar30) goto LAB_033a6fc0;
      bVar5 = *pbVar30;
      while( true ) {
        if (9 < bVar5 - 0x30) goto LAB_033a6fc0;
        pbVar30 = pbVar30 + 1;
        if (pbVar25 <= pbVar30) break;
        bVar5 = *pbVar30;
      }
      if (0 < (int)uVar35) {
        strncpy((char *)&local_88,(char *)pbVar3,uVar35 & 0xffffffff);
      }
      *(undefined1 *)((long)&local_88 + uVar35) = 0;
      uVar35 = strtoll((char *)&local_88,(char **)0x0,0);
      local_298 = 0x4000;
      local_290 = CONCAT44(local_290._4_4_,0xffffffff);
      local_288 = (uint *)0x0;
      local_280 = 0;
      local_278 = (char *)0x8000000000000000;
      local_270 = 0;
      local_268 = 0x8000000000000000;
      local_260[0] = 0;
      local_258 = 0;
      local_250 = 0;
      local_138 = 0;
      local_140 = 0;
      local_134 = 0x80000000;
      local_130 = 0;
      local_128 = 0x8000000000000000;
      local_118 = 0x8000000200000000;
      local_d8 = 0x8000000300000000;
      local_f0 = 0;
      local_e8 = 0x8000000000000000;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0x8000000000000000;
      local_a0 = 0;
      local_98 = 1;
      local_96 = 0;
      local_2b0 = puVar1;
      local_2a8 = puVar2;
      local_2a0 = (undefined8 *)(puVar9 + 0x20);
      local_120 = auStack_110;
      local_e0 = auStack_d0;
      memset(local_248,0,0x100);
      if (param_1 == 0) {
        local_250 = 0;
      }
      else {
        local_250 = 0x4000000;
        local_178 = param_1;
      }
      local_3e0 = 0;
      local_3dc = 0x80000020;
      local_34c = 0x80000020;
      local_350 = 0;
      local_2c0 = 0;
      local_2bc = 0x80000002;
      local_3f0 = 0;
      local_3e8 = auStack_3d8;
      local_358 = auStack_348;
      local_2c8 = auStack_2b8;
      local_148 = param_1;
      iVar13 = FUN_033a6b98(&local_628,&DAT_03c8f563);
      iVar28 = (int)uVar35;
      if (-1 < iVar13) {
        uVar12 = (iVar28 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar28 * -0x61c8864f & 0xff00ffU) << 8
        ;
        uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
        uVar20 = 0;
        do {
          pvVar10 = local_610;
          if ((int)local_568 < 1) {
            piVar22 = (int *)0x0;
            lVar33 = 0;
          }
          else {
            piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
            lVar33 = local_598 + local_5a8 + (long)local_570[1];
          }
          uVar32 = local_608._4_4_;
          if ((lVar33 - (long)piVar22 == 6) &&
             (*piVar22 == 0x65726170 && (short)piVar22[1] == 0x746e)) {
            uVar38 = (ulong)(int)local_608._4_4_;
            for (uVar37 = (ulong)(local_608._4_4_ & 0x37386ae0);
                lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                uVar37 = uVar37 + 1 & uVar38) {
              if ((lVar33 == 0x37386ae0) &&
                 (iVar13 = strcmp("id",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)), iVar13 == 0))
              goto LAB_033a7918;
            }
            uVar37 = (ulong)(uVar32 + 1);
LAB_033a7918:
            if (((int)uVar37 <= (int)uVar32) &&
               (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
               -1 < (int)uVar37)) {
              iVar13 = local_570[(uVar37 & 0xffffffff) * 2];
              iVar36 = (local_570 + (uVar37 & 0xffffffff) * 2)[1];
              piVar22 = (int *)(local_598 + local_5a8 + (long)iVar13);
              pbVar25 = (byte *)(local_598 + local_5a8 + (long)iVar36);
              if (iVar13 != iVar36) {
                if ((char)*piVar22 == '\"') {
                  piVar22 = (int *)((long)piVar22 + 1);
                  pbVar25 = pbVar25 + -1;
                }
              }
              if ((3 < (ulong)((long)pbVar25 - (long)piVar22)) && (*piVar22 == 0x65707974)) {
                pbVar3 = (byte *)(piVar22 + 1);
                uVar37 = (long)pbVar25 - (long)pbVar3;
                if (0 < (int)uVar37) {
                  pbVar30 = (byte *)((long)piVar22 + 5);
                  if ((char)piVar22[1] != '-') {
                    pbVar30 = pbVar3;
                  }
                  if ((pbVar30 < pbVar25) && (*pbVar30 - 0x30 < 10)) {
                    while (pbVar30 = pbVar30 + 1, pbVar30 < pbVar25) {
                      if (9 < *pbVar30 - 0x30) goto LAB_033a8ec8;
                    }
                    if (0 < (int)uVar37) {
                      strncpy((char *)&local_88,(char *)pbVar3,uVar37 & 0xffffffff);
                    }
                    *(undefined1 *)((long)&local_88 + uVar37) = 0;
                    lVar16 = strtoll((char *)&local_88,(char **)0x0,0);
                    local_3f0 = CONCAT44(local_3f0._4_4_,(int)lVar16);
                    goto LAB_033a8aa4;
                  }
                }
              }
            }
            goto LAB_033a8ec8;
          }
          if ((int)local_568 < 1) {
            piVar22 = (int *)0x0;
            lVar33 = 0;
          }
          else {
            piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
            lVar33 = local_598 + local_5a8 + (long)local_570[1];
          }
          if ((lVar33 - (long)piVar22 == 6) &&
             (*piVar22 == 0x6d726f66 && (short)piVar22[1] == 0x7461)) {
            iVar13 = FUN_033b2d68(&local_628,"value",&local_8c);
            uVar20 = local_8c;
            if (iVar13 < 0) goto LAB_033a8ec8;
            local_248[0] = (long)(int)local_8c;
            uVar37 = local_250 | 0x180001;
            local_1a8 = 0;
            local_1b0 = lVar34;
            switch(local_8c & 0xf) {
            case 0:
              uVar32 = 0;
              uVar19 = 0;
              local_238 = &DAT_0488e230;
              local_250 = uVar37;
              break;
            case 1:
              uVar32 = 0;
              uVar19 = 0;
              local_238 = &DAT_0488e240;
              local_250 = uVar37;
              break;
            case 2:
              uVar19 = 1;
              uVar32 = 0x10000;
              local_238 = (undefined8 *)PTR_DAT_047e6818;
              local_250 = uVar37;
              break;
            case 3:
              local_238 = (undefined8 *)(param_1 + 0x168);
              goto LAB_033a8a6c;
            case 4:
            case 5:
              local_250 = uVar37;
              puVar15 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x60))
                                           (*(long **)PTR_DAT_047ddc48,local_8c);
              puVar23 = puVar15;
              do {
                uVar37 = *puVar23;
                if (((uint)uVar37 >> 2 & 1) != 0) {
                  local_238 = (undefined8 *)puVar23[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2];
                  goto LAB_033a86ec;
                }
                puVar23 = (ulong *)puVar23[1];
              } while (puVar23 != (ulong *)0x0);
              local_238 = (undefined8 *)0x0;
LAB_033a86ec:
              puVar23 = puVar15;
              do {
                uVar32 = (uint)*puVar23;
                if ((uVar32 >> 0x14 & 1) != 0) {
                  if (puVar23 != (ulong *)0x0) {
                    uVar32 = uVar32 & 0xfffff;
                    puVar23 = (ulong *)(ulong)(ushort)puVar23[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                                            POPCOUNT((char)(uVar32 
                                                  >> 8)) + POPCOUNT((char)(uVar32 >> 0x10))) + 2];
                  }
                  break;
                }
                if ((*puVar23 & 1) != 0) {
                  puVar23 = (ulong *)0x0;
                  break;
                }
                puVar23 = (ulong *)puVar23[1];
              } while (puVar23 != (ulong *)0x0);
LAB_033a8a1c:
              uVar19 = (uint)puVar23;
              uVar32 = (uint)*puVar15;
              if ((uVar32 >> 0x14 & 1) == 0) {
                if (((*puVar15 & 1) != 0) ||
                   (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0)) goto LAB_033a8a60;
                goto LAB_033a8a1c;
              }
              if (puVar15 != (ulong *)0x0) {
                uVar32 = uVar32 & 0xfffff;
                uVar32 = (uint)puVar15[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                     POPCOUNT((char)(uVar32 >> 8)) +
                                                    POPCOUNT((char)(uVar32 >> 0x10))) + 2] &
                         0xfff0000;
                break;
              }
LAB_033a8a60:
              uVar32 = 0;
              break;
            case 6:
              local_238 = (undefined8 *)(param_1 + 0xa0);
LAB_033a8a6c:
              uVar19 = 4;
              uVar32 = 0x40000;
              local_250 = uVar37;
              break;
            case 7:
              local_190 = 0;
              local_250 = local_250 | 0x980001;
              iVar13 = *(int *)(param_1 + 0x140);
              if (iVar13 <= *(int *)(param_1 + 0x148) * 2) {
                FUN_0334a3a0(plVar21,iVar13 << 1);
                iVar13 = *(int *)(param_1 + 0x140);
              }
              uVar32 = iVar13 - 1U & uVar12;
              lVar33 = *plVar21;
              piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
              if (*piVar22 == -1) {
                iVar13 = 1;
              }
              else if (*piVar22 == iVar28) {
                iVar13 = 0;
              }
              else {
                do {
                  uVar32 = uVar32 + 1 & iVar13 - 1U;
                  iVar36 = *(int *)(lVar33 + (long)(int)uVar32 * 4);
                  if (iVar36 == -1) {
                    iVar13 = 1;
                    goto LAB_033a8b00;
                  }
                } while (iVar36 != iVar28);
                iVar13 = 0;
LAB_033a8b00:
                piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
              }
              *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar13;
              *piVar22 = iVar28;
              uVar32 = 0;
              uVar19 = 0;
              local_238 = (undefined8 *)PTR_DAT_047e67a8;
              goto LAB_033a8a84;
            case 8:
              if ((int)local_8c < 0x100) {
                local_238 = (undefined8 *)(param_1 + 0x150);
                goto LAB_033a8a6c;
              }
              iVar13 = *(int *)(param_1 + 0x140);
              local_250 = uVar37;
              if (iVar13 <= *(int *)(param_1 + 0x148) * 2) {
                FUN_0334a3a0(plVar21,iVar13 << 1);
                iVar13 = *(int *)(param_1 + 0x140);
              }
              uVar32 = iVar13 - 1U & uVar12;
              lVar33 = *plVar21;
              piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
              if (*piVar22 == -1) {
                iVar13 = 1;
              }
              else if (*piVar22 == iVar28) {
                iVar13 = 0;
              }
              else {
                do {
                  uVar32 = uVar32 + 1 & iVar13 - 1U;
                  iVar36 = *(int *)(lVar33 + (long)(int)uVar32 * 4);
                  if (iVar36 == -1) {
                    iVar13 = 1;
                    goto LAB_033a8b44;
                  }
                } while (iVar36 != iVar28);
                iVar13 = 0;
LAB_033a8b44:
                piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
              }
              *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar13;
              *piVar22 = iVar28;
              uVar32 = 0;
              uVar19 = 0;
              local_238 = (undefined8 *)PTR_DAT_047e66f8;
              break;
            default:
              uVar32 = 0;
              uVar19 = 0;
              local_238 = (undefined8 *)0x0;
              local_250 = uVar37;
            }
LAB_033a8a84:
            local_1a8 = (ulong)(uVar19 | uVar32);
            local_250 = local_250 | 0x100004;
          }
          else {
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 4) && (*piVar22 == 0x656d616e)) {
              local_540._0_4_ = 1;
              local_540._4_4_ = 0x80000080;
              local_4b8 = 1;
              uVar38 = (ulong)(int)local_608._4_4_;
              local_538 = (undefined8 *)((ulong)local_538 & 0xffffffffffffff00);
              local_80 = 0;
              local_88 = 0;
              local_548 = &local_538;
              for (uVar37 = (ulong)(local_608._4_4_ & 0x425ed3ca);
                  lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                  uVar37 = uVar37 + 1 & uVar38) {
                if ((lVar33 == 0x425ed3ca) &&
                   (iVar13 = strcmp("value",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)),
                   iVar13 == 0)) goto LAB_033a7ae4;
              }
              uVar37 = (ulong)(uVar32 + 1);
LAB_033a7ae4:
              if (((int)uVar32 < (int)uVar37) ||
                 (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
                 (int)uVar37 < 0)) {
                local_540 = (ulong)local_540._4_4_ << 0x20;
              }
              else {
                local_80 = local_598 + local_5a8 + (long)(local_570 + (uVar37 & 0xffffffff) * 2)[1];
                local_88 = local_598 + local_5a8 + (long)local_570[(uVar37 & 0xffffffff) * 2];
                iVar13 = FUN_033b2f40(&local_88,&local_548);
                uVar32 = local_540._4_4_;
                if (-1 < iVar13) {
                  if (*(char *)local_548 == '\"') {
                    uVar32 = (int)local_540 - 1;
                    if (uVar32 != 0 && 0 < (int)local_540) {
                      uVar32 = 1;
                    }
                    if ((int)uVar32 < 1) {
LAB_033a8918:
                      iVar36 = (int)local_540;
                    }
                    else {
                      iVar13 = (int)local_540 - uVar32;
                      if (iVar13 != 0) {
                        uVar37 = (long)iVar13 & 7;
                        if ((ulong)((long)(int)local_540 + (long)(int)~uVar32) < 7) {
                          uVar38 = 0;
                        }
                        else {
                          uVar38 = 0;
                          lVar33 = (ulong)uVar32 + 3;
                          do {
                            lVar8 = uVar38 + lVar33;
                            pcVar26 = (char *)((long)local_548 + uVar38 + 3);
                            pcVar26[-3] = *(char *)((long)local_548 + lVar8 + -3);
                            pcVar26[-2] = *(char *)((long)local_548 + lVar8 + -2);
                            pcVar26[-1] = *(char *)((long)local_548 + lVar8 + -1);
                            *pcVar26 = *(char *)((long)local_548 + uVar38 + lVar33);
                            pcVar26[1] = *(char *)((long)local_548 + lVar8 + 1);
                            pcVar26[2] = *(char *)((long)local_548 + lVar8 + 2);
                            pcVar26[3] = *(char *)((long)local_548 + lVar8 + 3);
                            uVar38 = uVar38 + 8;
                            pcVar26[4] = *(char *)((long)local_548 + lVar8 + 4);
                          } while (((long)iVar13 & 0xfffffffffffffff8U) != uVar38);
                        }
                        local_540._0_4_ = iVar13;
                        if (uVar37 != 0) {
                          pcVar26 = (char *)((long)local_548 + uVar38);
                          do {
                            uVar37 = uVar37 - 1;
                            *pcVar26 = pcVar26[uVar32];
                            pcVar26 = pcVar26 + 1;
                          } while (uVar37 != 0);
                        }
                        goto LAB_033a8918;
                      }
                      iVar36 = 0;
                      local_540._0_4_ = iVar13;
                    }
                    uVar32 = iVar36 - 2U & ((int)(iVar36 - 2U) >> 0x1f ^ 0xffffffffU);
                    uVar6 = (local_540._4_4_ & 0x7fffffff) - 1;
                    uVar19 = uVar32;
                    if ((int)uVar6 <= (int)uVar32) {
                      uVar19 = uVar6;
                    }
                    if (local_4b8 != 0) {
                      uVar19 = uVar32;
                    }
                    iVar13 = uVar19 + 1;
                    if ((int)(local_540._4_4_ & 0x7fffffff) <= (int)uVar19) {
                      FUN_030b4a20(&local_548,puVar9 + 0x20,iVar13);
                      iVar36 = (int)local_540;
                    }
                    if (iVar36 <= (int)uVar19 || iVar13 < iVar36) {
                      local_540._0_4_ = iVar13;
                    }
                    *(char *)((long)local_548 + (long)(int)uVar19) = '\0';
                  }
                  local_230 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,local_548,
                                           ~(uint)local_548 + (uint)local_548 + (int)local_540,1);
                  uVar32 = local_540._4_4_;
                  local_250 = local_250 | 8;
                  local_540 = (ulong)local_540._4_4_ << 0x20;
                  if ((-1 < (int)uVar32) && (local_548 != (undefined8 **)0x0)) {
                    (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))();
                  }
                  goto LAB_033a8aa4;
                }
                local_540 = (ulong)local_540._4_4_ << 0x20;
                if ((-1 < (int)uVar32) && (local_548 != (undefined8 **)0x0)) {
                  (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))();
                }
              }
LAB_033a8ec8:
              bVar7 = true;
              goto LAB_033a8ed4;
            }
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 5) && (*piVar22 == 0x67616c66 && (char)piVar22[1] == 's')
               ) {
              iVar13 = FUN_033b2d68(&local_628,"value",&local_548);
              if (-1 < iVar13) {
                local_250 = local_250 | 0x200000;
                local_1a0 = (long)(int)local_548;
                goto LAB_033a8aa4;
              }
              goto LAB_033a8d34;
            }
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 7) &&
               (*piVar22 == 0x74627573 && *(int *)((long)piVar22 + 3) == 0x65707974)) {
              uVar38 = (ulong)(int)local_608._4_4_;
              for (uVar37 = (ulong)(local_608._4_4_ & 0x37386ae0);
                  lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                  uVar37 = uVar37 + 1 & uVar38) {
                if ((lVar33 == 0x37386ae0) &&
                   (iVar13 = strcmp("id",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)), iVar13 == 0
                   )) goto LAB_033a84e8;
              }
              uVar37 = (ulong)(uVar32 + 1);
LAB_033a84e8:
              if (((int)uVar37 <= (int)uVar32) &&
                 (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
                 -1 < (int)uVar37)) {
                iVar13 = local_570[(uVar37 & 0xffffffff) * 2];
                iVar36 = (local_570 + (uVar37 & 0xffffffff) * 2)[1];
                piVar22 = (int *)(local_598 + local_5a8 + (long)iVar13);
                pbVar25 = (byte *)(local_598 + local_5a8 + (long)iVar36);
                if (iVar13 != iVar36) {
                  if ((char)*piVar22 == '\"') {
                    piVar22 = (int *)((long)piVar22 + 1);
                    pbVar25 = pbVar25 + -1;
                  }
                }
                if ((3 < (ulong)((long)pbVar25 - (long)piVar22)) && (*piVar22 == 0x65707974)) {
                  pbVar3 = (byte *)(piVar22 + 1);
                  uVar37 = (long)pbVar25 - (long)pbVar3;
                  if (0 < (int)uVar37) {
                    pbVar30 = (byte *)((long)piVar22 + 5);
                    if ((char)piVar22[1] != '-') {
                      pbVar30 = pbVar3;
                    }
                    if ((pbVar30 < pbVar25) && (*pbVar30 - 0x30 < 10)) {
                      while (pbVar30 = pbVar30 + 1, pbVar30 < pbVar25) {
                        if (9 < *pbVar30 - 0x30) goto LAB_033a8ec8;
                      }
                      if (0 < (int)uVar37) {
                        strncpy((char *)&local_88,(char *)pbVar3,uVar37 & 0xffffffff);
                      }
                      *(undefined1 *)((long)&local_88 + uVar37) = 0;
                      lVar16 = strtoll((char *)&local_88,(char **)0x0,0);
                      local_250 = local_250 | 2;
                      local_248[1] = 0;
                      if (((uVar20 & 0xf) == 8) || ((uVar20 & 0xf) == 6)) {
                        iVar36 = (int)lVar16;
                        local_3f0 = CONCAT44(iVar36,(undefined4)local_3f0);
                        iVar13 = *(int *)(param_1 + 0x140);
                        if (iVar13 <= *(int *)(param_1 + 0x148) * 2) {
                          FUN_0334a3a0(plVar21,iVar13 << 1);
                          iVar13 = *(int *)(param_1 + 0x140);
                        }
                        uVar32 = (iVar36 * -0x61c8864f & 0xff00ff00U) >> 8 |
                                 (iVar36 * -0x61c8864f & 0xff00ffU) << 8;
                        uVar32 = iVar13 - 1U & (uVar32 >> 0x10 | uVar32 << 0x10);
                        lVar33 = *plVar21;
                        piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
                        if (*piVar22 == -1) {
                          iVar13 = 1;
                        }
                        else if (*piVar22 == iVar36) {
                          iVar13 = 0;
                        }
                        else {
                          do {
                            uVar32 = uVar32 + 1 & iVar13 - 1U;
                            iVar29 = *(int *)(lVar33 + (long)(int)uVar32 * 4);
                            if (iVar29 == -1) {
                              iVar13 = 1;
                              goto LAB_033a8ac8;
                            }
                          } while (iVar29 != iVar36);
                          iVar13 = 0;
LAB_033a8ac8:
                          piVar22 = (int *)(lVar33 + (long)(int)uVar32 * 4);
                        }
                        *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar13;
                        *piVar22 = iVar36;
                        goto LAB_033a8aa4;
                      }
                    }
                  }
                }
              }
              goto LAB_033a8ec8;
            }
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 6) &&
               (*piVar22 == 0x6c656966 && (short)piVar22[1] == 0x7364)) {
              iVar13 = FUN_033b2d68(&local_628,"count",&local_558);
              if (-1 < iVar13) {
                while( true ) {
                  iVar13 = FUN_033a6b98(&local_628,"fields");
                  pvVar10 = local_610;
                  if (iVar13 < 0) break;
                  local_540._0_4_ = 1;
                  local_540._4_4_ = 0x80000080;
                  local_4b8 = 1;
                  uVar32 = local_608._4_4_;
                  uVar38 = (ulong)(int)local_608._4_4_;
                  local_538 = (undefined8 *)((ulong)local_538 & 0xffffffffffffff00);
                  local_80 = 0;
                  local_88 = 0;
                  local_548 = &local_538;
                  for (uVar37 = (ulong)(local_608._4_4_ & 0x8d39bde6);
                      lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                      uVar37 = uVar37 + 1 & uVar38) {
                    if ((lVar33 == 0x8d39bde6) &&
                       (iVar13 = strcmp("name",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)),
                       iVar13 == 0)) goto LAB_033a80b8;
                  }
                  uVar37 = (ulong)(uVar32 + 1);
LAB_033a80b8:
                  if (((int)uVar32 < (int)uVar37) ||
                     (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
                     (int)uVar37 < 0)) {
LAB_033a8cf8:
                    uVar12 = local_540._4_4_;
                    local_540 = (ulong)local_540._4_4_ << 0x20;
                    if ((-1 < (int)uVar12) && (local_548 != (undefined8 **)0x0)) {
                      (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))();
                    }
                    goto LAB_033a8d34;
                  }
                  local_80 = local_598 + local_5a8 +
                             (long)(local_570 + (uVar37 & 0xffffffff) * 2)[1];
                  local_88 = local_598 + local_5a8 + (long)local_570[(uVar37 & 0xffffffff) * 2];
                  iVar13 = FUN_033b2f40(&local_88,&local_548);
                  if (iVar13 < 0) goto LAB_033a8cf8;
                  if (*(char *)local_548 == '\"') {
                    uVar32 = (int)local_540 - 1;
                    if (uVar32 != 0 && 0 < (int)local_540) {
                      uVar32 = 1;
                    }
                    if ((int)uVar32 < 1) {
                      iVar13 = (int)local_540;
                    }
                    else {
                      iVar36 = (int)local_540 - uVar32;
                      if (iVar36 == 0) {
                        iVar13 = 0;
                        local_540._0_4_ = iVar36;
                      }
                      else {
                        uVar37 = (long)iVar36 & 7;
                        if ((ulong)((long)(int)local_540 + (long)(int)~uVar32) < 7) {
                          uVar38 = 0;
                        }
                        else {
                          uVar38 = 0;
                          lVar33 = (ulong)uVar32 + 3;
                          do {
                            lVar8 = uVar38 + lVar33;
                            pcVar26 = (char *)((long)local_548 + uVar38 + 3);
                            pcVar26[-3] = *(char *)((long)local_548 + lVar8 + -3);
                            pcVar26[-2] = *(char *)((long)local_548 + lVar8 + -2);
                            pcVar26[-1] = *(char *)((long)local_548 + lVar8 + -1);
                            *pcVar26 = *(char *)((long)local_548 + uVar38 + lVar33);
                            pcVar26[1] = *(char *)((long)local_548 + lVar8 + 1);
                            pcVar26[2] = *(char *)((long)local_548 + lVar8 + 2);
                            pcVar26[3] = *(char *)((long)local_548 + lVar8 + 3);
                            uVar38 = uVar38 + 8;
                            pcVar26[4] = *(char *)((long)local_548 + lVar8 + 4);
                          } while (((long)iVar36 & 0xfffffffffffffff8U) != uVar38);
                        }
                        if (uVar37 != 0) {
                          pcVar26 = (char *)((long)local_548 + uVar38);
                          do {
                            uVar37 = uVar37 - 1;
                            *pcVar26 = pcVar26[uVar32];
                            pcVar26 = pcVar26 + 1;
                          } while (uVar37 != 0);
                        }
                        iVar13 = iVar36;
                        local_540._0_4_ = iVar36;
                      }
                    }
                    uVar32 = iVar13 - 2U & ((int)(iVar13 - 2U) >> 0x1f ^ 0xffffffffU);
                    uVar6 = (local_540._4_4_ & 0x7fffffff) - 1;
                    uVar19 = uVar32;
                    if ((int)uVar6 <= (int)uVar32) {
                      uVar19 = uVar6;
                    }
                    if (local_4b8 != 0) {
                      uVar19 = uVar32;
                    }
                    iVar36 = uVar19 + 1;
                    if ((int)(local_540._4_4_ & 0x7fffffff) <= (int)uVar19) {
                      FUN_030b4a20(&local_548,puVar9 + 0x20,iVar36);
                      iVar13 = (int)local_540;
                    }
                    if (iVar13 <= (int)uVar19 || iVar36 < iVar13) {
                      local_540._0_4_ = iVar36;
                    }
                    *(char *)((long)local_548 + (long)(int)uVar19) = '\0';
                  }
                  pvVar10 = local_610;
                  uVar32 = local_608._4_4_;
                  uVar38 = (ulong)(int)local_608._4_4_;
                  for (uVar37 = (ulong)(local_608._4_4_ & 0xa8953bd8);
                      lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                      uVar37 = uVar37 + 1 & uVar38) {
                    if ((lVar33 == 0xa8953bd8) &&
                       (iVar13 = strcmp("typeid",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)),
                       iVar13 == 0)) goto LAB_033a82b8;
                  }
                  uVar37 = (ulong)(uVar32 + 1);
LAB_033a82b8:
                  if (((int)uVar32 < (int)uVar37) ||
                     (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
                     (int)uVar37 < 0)) goto LAB_033a8cf8;
                  iVar13 = local_570[(uVar37 & 0xffffffff) * 2];
                  iVar36 = (local_570 + (uVar37 & 0xffffffff) * 2)[1];
                  piVar22 = (int *)(local_598 + local_5a8 + (long)iVar13);
                  pbVar25 = (byte *)(local_598 + local_5a8 + (long)iVar36);
                  if (iVar13 != iVar36) {
                    if ((char)*piVar22 == '\"') {
                      piVar22 = (int *)((long)piVar22 + 1);
                      pbVar25 = pbVar25 + -1;
                    }
                  }
                  if (((ulong)((long)pbVar25 - (long)piVar22) < 4) || (*piVar22 != 0x65707974))
                  goto LAB_033a8cf8;
                  pbVar3 = (byte *)(piVar22 + 1);
                  uVar37 = (long)pbVar25 - (long)pbVar3;
                  if ((int)uVar37 < 1) goto LAB_033a8cf8;
                  pbVar30 = (byte *)((long)piVar22 + 5);
                  if ((char)piVar22[1] != '-') {
                    pbVar30 = pbVar3;
                  }
                  if (pbVar25 <= pbVar30) goto LAB_033a8cf8;
                  bVar5 = *pbVar30;
                  while( true ) {
                    if (9 < bVar5 - 0x30) goto LAB_033a8cf8;
                    pbVar30 = pbVar30 + 1;
                    if (pbVar25 <= pbVar30) break;
                    bVar5 = *pbVar30;
                  }
                  if (0 < (int)uVar37) {
                    strncpy((char *)&local_88,(char *)pbVar3,uVar37 & 0xffffffff);
                  }
                  *(undefined1 *)((long)&local_88 + uVar37) = 0;
                  lVar16 = strtoll((char *)&local_88,(char **)0x0,0);
                  iVar13 = FUN_033b2d68(&local_628,"flags",local_3f4);
                  if (iVar13 < 0) goto LAB_033a8cf8;
                  uVar18 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,local_548,
                                        ~(uint)local_548 + (uint)local_548 + (int)local_540,1);
                  uVar11 = local_3f4[0];
                  lVar33 = FUN_031d8fdc(&local_2b0,local_3f4[0]);
                  local_250 = local_250 | 0x800000;
                  local_190 = 0;
                  *(long *)(lVar33 + 0x168) = local_148;
                  if (local_148 == 0) {
                    uVar37 = *(ulong *)(lVar33 + 0x60) & 0xfffffffffbffffff;
                    *(ulong *)(lVar33 + 0x60) = uVar37;
                  }
                  else {
                    uVar37 = *(ulong *)(lVar33 + 0x60) | 0x4000000;
                    *(ulong *)(lVar33 + 0x60) = uVar37;
                    *(long *)(lVar33 + 0x138) = local_148;
                  }
                  uVar19 = (uint)uVar11 << 0x10;
                  uVar32 = uVar19 | 0x200000;
                  if ((uVar11 & 0x30) != 0) {
                    uVar32 = uVar19;
                  }
                  *(undefined8 *)(lVar33 + 0xf8) = 0;
                  *(undefined8 *)(lVar33 + 0xe8) = uVar18;
                  *(ulong *)(lVar33 + 0xf0) = (ulong)uVar32;
                  *(undefined8 *)(lVar33 + 0x58) = 0;
                  *(ulong *)(lVar33 + 0x60) = uVar37 | 0x70000;
                  lVar33 = (long)local_3e0;
                  if ((int)(local_3dc & 0x7fffffff) <= local_3e0) {
                    FUN_0133bb88(&local_3e8,puVar9,lVar33 + 1);
                  }
                  uVar32 = local_540._4_4_;
                  *(int *)(local_3e8 + (long)local_3e0 * 4) = (int)lVar16;
                  local_3e0 = (int)(lVar33 + 1);
                  local_540 = (ulong)local_540._4_4_ << 0x20;
                  if ((-1 < (int)uVar32) && (local_548 != (undefined8 **)0x0)) {
                    (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))();
                  }
                }
                goto LAB_033a8aa4;
              }
              goto LAB_033a8d34;
            }
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 7) &&
               (*piVar22 == 0x73726576 && *(int *)((long)piVar22 + 3) == 0x6e6f6973)) {
              iVar13 = FUN_033b2d68(&local_628,"value",&local_548);
              if (iVar13 < 0) goto LAB_033a8d34;
              local_250 = local_250 | 0x10;
              local_228 = (long)(int)local_548;
            }
            else {
              if ((int)local_568 < 1) {
                plVar24 = (long *)0x0;
                lVar33 = 0;
              }
              else {
                plVar24 = (long *)(local_598 + local_5a8 + (long)*local_570);
                lVar33 = local_598 + local_5a8 + (long)local_570[1];
              }
              if ((lVar33 - (long)plVar24 != 10) ||
                 (*plVar24 != 0x6574656d61726170 || (short)plVar24[1] != 0x7372)) {
                if (DAT_0488e218 < 2) {
                  if (DAT_046aaf68 == '\0') goto LAB_033a8d34;
LAB_033a8dc8:
                  local_538 = &DAT_0488e1c8;
                  uStack_530 = 2;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_528 = nn::os::GetThreadId(pTVar14);
                  local_518 = 0;
                  local_510 = (char *)0x0;
                  local_508 = 0;
                  local_500 = 0;
                  local_540 = 0x10000000000;
                  local_4f8[0]._0_1_ = '\0';
                  if ((int)local_568 < 1) {
                    local_558 = 0;
                    lStack_550 = 0;
                  }
                  else {
                    local_558 = local_598 + local_5a8 + (long)*local_570;
                    lStack_550 = local_598 + local_5a8 + (long)local_570[1];
                  }
                  local_548 = local_4f8;
                  local_520 = local_4f8;
                  FUN_0322c554(&local_548,"Unknown element {}",PTR_DAT_047e5b50,&local_558);
                  local_510 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                  ;
                  local_508 = 0x253;
                  if ((char)local_4f8[0] != '\0') {
                    sVar17 = strlen((char *)local_4f8);
                    *(undefined2 *)
                     ((long)local_4f8 + (long)(int)((int)sVar17 - (uint)((int)sVar17 == 0xff))) = 10
                    ;
                    printf("%s",local_4f8);
                    fflush(__stream);
                  }
                }
                else {
                  if (DAT_046aaf68 != '\0') goto LAB_033a8dc8;
                  local_548 = (undefined8 **)0x0;
                  local_538 = &DAT_0488e1c8;
                  uStack_530 = 2;
                  pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
                  local_528 = nn::os::GetThreadId(pTVar14);
                  local_520 = (undefined8 **)0x0;
                  local_518 = 0;
                  local_510 = (char *)0x0;
                  local_508 = 0;
                  local_500 = 0;
                  if ((int)local_568 < 1) {
                    local_88 = 0;
                    local_80 = 0;
                  }
                  else {
                    local_88 = local_598 + local_5a8 + (long)*local_570;
                    local_80 = local_598 + local_5a8 + (long)local_570[1];
                  }
                  FUN_0322c554(&local_548,"Unknown element {}",PTR_DAT_047e5b50,&local_88);
                  local_510 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
                  ;
                  local_508 = 0x253;
                  FUN_0322c8e0(&local_548);
                }
                if (((ulong)local_520 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_520 + -1),0);
                }
                goto LAB_033a8ec8;
              }
              iVar13 = FUN_033b2d68(&local_628,"count",&local_548);
              if (iVar13 < 0) goto LAB_033a8ec8;
              local_250 = local_250 | 0x8000;
              local_1d0 = 0;
              while( true ) {
                iVar13 = FUN_033a6b98(&local_628,"parameters");
                pvVar10 = local_610;
                if (iVar13 < 0) break;
                if ((int)local_568 < 1) {
                  plVar24 = (long *)0x0;
                  lVar33 = 0;
                }
                else {
                  plVar24 = (long *)(local_598 + local_5a8 + (long)*local_570);
                  lVar33 = local_598 + local_5a8 + (long)local_570[1];
                }
                if ((lVar33 - (long)plVar24 == 9) &&
                   (*plVar24 == 0x6172617065707974 && (char)plVar24[1] == 'm')) {
                  uVar32 = local_608._4_4_;
                  uVar38 = (ulong)(int)local_608._4_4_;
                  for (uVar37 = (ulong)(local_608._4_4_ & 0x37386ae0);
                      lVar33 = *(long *)((long)pvVar10 + uVar37 * 0x18), lVar33 != -1;
                      uVar37 = uVar37 + 1 & uVar38) {
                    if ((lVar33 == 0x37386ae0) &&
                       (iVar13 = strcmp("id",*(char **)((long)pvVar10 + uVar37 * 0x18 + 8)),
                       iVar13 == 0)) goto LAB_033a7e14;
                  }
                  uVar37 = (ulong)(uVar32 + 1);
LAB_033a7e14:
                  if (((int)uVar32 < (int)uVar37) ||
                     (uVar37 = *(ulong *)((long)pvVar10 + (long)(int)uVar37 * 0x18 + 0x10),
                     (int)uVar37 < 0)) goto LAB_033a8ec8;
                  iVar13 = local_570[(uVar37 & 0xffffffff) * 2];
                  iVar36 = (local_570 + (uVar37 & 0xffffffff) * 2)[1];
                  piVar22 = (int *)(local_598 + local_5a8 + (long)iVar13);
                  pbVar25 = (byte *)(local_598 + local_5a8 + (long)iVar36);
                  if (iVar13 != iVar36) {
                    if ((char)*piVar22 == '\"') {
                      piVar22 = (int *)((long)piVar22 + 1);
                      pbVar25 = pbVar25 + -1;
                    }
                  }
                  if (((ulong)((long)pbVar25 - (long)piVar22) < 4) || (*piVar22 != 0x65707974))
                  goto LAB_033a8ec8;
                  pbVar3 = (byte *)(piVar22 + 1);
                  uVar37 = (long)pbVar25 - (long)pbVar3;
                  if ((int)uVar37 < 1) goto LAB_033a8ec8;
                  pbVar30 = (byte *)((long)piVar22 + 5);
                  if ((char)piVar22[1] != '-') {
                    pbVar30 = pbVar3;
                  }
                  if (pbVar25 <= pbVar30) goto LAB_033a8ec8;
                  bVar5 = *pbVar30;
                  while( true ) {
                    if (9 < bVar5 - 0x30) goto LAB_033a8ec8;
                    pbVar30 = pbVar30 + 1;
                    if (pbVar25 <= pbVar30) break;
                    bVar5 = *pbVar30;
                  }
                  if (0 < (int)uVar37) {
                    strncpy((char *)&local_88,(char *)pbVar3,uVar37 & 0xffffffff);
                  }
                  *(undefined1 *)((long)&local_88 + uVar37) = 0;
                  lVar16 = strtoll((char *)&local_88,(char **)0x0,0);
                  FUN_031d7f44(&local_2b0,0,&DAT_03bf264a);
                  lVar33 = (long)local_350;
                  if ((int)(local_34c & 0x7fffffff) <= local_350) {
                    FUN_0133bb88(&local_358,puVar9,lVar33 + 1);
                  }
                  *(int *)(local_358 + (long)local_350 * 4) = (int)lVar16;
                  local_350 = (int)(lVar33 + 1);
                }
                else {
                  if ((int)local_568 < 1) {
                    plVar24 = (long *)0x0;
                    lVar33 = 0;
                  }
                  else {
                    plVar24 = (long *)(local_598 + local_5a8 + (long)*local_570);
                    lVar33 = local_598 + local_5a8 + (long)local_570[1];
                  }
                  if (((lVar33 - (long)plVar24 != 10) ||
                      (*plVar24 != 0x72617065756c6176 || (short)plVar24[1] != 0x6d61)) ||
                     (iVar13 = FUN_033b2d68(&local_628,"value",&local_88), iVar13 < 0))
                  goto LAB_033a8ec8;
                  FUN_031d8080(&local_2b0,(long)(int)local_88,&DAT_03c0127e);
                }
              }
            }
          }
LAB_033a8aa4:
          iVar13 = FUN_033a6b98(&local_628,&DAT_03c8f563);
        } while (-1 < iVar13);
      }
      iVar13 = FUN_031d8d9c(&local_2b0,param_1 + 0x18,&local_88);
      lVar33 = local_88;
      if (iVar13 < 0) {
        if (DAT_0488e218 == 0) {
          if (DAT_046aaf68 != '\0') goto LAB_033a8f80;
        }
        else {
          if (DAT_046aaf68 != '\0') {
LAB_033a8f80:
            local_538 = &DAT_0488e1c8;
            uStack_530 = 1;
            pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
            local_528 = nn::os::GetThreadId(pTVar14);
            local_518 = 0;
            local_510 = (char *)0x0;
            local_508 = 0;
            local_500 = 0;
            local_540 = 0x10000000000;
            local_4f8[0]._0_1_ = '\0';
            local_548 = local_4f8;
            local_520 = local_4f8;
            FUN_0322c554(&local_548,"Failed to allocate type from builder",PTR_DAT_047d1b38);
            local_510 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
            ;
            local_508 = 0x25b;
            if ((char)local_4f8[0] != '\0') {
              sVar17 = strlen((char *)local_4f8);
              *(undefined2 *)
               ((long)local_4f8 + (long)(int)((int)sVar17 - (uint)((int)sVar17 == 0xff))) = 10;
              printf("%s",local_4f8);
              fflush(__stream);
            }
            if (((ulong)local_520 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_520 + -1),0);
            }
            bVar7 = true;
            goto LAB_033a8ed4;
          }
          local_548 = (undefined8 **)0x0;
          local_538 = &DAT_0488e1c8;
          uStack_530 = 1;
          pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
          local_528 = nn::os::GetThreadId(pTVar14);
          local_500 = 0;
          local_520 = (undefined8 **)0x0;
          local_518 = 0;
          local_510 = (char *)0x0;
          local_508 = 0;
          FUN_0322c554(&local_548,"Failed to allocate type from builder",PTR_DAT_047d1b38);
          local_510 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Serialize/Format/Xml/hkXmlReadFormat.cpp"
          ;
          local_508 = 0x25b;
          FUN_0322c8e0(&local_548);
          if (((ulong)local_520 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_520 + -1),0);
          }
        }
LAB_033a8d34:
        bVar7 = true;
      }
      else {
        uVar20 = *(uint *)(param_1 + 0x70);
        uVar12 = uVar20;
        if ((int)uVar20 <= iVar28 + 1) {
          uVar12 = iVar28 + 1;
        }
        if ((int)(*(uint *)(param_1 + 0x74) & 0x7fffffff) < (int)uVar12) {
          FUN_031d93e4(param_1 + 0x68,puVar9,(long)(int)uVar12);
          uVar20 = *(uint *)(param_1 + 0x70);
        }
        if ((int)uVar20 < (int)uVar12) {
          *(uint *)(param_1 + 0x70) = uVar12;
          memset((void *)(*(long *)(param_1 + 0x68) + (long)(int)uVar20 * 8),0,
                 (ulong)(uVar12 + ~uVar20) * 8 + 8);
        }
        else if ((int)uVar12 < (int)uVar20) {
          *(uint *)(param_1 + 0x70) = uVar12;
        }
        *(long *)(*(long *)(param_1 + 0x68) +
                 (-(uVar35 >> 0x1f & 1) & 0xfffffff800000000 | (uVar35 & 0xffffffff) << 3)) = lVar33
        ;
        FUN_033749b8(param_1 + 0xd0,uVar35,lVar33);
        FUN_03374ae8(param_1 + 0xd0,lVar33,&local_3f0,*(long *)(param_1 + 0x68),
                     *(long *)(param_1 + 0x68) + (long)*(int *)(param_1 + 0x70) * 8);
        bVar7 = false;
      }
LAB_033a8ed4:
      local_2c0 = 0;
      if ((-1 < (int)local_2bc) && (local_2c8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_2c8,(ulong)local_2bc << 2);
      }
      local_2c8 = (undefined1 *)0x0;
      local_2bc = 0x80000000;
      local_350 = 0;
      if ((-1 < (int)local_34c) && (local_358 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_358,(ulong)local_34c << 2);
      }
      local_358 = (undefined1 *)0x0;
      local_34c = 0x80000000;
      local_3e0 = 0;
      if ((-1 < (int)local_3dc) && (local_3e8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_3e8,(ulong)local_3dc << 2);
      }
      FUN_031d798c(&local_2b0);
      if (bVar7) goto LAB_033a6fc0;
    }
    else {
      if ((int)local_568 < 1) {
        piVar22 = (int *)0x0;
        lVar33 = 0;
      }
      else {
        piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
        lVar33 = local_598 + local_5a8 + (long)local_570[1];
      }
      if ((lVar33 - (long)piVar22 == 6) && (*piVar22 == 0x656a626f && (short)piVar22[1] == 0x7463))
      {
        FUN_033a935c(param_1);
        uVar18 = 0;
LAB_033a7390:
        iVar13 = FUN_033a9650(param_1,&local_628,uVar18);
        if (iVar13 < 0) goto LAB_033a6fc0;
      }
      else {
        if ((int)local_568 < 1) {
          piVar22 = (int *)0x0;
          lVar33 = 0;
        }
        else {
          piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
          lVar33 = local_598 + local_5a8 + (long)local_570[1];
        }
        if ((lVar33 - (long)piVar22 == 6) && (*piVar22 == 0x6f706d69 && (short)piVar22[1] == 0x7472)
           ) {
          do {
            iVar13 = FUN_033a6b98(&local_628,"import");
          } while (-1 < iVar13);
        }
        else {
          if ((int)local_568 < 1) {
            piVar22 = (int *)0x0;
            lVar33 = 0;
          }
          else {
            piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
            lVar33 = local_598 + local_5a8 + (long)local_570[1];
          }
          if ((lVar33 - (long)piVar22 != 6) ||
             (*piVar22 != 0x6f707865 || (short)piVar22[1] != 0x7472)) {
            if ((int)local_568 < 1) {
              piVar22 = (int *)0x0;
              lVar33 = 0;
            }
            else {
              piVar22 = (int *)(local_598 + local_5a8 + (long)*local_570);
              lVar33 = local_598 + local_5a8 + (long)local_570[1];
            }
            if ((lVar33 - (long)piVar22 == 4) && (*piVar22 == 0x65746f6e)) {
              FUN_033a935c(param_1);
              uVar18 = 1;
              goto LAB_033a7390;
            }
            goto LAB_033a6fc0;
          }
          do {
            iVar13 = FUN_033a6b98(&local_628,"export");
          } while (-1 < iVar13);
        }
      }
    }
    iVar13 = FUN_033a6b98(&local_628,"hktagfile");
  } while (-1 < iVar13);
LAB_033a90e4:
  iVar13 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x194) = iVar13 + -1;
  if (1 < *(int *)(param_1 + 0x188)) {
    lVar34 = 1;
    do {
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0x180) + lVar34 * 0x10);
      uVar18 = *puVar31;
      iVar36 = *(int *)(puVar31 + 1);
      uVar4 = *(undefined4 *)((long)puVar31 + 0xc);
      iVar28 = iVar13 + 1;
      iVar29 = iVar13;
      if (iVar13 < (int)(*(uint *)(param_1 + 0x84) & 0x7fffffff)) {
LAB_033a916c:
        *(int *)(param_1 + 0x80) = iVar28;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar29 * 0x18);
        lVar33 = (long)iVar28 * 0x18 + (long)iVar29 * -0x18;
        do {
          *(undefined4 *)((long)puVar31 + 0x14) = 0;
          lVar33 = lVar33 + -0x18;
          *(undefined1 *)(puVar31 + 2) = 0;
          *puVar31 = 0;
          puVar31[1] = 0;
          puVar31 = puVar31 + 3;
        } while (lVar33 != 0);
      }
      else {
        FUN_033277d4((long *)(param_1 + 0x78),PTR_PTR_047d1a50,(long)iVar28);
        iVar29 = *(int *)(param_1 + 0x80);
        if (iVar29 <= iVar13) goto LAB_033a916c;
        if (iVar28 < iVar29) {
          *(int *)(param_1 + 0x80) = iVar28;
        }
      }
      lVar34 = lVar34 + 1;
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar13 * 0x18);
      uVar27 = *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)iVar36 * 8);
      *(undefined1 *)(puVar31 + 2) = 1;
      *puVar31 = uVar18;
      puVar31[1] = uVar27;
      *(undefined4 *)((long)puVar31 + 0x14) = uVar4;
      if (*(int *)(param_1 + 0x188) <= lVar34) break;
      iVar13 = *(int *)(param_1 + 0x80);
    } while( true );
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  lVar34 = param_1 + 0x60;
  goto LAB_033a6fc4;
}


