/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a26c0; name: FUN_002a26c0
 */


void FUN_002a26c0(long *param_1,int *param_2,long param_3,undefined4 *param_4,undefined8 *param_5)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  void *pvVar10;
  size_t sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  void *pvVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  undefined8 uVar25;
  char *local_128;
  undefined8 uStack_120;
  long local_f8;
  ulong uStack_f0;
  uint local_c8;
  char cStack_c4;
  char cStack_c3;
  char cStack_c2;
  char cStack_c1;
  uint local_c0;
  char cStack_bc;
  char cStack_bb;
  char cStack_ba;
  undefined1 uStack_b9;
  long lStack_b8;
  undefined8 local_b0;
  undefined4 *puStack_a8;
  byte local_98 [16];
  ulong local_88;
  undefined1 auStack_80 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 == 5) {
    local_c8 = 0x6572700c;
    cStack_c4 = 0x66;
    piVar8 = param_2 + 8;
    cStack_c3 = 0x69;
    cStack_c2 = 0x78;
    cStack_c1 = 0;
                    /* try { // try from 002a2728 to 002a2733 has its CatchHandler @ 002a4a90 */
    piVar5 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    param_2 = param_2 + 10;
    if (param_2 == piVar5) {
LAB_002a28c4:
      bVar2 = false;
    }
    else {
      if (piVar5[0xe] != 4) {
                    /* try { // try from 002a27e0 to 002a280b has its CatchHandler @ 002a4a5c */
        FUN_003673f0(&local_c8,"field:prefix error: should be string");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x359,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        if (puVar9 < (undefined8 *)param_1[2]) {
          *puVar9 = uVar6;
          param_1[1] = (long)(puVar9 + 1);
        }
        else {
          lVar16 = (long)puVar9 - *param_1 >> 3;
          uVar24 = lVar16 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4968 to 002a496f has its CatchHandler @ 002a4a5c */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = param_1[2] - *param_1;
          uVar17 = lVar20 >> 2;
          if (uVar24 <= uVar17) {
            uVar24 = uVar17;
          }
          if (0xffffffffffffffe < (ulong)(lVar20 >> 3)) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (uVar24 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
          }
          puVar9 = (undefined8 *)(lVar20 + lVar16 * 8);
          *puVar9 = uVar6;
          pvVar10 = (void *)*param_1;
          sVar11 = param_1[1] - (long)pvVar10;
          if (0 < (long)sVar11) {
            memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
            pvVar10 = (void *)*param_1;
          }
          *param_1 = (long)((long)puVar9 - sVar11);
          param_1[1] = (long)(puVar9 + 1);
          param_1[2] = lVar20 + uVar24 * 8;
          if (pvVar10 != (void *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        goto LAB_002a28c4;
      }
      bVar2 = true;
      *param_4 = 1;
                    /* try { // try from 002a277c to 002a277f has its CatchHandler @ 002a4a78 */
      FUN_001fcec0(param_4 + 2,piVar5 + 0x10);
    }
    local_c8 = 0x74617008;
    cStack_c4 = 0x68;
    cStack_c3 = 0;
                    /* try { // try from 002a28e0 to 002a28eb has its CatchHandler @ 002a4a8c */
    piVar5 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (bVar2) {
                    /* try { // try from 002a2914 to 002a296f has its CatchHandler @ 002a4a58 */
        FUN_003673f0(&local_c8,"field:path error: other path matcher already specified");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x365,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)param_1[2];
        if (puVar12 <= puVar9) {
          lVar16 = *param_1;
          lVar20 = (long)puVar9 - lVar16 >> 3;
          uVar24 = lVar20 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_002a29f0;
        }
LAB_002a29cc:
        *puVar9 = uVar6;
        param_1[1] = (long)(puVar9 + 1);
      }
      else if (piVar5[0xe] == 4) {
        *param_4 = 0;
                    /* try { // try from 002a2988 to 002a298b has its CatchHandler @ 002a4a78 */
        FUN_001fcec0(param_4 + 2,piVar5 + 0x10);
      }
      else {
                    /* try { // try from 002a2990 to 002a29bb has its CatchHandler @ 002a4a34 */
        FUN_003673f0(&local_c8,"field:path error: should be string");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x36a,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)param_1[2];
        if (puVar9 < puVar12) goto LAB_002a29cc;
        lVar16 = *param_1;
        lVar20 = (long)puVar9 - lVar16 >> 3;
        uVar24 = lVar20 + 1;
        if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4980 to 002a4987 has its CatchHandler @ 002a4a34 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_002a29f0:
        uVar17 = (long)puVar12 - lVar16 >> 2;
        if (uVar24 <= uVar17) {
          uVar24 = uVar17;
        }
        if (0xffffffffffffffe < (ulong)((long)puVar12 - lVar16 >> 3)) {
          uVar24 = 0x1fffffffffffffff;
        }
        if (uVar24 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
        }
        puVar9 = (undefined8 *)(lVar16 + lVar20 * 8);
        *puVar9 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar9 - sVar11);
        param_1[1] = (long)(puVar9 + 1);
        param_1[2] = lVar16 + uVar24 * 8;
        if (pvVar10 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      bVar2 = true;
    }
    local_c8 = 0x6765720a;
    cStack_c4 = 0x65;
    cStack_c3 = 0x78;
    cStack_c2 = 0;
                    /* try { // try from 002a2a94 to 002a2a9f has its CatchHandler @ 002a4a88 */
    piVar5 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    if (param_2 == piVar5) {
      if (!bVar2) {
                    /* try { // try from 002a2b28 to 002a2b83 has its CatchHandler @ 002a4a38 */
        FUN_003673f0(&local_c8,"one path matcher: prefix, path, or regex is required");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x387,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)param_1[2];
        if (puVar9 < puVar12) goto LAB_002a2c1c;
        lVar16 = *param_1;
        lVar20 = (long)puVar9 - lVar16 >> 3;
        uVar24 = lVar20 + 1;
        if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        goto LAB_002a2c40;
      }
    }
    else {
      if (bVar2) {
                    /* try { // try from 002a2ac8 to 002a2b23 has its CatchHandler @ 002a4a54 */
        FUN_003673f0(&local_c8,"field:regex error: other path matcher already specified");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x377,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)param_1[2];
        if (puVar9 < puVar12) {
LAB_002a2c1c:
          *puVar9 = uVar6;
          param_1[1] = (long)(puVar9 + 1);
          goto LAB_002a2cc4;
        }
        lVar16 = *param_1;
        lVar20 = (long)puVar9 - lVar16 >> 3;
        uVar24 = lVar20 + 1;
        if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
LAB_002a2c40:
        uVar17 = (long)puVar12 - lVar16 >> 2;
        if (uVar24 <= uVar17) {
          uVar24 = uVar17;
        }
        if (0xffffffffffffffe < (ulong)((long)puVar12 - lVar16 >> 3)) {
          uVar24 = 0x1fffffffffffffff;
        }
        if (uVar24 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
        }
        puVar9 = (undefined8 *)(lVar16 + lVar20 * 8);
        *puVar9 = uVar6;
        pvVar10 = (void *)*param_1;
        sVar11 = param_1[1] - (long)pvVar10;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
          pvVar10 = (void *)*param_1;
        }
        *param_1 = (long)((long)puVar9 - sVar11);
        param_1[1] = (long)(puVar9 + 1);
        param_1[2] = lVar16 + uVar24 * 8;
        if (pvVar10 == (void *)0x0) goto LAB_002a2cc4;
      }
      else {
        if (piVar5[0xe] != 4) {
                    /* try { // try from 002a2be0 to 002a2c0b has its CatchHandler @ 002a4a30 */
          FUN_003673f0(&local_c8,"field:regex error: should be string");
          uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                               ,0x37c,&local_c8,0,0);
          puVar9 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)param_1[2];
          if (puVar9 < puVar12) goto LAB_002a2c1c;
          lVar16 = *param_1;
          lVar20 = (long)puVar9 - lVar16 >> 3;
          uVar24 = lVar20 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4988 to 002a498f has its CatchHandler @ 002a4a30 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_002a2c40;
        }
        *param_4 = 2;
        lVar16 = FUN_0049e770(PTR_FUN_047cba38,200);
        if (lVar16 != 0) {
                    /* try { // try from 002a2bb4 to 002a2bbb has its CatchHandler @ 002a49f4 */
          FUN_002cc5e0(lVar16,piVar5 + 0x10);
        }
        pvVar10 = *(void **)(param_4 + 8);
        *(long *)(param_4 + 8) = lVar16;
        if (pvVar10 == (void *)0x0) goto LAB_002a2cc4;
        FUN_002ccc4c(pvVar10);
      }
      FUN_0049e790(PTR_LAB_047cba48,pvVar10);
    }
