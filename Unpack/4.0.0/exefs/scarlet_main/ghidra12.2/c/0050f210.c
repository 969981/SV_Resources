/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050f210; name: FUN_0050f210
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0050f210(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int **ppiVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int **__src;
  ulong *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  char *pcVar18;
  char *pcVar19;
  ulong uVar20;
  uint uVar21;
  bool bVar22;
  undefined8 **ppuVar23;
  void *__dest;
  undefined8 local_150;
  undefined8 **ppuStack_148;
  int *local_140 [5];
  byte local_118 [16];
  int *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  int *local_e0;
  undefined8 **ppuStack_d8;
  void *local_d0;
  int *local_c0;
  undefined8 **ppuStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  int *local_90;
  ulong local_80;
  ulong uStack_78;
  int *local_70;
  
  puVar7 = (ulong *)param_4[6];
  if (puVar7 != (ulong *)0x0) {
    local_e0 = (int *)PTR_LAB_047cd728;
    local_100 = param_4;
    if (*puVar7 != 0xffffffffffffffff) {
      local_150 = &local_e0;
      ppuStack_148 = &local_100;
      local_c0 = (int *)&local_150;
      std::__call_once(puVar7,&local_c0,(_func_void_void_ptr *)&LAB_005114c0);
    }
  }
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_4 + 7) * 4)) {
  case 1:
    local_150 = (int **)CONCAT53(local_150._3_5_,0x2d02);
    bVar4 = *(byte *)(param_1 + 6);
    uVar16 = (ulong)(bVar4 >> 1);
    uVar10 = uVar16;
    if ((bVar4 & 1) != 0) {
      uVar10 = param_1[7];
    }
    if (uVar10 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x31) == '-') {
          pcVar18 = (char *)((long)param_1 + 0x32);
          pcVar19 = (char *)((ulong)&local_150 | 2);
          do {
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0050f6c8;
            cVar5 = *pcVar19;
            cVar6 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while (cVar6 == cVar5);
        }
        goto LAB_0050f6dc;
      }
      if (*(char *)param_1[8] != '-') goto LAB_0050f6dc;
LAB_0050f6c8:
      FUN_004fcda0(param_1 + 5);
      bVar22 = true;
      uVar8 = 0x80000000;
    }
    else {
LAB_0050f6dc:
      bVar22 = false;
      uVar8 = 0x7fffffff;
    }
    uVar10 = FUN_00510bbc(param_1,&local_150,uVar8);
    if ((uVar10 & 1) == 0) {
LAB_0050ffc8:
      uVar21 = 0;
      goto LAB_005100b4;
    }
    iVar3 = -(int)local_150;
    if (!bVar22) {
      iVar3 = (int)local_150;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f4fec();
    }
    else {
      FUN_004f4e44(param_3,param_2,param_4,iVar3);
    }
    break;
  case 2:
    local_150 = (int **)CONCAT53(local_150._3_5_,0x2d02);
    bVar4 = *(byte *)(param_1 + 6);
    uVar16 = (ulong)(bVar4 >> 1);
    uVar10 = uVar16;
    if ((bVar4 & 1) != 0) {
      uVar10 = param_1[7];
    }
    if (uVar10 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x31) == '-') {
          pcVar18 = (char *)((long)param_1 + 0x32);
          pcVar19 = (char *)((ulong)&local_150 | 2);
          do {
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0050f730;
            cVar5 = *pcVar19;
            cVar6 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while (cVar6 == cVar5);
        }
        goto LAB_0050f744;
      }
      if (*(char *)param_1[8] != '-') goto LAB_0050f744;
