/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc8750; name: FUN_00dc8750
 */


/* WARNING: Control flow encountered bad instruction data */

ulong FUN_00dc8750(long param_1,long param_2,long param_3,long param_4,int param_5,
                  undefined4 param_6,int param_7,long param_8,ulong param_9,code *param_10,
                  undefined8 param_11,undefined1 *param_12,long param_13,int param_14)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  code *pcVar14;
  ulong *puVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  code *local_a0;
  undefined8 local_98;
  long local_90;
  ulong local_88;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  
  puVar5 = auStack_b0;
  puVar4 = auStack_b0;
  local_74 = param_5;
  if (*(code **)PTR_DAT_047cb878 != (code *)0x0) {
    uVar9 = (**(code **)PTR_DAT_047cb878)("OodleLZ_Decompress",0);
    if (param_3 != 0) goto LAB_00dc87bc;
LAB_00dc8808:
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 != (code *)0x0) {
      pcVar12 = "OODLE ERROR : bad parameter : decodeTo != 0L\n";
      uVar11 = 0x570;
      goto LAB_00dc885c;
    }
    goto LAB_00dc8864;
  }
  uVar9 = 0xffffffffffffffff;
  if (param_3 == 0) goto LAB_00dc8808;
LAB_00dc87bc:
  if (param_1 == 0) {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 == (code *)0x0) goto LAB_00dc8864;
    pcVar12 = "OODLE ERROR : bad parameter : compBuf != 0L\n";
    uVar11 = 0x571;