LAB_002a2cc4:
    local_c8 = 0x6165680e;
    cStack_c4 = 100;
    cStack_c3 = 0x65;
    cStack_c2 = 'r';
    cStack_c1 = 0x73;
    local_c0 = local_c0 & 0xffffff00;
                    /* try { // try from 002a2ce8 to 002a2cf7 has its CatchHandler @ 002a4a84 */
    piVar5 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (piVar5[0xe] == 6) {
        lVar16 = *(long *)(piVar5 + 0x1c);
        if (*(long *)(piVar5 + 0x1e) != lVar16) {
          uVar24 = 0;
          pcVar22 = (char *)((ulong)&local_c8 | 1);
          do {
            if (*(int *)(lVar16 + uVar24 * 0x50) == 5) {
              puVar9 = *(undefined8 **)(param_4 + 0xc);
              if (puVar9 < *(undefined8 **)(param_4 + 0xe)) {
                puVar12 = puVar9 + 0xb;
                puVar9[10] = 0;
                puVar9[7] = 0;
                puVar9[6] = 0;
                puVar9[9] = 0;
                puVar9[8] = 0;
                puVar9[1] = 0;
                *puVar9 = 0;
                puVar9[3] = 0;
                puVar9[2] = 0;
                puVar9[5] = 0;
                puVar9[4] = 0;
                *(undefined8 **)(param_4 + 0xc) = puVar12;
              }
              else {
                lVar7 = *(long *)(param_4 + 10);
                lVar20 = (long)puVar9 - lVar7 >> 3;
                uVar17 = lVar20 * 0x2e8ba2e8ba2e8ba3 + 1;
                if (0x2e8ba2e8ba2e8ba < uVar17) {
                    /* try { // try from 002a48d0 to 002a48d7 has its CatchHandler @ 002a49e8 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar7 = (long)*(undefined8 **)(param_4 + 0xe) - lVar7 >> 3;
                uVar18 = lVar7 * 0x5d1745d1745d1746;
                if (uVar17 <= uVar18) {
                  uVar17 = uVar18;
                }
                if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
                  uVar17 = 0x2e8ba2e8ba2e8ba;
                }
                local_b0 = 0;
                puStack_a8 = param_4 + 0xe;
                if (uVar17 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 * 0x58);
                }
                puVar12 = (undefined8 *)(lVar7 + lVar20 * 8);
                puVar9 = puVar12 + 0xb;
                local_c0 = (uint)puVar12;
                cStack_bc = (char)((ulong)puVar12 >> 0x20);
                cStack_bb = (char)((ulong)puVar12 >> 0x28);
                cStack_ba = (char)((ulong)puVar12 >> 0x30);
                uStack_b9 = (undefined1)((ulong)puVar12 >> 0x38);
                puVar12[10] = 0;
                puVar12[7] = 0;
                puVar12[6] = 0;
                puVar12[9] = 0;
                puVar12[8] = 0;
                puVar12[1] = 0;
                *puVar12 = 0;
                puVar12[3] = 0;
                puVar12[2] = 0;
                puVar12[5] = 0;
                puVar12[4] = 0;
                lVar20 = *(long *)(param_4 + 10);
                lVar21 = *(long *)(param_4 + 0xc);
                if (lVar21 == lVar20) {
                  lStack_b8 = lVar20;
                }
                else {
                  do {
                    uVar25 = *(undefined8 *)(lVar21 + -0x50);
                    uVar6 = *(undefined8 *)(lVar21 + -0x58);
                    puVar12[-9] = *(undefined8 *)(lVar21 + -0x48);
                    puVar12[-10] = uVar25;
                    puVar12[-0xb] = uVar6;
                    uVar25 = *(undefined8 *)(lVar21 + -0x38);
                    uVar6 = *(undefined8 *)(lVar21 + -0x40);
                    *(undefined8 *)(lVar21 + -0x50) = 0;
                    *(undefined8 *)(lVar21 + -0x48) = 0;
                    *(undefined8 *)(lVar21 + -0x58) = 0;
                    puVar12[-6] = *(undefined8 *)(lVar21 + -0x30);
                    puVar12[-7] = uVar25;
                    puVar12[-8] = uVar6;
                    uVar25 = *(undefined8 *)(lVar21 + -0x20);
                    uVar6 = *(undefined8 *)(lVar21 + -0x28);
                    puVar12[-3] = *(undefined8 *)(lVar21 + -0x18);
                    puVar12[-4] = uVar25;
                    puVar12[-5] = uVar6;
                    uVar6 = *(undefined8 *)(lVar21 + -0x10);
                    *(undefined8 *)(lVar21 + -0x20) = 0;
                    *(undefined8 *)(lVar21 + -0x18) = 0;
                    *(undefined8 *)(lVar21 + -0x28) = 0;
                    *(undefined8 *)(lVar21 + -0x10) = 0;
                    puVar12[-2] = uVar6;
                    *(undefined2 *)(puVar12 + -1) = *(undefined2 *)(lVar21 + -8);
                    lVar21 = lVar21 + -0x58;
                    puVar12 = (undefined8 *)
                              (CONCAT17(uStack_b9,
                                        CONCAT16(cStack_ba,
                                                 CONCAT15(cStack_bb,CONCAT14(cStack_bc,local_c0))))
                              + -0x58);
                    local_c0 = (uint)puVar12;
                    cStack_bc = (char)((ulong)puVar12 >> 0x20);
                    cStack_bb = (char)((ulong)puVar12 >> 0x28);
                    cStack_ba = (char)((ulong)puVar12 >> 0x30);
                    uStack_b9 = (undefined1)((ulong)puVar12 >> 0x38);
                  } while (lVar20 != lVar21);
                  lVar20 = *(long *)(param_4 + 10);
                  lStack_b8 = *(long *)(param_4 + 0xc);
                }
                *(undefined8 **)(param_4 + 10) = puVar12;
                *(undefined8 **)(param_4 + 0xc) = puVar9;
                local_c0 = (uint)lVar20;
                cStack_bc = (char)((ulong)lVar20 >> 0x20);
                cStack_bb = (char)((ulong)lVar20 >> 0x28);
                cStack_ba = (char)((ulong)lVar20 >> 0x30);
                uStack_b9 = (undefined1)((ulong)lVar20 >> 0x38);
                local_b0 = *(undefined8 *)(param_4 + 0xe);
                *(ulong *)(param_4 + 0xe) = lVar7 + uVar17 * 0x58;
                local_c8 = local_c0;
                cStack_c4 = cStack_bc;
                cStack_c3 = cStack_bb;
                cStack_c2 = cStack_ba;
                cStack_c1 = uStack_b9;
                FUN_002a4e44(&local_c8);
                puVar12 = *(undefined8 **)(param_4 + 0xc);
              }
              local_c8 = 0x6d616e08;
              cStack_c4 = 0x65;
              lVar20 = lVar16 + uVar24 * 0x50 + 0x20;
              cStack_c3 = 0;
                    /* try { // try from 002a3020 to 002a302b has its CatchHandler @ 002a4ad4 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              lVar16 = lVar16 + uVar24 * 0x50 + 0x28;
              if (lVar16 == lVar7) {
                    /* try { // try from 002a3074 to 002a309f has its CatchHandler @ 002a4ab8 */
                FUN_003673f0(&local_c8,"field:name error:required field missing");
                uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x39d,&local_c8,0,0);
                puVar9 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar9 < puVar13) goto LAB_002a3108;
                lVar7 = *param_1;
                lVar21 = (long)puVar9 - lVar7 >> 3;
                uVar17 = lVar21 + 1;
                if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48e0 to 002a48e7 has its CatchHandler @ 002a49e0 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
LAB_002a3164:
                uVar18 = (long)puVar13 - lVar7 >> 2;
                if (uVar17 <= uVar18) {
                  uVar17 = uVar18;
                }
                if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar7 >> 3)) {
                  uVar17 = 0x1fffffffffffffff;
                }
                if (uVar17 == 0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                }
                puVar9 = (undefined8 *)(lVar7 + lVar21 * 8);
                *puVar9 = uVar6;
                pvVar10 = (void *)*param_1;
                sVar11 = param_1[1] - (long)pvVar10;
                if (0 < (long)sVar11) {
                  memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                  pvVar10 = (void *)*param_1;
                }
                param_1[2] = lVar7 + uVar17 * 8;
                *param_1 = (long)((long)puVar9 - sVar11);
                param_1[1] = (long)(puVar9 + 1);
                if (pvVar10 != (void *)0x0) {
                  FUN_0049e790(PTR_LAB_047cba48);
                }
              }
              else if (*(int *)(lVar7 + 0x38) == 4) {
                    /* try { // try from 002a306c to 002a306f has its CatchHandler @ 002a4a6c */
                FUN_001fcec0(puVar12 + -0xb,lVar7 + 0x40);
              }
              else {
                    /* try { // try from 002a30cc to 002a30f7 has its CatchHandler @ 002a4a98 */
                FUN_003673f0(&local_c8,"field:name error: should be string");
                uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                     ,0x3a1,&local_c8,0,0);
                puVar9 = (undefined8 *)param_1[1];
                puVar13 = (undefined8 *)param_1[2];
                if (puVar13 <= puVar9) {
                  lVar7 = *param_1;
                  lVar21 = (long)puVar9 - lVar7 >> 3;
                  uVar17 = lVar21 + 1;
                  if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48d8 to 002a48df has its CatchHandler @ 002a49e4 */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  goto LAB_002a3164;
                }
LAB_002a3108:
                *puVar9 = uVar6;
                param_1[1] = (long)(puVar9 + 1);
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x18);
              *(undefined8 *)pcVar22 = s_invert_match_03c7b717._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = 0;
                    /* try { // try from 002a3210 to 002a321b has its CatchHandler @ 002a4ac0 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar7) {
                if (*(int *)(lVar7 + 0x38) == 2) {
                  *(undefined1 *)((long)puVar12 + -7) = 0;
                }
                else if (*(int *)(lVar7 + 0x38) == 1) {
                  *(undefined1 *)((long)puVar12 + -7) = 1;
                }
                else {
                    /* try { // try from 002a3264 to 002a328f has its CatchHandler @ 002a4a94 */
                  FUN_003673f0(&local_c8,"field:present_match error: should be boolean");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3ae,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  if (puVar9 < (undefined8 *)param_1[2]) {
                    *puVar9 = uVar6;
                    param_1[1] = (long)(puVar9 + 1);
                  }
                  else {
                    lVar7 = (long)puVar9 - *param_1 >> 3;
                    uVar17 = lVar7 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48e8 to 002a48ef has its CatchHandler @ 002a49dc */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar21 = param_1[2] - *param_1;
                    uVar18 = lVar21 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)(lVar21 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar21 + lVar7 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar21 + uVar17 * 8;
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                  }
                }
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x16);
              *(undefined8 *)pcVar22 = s_exact_match_03c67e9b._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = 0;
                    /* try { // try from 002a3370 to 002a337b has its CatchHandler @ 002a4ad0 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 == lVar7) {
                bVar2 = false;
              }
              else {
                if (*(int *)(lVar7 + 0x38) == 4) {
                  *(undefined4 *)(puVar12 + -8) = 0;
                    /* try { // try from 002a33b8 to 002a33bb has its CatchHandler @ 002a4aac */
                  FUN_001fcec0(puVar12 + -5,lVar7 + 0x40);
                }
                else {
                    /* try { // try from 002a33c8 to 002a33f3 has its CatchHandler @ 002a4ab4 */
                  FUN_003673f0(&local_c8,"field:exact_match error: should be string");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3b9,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  if (puVar9 < (undefined8 *)param_1[2]) {
                    *puVar9 = uVar6;
                    param_1[1] = (long)(puVar9 + 1);
                  }
                  else {
                    lVar7 = (long)puVar9 - *param_1 >> 3;
                    uVar17 = lVar7 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48f0 to 002a48f7 has its CatchHandler @ 002a49d8 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar21 = param_1[2] - *param_1;
                    uVar18 = lVar21 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)(lVar21 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar21 + lVar7 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar21 + uVar17 * 8;
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                  }
                }
                bVar2 = true;
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x16);
              *(undefined8 *)pcVar22 = s_regex_match_03c08390._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = 0;
                    /* try { // try from 002a34d8 to 002a34e3 has its CatchHandler @ 002a4adc */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar7) {
                if (bVar2) {
                    /* try { // try from 002a350c to 002a3537 has its CatchHandler @ 002a4aa0 */
                  FUN_003673f0(&local_c8,
                               "field:regex_match error: other header matcher already specified");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3c6,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar13 <= puVar9) {
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4900 to 002a4907 has its CatchHandler @ 002a49d0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_002a3620;
                  }
LAB_002a35fc:
                  *puVar9 = uVar6;
                  param_1[1] = (long)(puVar9 + 1);
                }
                else {
                  if (*(int *)(lVar7 + 0x38) == 4) {
                    *(undefined4 *)(puVar12 + -8) = 1;
                    lVar21 = FUN_0049e770(PTR_FUN_047cba38,200);
                    if (lVar21 != 0) {
                    /* try { // try from 002a3594 to 002a359b has its CatchHandler @ 002a4a20 */
                      FUN_002cc5e0(lVar21,lVar7 + 0x40);
                    }
                    pvVar10 = (void *)puVar12[-2];
                    puVar12[-2] = lVar21;
                    if (pvVar10 == (void *)0x0) goto LAB_002a36ac;
                    FUN_002ccc4c(pvVar10);
                  }
                  else {
                    /* try { // try from 002a35c0 to 002a35eb has its CatchHandler @ 002a4a74 */
                    FUN_003673f0(&local_c8,"field:regex_match error: should be string");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3cb,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar9 < puVar13) goto LAB_002a35fc;
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48f8 to 002a48ff has its CatchHandler @ 002a49d4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_002a3620:
                    uVar18 = (long)puVar13 - lVar7 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar7 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar7 + lVar21 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar7 + uVar17 * 8;
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    if (pvVar10 == (void *)0x0) goto LAB_002a36ac;
                  }
                  FUN_0049e790(PTR_LAB_047cba48,pvVar10);
                }
