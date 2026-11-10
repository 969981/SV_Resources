/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00517c5c; name: FUN_00517c5c
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00517c5c(undefined *param_1,long *param_2,byte *param_3,long *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  undefined8 extraout_x1;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  byte *pbVar25;
  size_t sVar26;
  undefined **ppuVar27;
  long *plVar28;
  undefined ***local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  byte local_e0;
  undefined8 local_d0;
  int local_c8;
  undefined **local_b0;
  undefined **local_a8;
  ulong local_a0 [2];
  undefined **local_90;
  int local_88;
  undefined1 auStack_80 [16];
  undefined *local_70;
  undefined *local_68;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((param_1[0x43] != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar8 = *(ulong **)(param_1 + 0x30);
    if (puVar8 != (ulong *)0x0) {
      local_68 = PTR_LAB_047cd728;
      local_70 = param_1;
      if (*puVar8 != 0xffffffffffffffff) {
        local_b0 = &local_68;
        local_a8 = &local_70;
        local_f0 = &local_b0;
        std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)&LAB_0051d550);
      }
    }
    if ((*(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_1 + 0x38) * 4) == 10) &&
       (*(int *)(param_1 + 0x3c) != 3)) {
      pbVar13 = (byte *)FUN_0051aab0(param_1,param_2,param_3,param_4);
      return pbVar13;
    }
  }
  puVar8 = *(ulong **)(param_1 + 0x30);
  if (puVar8 != (ulong *)0x0) {
    local_68 = PTR_LAB_047cd728;
    local_70 = param_1;
    if (*puVar8 != 0xffffffffffffffff) {
      local_b0 = &local_68;
      local_a8 = &local_70;
      local_f0 = &local_b0;
      std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)&LAB_0051d550);
    }
  }
  if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar9 = FUN_004a64c0(param_1), (uVar9 & 1) != 0)) {
    FUN_004f92d8(extraout_x1,param_2,param_1);
    uVar9 = FUN_004fdddc();
    if ((uVar9 & 1) == 0) goto LAB_00517e10;
    if (*(char *)((long)param_4 + 0x3a) == '\0') {
      FUN_004f89ac(&local_b0,extraout_x1,param_2,param_1);
      puVar3 = PTR_LAB_047cba48;
      while( true ) {
                    /* try { // try from 005191dc to 005191ef has its CatchHandler @ 0051a9d8 */
        FUN_004f8d50(&local_f0,extraout_x1,param_2,param_1);
                    /* try { // try from 005191fc to 00519207 has its CatchHandler @ 0051a994 */
        uVar9 = (**(code **)(*local_a8 + 0x28))(local_a8,&local_b0,&local_f0);
                    /* try { // try from 00519218 to 0051921f has its CatchHandler @ 0051a980 */
        (**(code **)(*(long *)CONCAT44(uStack_e4,local_e8) + 0x80))
                  ((long *)CONCAT44(uStack_e4,local_e8),&local_f0);
        if ((local_c8 == 9) && ((local_e0 & 1) != 0)) {
          FUN_0049e790(puVar3,local_d0);
        }
        if ((uVar9 & 1) != 0) break;
                    /* try { // try from 00519244 to 00519273 has its CatchHandler @ 0051a9dc */
        param_3 = (byte *)FUN_0051b040(param_1,local_a0,auStack_80,param_3,param_4);
        (**(code **)(*local_a8 + 0x90))(local_a8,&local_b0);
      }
                    /* try { // try from 00519284 to 0051928b has its CatchHandler @ 0051a908 */
      (**(code **)(*local_a8 + 0x80))(local_a8,&local_b0);
      if (local_88 != 9) {
        return param_3;
      }
      if ((local_a0[0] & 1) == 0) {
        return param_3;
      }
      ppuVar22 = local_90;
    }
    else {
      FUN_0051ac40(&local_b0,param_2,extraout_x1,param_1);
      ppuVar22 = local_b0;
      puVar3 = PTR_LAB_047cba48;
      ppuVar27 = local_b0;
      if (local_b0 != local_a8) {
        do {
          local_f0 = (undefined ***)0x0;
          local_e8 = 0;
                    /* try { // try from 00517dc0 to 00517def has its CatchHandler @ 0051aa14 */
          FUN_004f8830(extraout_x1,param_2,param_1,ppuVar22,&local_f0);
          param_3 = (byte *)FUN_0051b040(param_1,ppuVar22,&local_f0,param_3,param_4);
          ppuVar22 = ppuVar22 + 4;
          puVar3 = PTR_LAB_047cba48;
          ppuVar27 = local_b0;
        } while (ppuVar22 != local_a8);
      }
      if (ppuVar27 == (undefined **)0x0) {
        PTR_LAB_047cba48 = puVar3;
        return param_3;
      }
      PTR_LAB_047cba48 = puVar3;
      local_b0 = ppuVar27;
      if (ppuVar22 == ppuVar27) {
        ppuVar22 = ppuVar27;
        local_a8 = ppuVar27;
      }
      else {
        do {
          ppuVar24 = ppuVar22 + -4;
          if ((*(uint *)(ppuVar22 + -1) == 9) && (((ulong)ppuVar22[-4] & 1) != 0)) {
            FUN_0049e790(puVar3,ppuVar22[-2]);
          }
          ppuVar22 = ppuVar24;
        } while (ppuVar27 != ppuVar24);
        ppuVar22 = local_b0;
        local_a8 = ppuVar27;
      }
    }
    goto LAB_00519d20;
  }
LAB_00517e10:
  if (*(int *)(param_1 + 0x3c) == 3) {
    uVar5 = FUN_004f48a0(extraout_x1,param_2,param_1);
    uVar9 = (ulong)uVar5;
    if (1 < (int)uVar5) {
      puVar8 = *(ulong **)(param_1 + 0x30);
      if (puVar8 != (ulong *)0x0) {
        local_68 = PTR_LAB_047cd728;
        local_70 = param_1;
        if (*puVar8 != 0xffffffffffffffff) {
          local_b0 = &local_68;
          local_a8 = &local_70;
          local_f0 = &local_b0;
                    /* try { // try from 00517e6c to 00517e97 has its CatchHandler @ 0051a978 */
          std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)&LAB_0051d550);
        }
      }
      if (((*(int *)(param_1 + 0x38) == 0xb) && (uVar10 = FUN_004a64c0(param_1), (uVar10 & 1) != 0))
         && (*(char *)((long)param_4 + 0x3a) != '\0')) {
                    /* try { // try from 00517ea4 to 00517ebb has its CatchHandler @ 0051a900 */
        FUN_0051ba68(&local_b0,param_2,uVar9,extraout_x1,param_1);
        ppuVar22 = local_b0;
        ppuVar27 = local_a8;
        goto LAB_00517f0c;
      }
    }
    ppuVar22 = (undefined **)0x0;
    ppuVar27 = (undefined **)0x0;
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    uVar5 = FUN_004f4514(extraout_x1,param_2,param_1);
    ppuVar22 = (undefined **)0x0;
    ppuVar27 = (undefined **)0x0;
    uVar9 = (ulong)(uVar5 & 1);
  }
  else {
    ppuVar22 = (undefined **)0x0;
    ppuVar27 = (undefined **)0x0;
    uVar9 = 1;
  }