LAB_00dc885c:
    (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar11,pcVar12);
    goto LAB_00dc8864;
  }
  if (param_4 == 0) {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 != (code *)0x0) {
      pcVar12 = "OODLE ERROR : OodleLZ_Decompress: asked for len 0\n";
      uVar11 = 0x575;
      goto LAB_00dc885c;
    }
    goto LAB_00dc8864;
  }
  if (param_8 == 0) {
    uVar19 = 0;
    param_8 = param_3;
  }
  else {
    uVar19 = param_3 - param_8;
    if ((uVar19 & 0x3ffff) != 0) {
      FUN_0015c3d0();
      pcVar14 = *(code **)PTR_PTR_047cb868;
      if (pcVar14 != (code *)0x0) {
        pcVar12 = 
        "OODLE ERROR : OodleLZ_Decompress: dictionary backup distance must be a multiple of OODLELZ_BLOCK_LEN\n"
        ;
        uVar11 = 0x58e;
        goto LAB_00dc885c;
      }
      goto LAB_00dc8864;
    }
  }
  uVar16 = uVar19 + param_4;
  local_88 = uVar16;
  if (0 < (long)param_9) {
    local_88 = param_9;
  }
  local_7c = param_6;
  local_78 = param_7;
  uVar10 = FUN_00151db0(param_1,param_2,param_4);
  uVar6 = (uint)uVar10;
  if (uVar6 == 0xffffffff) goto LAB_00dc8868;
  uVar10 = uVar10 & 0xffffffff;
  if ((local_74 == 1) && ((0x3f18U >> (ulong)(uVar6 & 0x1f) & 1) == 0)) {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 != (code *)0x0) {
      pcVar12 = 
      "OODLE ERROR : OodleLZ_Decompress: Requested Fuzz Safety, saw a compressor that can\'t decode Safe\n"
      ;
      uVar11 = 0x5a6;
      goto LAB_00dc885c;
    }
    goto LAB_00dc8864;
  }
  local_90 = CONCAT44(local_90._4_4_,3);
  local_98 = uVar9;
  if ((param_14 == 0) || (param_14 == 3)) {
LAB_00dc8948:
    uVar1 = 0x4e7 >> (ulong)(uVar6 & 0x1f);
    if (((uVar1 & 1) != 0) && (*(long *)(PTR_DAT_047cb870 + 0x60) == 0)) {
      FUN_0015c3d0();
      pcVar14 = *(code **)PTR_PTR_047cb868;
      uVar9 = local_98;
      if (pcVar14 != (code *)0x0) {
        pcVar12 = 
        "OODLE ERROR : OodleLZ_Decompress: asked to decode Legacy compressor; not supported!\n";
        uVar11 = 0x5c7;
        goto LAB_00dc885c;
      }
      goto LAB_00dc8864;
    }
    iVar8 = (int)uVar16;
    if ((int)uVar6 < 0xe) {
      iVar17 = 0;
      bVar2 = false;
      if ((uVar1 & 1) == 0) goto LAB_00dc8a7c;
LAB_00dc89bc:
      uVar6 = (uint)uVar10;
      if (*(code **)(PTR_DAT_047cb870 + 0x20) == (code *)0x0) {
        iVar7 = -1;
        if (iVar17 == 0) goto LAB_00dc8af8;
        goto LAB_00dc8b08;
      }
      local_a0 = (code *)CONCAT44(local_a0._4_4_,iVar17);
      iVar7 = (**(code **)(PTR_DAT_047cb870 + 0x20))(uVar10);
      iVar7 = iVar7 + 0xa8;
      if (((ulong)local_a0 & 1) != 0) goto LAB_00dc8b08;
LAB_00dc8af8:
      iVar17 = iVar7;
      if ((0x3b00U >> (ulong)(uVar6 & 0x1f) & 1) != 0) goto LAB_00dc8b08;
    }
    else {
      uVar6 = 0xc;
      if (*(long *)(PTR_DAT_047cb870 + 0x60) != 0) {
        uVar6 = 6;
      }
      uVar10 = (ulong)uVar6;
      iVar17 = 1;
      bVar2 = true;
      if ((0x4e7U >> uVar10 & 1) != 0) goto LAB_00dc89bc;
LAB_00dc8a7c:
      iVar7 = 0xa8;
      if (!bVar2) goto LAB_00dc8af8;
LAB_00dc8b08:
      if (0x1ffff < (long)uVar16) {
        iVar8 = 0x20000;
      }
      iVar17 = 0x20000;
      if (0 < (long)uVar16) {
        iVar17 = iVar8;
      }
      iVar8 = 0;
      if ((uVar6 | 2) != 0xb) {
        iVar8 = iVar17;
      }
      iVar17 = iVar8 + iVar17 * 2 + iVar7 + 0xd020;
    }
    if (param_12 == (undefined1 *)0x0) {
      if (iVar17 < *(int *)PTR_DAT_047cb888) {
        param_13 = (long)(iVar17 + 0x10);
        puVar4 = auStack_b0 + -(param_13 + 0xfU & 0xfffffffffffffff0);
        param_12 = puVar4;
        goto LAB_00dc8bac;
      }
      local_a0 = (code *)CONCAT44(local_a0._4_4_,iVar7);
      FUN_001c3650();
      param_13 = (long)iVar17;
      puVar15 = (ulong *)(**(code **)PTR_PTR_047cb890)(param_13,0x10);
      if (puVar15 == (ulong *)0x0) {
        FUN_0015ed40(param_13);
      }
      FUN_0015cf00(puVar15,0xa0);
      *(undefined4 *)((long)puVar15 + 0x2c) = 1;
    }
    else {
      if (param_13 < iVar17 + 0x10) {
        FUN_0015c3d0();
        pcVar14 = *(code **)PTR_PTR_047cb868;
        uVar9 = local_98;
        if (pcVar14 == (code *)0x0) goto LAB_00dc8864;
        pcVar12 = "OODLE ERROR : OodleLZ_Decompress : decoder memory given, but too small!\n";
        uVar11 = 0x5dc;
        goto LAB_00dc885c;
      }
LAB_00dc8bac:
      local_a0 = (code *)CONCAT44(local_a0._4_4_,iVar7);
      FUN_001c3650();
      param_13 = param_13 + -0x10;
      puVar15 = (ulong *)((ulong)(param_12 + 0xf) & 0xfffffffffffffff0);
      FUN_0015cf00(puVar15,0xa0);
      puVar5 = puVar4;
    }
    *(undefined4 *)(puVar15 + 5) = 0;
    uVar10 = 0x3fffffffffffffff;
    if (-1 < (long)uVar16) {
      uVar10 = uVar16;
    }
    *puVar15 = uVar19;
    puVar15[1] = uVar10;
    puVar15[2] = 0xffffffffffffffff;
    puVar15[3] = 0;
    puVar15[4] = 0xabadf00dc0cac01a;
    *(int *)(puVar15 + 9) = (int)local_a0;
    *(int *)((long)puVar15 + 0x4c) = (int)param_13;
    puVar15[10] = (ulong)(puVar15 + 0x14);
    puVar15[0xb] = param_13 - (int)local_a0;
    if (0 < (long)uVar19) {
      puVar15[3] = 0;
    }
    uVar10 = uVar19;
    if ((long)uVar19 < (long)uVar16) {
      local_a8 = param_11;
      uVar18 = 0;
      local_a0 = param_10;
      if (local_78 < 3) {
        do {
          uVar3 = local_88;
          if (param_2 <= (long)uVar18) goto LAB_00dc8e8c;
          lVar13 = local_88 - uVar10;
          *(undefined4 *)(puVar5 + -8) = (undefined4)local_90;
          *(int *)(puVar5 + -0x10) = local_78;
          *(undefined4 *)(puVar5 + -0x18) = local_7c;
          *(int *)(puVar5 + -0x20) = local_74;
          iVar8 = FUN_00151040(puVar15,&local_70,param_8,uVar10,uVar3,lVar13,param_1 + uVar18,
                               param_2 - uVar18);
          if (iVar8 == 0) break;
          if (local_70 == 0) goto LAB_00dc8eb8;
          uVar10 = uVar10 + (long)local_70;
          uVar18 = uVar18 + (long)local_6c;
          if ((local_a0 != (code *)0x0) &&
             (iVar8 = (*local_a0)(local_a8,param_3,param_4,param_1,param_2,uVar10 - uVar19,uVar18),
             iVar8 == 1)) break;
        } while ((long)uVar10 < (long)uVar16);
      }
      else {
        while( true ) {
          if (param_2 <= (long)uVar18) goto LAB_00dc8e8c;
          if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
            (**(code **)PTR_PTR_047cb868)
                      (1,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5fa,
                       "OodleLZ_Decompress about to DecodeSome, starting at comp %d -> raw %d\n",
                       uVar18 & 0xffffffff,uVar10 & 0xffffffff);
          }
          uVar3 = local_88;
          lVar13 = local_88 - uVar10;
          *(undefined4 *)(puVar5 + -8) = (undefined4)local_90;
          *(int *)(puVar5 + -0x10) = local_78;
          *(undefined4 *)(puVar5 + -0x18) = local_7c;
          *(int *)(puVar5 + -0x20) = local_74;
          iVar8 = FUN_00151040(puVar15,&local_70,param_8,uVar10,uVar3,lVar13,param_1 + uVar18,
                               param_2 - uVar18);
          if (iVar8 == 0) break;
          if (local_70 == 0) goto LAB_00dc8eb8;
          uVar10 = uVar10 + (long)local_70;
          uVar18 = uVar18 + (long)local_6c;
          if (((local_a0 != (code *)0x0) &&
              (iVar8 = (*local_a0)(local_a8,param_3,param_4,param_1,param_2,uVar10 - uVar19,uVar18),
              iVar8 == 1)) || ((long)uVar16 <= (long)uVar10)) break;
        }
      }
    }
    iVar8 = *(int *)((long)puVar15 + 0x2c);
    goto joined_r0x00dc8ef0;
  }
  if (1 < param_14 - 1U) {
    local_90 = param_13;
    iVar8 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x5b5,
                         "OodleLZ_Decompress",
                         "threadPhase == OodleLZ_Decode_ThreadPhase1 || threadPhase == OodleLZ_Decode_ThreadPhase2"
                        );
    param_13 = local_90;
    if (iVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((0x3b00U >> (ulong)(uVar6 & 0x1f) & 1) == 0) {
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 != (code *)0x0) {
      pcVar12 = 
      "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but !OodleLZ_Compressor_CanDecodeThreadPhased\n"
      ;
      uVar9 = 0x5b9;
      goto LAB_00dc8ac8;
    }
  }
  else {
    if (param_12 != (undefined1 *)0x0) {
      local_90 = CONCAT44(local_90._4_4_,param_14);
      if (0xda0f7 < param_13) goto LAB_00dc8948;
    }
    FUN_0015c3d0();
    pcVar14 = *(code **)PTR_PTR_047cb868;
    if (pcVar14 != (code *)0x0) {
      pcVar12 = 
      "OODLE ERROR : OodleLZ_Decompress: asked for threaded decode but decoderMemory < OodleLZ_ThreadPhased_BlockDecoderMemorySizeNeeded\n"
      ;
      uVar9 = 0x5bf;
LAB_00dc8ac8:
      (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar9,pcVar12);
    }
  }
  FUN_0015c3f0();
  uVar16 = 0;
  pcVar14 = *(code **)PTR_DAT_047cb880;
  uVar9 = local_98;
  if (pcVar14 == (code *)0x0) {
    return 0;
  }
  goto LAB_00dc887c;