LAB_002a36ac:
                bVar2 = true;
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x16);
              *(undefined8 *)pcVar22 = s_range_match_03c24aef._0_8_;
              pcVar22[7] = 'a';
              pcVar22[8] = 't';
              pcVar22[9] = 'c';
              pcVar22[10] = 'h';
              cStack_bc = '\0';
                    /* try { // try from 002a36d0 to 002a36db has its CatchHandler @ 002a4ad8 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar7) {
                if (bVar2) {
                    /* try { // try from 002a3704 to 002a372f has its CatchHandler @ 002a4aa4 */
                  FUN_003673f0(&local_c8,
                               "field:range_match error: other header matcher already specified");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3d9,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  if ((undefined8 *)param_1[2] <= puVar9) {
                    lVar7 = (long)puVar9 - *param_1 >> 3;
                    uVar17 = lVar7 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4930 to 002a4937 has its CatchHandler @ 002a49b8 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar21 = param_1[2] - *param_1;
                    uVar18 = lVar21 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)(lVar21 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar21 + lVar7 * 8);
                    lVar21 = lVar21 + uVar17 * 8;
                    puVar13 = puVar9 + 1;
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    pvVar19 = (void *)((long)puVar9 - sVar11);
                    if (0 < (long)sVar11) {
                      memcpy(pvVar19,pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    goto LAB_002a39c8;
                  }
LAB_002a3854:
                  *puVar9 = uVar6;
                  param_1[1] = (long)(puVar9 + 1);
                }
                else if (*(int *)(lVar7 + 0x38) == 5) {
                  local_c8 = CONCAT31(local_c8._1_3_,10);
                  builtin_strncpy(pcVar22,"start",5);
                  cStack_c2 = '\0';
                    /* try { // try from 002a37c0 to 002a37cb has its CatchHandler @ 002a4a40 */
                  lVar21 = FUN_0027bd44(lVar7 + 0x58,&local_c8);
                  if ((local_c8 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
                  }
                  if (lVar7 + 0x60 == lVar21) {
                    /* try { // try from 002a38b0 to 002a38db has its CatchHandler @ 002a4a28 */
                    FUN_003673f0(&local_c8,"field:start missing");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3ec,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar9 < puVar13) goto LAB_002a3980;
                    lVar21 = *param_1;
                    lVar23 = (long)puVar9 - lVar21 >> 3;
                    uVar17 = lVar23 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4918 to 002a491f has its CatchHandler @ 002a49c4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_002a3a20:
                    uVar18 = (long)puVar13 - lVar21 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar21 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar21 = 0;
                    }
                    else {
                      lVar21 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar21 + lVar23 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    param_1[2] = lVar21 + uVar17 * 8;
                    if (pvVar10 != (void *)0x0) {
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                  }
                  else if (*(int *)(lVar21 + 0x38) == 3) {
                    if ((*(byte *)(lVar21 + 0x40) & 1) == 0) {
                      lVar21 = lVar21 + 0x41;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x50);
                    }
                    /* try { // try from 002a39f8 to 002a39fb has its CatchHandler @ 002a4a14 */
                    iVar3 = FUN_0038d390(lVar21);
                    puVar12[-7] = (long)iVar3;
                  }
                  else {
                    /* try { // try from 002a3944 to 002a396f has its CatchHandler @ 002a4a1c */
                    FUN_003673f0(&local_c8,"field:start error: should be of number");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3e5,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar13 <= puVar9) {
                      lVar21 = *param_1;
                      lVar23 = (long)puVar9 - lVar21 >> 3;
                      uVar17 = lVar23 + 1;
                      if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4910 to 002a4917 has its CatchHandler @ 002a49c8 */
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      goto LAB_002a3a20;
                    }
LAB_002a3980:
                    *puVar9 = uVar6;
                    param_1[1] = (long)(puVar9 + 1);
                  }
                  local_c8 = CONCAT31(local_c8._1_3_,6);
                  pcVar22[2] = 'd';
                  pcVar22[0] = 'e';
                  pcVar22[1] = 'n';
                  cStack_c4 = 0;
                    /* try { // try from 002a3ad4 to 002a3adf has its CatchHandler @ 002a4a3c */
                  lVar21 = FUN_0027bd44(lVar7 + 0x58,&local_c8);
                  if ((local_c8 & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
                  }
                  if (lVar7 + 0x60 == lVar21) {
                    /* try { // try from 002a3b28 to 002a3b53 has its CatchHandler @ 002a4a24 */
                    FUN_003673f0(&local_c8,"field:end missing");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3f9,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar9 < puVar13) goto LAB_002a3bbc;
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4928 to 002a492f has its CatchHandler @ 002a49bc */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_002a3bf4:
                    uVar18 = (long)puVar13 - lVar7 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar7 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar7 + lVar21 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar7 + uVar17 * 8;
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                  }
                  else if (*(int *)(lVar21 + 0x38) == 3) {
                    if ((*(byte *)(lVar21 + 0x40) & 1) == 0) {
                      lVar21 = lVar21 + 0x41;
                    }
                    else {
                      lVar21 = *(long *)(lVar21 + 0x50);
                    }
                    /* try { // try from 002a3bcc to 002a3bcf has its CatchHandler @ 002a4a14 */
                    iVar3 = FUN_0038d390(lVar21);
                    puVar12[-6] = (long)iVar3;
                  }
                  else {
                    /* try { // try from 002a3b80 to 002a3bab has its CatchHandler @ 002a4a18 */
                    FUN_003673f0(&local_c8,"field:end error: should be of number");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x3f2,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar13 <= puVar9) {
                      lVar7 = *param_1;
                      lVar21 = (long)puVar9 - lVar7 >> 3;
                      uVar17 = lVar21 + 1;
                      if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4920 to 002a4927 has its CatchHandler @ 002a49c0 */
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      goto LAB_002a3bf4;
                    }