LAB_00517f0c:
                    /* try { // try from 00517f0c to 00517f6f has its CatchHandler @ 0051a978 */
  uVar10 = FUN_004a8fc4(param_1);
  puVar3 = PTR_LAB_047cd728;
  if ((uVar10 & 1) == 0) {
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        if (param_3 < (byte *)*param_4) {
          puVar8 = *(ulong **)(param_1 + 0x30);
        }
        else {
                    /* try { // try from 005190d8 to 005190e3 has its CatchHandler @ 0051aa84 */
          param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
          puVar8 = *(ulong **)(param_1 + 0x30);
        }
        if (puVar8 != (ulong *)0x0) {
          local_68 = puVar3;
          local_70 = param_1;
          if (*puVar8 != 0xffffffffffffffff) {
            local_b0 = &local_68;
            local_a8 = &local_70;
            local_f0 = &local_b0;
                    /* try { // try from 00518088 to 00518097 has its CatchHandler @ 0051aa84 */
            std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)&LAB_0051d550);
          }
        }
        switch(*(undefined4 *)(param_1 + 0x38)) {
        case 1:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005180c4 to 005180d7 has its CatchHandler @ 0051a91c */
            uVar11 = FUN_004f609c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005185b0 to 005185bf has its CatchHandler @ 0051a91c */
            uVar11 = FUN_004f5ef8(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 1;
          if (uVar5 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 9;
            *(undefined8 *)pbVar13 = uVar11;
          }
          else {
            *param_3 = (byte)(uVar15 << 3) | 0x81;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar15 >> 4);
              pbVar13 = param_3 + 2;
              param_3 = param_3 + 10;
              *(undefined8 *)pbVar13 = uVar11;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar15 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                uVar16 = uVar5 >> 0xe;
                pbVar13 = pbVar25 + 1;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
              param_3 = pbVar25 + 9;
              *(undefined8 *)(pbVar25 + 1) = uVar11;
            }
          }
          break;
        case 2:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 0051825c to 0051826f has its CatchHandler @ 0051a920 */
            uVar7 = FUN_004f5d1c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005185e0 to 005185ef has its CatchHandler @ 0051a920 */
            uVar7 = FUN_004f5b78(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 5;
          if (uVar5 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 5;
            *(undefined4 *)pbVar13 = uVar7;
          }
          else {
            *param_3 = (byte)(uVar15 << 3) | 0x85;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar15 >> 4);
              pbVar13 = param_3 + 2;
              param_3 = param_3 + 6;
              *(undefined4 *)pbVar13 = uVar7;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar15 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                uVar16 = uVar5 >> 0xe;
                pbVar13 = pbVar25 + 1;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
              param_3 = pbVar25 + 5;
              *(undefined4 *)(pbVar25 + 1) = uVar7;
            }
          }
          break;
        case 3:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005181cc to 005181df has its CatchHandler @ 0051a924 */
            uVar21 = FUN_004f52b4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005184cc to 005184db has its CatchHandler @ 0051a924 */
            uVar21 = FUN_004f5110(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          if (uVar21 < 0x80) {
LAB_0051803c:
            param_3 = pbVar13 + 1;
            *pbVar13 = (byte)uVar21;
          }
          else {
            *pbVar13 = (byte)uVar21 | 0x80;
            uVar17 = uVar21 >> 7;
            if (uVar21 >> 0xe == 0) goto LAB_00518cdc;
            param_3 = pbVar13 + 2;
            do {
              uVar21 = uVar17 >> 7;
              param_3[-1] = (byte)uVar17 | 0x80;
              param_3 = param_3 + 1;
              uVar20 = uVar17 >> 0xe;
              uVar17 = uVar21;
            } while (uVar20 != 0);
LAB_00518d04:
            param_3[-1] = (byte)uVar21;
          }
          break;
        case 4:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518214 to 00518227 has its CatchHandler @ 0051a928 */
            uVar21 = FUN_004f59a4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00518558 to 00518567 has its CatchHandler @ 0051a928 */
            uVar21 = FUN_004f5800(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          if (uVar21 < 0x80) goto LAB_0051803c;
          *pbVar13 = (byte)uVar21 | 0x80;
          uVar17 = uVar21 >> 7;
          if (uVar21 >> 0xe != 0) {
            param_3 = pbVar13 + 2;
            do {
              uVar21 = uVar17 >> 7;
              param_3[-1] = (byte)uVar17 | 0x80;
              param_3 = param_3 + 1;
              uVar20 = uVar17 >> 0xe;
              uVar17 = uVar21;
            } while (uVar20 != 0);
            goto LAB_00518d04;
          }
          goto LAB_00518cdc;
        case 5:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518160 to 00518173 has its CatchHandler @ 0051a92c */
            uVar21 = FUN_004f4f3c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00518450 to 0051845f has its CatchHandler @ 0051a92c */
            uVar21 = FUN_004f4d98(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          if ((uint)uVar21 < 0x80) goto LAB_0051803c;
          *pbVar13 = (byte)uVar21 | 0x80;
          uVar17 = (ulong)(long)(int)(uint)uVar21 >> 7;
          if ((uVar21 >> 0xe & 0x3ffff) != 0) {
            param_3 = pbVar13 + 2;
            do {
              uVar21 = uVar17 >> 7;
              param_3[-1] = (byte)uVar17 | 0x80;
              param_3 = param_3 + 1;
              uVar20 = uVar17 >> 0xe;
              uVar17 = uVar21;
            } while (uVar20 != 0);
            goto LAB_00518d04;
          }
LAB_00518cdc:
          pbVar13[1] = (byte)uVar17;
LAB_0051915c:
          param_3 = pbVar13 + 2;
          break;
        case 6:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005182a4 to 005182b7 has its CatchHandler @ 0051a930 */
            uVar11 = FUN_004f59a4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 0051864c to 0051865b has its CatchHandler @ 0051a930 */
            uVar11 = FUN_004f5800(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 1;
          if (uVar5 < 0x80) {
LAB_00518670:
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 9;
            *(undefined8 *)pbVar13 = uVar11;
          }
          else {
            *param_3 = (byte)(uVar15 << 3) | 0x81;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) goto LAB_005188e8;
            pbVar13 = param_3 + 2;
            uVar5 = uVar15 >> 4 & 0x1ffffff;
            do {
              uVar15 = uVar5 >> 7;
              pbVar13[-1] = (byte)uVar5 | 0x80;
              pbVar13 = pbVar13 + 1;
              uVar16 = uVar5 >> 0xe;
              uVar5 = uVar15;
            } while (uVar16 != 0);
LAB_00518d30:
            pbVar13[-1] = (byte)uVar15;
            param_3 = pbVar13 + 8;
            *(undefined8 *)pbVar13 = uVar11;
          }
          break;
        case 7:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005182ec to 005182ff has its CatchHandler @ 0051a934 */
            uVar7 = FUN_004f562c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005186b4 to 005186c3 has its CatchHandler @ 0051a934 */
            uVar7 = FUN_004f5488(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 5;
          if (uVar5 < 0x80) {
LAB_005186d8:
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar5;
            param_3 = param_3 + 5;
            *(undefined4 *)pbVar13 = uVar7;
          }
          else {
            *param_3 = (byte)(uVar15 << 3) | 0x85;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) goto LAB_00518934;
            pbVar13 = param_3 + 2;
            uVar5 = uVar15 >> 4 & 0x1ffffff;
            do {
              uVar15 = uVar5 >> 7;
              pbVar13[-1] = (byte)uVar5 | 0x80;
              pbVar13 = pbVar13 + 1;
              uVar16 = uVar5 >> 0xe;
              uVar5 = uVar15;
            } while (uVar16 != 0);
LAB_00518dd4:
            pbVar13[-1] = (byte)uVar15;
            param_3 = pbVar13 + 4;
            *(undefined4 *)pbVar13 = uVar7;
          }
          break;
        case 8:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518238 to 0051824b has its CatchHandler @ 0051a938 */
            bVar4 = FUN_004f6420(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00518588 to 00518597 has its CatchHandler @ 0051a938 */
            bVar4 = FUN_004f6278(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar2 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar2;
          }
          else {
            *param_3 = bVar2 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          param_3 = pbVar13 + 1;
          *pbVar13 = bVar4 & 1;
          break;
        case 9:
          iVar6 = *(int *)(*(long *)(param_1 + 0x28) + 0x3c);
          local_a0[0] = 0;
          local_b0 = (undefined **)0x0;
          local_a8 = (undefined **)0x0;
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518370 to 00518387 has its CatchHandler @ 0051a958 */
            pbVar13 = (byte *)FUN_004f6830(extraout_x1,param_2,param_1,uVar10 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 005186fc to 0051896b has its CatchHandler @ 0051a958 */
            pbVar13 = (byte *)FUN_004f6604(extraout_x1,param_2,param_1,&local_b0);
          }
          bVar4 = *pbVar13;
          if ((bVar4 & 1) == 0) {
            pbVar25 = pbVar13 + 1;
            uVar21 = (ulong)(bVar4 >> 1);
            pbVar18 = *(byte **)(param_1 + 8);
            if ((*pbVar18 & 1) != 0) goto LAB_00518730;
LAB_00518958:
            pbVar18 = pbVar18 + 1;
            if (iVar6 == 3) goto LAB_00518964;
LAB_0051873c:
            uVar21 = (ulong)*(uint *)(param_1 + 0x44);
            if ((bVar4 & 1) == 0) goto LAB_00518744;
LAB_00518978:
            uVar17 = *(ulong *)(pbVar13 + 8);
            if ((long)uVar17 < 0x80) goto LAB_00518984;
          }
          else {
            uVar21 = *(ulong *)(pbVar13 + 8);
            pbVar25 = *(byte **)(pbVar13 + 0x10);
            pbVar18 = *(byte **)(param_1 + 8);
            if ((*pbVar18 & 1) == 0) goto LAB_00518958;
LAB_00518730:
            pbVar18 = *(byte **)(pbVar18 + 0x10);
            if (iVar6 != 3) goto LAB_0051873c;
LAB_00518964:
            FUN_005347a4(pbVar25,uVar21,1,pbVar18);
            bVar4 = *pbVar13;
            uVar21 = (ulong)*(uint *)(param_1 + 0x44);
            if ((bVar4 & 1) != 0) goto LAB_00518978;
LAB_00518744:
            uVar17 = (ulong)(bVar4 >> 1);
LAB_00518984:
            uVar15 = (uint)uVar21;
            uVar5 = uVar15 << 3;
            if (uVar5 < 0x80) {
              lVar12 = 1;
            }
            else if (uVar5 < 0x4000) {
              lVar12 = 2;
            }
            else if (uVar5 < 0x200000) {
              lVar12 = 3;
            }
            else {
              lVar12 = 4;
              if ((uVar15 & 0x1fffffff) >> 0x19 != 0) {
                lVar12 = 5;
              }
            }
            if ((long)uVar17 <= (long)(*param_4 + ~(ulong)(param_3 + lVar12) + 0x10)) {
              if ((uVar5 | 2) < 0x80) {
                pbVar25 = param_3 + 1;
                *param_3 = (byte)(uVar5 | 2);
              }
              else {
                *param_3 = (byte)uVar5 | 0x82;
                if ((uVar15 & 0x1fffffff) >> 0xb == 0) {
                  param_3[1] = (byte)(uVar21 >> 4);
                  pbVar25 = param_3 + 2;
                }
                else {
                  pbVar25 = param_3 + 2;
                  uVar5 = uVar15 >> 4 & 0x1ffffff;
                  do {
                    pbVar18 = pbVar25;
                    uVar15 = uVar5 >> 7;
                    pbVar18[-1] = (byte)uVar5 | 0x80;
                    pbVar25 = pbVar18 + 1;
                    uVar16 = uVar5 >> 0xe;
                    uVar5 = uVar15;
                  } while (uVar16 != 0);
                  *pbVar18 = (byte)uVar15;
                }
              }
              *pbVar25 = (byte)uVar17;
              pbVar18 = *(byte **)(pbVar13 + 0x10);
              if ((*pbVar13 & 1) == 0) {
                pbVar18 = pbVar13 + 1;
              }
              memcpy(pbVar25 + 1,pbVar18,uVar17);
              param_3 = pbVar25 + 1 + uVar17;
              goto joined_r0x005190c0;
            }
          }
                    /* try { // try from 00519104 to 00519113 has its CatchHandler @ 0051a958 */
          param_3 = (byte *)FUN_0052cbdc(param_4,uVar21,pbVar13,param_3);
joined_r0x005190c0:
          if (((ulong)local_b0 & 1) != 0) goto LAB_005190c4;
          break;
        case 10:
          uVar15 = *(uint *)(param_1 + 0x44);
          if (*(int *)(param_1 + 0x3c) == 3) {
            if (ppuVar27 == ppuVar22) {
                    /* try { // try from 00518e00 to 00518f57 has its CatchHandler @ 0051aa84 */
              plVar28 = (long *)FUN_004f7c80(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
            }
            else {
              plVar28 = (long *)ppuVar22[uVar10];
            }
          }
          else {
                    /* try { // try from 005184b4 to 005184c7 has its CatchHandler @ 0051aa84 */
            plVar28 = (long *)FUN_004f72a0(extraout_x1,param_2,param_1,0);
          }
          uVar5 = uVar15 << 3 | 3;
          if (uVar5 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar5;
          }
          else {
            *param_3 = (byte)(uVar15 << 3) | 0x83;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar15 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar15 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar16 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar1 = uVar5 >> 0xe;
                uVar5 = uVar16;
              } while (uVar1 != 0);
              *pbVar25 = (byte)uVar16;
            }
          }
          pbVar13 = (byte *)(**(code **)(*plVar28 + 0x60))(plVar28,pbVar13,param_4);
          if ((byte *)*param_4 <= pbVar13) {
                    /* try { // try from 00519124 to 0051912f has its CatchHandler @ 0051aa84 */
            pbVar13 = (byte *)FUN_0052c6d8(param_4,pbVar13);
          }
          uVar5 = uVar15 << 3 | 4;
          bVar4 = (byte)uVar5;
          if (uVar5 < 0x80) {
            param_3 = pbVar13 + 1;
            *pbVar13 = bVar4;
            break;
          }
          *pbVar13 = bVar4 | 0x80;
          if ((uVar15 & 0x1fffffff) >> 0xb != 0) {
            param_3 = pbVar13 + 2;
            uVar15 = uVar15 >> 4 & 0x1ffffff;
            do {
              uVar5 = uVar15 >> 7;
              param_3[-1] = (byte)uVar15 | 0x80;
              param_3 = param_3 + 1;
              uVar16 = uVar15 >> 0xe;
              uVar15 = uVar5;
            } while (uVar16 != 0);
            goto LAB_00519188;
          }
          uVar15 = uVar15 >> 4;
LAB_00519158:
          pbVar13[1] = (byte)uVar15;
          goto LAB_0051915c;
        case 0xb:
          uVar5 = *(uint *)(param_1 + 0x44);
          if (*(int *)(param_1 + 0x3c) == 3) {
            if (ppuVar27 == ppuVar22) {
              plVar28 = (long *)FUN_004f7c80(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
              goto LAB_00518ec4;
            }
            plVar28 = (long *)ppuVar22[uVar10];
            uVar15 = uVar5 << 3 | 2;
            if (0x7f < uVar15) goto LAB_00518334;
LAB_00518ed8:
            pbVar13 = param_3 + 1;
            *param_3 = (byte)uVar15;
          }
          else {
                    /* try { // try from 005186e4 to 005186f7 has its CatchHandler @ 0051aa84 */
            plVar28 = (long *)FUN_004f72a0(extraout_x1,param_2,param_1,0);
LAB_00518ec4:
            uVar15 = uVar5 << 3 | 2;
            if (uVar15 < 0x80) goto LAB_00518ed8;
LAB_00518334:
            *param_3 = (byte)uVar15 | 0x80;
            if (uVar15 >> 0xe == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          uVar5 = (**(code **)(*plVar28 + 0x50))(plVar28);
          if (uVar5 < 0x80) {
            pbVar25 = pbVar13 + 1;
            *pbVar13 = (byte)uVar5;
          }
          else {
            *pbVar13 = (byte)uVar5 | 0x80;
            if (uVar5 >> 0xe == 0) {
              pbVar13[1] = (byte)(uVar5 >> 7);
              pbVar25 = pbVar13 + 2;
            }
            else {
              pbVar25 = pbVar13 + 2;
              uVar5 = uVar5 >> 7;
              do {
                pbVar13 = pbVar25;
                uVar15 = uVar5 >> 7;
                pbVar13[-1] = (byte)uVar5 | 0x80;
                pbVar25 = pbVar13 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar13 = (byte)uVar15;
            }
          }
          param_3 = (byte *)(**(code **)(*plVar28 + 0x60))(plVar28,pbVar25,param_4);
          break;
        case 0xc:
          local_b0 = (undefined **)0x0;
          local_a8 = (undefined **)0x0;
          local_a0[0] = 0;
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518138 to 0051814f has its CatchHandler @ 0051a954 */
            pbVar13 = (byte *)FUN_004f6830(extraout_x1,param_2,param_1,uVar10 & 0xffffffff,&local_b0
                                          );
          }
          else {
                    /* try { // try from 00518424 to 00518437 has its CatchHandler @ 0051a954 */
            pbVar13 = (byte *)FUN_004f6604(extraout_x1,param_2,param_1,&local_b0);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          if ((*pbVar13 & 1) != 0) {
            sVar26 = *(size_t *)(pbVar13 + 8);
            if ((long)sVar26 < 0x80) goto LAB_00518788;
LAB_005190f4:
                    /* try { // try from 005190f4 to 005190ff has its CatchHandler @ 0051a954 */
            param_3 = (byte *)FUN_0052cbdc(param_4,uVar5,pbVar13,param_3);
            goto joined_r0x005190c0;
          }
          sVar26 = (size_t)(*pbVar13 >> 1);
LAB_00518788:
          uVar15 = uVar5 << 3;
          if (uVar15 < 0x80) {
            lVar12 = 1;
          }
          else if (uVar15 < 0x4000) {
            lVar12 = 2;
          }
          else if (uVar15 < 0x200000) {
            lVar12 = 3;
          }
          else {
            lVar12 = 4;
            if ((uVar5 & 0x1fffffff) >> 0x19 != 0) {
              lVar12 = 5;
            }
          }
          if ((long)(*param_4 + ~(ulong)(param_3 + lVar12) + 0x10) < (long)sVar26)
          goto LAB_005190f4;
          if ((uVar15 | 2) < 0x80) {
            pbVar25 = param_3 + 1;
            *param_3 = (byte)(uVar15 | 2);
          }
          else {
            *param_3 = (byte)uVar15 | 0x82;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar25 = param_3 + 2;
            }
            else {
              pbVar25 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar18 = pbVar25;
                uVar15 = uVar5 >> 7;
                pbVar18[-1] = (byte)uVar5 | 0x80;
                pbVar25 = pbVar18 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar18 = (byte)uVar15;
            }
          }
          *pbVar25 = (byte)sVar26;
          pbVar18 = *(byte **)(pbVar13 + 0x10);
          if ((*pbVar13 & 1) == 0) {
            pbVar18 = pbVar13 + 1;
          }
          memcpy(pbVar25 + 1,pbVar18,sVar26);
          param_3 = pbVar25 + 1 + sVar26;
          if (((ulong)local_b0 & 1) == 0) break;
LAB_005190c4:
          FUN_0049e790(PTR_LAB_047cba48,local_a0[0]);
          break;
        case 0xd:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518184 to 00518197 has its CatchHandler @ 0051a93c */
            uVar5 = FUN_004f562c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00518480 to 0051848f has its CatchHandler @ 0051a93c */
            uVar5 = FUN_004f5488(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar15 * 8);
          if (uVar15 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar15 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar15 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar15 = uVar15 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar16 = uVar15 >> 7;
                pbVar25[-1] = (byte)uVar15 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar1 = uVar15 >> 0xe;
                uVar15 = uVar16;
              } while (uVar1 != 0);
              *pbVar25 = (byte)uVar16;
            }
          }
          if (uVar5 < 0x80) {
            param_3 = pbVar13 + 1;
            *pbVar13 = (byte)uVar5;
          }
          else {
            *pbVar13 = (byte)uVar5 | 0x80;
            uVar15 = uVar5 >> 7;
            if (uVar5 >> 0xe == 0) goto LAB_00519158;
            param_3 = pbVar13 + 2;
            do {
              uVar5 = uVar15 >> 7;
              param_3[-1] = (byte)uVar15 | 0x80;
              param_3 = param_3 + 1;
              uVar16 = uVar15 >> 0xe;
              uVar15 = uVar5;
            } while (uVar16 != 0);
LAB_00519188:
            param_3[-1] = (byte)uVar5;
          }
          break;
        case 0xe:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005182c8 to 005182db has its CatchHandler @ 0051a940 */
            lVar12 = FUN_004f6f24(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 0051867c to 0051868b has its CatchHandler @ 0051a940 */
            lVar12 = FUN_004f6b7c(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          uVar15 = *(uint *)(lVar12 + 0x10);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar16 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar1 = uVar5 >> 0xe;
                uVar5 = uVar16;
              } while (uVar1 != 0);
              *pbVar25 = (byte)uVar16;
            }
          }
          if (uVar15 < 0x80) {
            param_3 = pbVar13 + 1;
            *pbVar13 = (byte)uVar15;
          }
          else {
            *pbVar13 = (byte)uVar15 | 0x80;
            uVar21 = (ulong)(long)(int)uVar15 >> 7;
            if (((ulong)(long)(int)uVar15 >> 0xe & 0x3ffff) == 0) {
              pbVar13[1] = (byte)uVar21;
              goto LAB_0051915c;
            }
            param_3 = pbVar13 + 2;
            do {
              pbVar13 = param_3;
              uVar17 = uVar21 >> 7;
              pbVar13[-1] = (byte)uVar21 | 0x80;
              param_3 = pbVar13 + 1;
              uVar20 = uVar21 >> 0xe;
              uVar21 = uVar17;
            } while (uVar20 != 0);
            *pbVar13 = (byte)uVar17;
          }
          break;
        case 0xf:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 0051810c to 0051811f has its CatchHandler @ 0051a944 */
            uVar7 = FUN_004f4f3c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005183c8 to 005183d7 has its CatchHandler @ 0051a944 */
            uVar7 = FUN_004f4d98(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 5;
          if (uVar5 < 0x80) goto LAB_005186d8;
          *param_3 = (byte)(uVar15 << 3) | 0x85;
          if ((uVar15 & 0x1fffffff) >> 0xb != 0) {
            pbVar13 = param_3 + 2;
            uVar5 = uVar15 >> 4 & 0x1ffffff;
            do {
              uVar15 = uVar5 >> 7;
              pbVar13[-1] = (byte)uVar5 | 0x80;
              pbVar13 = pbVar13 + 1;
              uVar16 = uVar5 >> 0xe;
              uVar5 = uVar15;
            } while (uVar16 != 0);
            goto LAB_00518dd4;
          }
LAB_00518934:
          param_3[1] = (byte)(uVar15 >> 4);
          pbVar13 = param_3 + 2;
          param_3 = param_3 + 6;
          *(undefined4 *)pbVar13 = uVar7;
          break;
        case 0x10:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005181f0 to 00518203 has its CatchHandler @ 0051a948 */
            uVar11 = FUN_004f52b4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 005184fc to 0051850b has its CatchHandler @ 0051a948 */
            uVar11 = FUN_004f5110(extraout_x1,param_2,param_1);
          }
          uVar15 = *(uint *)(param_1 + 0x44);
          uVar5 = uVar15 << 3 | 1;
          if (uVar5 < 0x80) goto LAB_00518670;
          *param_3 = (byte)(uVar15 << 3) | 0x81;
          if ((uVar15 & 0x1fffffff) >> 0xb != 0) {
            pbVar13 = param_3 + 2;
            uVar5 = uVar15 >> 4 & 0x1ffffff;
            do {
              uVar15 = uVar5 >> 7;
              pbVar13[-1] = (byte)uVar5 | 0x80;
              pbVar13 = pbVar13 + 1;
              uVar16 = uVar5 >> 0xe;
              uVar5 = uVar15;
            } while (uVar16 != 0);
            goto LAB_00518d30;
          }
LAB_005188e8:
          param_3[1] = (byte)(uVar15 >> 4);
          pbVar13 = param_3 + 2;
          param_3 = param_3 + 10;
          *(undefined8 *)pbVar13 = uVar11;
          break;
        case 0x11:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 005180e8 to 005180fb has its CatchHandler @ 0051a94c */
            iVar6 = FUN_004f4f3c(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 0051838c to 0051839b has its CatchHandler @ 0051a94c */
            iVar6 = FUN_004f4d98(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          uVar5 = iVar6 << 1 ^ iVar6 >> 0x1f;
          if (0x7f < uVar5) {
            *pbVar13 = (byte)uVar5 | 0x80;
            uVar15 = uVar5 >> 7;
            if (uVar5 >> 0xe == 0) goto LAB_00519158;
            param_3 = pbVar13 + 2;
            do {
              uVar5 = uVar15 >> 7;
              param_3[-1] = (byte)uVar15 | 0x80;
              param_3 = param_3 + 1;
              uVar16 = uVar15 >> 0xe;
              uVar15 = uVar5;
            } while (uVar16 != 0);
            goto LAB_00519188;
          }
          param_3 = pbVar13 + 1;
          *pbVar13 = (byte)uVar5;
          break;
        case 0x12:
          if (*(int *)(param_1 + 0x3c) == 3) {
                    /* try { // try from 00518280 to 00518293 has its CatchHandler @ 0051a950 */
            lVar12 = FUN_004f52b4(extraout_x1,param_2,param_1,uVar10 & 0xffffffff);
          }
          else {
                    /* try { // try from 00518610 to 0051861f has its CatchHandler @ 0051a950 */
            lVar12 = FUN_004f5110(extraout_x1,param_2,param_1);
          }
          uVar5 = *(uint *)(param_1 + 0x44);
          bVar4 = (byte)(uVar5 * 8);
          if (uVar5 * 8 < 0x80) {
            pbVar13 = param_3 + 1;
            *param_3 = bVar4;
          }
          else {
            *param_3 = bVar4 | 0x80;
            if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
              param_3[1] = (byte)(uVar5 >> 4);
              pbVar13 = param_3 + 2;
            }
            else {
              pbVar13 = param_3 + 2;
              uVar5 = uVar5 >> 4 & 0x1ffffff;
              do {
                pbVar25 = pbVar13;
                uVar15 = uVar5 >> 7;
                pbVar25[-1] = (byte)uVar5 | 0x80;
                pbVar13 = pbVar25 + 1;
                uVar16 = uVar5 >> 0xe;
                uVar5 = uVar15;
              } while (uVar16 != 0);
              *pbVar25 = (byte)uVar15;
            }
          }
          uVar21 = lVar12 << 1 ^ lVar12 >> 0x3f;
          if (0x7f < uVar21) {
            *pbVar13 = (byte)uVar21 | 0x80;
            uVar17 = uVar21 >> 7;
            if (uVar21 >> 0xe != 0) {
              param_3 = pbVar13 + 2;
              do {
                uVar21 = uVar17 >> 7;
                param_3[-1] = (byte)uVar17 | 0x80;
                param_3 = param_3 + 1;
                uVar20 = uVar17 >> 0xe;
                uVar17 = uVar21;
              } while (uVar20 != 0);
              goto LAB_00518d04;
            }
            goto LAB_00518cdc;
          }
          param_3 = pbVar13 + 1;
          *pbVar13 = (byte)uVar21;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
    goto switchD_00517f94_caseD_9;
  }
  if ((int)uVar9 == 0) goto switchD_00517f94_caseD_9;
  if (param_3 < (byte *)*param_4) {
    puVar8 = *(ulong **)(param_1 + 0x30);
  }
  else {
                    /* try { // try from 00519dc4 to 00519dcf has its CatchHandler @ 0051a978 */
    param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    puVar8 = *(ulong **)(param_1 + 0x30);
  }
  if (puVar8 != (ulong *)0x0) {
    local_70 = param_1;
    local_68 = PTR_LAB_047cd728;
    if (*puVar8 != 0xffffffffffffffff) {
      local_b0 = &local_68;
      local_a8 = &local_70;
      local_f0 = &local_b0;
      std::__call_once(puVar8,&local_f0,(_func_void_void_ptr *)&LAB_0051d550);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
                    /* try { // try from 00517f98 to 00517fbf has its CatchHandler @ 0051a8fc */
    piVar14 = (int *)FUN_004f901c(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531fbc(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519de0 to 00519deb has its CatchHandler @ 0051a844 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 3;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519f28 to 00519f33 has its CatchHandler @ 0051a844 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    FUN_005320e8(&local_b0);
    break;
  case 2:
                    /* try { // try from 00519718 to 0051973f has its CatchHandler @ 0051a8d8 */
    piVar14 = (int *)FUN_004f8ff8(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531cd4(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519e30 to 00519e3b has its CatchHandler @ 0051a834 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 2;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519f5c to 00519f67 has its CatchHandler @ 0051a834 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    FUN_00531e00(&local_b0);
    break;
  case 3:
                    /* try { // try from 00519694 to 005196bb has its CatchHandler @ 0051a8dc */
    piVar14 = (int *)FUN_004f8f8c(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531704(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 005196e4 to 005196ef has its CatchHandler @ 0051a890 */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_00519710;
LAB_0051a430:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a410 to 0051a41b has its CatchHandler @ 0051a890 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a430;
LAB_00519710:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = local_a8 + (int)(uint)local_b0;
    ppuVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        puVar19 = *ppuVar24;
        pbVar13 = param_3;
        if (&DAT_00000080 <= puVar19) goto LAB_0051a4b8;
LAB_0051a494:
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)puVar19;
      }
      else {
                    /* try { // try from 0051a500 to 0051a50b has its CatchHandler @ 0051a868 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
        puVar19 = *ppuVar24;
        if (puVar19 < &DAT_00000080) goto LAB_0051a494;
LAB_0051a4b8:
        *pbVar13 = (byte)puVar19 | 0x80;
        if ((ulong)puVar19 >> 0xe == 0) {
          pbVar13[1] = (byte)((ulong)puVar19 >> 7);
          param_3 = pbVar13 + 2;
        }
        else {
          uVar9 = (ulong)puVar19 >> 7;
          param_3 = pbVar13 + 2;
          do {
            pbVar13 = param_3;
            uVar10 = uVar9 >> 7;
            pbVar13[-1] = (byte)uVar9 | 0x80;
            param_3 = pbVar13 + 1;
            uVar21 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar21 != 0);
          *pbVar13 = (byte)uVar10;
        }
      }
      ppuVar24 = ppuVar24 + 1;
    } while (ppuVar24 < ppuVar27);
    goto LAB_00519bb4;
  case 4:
                    /* try { // try from 00519610 to 00519637 has its CatchHandler @ 0051a8e0 */
    piVar14 = (int *)FUN_004f8fd4(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_005319ec(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00519660 to 0051966b has its CatchHandler @ 0051a894 */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_0051968c;
LAB_0051a320:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a300 to 0051a30b has its CatchHandler @ 0051a894 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a320;
LAB_0051968c:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = local_a8 + (int)(uint)local_b0;
    ppuVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        puVar19 = *ppuVar24;
        pbVar13 = param_3;
        if (&DAT_00000080 <= puVar19) goto LAB_0051a3a8;
LAB_0051a384:
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)puVar19;
      }
      else {
                    /* try { // try from 0051a3f0 to 0051a3fb has its CatchHandler @ 0051a86c */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
        puVar19 = *ppuVar24;
        if (puVar19 < &DAT_00000080) goto LAB_0051a384;
LAB_0051a3a8:
        *pbVar13 = (byte)puVar19 | 0x80;
        if ((ulong)puVar19 >> 0xe == 0) {
          pbVar13[1] = (byte)((ulong)puVar19 >> 7);
          param_3 = pbVar13 + 2;
        }
        else {
          uVar9 = (ulong)puVar19 >> 7;
          param_3 = pbVar13 + 2;
          do {
            pbVar13 = param_3;
            uVar10 = uVar9 >> 7;
            pbVar13[-1] = (byte)uVar9 | 0x80;
            param_3 = pbVar13 + 1;
            uVar21 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar21 != 0);
          *pbVar13 = (byte)uVar10;
        }
      }
      ppuVar24 = ppuVar24 + 1;
    } while (ppuVar24 < ppuVar27);
    goto LAB_00519b40;
  case 5:
                    /* try { // try from 00519410 to 00519437 has its CatchHandler @ 0051a8f0 */
    piVar14 = (int *)FUN_004f8f68(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531134(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00519460 to 0051946b has its CatchHandler @ 0051a8a8 */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_0051948c;
LAB_0051a104:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a0e4 to 0051a0ef has its CatchHandler @ 0051a8a8 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a104;
LAB_0051948c:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = (undefined **)((long)local_a8 + (long)(int)(uint)local_b0 * 4);
    ppuVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar5 = *(uint *)ppuVar24;
        pbVar13 = param_3;
        if (0x7f < uVar5) goto LAB_0051a18c;
LAB_0051a168:
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)uVar5;
      }
      else {
                    /* try { // try from 0051a1d4 to 0051a1df has its CatchHandler @ 0051a874 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
        uVar5 = *(uint *)ppuVar24;
        if (uVar5 < 0x80) goto LAB_0051a168;
LAB_0051a18c:
        *pbVar13 = (byte)uVar5 | 0x80;
        uVar9 = (ulong)(long)(int)uVar5 >> 7;
        if (((ulong)(long)(int)uVar5 >> 0xe & 0x3ffff) == 0) {
          pbVar13[1] = (byte)uVar9;
          param_3 = pbVar13 + 2;
        }
        else {
          param_3 = pbVar13 + 2;
          do {
            pbVar13 = param_3;
            uVar10 = uVar9 >> 7;
            pbVar13[-1] = (byte)uVar9 | 0x80;
            param_3 = pbVar13 + 1;
            uVar21 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar21 != 0);
          *pbVar13 = (byte)uVar10;
        }
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 4);
    } while (ppuVar24 < ppuVar27);
    goto LAB_00519acc;
  case 6:
                    /* try { // try from 00519518 to 0051953f has its CatchHandler @ 0051a8e8 */
    piVar14 = (int *)FUN_004f8fd4(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_005319ec(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519e08 to 00519e13 has its CatchHandler @ 0051a858 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 3;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519ec0 to 00519ecb has its CatchHandler @ 0051a858 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
LAB_00519b40:
    FUN_00531b18(&local_b0);
    break;
  case 7:
                    /* try { // try from 00519794 to 005197bb has its CatchHandler @ 0051a8d4 */
    piVar14 = (int *)FUN_004f8fb0(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_0053141c(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519e44 to 00519e4f has its CatchHandler @ 0051a830 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 2;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519f90 to 00519f9b has its CatchHandler @ 0051a830 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    goto LAB_00519d10;
  case 8:
                    /* try { // try from 00519810 to 00519837 has its CatchHandler @ 0051a8d0 */
    piVar14 = (int *)FUN_004f9040(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00530e58(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519e58 to 00519e63 has its CatchHandler @ 0051a820 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar16 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar16 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    sVar26 = (size_t)(int)(uint)local_b0;
    uVar5 = (uint)local_b0;
    if (0x7f < (uint)local_b0) {
      pbVar25 = pbVar13;
      uVar15 = (uint)local_b0;
      do {
        uVar5 = uVar15 >> 7;
        uVar16 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar16 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519fc4 to 00519fcf has its CatchHandler @ 0051a820 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,(ulong)local_b0 & 0xffffffff,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    FUN_00530f80(&local_b0);
    break;
  default:
    goto switchD_00517f94_caseD_9;
  case 0xd:
                    /* try { // try from 00519908 to 0051992f has its CatchHandler @ 0051a8c8 */
    piVar14 = (int *)FUN_004f8fb0(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_0053141c(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00519958 to 00519963 has its CatchHandler @ 0051a87c */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_00519984;
LAB_0051a650:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a630 to 0051a63b has its CatchHandler @ 0051a87c */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a650;
LAB_00519984:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = (undefined **)((long)local_a8 + (long)(int)(uint)local_b0 * 4);
    ppuVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar5 = *(uint *)ppuVar24;
        pbVar13 = param_3;
        if (0x7f < uVar5) goto LAB_0051a6d8;
LAB_0051a6b4:
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)uVar5;
      }
      else {
                    /* try { // try from 0051a720 to 0051a72b has its CatchHandler @ 0051a860 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
        uVar5 = *(uint *)ppuVar24;
        if (uVar5 < 0x80) goto LAB_0051a6b4;
LAB_0051a6d8:
        *pbVar13 = (byte)uVar5 | 0x80;
        if (uVar5 >> 0xe == 0) {
          pbVar13[1] = (byte)(uVar5 >> 7);
          param_3 = pbVar13 + 2;
        }
        else {
          param_3 = pbVar13 + 2;
          uVar5 = uVar5 >> 7;
          do {
            pbVar13 = param_3;
            uVar15 = uVar5 >> 7;
            pbVar13[-1] = (byte)uVar5 | 0x80;
            param_3 = pbVar13 + 1;
            uVar16 = uVar5 >> 0xe;
            uVar5 = uVar15;
          } while (uVar16 != 0);
          *pbVar13 = (byte)uVar15;
        }
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 4);
    } while (ppuVar24 < ppuVar27);
LAB_00519d10:
    FUN_00531548(&local_b0);
switchD_00517f94_caseD_9:
    break;
  case 0xe:
                    /* try { // try from 00519884 to 005198ab has its CatchHandler @ 0051a8cc */
    piVar14 = (int *)FUN_004f8f68(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531134(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 005198d4 to 005198df has its CatchHandler @ 0051a88c */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_00519900;
LAB_0051a540:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a520 to 0051a52b has its CatchHandler @ 0051a88c */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a540;
LAB_00519900:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = (undefined **)((long)local_a8 + (long)(int)(uint)local_b0 * 4);
    ppuVar24 = local_a8;
    do {
      if (param_3 < (byte *)*param_4) {
        uVar5 = *(uint *)ppuVar24;
        pbVar13 = param_3;
        if (0x7f < uVar5) goto LAB_0051a5c8;
LAB_0051a5a4:
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)uVar5;
      }
      else {
                    /* try { // try from 0051a610 to 0051a61b has its CatchHandler @ 0051a864 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
        uVar5 = *(uint *)ppuVar24;
        if (uVar5 < 0x80) goto LAB_0051a5a4;
LAB_0051a5c8:
        *pbVar13 = (byte)uVar5 | 0x80;
        uVar9 = (ulong)(long)(int)uVar5 >> 7;
        if (((ulong)(long)(int)uVar5 >> 0xe & 0x3ffff) == 0) {
          pbVar13[1] = (byte)uVar9;
          param_3 = pbVar13 + 2;
        }
        else {
          param_3 = pbVar13 + 2;
          do {
            pbVar13 = param_3;
            uVar10 = uVar9 >> 7;
            pbVar13[-1] = (byte)uVar9 | 0x80;
            param_3 = pbVar13 + 1;
            uVar21 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar21 != 0);
          *pbVar13 = (byte)uVar10;
        }
      }
      ppuVar24 = (undefined **)((long)ppuVar24 + 4);
    } while (ppuVar24 < ppuVar27);
    goto LAB_00519acc;
  case 0xf:
                    /* try { // try from 00519394 to 005193bb has its CatchHandler @ 0051a8f4 */
    piVar14 = (int *)FUN_004f8f68(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531134(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519df4 to 00519dff has its CatchHandler @ 0051a85c */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 2;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519e8c to 00519e97 has its CatchHandler @ 0051a85c */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    goto LAB_00519acc;
  case 0x10:
                    /* try { // try from 00519594 to 005195bb has its CatchHandler @ 0051a8e4 */
    piVar14 = (int *)FUN_004f8f8c(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531704(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 00519e1c to 00519e27 has its CatchHandler @ 0051a854 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
    }
    uVar16 = (uint)local_b0 << 3;
    uVar15 = uVar5 << 3 | 2;
    if (uVar15 < 0x80) {
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar15;
    }
    else {
      *param_3 = (byte)(uVar5 << 3) | 0x82;
      if ((uVar5 & 0x1fffffff) >> 0xb == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar15 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar15;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar15;
      }
    }
    uVar5 = uVar16;
    if (0x7f < uVar16) {
      pbVar25 = pbVar13;
      uVar15 = uVar16;
      do {
        uVar5 = uVar15 >> 7;
        uVar1 = uVar15 >> 0xe;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = (byte)uVar15 | 0x80;
        pbVar25 = pbVar13;
        uVar15 = uVar5;
      } while (uVar1 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar5;
    sVar26 = (size_t)(int)uVar16;
    if (*param_4 - (long)param_3 < (long)sVar26) {
                    /* try { // try from 00519ef4 to 00519eff has its CatchHandler @ 0051a854 */
      param_3 = (byte *)FUN_0052c7dc(param_4,local_a8,uVar16,param_3);
    }
    else {
      memcpy(param_3,local_a8,sVar26);
      param_3 = param_3 + sVar26;
    }
    goto LAB_00519bb4;
  case 0x11:
                    /* try { // try from 00519494 to 005194bb has its CatchHandler @ 0051a8ec */
    piVar14 = (int *)FUN_004f8f68(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531134(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 2);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 005194e4 to 005194ef has its CatchHandler @ 0051a8a4 */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_00519510;
LAB_0051a214:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 0051a1f4 to 0051a1ff has its CatchHandler @ 0051a8a4 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_0051a214;
LAB_00519510:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = (undefined **)((long)local_a8 + (long)(int)(uint)local_b0 * 4);
    ppuVar24 = local_a8;
    do {
      pbVar13 = param_3;
      if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 0051a2ec to 0051a2f7 has its CatchHandler @ 0051a870 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
      }
      ppuVar23 = (undefined **)((long)ppuVar24 + 4);
      uVar5 = *(uint *)ppuVar24 << 1 ^ (int)*(uint *)ppuVar24 >> 0x1f;
      if (uVar5 < 0x80) {
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)uVar5;
      }
      else {
        *pbVar13 = (byte)uVar5 | 0x80;
        if (uVar5 >> 0xe == 0) {
          pbVar13[1] = (byte)(uVar5 >> 7);
          param_3 = pbVar13 + 2;
        }
        else {
          param_3 = pbVar13 + 2;
          uVar5 = uVar5 >> 7;
          do {
            pbVar13 = param_3;
            uVar15 = uVar5 >> 7;
            pbVar13[-1] = (byte)uVar5 | 0x80;
            param_3 = pbVar13 + 1;
            uVar16 = uVar5 >> 0xe;
            uVar5 = uVar15;
          } while (uVar16 != 0);
          *pbVar13 = (byte)uVar15;
        }
      }
      ppuVar24 = ppuVar23;
    } while (ppuVar23 < ppuVar27);
LAB_00519acc:
    FUN_00531260(&local_b0);
joined_r0x00519ad8:
    if (ppuVar22 == (undefined **)0x0) {
      return param_3;
    }
    goto LAB_00519d20;
  case 0x12:
                    /* try { // try from 00519310 to 00519337 has its CatchHandler @ 0051a8f8 */
    piVar14 = (int *)FUN_004f8f8c(extraout_x1,param_2,param_1);
    local_b0 = (undefined **)0x0;
    local_a8 = (undefined **)0x0;
    if (*piVar14 != 0) {
      FUN_00531704(&local_b0);
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,(uint)local_b0 + *piVar14);
      memcpy(local_a8,*(void **)(piVar14 + 2),(long)*piVar14 << 3);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
                    /* try { // try from 00519360 to 0051936b has its CatchHandler @ 0051a8b8 */
    uVar9 = FUN_0051bee4(param_1,param_2);
    uVar15 = (uint)uVar9;
    if (param_3 < (byte *)*param_4) {
      uVar16 = uVar5 << 3 | 2;
      if (uVar16 < 0x80) goto LAB_0051938c;
LAB_00519ff8:
      *param_3 = (byte)uVar16 | 0x80;
      if (uVar16 >> 0xe == 0) {
        param_3[1] = (byte)(uVar5 >> 4);
        pbVar13 = param_3 + 2;
      }
      else {
        pbVar13 = param_3 + 2;
        uVar5 = uVar5 >> 4 & 0x1ffffff;
        do {
          pbVar25 = pbVar13;
          uVar16 = uVar5 >> 7;
          pbVar25[-1] = (byte)uVar5 | 0x80;
          pbVar13 = pbVar25 + 1;
          uVar1 = uVar5 >> 0xe;
          uVar5 = uVar16;
        } while (uVar1 != 0);
        *pbVar25 = (byte)uVar16;
      }
    }
    else {
                    /* try { // try from 00519fd8 to 00519fe3 has its CatchHandler @ 0051a8b8 */
      param_3 = (byte *)FUN_0052c6d8(param_4,param_3);
      uVar16 = uVar5 << 3 | 2;
      if (0x7f < uVar16) goto LAB_00519ff8;
LAB_0051938c:
      pbVar13 = param_3 + 1;
      *param_3 = (byte)uVar16;
    }
    if (0x7f < uVar15) {
      uVar10 = uVar9 & 0xffffffff;
      pbVar25 = pbVar13;
      do {
        bVar4 = (byte)uVar9;
        uVar9 = uVar10 >> 7;
        uVar21 = uVar10 >> 0xe;
        uVar15 = (uint)uVar9;
        pbVar13 = pbVar25 + 1;
        *pbVar25 = bVar4 | 0x80;
        uVar10 = uVar9;
        pbVar25 = pbVar13;
      } while (uVar21 != 0);
    }
    param_3 = pbVar13 + 1;
    *pbVar13 = (byte)uVar15;
    ppuVar27 = local_a8 + (int)(uint)local_b0;
    ppuVar24 = local_a8;
    do {
      pbVar13 = param_3;
      if ((byte *)*param_4 <= param_3) {
                    /* try { // try from 0051a0d0 to 0051a0db has its CatchHandler @ 0051a878 */
        pbVar13 = (byte *)FUN_0052c6d8(param_4,param_3);
      }
      ppuVar23 = ppuVar24 + 1;
      uVar9 = (long)*ppuVar24 << 1 ^ (long)*ppuVar24 >> 0x3f;
      if (uVar9 < 0x80) {
        param_3 = pbVar13 + 1;
        *pbVar13 = (byte)uVar9;
      }
      else {
        *pbVar13 = (byte)uVar9 | 0x80;
        if (uVar9 >> 0xe == 0) {
          pbVar13[1] = (byte)(uVar9 >> 7);
          param_3 = pbVar13 + 2;
        }
        else {
          uVar9 = uVar9 >> 7;
          param_3 = pbVar13 + 2;
          do {
            pbVar13 = param_3;
            uVar10 = uVar9 >> 7;
            pbVar13[-1] = (byte)uVar9 | 0x80;
            param_3 = pbVar13 + 1;
            uVar21 = uVar9 >> 0xe;
            uVar9 = uVar10;
          } while (uVar21 != 0);
          *pbVar13 = (byte)uVar10;
        }
      }
      ppuVar24 = ppuVar23;
    } while (ppuVar23 < ppuVar27);
LAB_00519bb4:
    FUN_00531830(&local_b0);
    goto joined_r0x00519ad8;
  }
  if (ppuVar22 != (undefined **)0x0) {
LAB_00519d20:
    FUN_0049e790(PTR_LAB_047cba48,ppuVar22);
  }
  return param_3;
}