LAB_00dc8e8c:
  FUN_0015c3d0();
  pcVar14 = *(code **)PTR_PTR_047cb868;
  if (pcVar14 != (code *)0x0) {
    pcVar12 = "OODLE ERROR : LZ corruption : OodleLZ_Decompress not enough comp buf\n";
    uVar9 = 0x5f4;
    goto LAB_00dc8ee0;
  }
  goto LAB_00dc8ee8;
LAB_00dc8eb8:
  FUN_0015c3d0();
  pcVar14 = *(code **)PTR_PTR_047cb868;
  if (pcVar14 != (code *)0x0) {
    pcVar12 = 
    "OODLE ERROR : LZ corruption : OodleLZ_Decompress : DecodeSome wanted more comp data\n";
    uVar9 = 0x60d;
LAB_00dc8ee0:
    (*pcVar14)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar9,pcVar12);
  }
LAB_00dc8ee8:
  FUN_0015c3f0();
  iVar8 = *(int *)((long)puVar15 + 0x2c);
joined_r0x00dc8ef0:
  if (iVar8 != 0) {
    (**(code **)PTR_PTR_047cb898)(puVar15);
  }
  uVar9 = local_98;
  if (uVar10 != uVar16) {
    FUN_0015c3d0();
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0x625,
                 "OODLE ERROR : LZ corruption : OodleLZ_Decompress failed (%d != %d)\n",
                 uVar10 & 0xffffffff,uVar16 & 0xffffffff);
    }
LAB_00dc8864:
    FUN_0015c3f0();
LAB_00dc8868:
    uVar16 = 0;
  }
  pcVar14 = *(code **)PTR_DAT_047cb880;
  if (pcVar14 != (code *)0x0) {
LAB_00dc887c:
    (*pcVar14)(uVar9);
  }
  return uVar16;
}