LAB_002a3bbc:
                    *puVar9 = uVar6;
                    param_1[1] = (long)(puVar9 + 1);
                  }
                  if ((long)puVar12[-7] < (long)puVar12[-6]) {
                    *(undefined4 *)(puVar12 + -8) = 2;
                  }
                }
                else {
                    /* try { // try from 002a3818 to 002a3843 has its CatchHandler @ 002a4a68 */
                  FUN_003673f0(&local_c8,"field:range_match error: should be object");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x3de,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  if (puVar9 < (undefined8 *)param_1[2]) goto LAB_002a3854;
                  lVar7 = (long)puVar9 - *param_1 >> 3;
                  uVar17 = lVar7 + 1;
                  if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4908 to 002a490f has its CatchHandler @ 002a49cc */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar21 = param_1[2] - *param_1;
                  uVar18 = lVar21 >> 2;
                  if (uVar17 <= uVar18) {
                    uVar17 = uVar18;
                  }
                  if (0xffffffffffffffe < (ulong)(lVar21 >> 3)) {
                    uVar17 = 0x1fffffffffffffff;
                  }
                  if (uVar17 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                  }
                  puVar9 = (undefined8 *)(lVar21 + lVar7 * 8);
                  lVar21 = lVar21 + uVar17 * 8;
                  puVar13 = puVar9 + 1;
                  *puVar9 = uVar6;
                  pvVar10 = (void *)*param_1;
                  sVar11 = param_1[1] - (long)pvVar10;
                  pvVar19 = (void *)((long)puVar9 - sVar11);
                  if (0 < (long)sVar11) {
                    memcpy(pvVar19,pvVar10,sVar11);
                    pvVar10 = (void *)*param_1;
                  }
LAB_002a39c8:
                  param_1[2] = lVar21;
                  *param_1 = (long)pvVar19;
                  param_1[1] = (long)puVar13;
                  if (pvVar10 != (void *)0x0) {
                    FUN_0049e790(PTR_LAB_047cba48);
                  }
                }
                bVar2 = true;
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x1a);
              *(ulong *)(pcVar22 + 5) =
                   CONCAT53(s_present_match_03c4708b._8_5_,s_present_match_03c4708b._5_3_);
              *(ulong *)pcVar22 =
                   CONCAT35(s_present_match_03c4708b._5_3_,s_present_match_03c4708b._0_5_);
              cStack_ba = '\0';
                    /* try { // try from 002a3cc4 to 002a3ccf has its CatchHandler @ 002a4ac4 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar7) {
                if (bVar2) {
                    /* try { // try from 002a3cf8 to 002a3d23 has its CatchHandler @ 002a4ab0 */
                  FUN_003673f0(&local_c8,
                               "field:present_match error: other header matcher already specified");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x407,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar9 < puVar13) {
LAB_002a3dc8:
                    *puVar9 = uVar6;
                    param_1[1] = (long)(puVar9 + 1);
                  }
                  else {
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4940 to 002a4947 has its CatchHandler @ 002a49b0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_002a3dec:
                    uVar18 = (long)puVar13 - lVar7 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar7 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar7 = 0;
                    }
                    else {
                      lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar7 + lVar21 * 8);
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    if (0 < (long)sVar11) {
                      memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    param_1[2] = lVar7 + uVar17 * 8;
                    *param_1 = (long)((long)puVar9 - sVar11);
                    param_1[1] = (long)(puVar9 + 1);
                    if (pvVar10 != (void *)0x0) {
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                  }
                  bVar2 = true;
                }
                else if (*(int *)(lVar7 + 0x38) == 2) {
                  bVar2 = true;
                  *(undefined4 *)(puVar12 + -8) = 3;
                  *(undefined1 *)(puVar12 + -1) = 0;
                }
                else {
                  if (*(int *)(lVar7 + 0x38) != 1) {
                    /* try { // try from 002a3d8c to 002a3db7 has its CatchHandler @ 002a4a44 */
                    FUN_003673f0(&local_c8,"field:present_match error: should be boolean");
                    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                         ,0x414,&local_c8,0,0);
                    puVar9 = (undefined8 *)param_1[1];
                    puVar13 = (undefined8 *)param_1[2];
                    if (puVar9 < puVar13) goto LAB_002a3dc8;
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4938 to 002a493f has its CatchHandler @ 002a49b4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_002a3dec;
                  }
                  bVar2 = true;
                  *(undefined4 *)(puVar12 + -8) = 3;
                  *(undefined1 *)(puVar12 + -1) = 1;
                }
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x18);
              *(undefined8 *)pcVar22 = s_prefix_match_03bf3b10._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = 0;
                    /* try { // try from 002a3ea0 to 002a3eab has its CatchHandler @ 002a4ac8 */
              lVar7 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar7) {
                if (bVar2) {
                    /* try { // try from 002a3ed4 to 002a3eff has its CatchHandler @ 002a4a9c */
                  FUN_003673f0(&local_c8,
                               "field:prefix_match error: other header matcher already specified");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x41d,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar13 <= puVar9) {
                    lVar7 = *param_1;
                    lVar21 = (long)puVar9 - lVar7 >> 3;
                    uVar17 = lVar21 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4950 to 002a4957 has its CatchHandler @ 002a49a8 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_002a3fac;
                  }
LAB_002a3f88:
                  *puVar9 = uVar6;
                  param_1[1] = (long)(puVar9 + 1);
                }
                else if (*(int *)(lVar7 + 0x38) == 4) {
                  *(undefined4 *)(puVar12 + -8) = 4;
                    /* try { // try from 002a3f44 to 002a3f47 has its CatchHandler @ 002a4aac */
                  FUN_001fcec0(puVar12 + -5,lVar7 + 0x40);
                }
                else {
                    /* try { // try from 002a3f4c to 002a3f77 has its CatchHandler @ 002a4a70 */
                  FUN_003673f0(&local_c8,"field:prefix_match error: should be string");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x422,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar13 = (undefined8 *)param_1[2];
                  if (puVar9 < puVar13) goto LAB_002a3f88;
                  lVar7 = *param_1;
                  lVar21 = (long)puVar9 - lVar7 >> 3;
                  uVar17 = lVar21 + 1;
                  if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4948 to 002a494f has its CatchHandler @ 002a49ac */
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
LAB_002a3fac:
                  uVar18 = (long)puVar13 - lVar7 >> 2;
                  if (uVar17 <= uVar18) {
                    uVar17 = uVar18;
                  }
                  if (0xffffffffffffffe < (ulong)((long)puVar13 - lVar7 >> 3)) {
                    uVar17 = 0x1fffffffffffffff;
                  }
                  if (uVar17 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                  }
                  puVar9 = (undefined8 *)(lVar7 + lVar21 * 8);
                  *puVar9 = uVar6;
                  pvVar10 = (void *)*param_1;
                  sVar11 = param_1[1] - (long)pvVar10;
                  if (0 < (long)sVar11) {
                    memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
                    pvVar10 = (void *)*param_1;
                  }
                  param_1[2] = lVar7 + uVar17 * 8;
                  *param_1 = (long)((long)puVar9 - sVar11);
                  param_1[1] = (long)(puVar9 + 1);
                  if (pvVar10 != (void *)0x0) {
                    FUN_0049e790(PTR_LAB_047cba48);
                  }
                }
                bVar2 = true;
              }
              local_c8 = CONCAT31(local_c8._1_3_,0x18);
              *(undefined8 *)pcVar22 = s_suffix_match_03c24afb._0_8_;
              pcVar22[8] = 'a';
              pcVar22[9] = 't';
              pcVar22[10] = 'c';
              pcVar22[0xb] = 'h';
              cStack_bb = '\0';
                    /* try { // try from 002a4060 to 002a406b has its CatchHandler @ 002a4acc */
              lVar20 = FUN_0027bd44(lVar20,&local_c8);
              if ((local_c8 & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
              }
              if (lVar16 != lVar20) {
                if (bVar2) {
                    /* try { // try from 002a4094 to 002a40bf has its CatchHandler @ 002a4aa8 */
                  FUN_003673f0(&local_c8,
                               "field:suffix_match error: other header matcher already specified");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x430,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar12 = (undefined8 *)param_1[2];
                  if (puVar12 <= puVar9) {
                    lVar16 = *param_1;
                    lVar7 = (long)puVar9 - lVar16 >> 3;
                    uVar17 = lVar7 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4960 to 002a4967 has its CatchHandler @ 002a49a0 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
LAB_002a4164:
                    uVar18 = (long)puVar12 - lVar16 >> 2;
                    if (uVar17 <= uVar18) {
                      uVar17 = uVar18;
                    }
                    if (0xffffffffffffffe < (ulong)((long)puVar12 - lVar16 >> 3)) {
                      uVar17 = 0x1fffffffffffffff;
                    }
                    if (uVar17 == 0) {
                      lVar20 = 0;
                    }
                    else {
                      lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
                    }
                    puVar9 = (undefined8 *)(lVar20 + lVar7 * 8);
                    lVar20 = lVar20 + uVar17 * 8;
                    puVar12 = puVar9 + 1;
                    *puVar9 = uVar6;
                    pvVar10 = (void *)*param_1;
                    sVar11 = param_1[1] - (long)pvVar10;
                    pvVar19 = (void *)((long)puVar9 - sVar11);
                    if (0 < (long)sVar11) {
                      memcpy(pvVar19,pvVar10,sVar11);
                      pvVar10 = (void *)*param_1;
                    }
                    goto LAB_002a41d4;
                  }
                }
                else {
                  if (*(int *)(lVar20 + 0x38) == 4) {
                    *(undefined4 *)(puVar12 + -8) = 5;
                    /* try { // try from 002a4108 to 002a410b has its CatchHandler @ 002a4aac */
                    FUN_001fcec0(puVar12 + -5,lVar20 + 0x40);
                    goto LAB_002a2d80;
                  }
                    /* try { // try from 002a4110 to 002a413b has its CatchHandler @ 002a4a64 */
                  FUN_003673f0(&local_c8,"field:suffix_match error: should be string");
                  uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                       ,0x435,&local_c8,0,0);
                  puVar9 = (undefined8 *)param_1[1];
                  puVar12 = (undefined8 *)param_1[2];
                  if (puVar12 <= puVar9) {
                    lVar16 = *param_1;
                    lVar7 = (long)puVar9 - lVar16 >> 3;
                    uVar17 = lVar7 + 1;
                    if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a4958 to 002a495f has its CatchHandler @ 002a49a4 */
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    goto LAB_002a4164;
                  }
                }
LAB_002a2d78:
                *puVar9 = uVar6;
                param_1[1] = (long)(puVar9 + 1);
              }
            }
            else {
                    /* try { // try from 002a2df4 to 002a2e1f has its CatchHandler @ 002a4afc */
              FUN_003673f0(&local_c8,"value should be of type object");
              uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                                   ,0x395,&local_c8,0,0);
              puVar9 = (undefined8 *)param_1[1];
              if (puVar9 < (undefined8 *)param_1[2]) goto LAB_002a2d78;
              lVar16 = (long)puVar9 - *param_1 >> 3;
              uVar17 = lVar16 + 1;
              if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 002a48c8 to 002a48cf has its CatchHandler @ 002a49ec */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar20 = param_1[2] - *param_1;
              uVar18 = lVar20 >> 2;
              if (uVar17 <= uVar18) {
                uVar17 = uVar18;
              }
              if (0xffffffffffffffe < (ulong)(lVar20 >> 3)) {
                uVar17 = 0x1fffffffffffffff;
              }
              if (uVar17 == 0) {
                lVar20 = 0;
              }
              else {
                lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar17 << 3);
              }
              puVar9 = (undefined8 *)(lVar20 + lVar16 * 8);
              lVar20 = lVar20 + uVar17 * 8;
              puVar12 = puVar9 + 1;
              *puVar9 = uVar6;
              pvVar10 = (void *)*param_1;
              sVar11 = param_1[1] - (long)pvVar10;
              pvVar19 = (void *)((long)puVar9 - sVar11);
              if (0 < (long)sVar11) {
                memcpy(pvVar19,pvVar10,sVar11);
                pvVar10 = (void *)*param_1;
              }