LAB_0050f730:
      FUN_004fcda0(param_1 + 5);
      uVar8 = 0x8000000000000000;
      bVar22 = true;
    }
    else {
LAB_0050f744:
      bVar22 = false;
      uVar8 = 0x7fffffffffffffff;
    }
    uVar10 = FUN_00510bbc(param_1,&local_150,uVar8);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    lVar9 = -(long)local_150;
    if (!bVar22) {
      lVar9 = (long)local_150;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f5364();
    }
    else {
      FUN_004f51bc(param_3,param_2,param_4,lVar9);
    }
    break;
  case 3:
    uVar10 = FUN_00510bbc(param_1,&local_150,0xffffffff);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f56dc();
    }
    else {
      FUN_004f5534(param_3,param_2,param_4,(ulong)local_150 & 0xffffffff);
    }
    break;
  case 4:
    uVar10 = FUN_00510bbc(param_1,&local_150,0xffffffffffffffff);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f5a54();
    }
    else {
      FUN_004f58ac(param_3,param_2,param_4,local_150);
    }
    break;
  case 5:
    uVar10 = FUN_00510d5c(param_1,&local_150);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f614c();
    }
    else {
      FUN_004f5fa4(local_150,param_3,param_2,param_4);
    }
    break;
  case 6:
    uVar10 = FUN_00510d5c(param_1,&local_150);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    iVar3 = *(int *)((long)param_4 + 0x3c);
    FUN_0052ced0(local_150);
    if (iVar3 == 3) {
      FUN_004f5dcc();
    }
    else {
      FUN_004f5c24(param_3,param_2,param_4);
    }
    break;
  case 7:
    if ((int)param_1[5] != 3) {
      local_150 = (int **)0x0;
      ppuStack_148 = (undefined8 **)0x0;
      local_140[0] = (int *)0x0;
                    /* try { // try from 0050f538 to 0050f543 has its CatchHandler @ 005102f4 */
      uVar10 = FUN_0050e12c(param_1,&local_150);
      if ((uVar10 & 1) != 0) {
        if (((ulong)local_150 & 1) == 0) {
          iVar3 = local_150._1_4_;
          if ((((byte)local_150 & 0xfe) != 8) || (local_150._1_4_ != 0x65757274)) {
            if (((byte)local_150 & 0xfe) == 8) {
              if (local_150._1_4_ == 0x65757254) goto LAB_0050f8e8;
              if (((ulong)local_150 & 1) != 0) goto LAB_0050f8d0;
            }
            if (((byte)local_150 & 0xfe) == 2) {
              if (local_150._1_1_ == 't') goto LAB_0050f8e8;
              if (((ulong)local_150 & 1) != 0) goto LAB_0050fe08;
            }
            if (((byte)local_150 & 0xfe) == 10) {
              if (!(iVar3 != 0x736c6166 || local_150._5_1_ != 'e')) goto LAB_0050fe8c;
              if (((ulong)local_150 & 1) != 0) goto LAB_0050fe3c;
            }
            if (((byte)local_150 & 0xfe) == 10) {
              if (iVar3 == 0x736c6146 && local_150._5_1_ == 'e') goto LAB_0050fe8c;
              if (((ulong)local_150 & 1) != 0) goto LAB_0050fe74;
            }
            if (((byte)local_150 & 0xfe) == 2) {
              piVar14 = (int *)((ulong)&local_150 | 1);
LAB_0050fe80:
              if ((char)*piVar14 == 'f') {
LAB_0050fe8c:
                if (*(int *)((long)param_4 + 0x3c) == 3) {
                    /* try { // try from 0050fe98 to 0050feab has its CatchHandler @ 005102f4 */
                  FUN_004f64dc(param_3,param_2,param_4,0);
                }
                else {
                    /* try { // try from 0051001c to 0051002f has its CatchHandler @ 005102f4 */
                  FUN_004f6324(param_3,param_2,param_4,0);
                }
                goto LAB_0050fb50;
              }
            }
LAB_0050feb0:
                    /* try { // try from 0050feb4 to 0050fec3 has its CatchHandler @ 0051022c */
            FUN_004a8ec0(local_118,"Invalid value for boolean field \"",*param_4);
                    /* try { // try from 0050fec4 to 0050fed7 has its CatchHandler @ 00510218 */
            puVar12 = (undefined8 *)FUN_0021d540(local_118,"\". Value: \"",0xb);
            uStack_f8 = puVar12[1];
            local_100 = (undefined8 *)*puVar12;
            local_f0 = puVar12[2];
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            ppuVar23 = (undefined8 **)((ulong)local_150 >> 1 & 0x7f);
            piVar14 = (int *)((ulong)&local_150 | 1);
            if (((ulong)local_150 & 1) != 0) {
              ppuVar23 = ppuStack_148;
              piVar14 = local_140[0];
            }
                    /* try { // try from 0050ff10 to 0050ff17 has its CatchHandler @ 005101f0 */
            puVar7 = (ulong *)FUN_0021d540(&local_100,piVar14,ppuVar23);
            ppuStack_d8 = (undefined8 **)puVar7[1];
            local_e0 = (int *)*puVar7;
            local_d0 = (void *)puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
                    /* try { // try from 0050ff30 to 0050ff43 has its CatchHandler @ 005101c8 */
            puVar12 = (undefined8 *)FUN_0021d540(&local_e0,&DAT_03bfbda2,2);
            ppuStack_b8 = (undefined8 **)puVar12[1];
            local_c0 = (int *)*puVar12;
            local_b0 = (void *)puVar12[2];
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = 0;
            plVar13 = (long *)*param_1;
            *(undefined1 *)(param_1 + 0x1e) = 1;
            if (plVar13 != (long *)0x0) {
                    /* try { // try from 0050ff78 to 0050ff7f has its CatchHandler @ 0051010c */
              (**(code **)(*plVar13 + 0x10))
                        (plVar13,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_c0);
            }
            if (((ulong)local_c0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_b0);
            }
            if (((ulong)local_e0 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_d0);
            }
            if (((ulong)local_100 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
            if ((local_118[0] & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_108);
            }
            goto LAB_0050ffb0;
          }
        }
        else if ((ppuStack_148 != (undefined8 **)0x4) ||
                ((*local_140[0] != 0x65757274 && (*local_140[0] != 0x65757254)))) {
LAB_0050f8d0:
          if ((ppuStack_148 != (undefined8 **)0x1) || ((char)*local_140[0] != 't')) {
LAB_0050fe08:
            if (ppuStack_148 == (undefined8 **)0x5) {
              if (*local_140[0] != 0x736c6166 || (char)local_140[0][1] != 'e') {
LAB_0050fe3c:
                if ((ppuStack_148 != (undefined8 **)0x5) ||
                   (*local_140[0] != 0x736c6146 || (char)local_140[0][1] != 'e')) goto LAB_0050fe74;
              }
              goto LAB_0050fe8c;
            }
LAB_0050fe74:
            if (ppuStack_148 == (undefined8 **)0x1) {
              piVar14 = local_140[0];
              goto LAB_0050fe80;
            }
            goto LAB_0050feb0;
          }
        }
LAB_0050f8e8:
        if (*(int *)((long)param_4 + 0x3c) == 3) {
                    /* try { // try from 0050f8f4 to 0050f907 has its CatchHandler @ 005102f4 */
          FUN_004f64dc(param_3,param_2,param_4,1);
        }
        else {
                    /* try { // try from 0050fb6c to 0050fb7f has its CatchHandler @ 005102f4 */
          FUN_004f6324(param_3,param_2,param_4,1);
        }
        goto LAB_0050fb50;
      }
      if (((ulong)local_150 & 1) == 0) goto LAB_0050ffc8;
LAB_0050ffb8:
      FUN_0049e790(PTR_LAB_047cba48,local_140[0]);
      goto LAB_0050ffc8;
    }
    uVar10 = FUN_00510bbc(param_1,&local_150,1);
    if ((uVar10 & 1) == 0) goto LAB_0050ffc8;
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      FUN_004f64dc(param_3,param_2,param_4,local_150 != (int **)0x0);
    }
    else {
      FUN_004f6324(param_3,param_2,param_4,local_150 != (int **)0x0);
    }
    break;
  case 8:
    local_c0 = (int *)0x0;
    ppuStack_b8 = (undefined8 **)0x0;
    local_b0 = (void *)0x0;
                    /* try { // try from 0050f3c8 to 0050f3cf has its CatchHandler @ 0051030c */
    uVar8 = FUN_004a86e0(param_4);
    if ((int)param_1[5] == 2) {
                    /* try { // try from 0050f3e0 to 0050f3fb has its CatchHandler @ 00510310 */
      uVar10 = FUN_0050e12c(param_1,&local_c0);
      if ((uVar10 & 1) != 0) {
        lVar9 = FUN_004a53d0(uVar8,&local_c0);
        if (lVar9 != 0) goto LAB_0050fa58;
LAB_0050fbc0:
        if (*(char *)((long)param_1 + 0xe7) != '\0') {
                    /* try { // try from 0050fbc8 to 0050fbdb has its CatchHandler @ 00510294 */
          FUN_004a8ec0(local_118,"Unknown enumeration value of \"",&local_c0);
                    /* try { // try from 0050fbdc to 0050fbef has its CatchHandler @ 00510280 */
          puVar12 = (undefined8 *)FUN_0021d540(local_118,"\" for field \"",0xd);
          uStack_f8 = puVar12[1];
          local_100 = (undefined8 *)*puVar12;
          local_f0 = puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          pbVar17 = (byte *)*param_4;
          uVar10 = *(ulong *)(pbVar17 + 8);
          pbVar2 = *(byte **)(pbVar17 + 0x10);
          if ((*pbVar17 & 1) == 0) {
            pbVar2 = pbVar17 + 1;
            uVar10 = (ulong)(*pbVar17 >> 1);
          }
                    /* try { // try from 0050fc24 to 0050fc2b has its CatchHandler @ 00510270 */
          puVar7 = (ulong *)FUN_0021d540(&local_100,pbVar2,uVar10);
          ppuStack_d8 = (undefined8 **)puVar7[1];
          local_e0 = (int *)*puVar7;
          local_d0 = (void *)puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
                    /* try { // try from 0050fc44 to 0050fc57 has its CatchHandler @ 00510230 */
          puVar12 = (undefined8 *)FUN_0021d540(&local_e0,&DAT_03bfbda2,2);
          ppuStack_148 = (undefined8 **)puVar12[1];
          local_150 = (int **)*puVar12;
          local_140[0] = (int *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          plVar13 = (long *)*param_1;
          if (plVar13 != (long *)0x0) {
                    /* try { // try from 0050fc84 to 0050fc8b has its CatchHandler @ 00510184 */
            (**(code **)(*plVar13 + 0x18))
                      (plVar13,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_150);
          }
          if (((ulong)local_150 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_140[0]);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_d0);
          }
          if (((ulong)local_100 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_f0);
          }
          if ((local_118[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_108);
          }
          goto LAB_0050fdf8;
        }
                    /* try { // try from 0050fcb0 to 0050fcc3 has its CatchHandler @ 00510180 */
        FUN_004a8ec0(local_118,"Unknown enumeration value of \"",&local_c0);
                    /* try { // try from 0050fcc4 to 0050fcd7 has its CatchHandler @ 00510170 */
        puVar12 = (undefined8 *)FUN_0021d540(local_118,"\" for field \"",0xd);
        uStack_f8 = puVar12[1];
        local_100 = (undefined8 *)*puVar12;
        local_f0 = puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        pbVar17 = (byte *)*param_4;
        uVar10 = *(ulong *)(pbVar17 + 8);
        pbVar2 = *(byte **)(pbVar17 + 0x10);
        if ((*pbVar17 & 1) == 0) {
          pbVar2 = pbVar17 + 1;
          uVar10 = (ulong)(*pbVar17 >> 1);
        }
                    /* try { // try from 0050fd0c to 0050fd13 has its CatchHandler @ 00510160 */
        puVar7 = (ulong *)FUN_0021d540(&local_100,pbVar2,uVar10);
        ppuStack_d8 = (undefined8 **)puVar7[1];
        local_e0 = (int *)*puVar7;
        local_d0 = (void *)puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
                    /* try { // try from 0050fd2c to 0050fd3f has its CatchHandler @ 00510150 */
        puVar12 = (undefined8 *)FUN_0021d540(&local_e0,&DAT_03bfbda2,2);
        ppuStack_148 = (undefined8 **)puVar12[1];
        local_150 = (int **)*puVar12;
        local_140[0] = (int *)puVar12[2];
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        plVar13 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar13 != (long *)0x0) {
                    /* try { // try from 0050fd74 to 0050fd7b has its CatchHandler @ 00510108 */
          (**(code **)(*plVar13 + 0x10))
                    (plVar13,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_150);
        }
        if (((ulong)local_150 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_140[0]);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_d0);
        }
        if (((ulong)local_100 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_f0);
        }
        if ((local_118[0] & 1) != 0) {
          goto LAB_00510080;
        }
      }
LAB_0051008c:
      param_4 = (undefined8 *)0x0;
      bVar22 = true;
    }
    else {
      local_150 = (int **)CONCAT53(local_150._3_5_,0x2d02);
      bVar4 = *(byte *)(param_1 + 6);
      uVar16 = (ulong)(bVar4 >> 1);
      uVar10 = uVar16;
      if ((bVar4 & 1) != 0) {
        uVar10 = param_1[7];
      }
      if (uVar10 != 1) {
LAB_0050f7f0:
        if ((int)param_1[5] == 3) goto LAB_0050f7f8;
                    /* try { // try from 0050f844 to 0050f853 has its CatchHandler @ 005102bc */
        FUN_004a8ec0(&local_150,"Expected integer or identifier, got: ");
        plVar13 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar13 != (long *)0x0) {
                    /* try { // try from 0050f870 to 0050f877 has its CatchHandler @ 00510298 */
          (**(code **)(*plVar13 + 0x10))
                    (plVar13,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_150);
        }
        if (((ulong)local_150 & 1) == 0) goto LAB_0051008c;
        local_108 = local_140[0];
LAB_00510080:
        FUN_0049e790(PTR_LAB_047cba48,local_108);
        goto LAB_0051008c;
      }
      if ((bVar4 & 1) == 0) {
        if (*(char *)((long)param_1 + 0x31) == '-') {
          pcVar18 = (char *)((long)param_1 + 0x32);
          pcVar19 = (char *)((ulong)&local_150 | 2);
          uVar20 = uVar16;
          do {
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_0050f7f8;
            cVar5 = *pcVar19;
            cVar6 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            pcVar19 = pcVar19 + 1;
          } while (cVar6 == cVar5);
        }
        goto LAB_0050f7f0;
      }
      if (*(char *)param_1[8] != '-') goto LAB_0050f7f0;