LAB_002a41d4:
              param_1[2] = lVar20;
              *param_1 = (long)pvVar19;
              param_1[1] = (long)puVar12;
              if (pvVar10 != (void *)0x0) {
                FUN_0049e790(PTR_LAB_047cba48);
              }
            }
LAB_002a2d80:
            lVar16 = *(long *)(piVar5 + 0x1c);
            uVar24 = uVar24 + 1;
          } while (uVar24 < (ulong)((*(long *)(piVar5 + 0x1e) - lVar16 >> 4) * -0x3333333333333333))
          ;
        }
      }
      else {
                    /* try { // try from 002a41f8 to 002a4223 has its CatchHandler @ 002a4a50 */
        FUN_003673f0(&local_c8,"field:headers error: should be array");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x38e,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        if (puVar9 < (undefined8 *)param_1[2]) {
          *puVar9 = uVar6;
          param_1[1] = (long)(puVar9 + 1);
        }
        else {
          lVar16 = (long)puVar9 - *param_1 >> 3;
          uVar24 = lVar16 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4970 to 002a4977 has its CatchHandler @ 002a4a50 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = param_1[2] - *param_1;
          uVar17 = lVar20 >> 2;
          if (uVar24 <= uVar17) {
            uVar24 = uVar17;
          }
          if (0xffffffffffffffe < (ulong)(lVar20 >> 3)) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (uVar24 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
          }
          puVar9 = (undefined8 *)(lVar20 + lVar16 * 8);
          *puVar9 = uVar6;
          pvVar10 = (void *)*param_1;
          sVar11 = param_1[1] - (long)pvVar10;
          if (0 < (long)sVar11) {
            memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
            pvVar10 = (void *)*param_1;
          }
          *param_1 = (long)((long)puVar9 - sVar11);
          param_1[1] = (long)(puVar9 + 1);
          param_1[2] = lVar20 + uVar24 * 8;
          if (pvVar10 != (void *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
      }
    }
    local_c8._1_3_ = s_match_fraction_03c88f40._0_3_;
    local_c8 = CONCAT31(local_c8._1_3_,0x1c);
    cStack_c4 = s_match_fraction_03c88f40[3];
    cStack_c3 = s_match_fraction_03c88f40[4];
    cStack_c2 = s_match_fraction_03c88f40[5];
    cStack_c1 = s_match_fraction_03c88f40[6];
    local_c0 = (uint)(CONCAT62(s_match_fraction_03c88f40._8_6_,s_match_fraction_03c88f40._6_2_) >> 8
                     );
    cStack_bc = s_match_fraction_03c88f40[0xb];
    cStack_bb = s_match_fraction_03c88f40[0xc];
    cStack_ba = s_match_fraction_03c88f40[0xd];
    uStack_b9 = 0;
                    /* try { // try from 002a4300 to 002a430f has its CatchHandler @ 002a4a80 */
    piVar5 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    if (param_2 != piVar5) {
      if (piVar5[0xe] == 3) {
        if ((*(byte *)(piVar5 + 0x10) & 1) == 0) {
          lVar16 = (long)piVar5 + 0x41;
        }
        else {
          lVar16 = *(long *)(piVar5 + 0x14);
        }
                    /* try { // try from 002a43a4 to 002a43a7 has its CatchHandler @ 002a4a2c */
        uVar4 = FUN_0038d390(lVar16);
        if (*(char *)(param_4 + 0x10) == '\0') {
          *(undefined1 *)(param_4 + 0x10) = 1;
        }
        param_4[0x11] = uVar4;
      }
      else {
                    /* try { // try from 002a4358 to 002a4383 has its CatchHandler @ 002a4a4c */
        FUN_003673f0(&local_c8,"field:match_fraction error:must be of type number");
        uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                             ,0x447,&local_c8,0,0);
        puVar9 = (undefined8 *)param_1[1];
        if (puVar9 < (undefined8 *)param_1[2]) {
          *puVar9 = uVar6;
          param_1[1] = (long)(puVar9 + 1);
        }
        else {
          lVar16 = (long)puVar9 - *param_1 >> 3;
          uVar24 = lVar16 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4978 to 002a497f has its CatchHandler @ 002a4a4c */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = param_1[2] - *param_1;
          uVar17 = lVar20 >> 2;
          if (uVar24 <= uVar17) {
            uVar24 = uVar17;
          }
          if (0xffffffffffffffe < (ulong)(lVar20 >> 3)) {
            uVar24 = 0x1fffffffffffffff;
          }
          if (uVar24 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
          }
          puVar9 = (undefined8 *)(lVar20 + lVar16 * 8);
          *puVar9 = uVar6;
          pvVar10 = (void *)*param_1;
          sVar11 = param_1[1] - (long)pvVar10;
          if (0 < (long)sVar11) {
            memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
            pvVar10 = (void *)*param_1;
          }
          *param_1 = (long)((long)puVar9 - sVar11);
          param_1[1] = (long)(puVar9 + 1);
          param_1[2] = lVar20 + uVar24 * 8;
          if (pvVar10 != (void *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
      }
    }
    local_c8 = 0x7463610c;
    cStack_c4 = 0x69;
    cStack_c3 = 0x6f;
    cStack_c2 = 0x6e;
    cStack_c1 = 0;
                    /* try { // try from 002a447c to 002a4487 has its CatchHandler @ 002a4a7c */
    piVar8 = (int *)FUN_0027bd44(piVar8,&local_c8);
    if ((local_c8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,lStack_b8);
    }
    if (param_2 == piVar8) {
                    /* try { // try from 002a459c to 002a45f7 has its CatchHandler @ 002a4a60 */
      FUN_003673f0(&local_c8,"field:action error:required field missing");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x451,&local_c8,0,0);
      puVar9 = (undefined8 *)param_1[1];
      puVar12 = (undefined8 *)param_1[2];
      if (puVar9 < puVar12) goto LAB_002a469c;
      lVar16 = *param_1;
      lVar20 = (long)puVar9 - lVar16 >> 3;
      uVar24 = lVar20 + 1;
      if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      if (piVar8[0xe] == 4) {
        pbVar1 = (byte *)(param_4 + 0x12);
                    /* try { // try from 002a44c0 to 002a44c7 has its CatchHandler @ 002a4a78 */
        FUN_001fcec0(pbVar1,piVar8 + 0x10);
        if ((*pbVar1 & 1) == 0) {
          if (*pbVar1 >> 1 == 0) goto LAB_002a4660;
        }
        else if (*(long *)(param_4 + 0x14) == 0) {
LAB_002a4660:
                    /* try { // try from 002a4660 to 002a468b has its CatchHandler @ 002a4a10 */
          FUN_003673f0(&local_c8,"field:action error:cannot be empty");
          uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                               ,0x459,&local_c8,0,0);
          puVar9 = (undefined8 *)param_1[1];
          puVar12 = (undefined8 *)param_1[2];
          if (puVar9 < puVar12) {
LAB_002a469c:
            *puVar9 = uVar6;
            param_1[1] = (long)(puVar9 + 1);
            return;
          }
          lVar16 = *param_1;
          lVar20 = (long)puVar9 - lVar16 >> 3;
          uVar24 = lVar20 + 1;
          if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4990 to 002a4997 has its CatchHandler @ 002a4a10 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          goto LAB_002a46c0;
        }
                    /* try { // try from 002a44dc to 002a44e7 has its CatchHandler @ 002a4a0c */
        lVar16 = FUN_0027a1ac(param_3,pbVar1);
        if (param_3 + 8 == lVar16) {
          local_c8 = 0x3bd924e;
          cStack_c4 = 0;
          cStack_c3 = 0;
          cStack_c2 = 0;
          cStack_c1 = 0;
          local_c0 = 0x13;
          cStack_bc = '\0';
          cStack_bb = '\0';
          cStack_ba = '\0';
          uStack_b9 = 0;
          uStack_f0 = *(ulong *)(param_4 + 0x14);
          local_f8 = *(long *)(param_4 + 0x16);
          if ((*(byte *)(param_4 + 0x12) & 1) == 0) {
            local_f8 = (long)param_4 + 0x49;
            uStack_f0 = (ulong)(*(byte *)(param_4 + 0x12) >> 1);
          }
          local_128 = " does not exist";
          uStack_120 = 0xf;
                    /* try { // try from 002a4530 to 002a4547 has its CatchHandler @ 002a49f0 */
          FUN_00395a70(local_98,&local_c8,&local_f8,&local_128);
          uVar24 = (ulong)local_98 | 1;
          if ((local_98[0] & 1) != 0) {
            uVar24 = local_88;
          }
                    /* try { // try from 002a455c to 002a457f has its CatchHandler @ 002a49f8 */
          FUN_003673f0(auStack_80,uVar24);
          uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                               ,0x460,auStack_80,0,0);
          puVar9 = (undefined8 *)param_1[1];
          if (puVar9 < (undefined8 *)param_1[2]) {
            *puVar9 = uVar6;
            param_1[1] = (long)(puVar9 + 1);
          }
          else {
            lVar16 = (long)puVar9 - *param_1 >> 3;
            uVar24 = lVar16 + 1;
            if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 002a4998 to 002a499f has its CatchHandler @ 002a49f8 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar20 = param_1[2] - *param_1;
            uVar17 = lVar20 >> 2;
            if (uVar24 <= uVar17) {
              uVar24 = uVar17;
            }
            if (0xffffffffffffffe < (ulong)(lVar20 >> 3)) {
              uVar24 = 0x1fffffffffffffff;
            }
            if (uVar24 == 0) {
              lVar20 = 0;
            }
            else {
              lVar20 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
            }
            puVar9 = (undefined8 *)(lVar20 + lVar16 * 8);
            *puVar9 = uVar6;
            pvVar10 = (void *)*param_1;
            sVar11 = param_1[1] - (long)pvVar10;
            if (0 < (long)sVar11) {
              memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
              pvVar10 = (void *)*param_1;
            }
            *param_1 = (long)((long)puVar9 - sVar11);
            param_1[1] = (long)(puVar9 + 1);
            param_1[2] = lVar20 + uVar24 * 8;
            if (pvVar10 != (void *)0x0) {
              FUN_0049e790(PTR_LAB_047cba48);
            }
          }
          if ((local_98[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_88);
          }
        }
                    /* try { // try from 002a4818 to 002a4823 has its CatchHandler @ 002a4a78 */
        puVar9 = (undefined8 *)FUN_002a4f14(param_5,pbVar1);
        if (param_5 + 1 == puVar9) {
          return;
        }
        plVar15 = (long *)puVar9[1];
        if ((long *)puVar9[1] == (long *)0x0) {
          plVar15 = puVar9 + 2;
          plVar14 = (long *)*plVar15;
          if ((undefined8 *)*plVar14 != puVar9) {
            do {
              lVar16 = *plVar15;
              plVar15 = (long *)(lVar16 + 0x10);
              plVar14 = (long *)*plVar15;
            } while (*plVar14 != lVar16);
          }
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
        if ((undefined8 *)*param_5 == puVar9) {
          *param_5 = plVar14;
        }
        param_5[2] = param_5[2] + -1;
        FUN_01336080(param_5[1],puVar9);
        if ((*(byte *)(puVar9 + 4) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,puVar9[6]);
        }
        goto LAB_002a4740;
      }
                    /* try { // try from 002a45f8 to 002a4653 has its CatchHandler @ 002a4a48 */
      FUN_003673f0(&local_c8,"field:action error:should be of type string");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                           ,0x454,&local_c8,0,0);
      puVar9 = (undefined8 *)param_1[1];
      puVar12 = (undefined8 *)param_1[2];
      if (puVar9 < puVar12) goto LAB_002a469c;
      lVar16 = *param_1;
      lVar20 = (long)puVar9 - lVar16 >> 3;
      uVar24 = lVar20 + 1;
      if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
  }
  else {
                    /* try { // try from 002a2784 to 002a27df has its CatchHandler @ 002a4abc */
    FUN_003673f0(&local_c8,"value should be of type object");
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                         ,0x34f,&local_c8,0,0);
    puVar9 = (undefined8 *)param_1[1];
    puVar12 = (undefined8 *)param_1[2];
    if (puVar9 < puVar12) goto LAB_002a469c;
    lVar16 = *param_1;
    lVar20 = (long)puVar9 - lVar16 >> 3;
    uVar24 = lVar20 + 1;
    if (uVar24 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
  }
LAB_002a46c0:
  uVar17 = (long)puVar12 - lVar16 >> 2;
  if (uVar24 <= uVar17) {
    uVar24 = uVar17;
  }
  if (0xffffffffffffffe < (ulong)((long)puVar12 - lVar16 >> 3)) {
    uVar24 = 0x1fffffffffffffff;
  }
  if (uVar24 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = FUN_0049e770(PTR_FUN_047cba38,uVar24 << 3);
  }
  puVar12 = (undefined8 *)(lVar16 + lVar20 * 8);
  *puVar12 = uVar6;
  puVar9 = (undefined8 *)*param_1;
  sVar11 = param_1[1] - (long)puVar9;
  if (0 < (long)sVar11) {
    memcpy((void *)((long)puVar12 - sVar11),puVar9,sVar11);
    puVar9 = (undefined8 *)*param_1;
  }
  *param_1 = (long)((long)puVar12 - sVar11);
  param_1[1] = (long)(puVar12 + 1);
  param_1[2] = lVar16 + uVar24 * 8;
  if (puVar9 == (undefined8 *)0x0) {
    return;
  }
LAB_002a4740:
  FUN_0049e790(PTR_LAB_047cba48,puVar9);
  return;
}