LAB_0050f7f8:
      local_150 = (int **)CONCAT53(local_150._3_5_,0x2d02);
      if (uVar10 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)((long)param_1 + 0x31) == '-') {
            pcVar18 = (char *)((long)param_1 + 0x32);
            pcVar19 = (char *)((ulong)&local_150 | 2);
            do {
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_0050f95c;
              cVar5 = *pcVar19;
              cVar6 = *pcVar18;
              pcVar18 = pcVar18 + 1;
              pcVar19 = pcVar19 + 1;
            } while (cVar6 == cVar5);
          }
          goto LAB_0050f970;
        }
        if (*(char *)param_1[8] != '-') goto LAB_0050f970;
LAB_0050f95c:
                    /* try { // try from 0050f960 to 0050f983 has its CatchHandler @ 00510310 */
        FUN_004fcda0(param_1 + 5);
        bVar22 = true;
        uVar15 = 0x80000000;
      }
      else {
LAB_0050f970:
        bVar22 = false;
        uVar15 = 0x7fffffff;
      }
      uVar10 = FUN_00510bbc(param_1,&local_150,uVar15);
      if ((uVar10 & 1) == 0) goto LAB_0051008c;
      ppiVar1 = (int **)-(long)local_150;
      if (!bVar22) {
        ppiVar1 = local_150;
      }
      local_150 = local_140;
                    /* try { // try from 0050f9a0 to 0050f9ab has its CatchHandler @ 005102b8 */
      lVar9 = FUN_00533530(ppiVar1,local_140);
      __src = local_150;
      ppuVar23 = (undefined8 **)(lVar9 - (long)local_140);
      ppuStack_148 = ppuVar23;
      if ((undefined8 **)0xffffffffffffffef < ppuVar23) {
                    /* try { // try from 005100f0 to 005100f7 has its CatchHandler @ 005102b8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (ppuVar23 < (undefined8 **)0x17) {
        local_e0 = (int *)CONCAT71(local_e0._1_7_,(char)((int)ppuVar23 << 1));
        __dest = (void *)((ulong)&local_e0 | 1);
        if (ppuVar23 != (undefined8 **)0x0) goto LAB_0050fa08;
      }
      else {
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(ppuVar23 + 2) & 0xfffffffffffffff0);
        local_e0 = (int *)((ulong)(ppuVar23 + 2) & 0xfffffffffffffff0 | 1);
        ppuStack_d8 = ppuVar23;
        local_d0 = __dest;
LAB_0050fa08:
        memcpy(__dest,__src,(size_t)ppuVar23);
      }
      *(undefined1 *)((long)__dest + (long)ppuVar23) = 0;
      if (((ulong)local_c0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
      }
      local_b0 = local_d0;
      ppuStack_b8 = ppuStack_d8;
      local_c0 = local_e0;
                    /* try { // try from 0050fa44 to 0050fa87 has its CatchHandler @ 00510310 */
      lVar9 = FUN_004a5400(uVar8,(ulong)ppiVar1 & 0xffffffff);
      if (lVar9 == 0) {
                    /* try { // try from 0050fb90 to 0050fbbb has its CatchHandler @ 00510310 */
        if ((ppiVar1 == (int **)0x7fffffffffffffff) ||
           (uVar10 = FUN_004f8e8c(param_3), (uVar10 & 1) == 0)) goto LAB_0050fbc0;
        if (*(int *)((long)param_4 + 0x3c) == 3) {
          FUN_004f71c0(param_3,param_2,param_4,(ulong)ppiVar1 & 0xffffffff);
        }
        else {
                    /* try { // try from 005100d8 to 005100eb has its CatchHandler @ 00510310 */
          FUN_004f6dc8(param_3,param_2,param_4,(ulong)ppiVar1 & 0xffffffff);
        }
LAB_0050fdf8:
        bVar22 = true;
        param_4 = (undefined8 *)0x1;
      }
      else {
LAB_0050fa58:
        if (*(int *)((long)param_4 + 0x3c) == 3) {
          FUN_004f7098(param_3,param_2,param_4);
        }
        else {
          FUN_004f6cfc(param_3,param_2,param_4,lVar9);
        }
        bVar22 = false;
      }
    }
    uVar21 = (uint)param_4;
    if (((ulong)local_c0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_b0);
    }
    if (bVar22) goto LAB_005100b4;
    break;
  case 9:
    local_150 = (int **)0x0;
    ppuStack_148 = (undefined8 **)0x0;
    local_140[0] = (int *)0x0;
                    /* try { // try from 0050f4f8 to 0050f503 has its CatchHandler @ 005102f8 */
    uVar10 = FUN_0050edb8(param_1,&local_150);
    piVar14 = local_140[0];
    ppuVar23 = ppuStack_148;
    if ((uVar10 & 1) == 0) {
LAB_0050ffb0:
      if (((ulong)local_150 & 1) != 0) goto LAB_0050ffb8;
      goto LAB_0050ffc8;
    }
    if (*(int *)((long)param_4 + 0x3c) == 3) {
      if (((ulong)local_150 & 1) == 0) {
        local_70 = local_140[0];
        uStack_78 = (ulong)ppuStack_148;
        local_80 = (ulong)local_150;
      }
      else {
        if (ppuStack_148 < 0x17) {
          piVar11 = (int *)((ulong)&local_80 | 1);
          local_80 = CONCAT71(local_80._1_7_,(char)((int)ppuStack_148 << 1));
        }
        else {
          if (0xffffffffffffffef < ppuStack_148) {
                    /* try { // try from 005100f8 to 00510107 has its CatchHandler @ 005102f8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar10 = (long)ppuStack_148 + 0x10U & 0xfffffffffffffff0;
          piVar11 = (int *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
          local_80 = uVar10 | 1;
          uStack_78 = (ulong)ppuVar23;
          local_70 = piVar11;
        }
        memcpy(piVar11,piVar14,(long)ppuVar23 + 1);
      }
                    /* try { // try from 0050fac8 to 0050fadb has its CatchHandler @ 005102d4 */
      FUN_004f68e4(param_3,param_2,param_4,&local_80);
      if ((local_80 & 1) != 0) {
        piVar14 = local_70;
        goto LAB_0050fb44;
      }
    }
    else {
      if (((ulong)local_150 & 1) == 0) {
        local_90 = local_140[0];
        uStack_98 = (ulong)ppuStack_148;
        local_a0 = (ulong)local_150;
      }
      else {
        if (ppuStack_148 < 0x17) {
          piVar11 = (int *)((ulong)&local_a0 | 1);
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)ppuStack_148 << 1));
        }
        else {
          if (0xffffffffffffffef < ppuStack_148) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar10 = (long)ppuStack_148 + 0x10U & 0xfffffffffffffff0;
          piVar11 = (int *)FUN_0049e770(PTR_FUN_047cba38,uVar10);
          local_a0 = uVar10 | 1;
          uStack_98 = (ulong)ppuVar23;
          local_90 = piVar11;
        }
        memcpy(piVar11,piVar14,(long)ppuVar23 + 1);
      }
                    /* try { // try from 0050fb24 to 0050fb37 has its CatchHandler @ 005102c0 */
      FUN_004f3c00(param_3,param_2,param_4,&local_a0);
      if ((local_a0 & 1) != 0) {
        piVar14 = local_90;
LAB_0050fb44:
        FUN_0049e790(PTR_LAB_047cba48,piVar14);
      }
    }
LAB_0050fb50:
    if (((ulong)local_150 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_140[0]);
    }
  }
  uVar21 = 1;
LAB_005100b4:
  return uVar21 & 1;
}


