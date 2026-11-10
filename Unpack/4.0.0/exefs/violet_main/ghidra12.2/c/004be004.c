/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004be004; name: FUN_004be004
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004be004(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *__src;
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  void *__dest;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar7;
  byte *pbVar8;
  undefined8 **ppuVar9;
  byte *pbVar10;
  undefined8 **ppuVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  bool bVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  double dVar20;
  undefined *local_148;
  undefined8 **ppuStack_140;
  undefined8 local_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  undefined8 *local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_90;
  undefined8 **ppuStack_88;
  void *local_80;
  undefined8 *local_70;
  undefined **local_68;
  
  puVar3 = (ulong *)param_2[6];
  if (puVar3 != (ulong *)0x0) {
    local_d0 = (undefined8 *)PTR_LAB_047cd728;
    local_f0 = param_2;
    if (*puVar3 != 0xffffffffffffffff) {
      local_90 = &local_d0;
      ppuStack_88 = &local_f0;
      local_b0 = &local_90;
      std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
    }
  }
  uVar7 = *(uint *)(param_2 + 7);
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar7 * 4)) {
  case 1:
    lVar14 = param_1[2];
    if ((*(uint *)(lVar14 + 0x10) >> 3 & 1) == 0) {
      if ((*(uint *)(lVar14 + 0x10) >> 4 & 1) == 0) {
        FUN_004a8ec0(&local_b0,"Value must be integer for int32 option \"",param_2[1]);
                    /* try { // try from 004be0d0 to 004be0e3 has its CatchHandler @ 004bf4ec */
        puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
        ppuStack_88 = (undefined8 **)puVar3[1];
        local_90 = (undefined8 **)*puVar3;
        local_80 = (void *)puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        lVar14 = *param_1;
        plVar5 = *(long **)(lVar14 + 0x10);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be11c to 004be127 has its CatchHandler @ 004bf420 */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
        }
      }
      else {
        uVar4 = *(ulong *)(lVar14 + 0x50);
        if (-0x80000001 < (long)uVar4) {
          uVar12 = *(undefined4 *)((long)param_2 + 0x44);
          puVar3 = (ulong *)param_2[6];
          if (puVar3 != (ulong *)0x0) {
            local_d0 = (undefined8 *)PTR_LAB_047cd728;
            local_f0 = param_2;
            if (*puVar3 != 0xffffffffffffffff) {
              local_90 = &local_d0;
              ppuStack_88 = &local_f0;
              local_b0 = &local_90;
              std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
            }
            uVar7 = *(uint *)(param_2 + 7);
          }
          iVar2 = (int)uVar4;
          if (uVar7 == 0x11) {
            uVar4 = (ulong)(uint)(iVar2 << 1 ^ iVar2 >> 0x1f);
          }
          else {
            if (uVar7 == 0xf) goto LAB_004bec68;
            if (uVar7 != 5) {
              return 1;
            }
            uVar4 = (ulong)iVar2;
          }
          goto LAB_004bf24c;
        }
        FUN_004a8ec0(&local_b0,"Value out of range for int32 option \"",param_2[1]);
                    /* try { // try from 004be8a4 to 004be8b7 has its CatchHandler @ 004bf408 */
        puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
        ppuStack_88 = (undefined8 **)puVar3[1];
        local_90 = (undefined8 **)*puVar3;
        local_80 = (void *)puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        lVar14 = *param_1;
        plVar5 = *(long **)(lVar14 + 0x10);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be8f0 to 004be8fb has its CatchHandler @ 004bf2d8 */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
        }
      }
    }
    else {
      uVar4 = *(ulong *)(lVar14 + 0x48);
      if (uVar4 >> 0x1f == 0) {
        uVar12 = *(undefined4 *)((long)param_2 + 0x44);
        puVar3 = (ulong *)param_2[6];
        if (puVar3 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_047cd728;
          local_f0 = param_2;
          if (*puVar3 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
          }
          uVar7 = *(uint *)(param_2 + 7);
        }
        if (uVar7 == 0x11) {
          uVar4 = (ulong)((uint)uVar4 >> 0x1f | (uint)uVar4 << 1);
        }
        else {
          if (uVar7 == 0xf) goto LAB_004bec68;
          if (uVar7 != 5) {
            return 1;
          }
        }
        goto LAB_004bf24c;
      }
      FUN_004a8ec0(&local_b0,"Value out of range for int32 option \"",param_2[1]);
                    /* try { // try from 004be6e4 to 004be6f7 has its CatchHandler @ 004bf4e0 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be730 to 004be73b has its CatchHandler @ 004bf414 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    break;
  case 2:
    lVar14 = param_1[2];
    if ((*(uint *)(lVar14 + 0x10) >> 3 & 1) == 0) {
      if ((*(uint *)(lVar14 + 0x10) >> 4 & 1) != 0) {
        uVar12 = *(undefined4 *)((long)param_2 + 0x44);
        uVar4 = *(ulong *)(lVar14 + 0x50);
        puVar3 = (ulong *)param_2[6];
        if (puVar3 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_047cd728;
          local_f0 = param_2;
          if (*puVar3 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
          }
          uVar7 = *(uint *)(param_2 + 7);
        }
        if (uVar7 != 0x12) goto LAB_004be95c;
        uVar4 = uVar4 << 1 ^ (long)uVar4 >> 0x3f;
        goto LAB_004bf24c;
      }
      FUN_004a8ec0(&local_b0,"Value must be integer for int64 option \"",param_2[1]);
                    /* try { // try from 004be360 to 004be373 has its CatchHandler @ 004bf4e8 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be3ac to 004be3b7 has its CatchHandler @ 004bf41c */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    else {
      uVar4 = *(ulong *)(lVar14 + 0x48);
      if (-1 < (long)uVar4) {
        uVar12 = *(undefined4 *)((long)param_2 + 0x44);
        puVar3 = (ulong *)param_2[6];
        if (puVar3 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_047cd728;
          local_f0 = param_2;
          if (*puVar3 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
          }
          uVar7 = *(uint *)(param_2 + 7);
        }
        if (uVar7 == 0x12) {
          uVar4 = uVar4 >> 0x3f | uVar4 << 1;
        }
        else {
LAB_004be95c:
          if (uVar7 == 0x10) {
            FUN_00514ff8(param_3,uVar12,uVar4);
            return 1;
          }
          if (uVar7 != 3) {
            return 1;
          }
        }
LAB_004bf24c:
        FUN_00514e00(param_3,uVar12,uVar4);
switchD_004be0a8_default:
        return 1;
      }
      FUN_004a8ec0(&local_b0,"Value out of range for int64 option \"",param_2[1]);
                    /* try { // try from 004beafc to 004beb0f has its CatchHandler @ 004bf4d8 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004beb48 to 004beb53 has its CatchHandler @ 004bf404 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    break;
  case 3:
    if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) == 0) {
      FUN_004a8ec0(&local_b0,"Value must be non-negative integer for uint32 option \"",param_2[1]);
                    /* try { // try from 004be1e8 to 004be1fb has its CatchHandler @ 004bf54c */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be234 to 004be23f has its CatchHandler @ 004bf504 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    else {
      uVar4 = *(ulong *)(param_1[2] + 0x48);
      if (uVar4 >> 0x20 == 0) {
        uVar12 = *(undefined4 *)((long)param_2 + 0x44);
        puVar3 = (ulong *)param_2[6];
        if (puVar3 != (ulong *)0x0) {
          local_d0 = (undefined8 *)PTR_LAB_047cd728;
          local_f0 = param_2;
          if (*puVar3 != 0xffffffffffffffff) {
            local_90 = &local_d0;
            ppuStack_88 = &local_f0;
            local_b0 = &local_90;
            std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
          }
          uVar7 = *(uint *)(param_2 + 7);
        }
        if (uVar7 == 7) {
LAB_004bec68:
          FUN_00514ef8(param_3,uVar12,uVar4 & 0xffffffff);
          return 1;
        }
        if (uVar7 != 0xd) {
          return 1;
        }
        goto LAB_004bf24c;
      }
      FUN_004a8ec0(&local_b0,"Value out of range for uint32 option \"",*param_2);
                    /* try { // try from 004be560 to 004be573 has its CatchHandler @ 004bf4e4 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be5ac to 004be5b7 has its CatchHandler @ 004bf418 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    break;
  case 4:
    if ((*(byte *)(param_1[2] + 0x10) >> 3 & 1) != 0) {
      uVar12 = *(undefined4 *)((long)param_2 + 0x44);
      uVar4 = *(ulong *)(param_1[2] + 0x48);
      puVar3 = (ulong *)param_2[6];
      if (puVar3 != (ulong *)0x0) {
        local_d0 = (undefined8 *)PTR_LAB_047cd728;
        local_f0 = param_2;
        if (*puVar3 != 0xffffffffffffffff) {
          local_90 = &local_d0;
          ppuStack_88 = &local_f0;
          local_b0 = &local_90;
          std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c0750);
        }
        uVar7 = *(uint *)(param_2 + 7);
      }
      if (uVar7 == 6) {
        FUN_00514ff8(param_3,uVar12,uVar4);
        return 1;
      }
      if (uVar7 != 4) {
        return 1;
      }
      goto LAB_004bf24c;
    }
    FUN_004a8ec0(&local_b0,"Value must be non-negative integer for uint64 option \"",param_2[1]);
                    /* try { // try from 004be264 to 004be277 has its CatchHandler @ 004bf548 */
    puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
    ppuStack_88 = (undefined8 **)puVar3[1];
    local_90 = (undefined8 **)*puVar3;
    local_80 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar14 = *param_1;
    plVar5 = *(long **)(lVar14 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be2b0 to 004be2bb has its CatchHandler @ 004bf500 */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 5:
    lVar14 = param_1[2];
    uVar7 = *(uint *)(lVar14 + 0x10);
    if ((uVar7 >> 5 & 1) != 0) {
      dVar20 = *(double *)(lVar14 + 0x58);
LAB_004bebe4:
      FUN_00514ff8(param_3,*(undefined4 *)((long)param_2 + 0x44),dVar20);
      return 1;
    }
    if ((uVar7 >> 3 & 1) != 0) {
      dVar20 = (double)NEON_ucvtf(*(undefined8 *)(lVar14 + 0x48));
      goto LAB_004bebe4;
    }
    if ((uVar7 >> 4 & 1) != 0) {
      dVar20 = (double)*(long *)(lVar14 + 0x50);
      goto LAB_004bebe4;
    }
    FUN_004a8ec0(&local_b0,"Value must be number for double option \"",param_2[1]);
                    /* try { // try from 004be154 to 004be167 has its CatchHandler @ 004bf410 */
    puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
    ppuStack_88 = (undefined8 **)puVar3[1];
    local_90 = (undefined8 **)*puVar3;
    local_80 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar14 = *param_1;
    plVar5 = *(long **)(lVar14 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be1a0 to 004be1ab has its CatchHandler @ 004bf2e0 */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 6:
    lVar14 = param_1[2];
    uVar7 = *(uint *)(lVar14 + 0x10);
    if ((uVar7 >> 5 & 1) != 0) {
      fVar19 = (float)*(double *)(lVar14 + 0x58);
LAB_004bec84:
      FUN_00514ef8(param_3,*(undefined4 *)((long)param_2 + 0x44),fVar19);
      return 1;
    }
    if ((uVar7 >> 3 & 1) != 0) {
      fVar19 = (float)*(ulong *)(lVar14 + 0x48);
      goto LAB_004bec84;
    }
    if ((uVar7 >> 4 & 1) != 0) {
      fVar19 = (float)*(long *)(lVar14 + 0x50);
      goto LAB_004bec84;
    }
    FUN_004a8ec0(&local_b0,"Value must be number for float option \"",param_2[1]);
                    /* try { // try from 004be3e4 to 004be3f7 has its CatchHandler @ 004bf40c */
    puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
    ppuStack_88 = (undefined8 **)puVar3[1];
    local_90 = (undefined8 **)*puVar3;
    local_80 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar14 = *param_1;
    plVar5 = *(long **)(lVar14 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be430 to 004be43b has its CatchHandler @ 004bf2dc */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 7:
    if ((*(byte *)(param_1[2] + 0x10) & 1) == 0) {
      FUN_004a8ec0(&local_b0,"Value must be identifier for boolean option \"",param_2[1]);
                    /* try { // try from 004be460 to 004be473 has its CatchHandler @ 004bf540 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be4ac to 004be4b7 has its CatchHandler @ 004bf4f8 */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    else {
      pbVar15 = *(byte **)(param_1[2] + 0x30);
      bVar1 = *pbVar15;
      if ((bVar1 & 1) == 0) {
        if (((bVar1 & 0xfe) == 8) && (*(int *)(pbVar15 + 1) == 0x65757274)) {
LAB_004bec98:
          uVar4 = 1;
LAB_004bf1a0:
          uVar12 = *(undefined4 *)((long)param_2 + 0x44);
          goto LAB_004bf24c;
        }
        if ((bVar1 & 0xfe) == 10) {
          pbVar15 = pbVar15 + 1;
          goto LAB_004bea28;
        }
      }
      else {
        lVar14 = *(long *)(pbVar15 + 8);
        if (lVar14 == 4) {
          if (**(int **)(pbVar15 + 0x10) == 0x65757274) goto LAB_004bec98;
          lVar14 = *(long *)(pbVar15 + 8);
        }
        if (lVar14 == 5) {
          pbVar15 = *(byte **)(pbVar15 + 0x10);
LAB_004bea28:
          if (*(int *)pbVar15 == 0x736c6166 && pbVar15[4] == 0x65) {
            uVar4 = 0;
            goto LAB_004bf1a0;
          }
        }
      }
      FUN_004a8ec0(&local_b0,"Value must be \"true\" or \"false\" for boolean option \"",param_2[1])
      ;
                    /* try { // try from 004bea60 to 004bea73 has its CatchHandler @ 004bf524 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004beaac to 004beab7 has its CatchHandler @ 004bf4dc */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
    }
    break;
  case 8:
    lVar14 = param_1[2];
    if ((*(byte *)(lVar14 + 0x10) & 1) == 0) {
      FUN_004a8ec0(&local_b0,"Value must be identifier for enum-valued option \"",param_2[1]);
                    /* try { // try from 004be2e0 to 004be2f3 has its CatchHandler @ 004bf544 */
      puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
      ppuStack_88 = (undefined8 **)puVar3[1];
      local_90 = (undefined8 **)*puVar3;
      local_80 = (void *)puVar3[2];
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      lVar14 = *param_1;
      plVar5 = *(long **)(lVar14 + 0x10);
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be32c to 004be337 has its CatchHandler @ 004bf4fc */
        (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90)
        ;
      }
      break;
    }
    puVar3 = (ulong *)param_2[6];
    if (puVar3 != (ulong *)0x0) {
      local_d0 = param_2;
      if (*puVar3 != 0xffffffffffffffff) {
        ppuStack_88 = &local_d0;
        local_90 = (undefined8 **)PTR_LAB_047cd728;
        local_b0 = &local_90;
        std::__call_once(puVar3,&local_b0,(_func_void_void_ptr *)&LAB_004c9500);
      }
      lVar14 = param_1[2];
    }
    puVar17 = (undefined8 *)param_2[0xe];
    pbVar15 = *(byte **)(lVar14 + 0x30);
    lVar18 = *(long *)(puVar17[2] + 0x10);
    lVar14 = FUN_004a4448();
    FUN_004f9370(PTR_DAT_047cd738,0);
    if (lVar18 == lVar14) {
      iVar2 = FUN_004c0784(*(undefined8 *)(puVar17[2] + 0x90),puVar17,pbVar15);
      lVar14 = extraout_x1;
      if (iVar2 != 5) {
        lVar14 = 0;
      }
      if ((iVar2 != 0) && (iVar2 == 5)) goto LAB_004bef54;
    }
    else {
      pbVar8 = (byte *)puVar17[1];
      if ((*pbVar8 & 1) == 0) {
        ppuStack_88 = *(undefined8 ***)(pbVar8 + 8);
        local_90 = *(undefined8 ***)pbVar8;
        local_80 = *(void **)(pbVar8 + 0x10);
      }
      else {
        ppuVar11 = *(undefined8 ***)(pbVar8 + 8);
        __src = *(void **)(pbVar8 + 0x10);
        if (ppuVar11 < (undefined8 **)0x17) {
          __dest = (void *)((ulong)&local_90 | 1);
          local_90 = (undefined8 **)CONCAT71(local_90._1_7_,(char)((int)ppuVar11 << 1));
        }
        else {
          if ((undefined8 **)0xffffffffffffffef < ppuVar11) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(ppuVar11 + 2) & 0xfffffffffffffff0)
          ;
          local_90 = (undefined8 **)((ulong)(ppuVar11 + 2) & 0xfffffffffffffff0 | 1);
          ppuStack_88 = ppuVar11;
          local_80 = __dest;
        }
        memcpy(__dest,__src,(long)ppuVar11 + 1);
      }
      ppuVar9 = (undefined8 **)((ulong)local_90 >> 1 & 0x7f);
      bVar1 = *(byte *)*puVar17;
      ppuVar11 = ppuVar9;
      if (((ulong)local_90 & 1) != 0) {
        ppuVar11 = ppuStack_88;
      }
      if ((bVar1 & 1) == 0) {
        uVar4 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar4 = *(ulong *)((byte *)*puVar17 + 8);
      }
      ppuVar11 = (undefined8 **)((long)ppuVar11 - uVar4);
      if (((ulong)local_90 & 1) == 0) {
        if (ppuVar9 < ppuVar11) goto LAB_004bed38;
        *(undefined1 *)((long)&local_90 + 1 + (long)ppuVar11) = 0;
        local_90 = (undefined8 **)CONCAT71(local_90._1_7_,(char)((int)ppuVar11 << 1));
      }
      else {
        ppuVar9 = ppuStack_88;
        if (ppuStack_88 < ppuVar11) {
LAB_004bed38:
                    /* try { // try from 004bed3c to 004bed77 has its CatchHandler @ 004bf528 */
          FUN_002ce498(&local_90,(long)ppuVar11 - (long)ppuVar9,0);
        }
        else {
          *(undefined1 *)((long)local_80 + (long)ppuVar11) = 0;
          ppuStack_88 = ppuVar11;
        }
      }
      uVar4 = *(ulong *)(pbVar15 + 8);
      pbVar8 = *(byte **)(pbVar15 + 0x10);
      if ((*pbVar15 & 1) == 0) {
        pbVar8 = pbVar15 + 1;
        uVar4 = (ulong)(*pbVar15 >> 1);
      }
      FUN_0021d540(&local_90,pbVar8,uVar4);
                    /* try { // try from 004bed7c to 004bed87 has its CatchHandler @ 004bf4f0 */
      iVar2 = FUN_004ab410(*param_1,&local_90,1);
      if (iVar2 == 5) {
        lVar14 = extraout_x1_00;
        if (*(undefined8 **)(extraout_x1_00 + 0x18) == puVar17) goto LAB_004bef34;
                    /* try { // try from 004beda4 to 004bedb3 has its CatchHandler @ 004bf3ac */
        FUN_004a8ec0(&local_148,"Enum type \"",puVar17[1]);
                    /* try { // try from 004bedb4 to 004bedc7 has its CatchHandler @ 004bf39c */
        puVar3 = (ulong *)FUN_0021d540(&local_148,"\" has no value named \"",0x16);
        uStack_128 = puVar3[1];
        local_130 = *puVar3;
        local_120 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        uVar4 = (ulong)(*pbVar15 >> 1);
        pbVar8 = pbVar15 + 1;
        if ((*pbVar15 & 1) != 0) {
          uVar4 = *(ulong *)(pbVar15 + 8);
          pbVar8 = *(byte **)(pbVar15 + 0x10);
        }
                    /* try { // try from 004bedfc to 004bee03 has its CatchHandler @ 004bf38c */
        puVar3 = (ulong *)FUN_0021d540(&local_130,pbVar8,uVar4);
        uStack_108 = puVar3[1];
        local_110 = *puVar3;
        local_100 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
                    /* try { // try from 004bee1c to 004bee2f has its CatchHandler @ 004bf37c */
        puVar17 = (undefined8 *)FUN_0021d540(&local_110,"\" for option \"",0xe);
        uStack_e8 = puVar17[1];
        local_f0 = (undefined8 *)*puVar17;
        local_e0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        pbVar10 = (byte *)param_2[1];
        uVar4 = *(ulong *)(pbVar10 + 8);
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar8 = pbVar10 + 1;
          uVar4 = (ulong)(*pbVar10 >> 1);
        }
                    /* try { // try from 004bee64 to 004bee6b has its CatchHandler @ 004bf30c */
        puVar17 = (undefined8 *)FUN_0021d540(&local_f0,pbVar8,uVar4);
        uStack_c8 = puVar17[1];
        local_d0 = (undefined8 *)*puVar17;
        local_c0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
                    /* try { // try from 004bee84 to 004bee97 has its CatchHandler @ 004bf2e4 */
        puVar17 = (undefined8 *)
                  FUN_0021d540(&local_d0,"\". This appears to be a value from a sibling type.",0x32)
        ;
        uStack_a8 = puVar17[1];
        local_b0 = (undefined8 *)*puVar17;
        local_a0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        lVar14 = *param_1;
        plVar5 = *(long **)(lVar14 + 0x10);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 004beed0 to 004beedb has its CatchHandler @ 004bf27c */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_b0);
        }
        *(undefined1 *)(lVar14 + 0x30) = 1;
        if (((ulong)local_b0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_a0);
        }
        if (((ulong)local_d0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_c0);
        }
        if (((ulong)local_f0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_e0);
        }
        if ((local_110 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_100);
        }
        if ((local_130 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_120);
        }
        if (((ulong)local_148 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_138);
        }
        bVar16 = false;
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
LAB_004bef34:
        bVar16 = true;
      }
      if (((ulong)local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
      if (!bVar16) {
        return 0;
      }
LAB_004bef54:
      if (lVar14 != 0) {
        uVar12 = *(undefined4 *)((long)param_2 + 0x44);
        uVar4 = (ulong)*(int *)(lVar14 + 0x10);
        goto LAB_004bf24c;
      }
    }
    puVar3 = (ulong *)param_2[6];
    if ((puVar3 != (ulong *)0x0) && (local_70 = param_2, *puVar3 != 0xffffffffffffffff)) {
      ppuStack_140 = &local_70;
      local_148 = PTR_LAB_047cd728;
      local_68 = &local_148;
      std::__call_once(puVar3,&local_68,(_func_void_void_ptr *)&LAB_004c9500);
    }
    FUN_004a8ec0(&local_130,"Enum type \"",*(undefined8 *)(param_2[0xe] + 8));
                    /* try { // try from 004befbc to 004befcf has its CatchHandler @ 004bf4c4 */
    puVar3 = (ulong *)FUN_0021d540(&local_130,"\" has no value named \"",0x16);
    uStack_108 = puVar3[1];
    local_110 = *puVar3;
    local_100 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = *(ulong *)(pbVar15 + 8);
    pbVar8 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar8 = pbVar15 + 1;
      uVar4 = (ulong)(*pbVar15 >> 1);
    }
                    /* try { // try from 004bf000 to 004bf007 has its CatchHandler @ 004bf4b4 */
    puVar3 = (ulong *)FUN_0021d540(&local_110,pbVar8,uVar4);
    uStack_e8 = puVar3[1];
    local_f0 = (undefined8 *)*puVar3;
    local_e0 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
                    /* try { // try from 004bf020 to 004bf033 has its CatchHandler @ 004bf4a4 */
    puVar17 = (undefined8 *)FUN_0021d540(&local_f0,"\" for option \"",0xe);
    uStack_c8 = puVar17[1];
    local_d0 = (undefined8 *)*puVar17;
    local_c0 = puVar17[2];
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
    pbVar8 = (byte *)param_2[1];
    uVar4 = *(ulong *)(pbVar8 + 8);
    pbVar15 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar15 = pbVar8 + 1;
      uVar4 = (ulong)(*pbVar8 >> 1);
    }
                    /* try { // try from 004bf068 to 004bf06f has its CatchHandler @ 004bf44c */
    puVar17 = (undefined8 *)FUN_0021d540(&local_d0,pbVar15,uVar4);
    uStack_a8 = puVar17[1];
    local_b0 = (undefined8 *)*puVar17;
    local_a0 = puVar17[2];
    puVar17[1] = 0;
    puVar17[2] = 0;
    *puVar17 = 0;
                    /* try { // try from 004bf088 to 004bf09b has its CatchHandler @ 004bf424 */
    puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
    ppuStack_88 = (undefined8 **)puVar3[1];
    local_90 = (undefined8 **)*puVar3;
    local_80 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar14 = *param_1;
    plVar5 = *(long **)(lVar14 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004bf0d4 to 004bf0df has its CatchHandler @ 004bf3b0 */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    *(undefined1 *)(lVar14 + 0x30) = 1;
    if (((ulong)local_90 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    if (((ulong)local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if (((ulong)local_d0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_c0);
    }
    if (((ulong)local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_e0);
    }
    uVar4 = local_120;
    if ((local_110 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_100);
      uVar4 = local_120;
    }
    if ((local_130 & 1) == 0) {
      return 0;
    }
    local_120 = uVar4;
    goto LAB_004beb80;
  case 9:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) != 0) {
      uVar13 = *(undefined8 *)(param_1[2] + 0x38);
      uVar6 = FUN_005150f8(param_3,*(undefined4 *)((long)param_2 + 0x44));
      FUN_001fcec0(uVar6,uVar13);
      return 1;
    }
    FUN_004a8ec0(&local_b0,"Value must be quoted string for string option \"",param_2[1]);
                    /* try { // try from 004be4dc to 004be4ef has its CatchHandler @ 004bf53c */
    puVar3 = (ulong *)FUN_0021d540(&local_b0,&DAT_03bfbda2,2);
    ppuStack_88 = (undefined8 **)puVar3[1];
    local_90 = (undefined8 **)*puVar3;
    local_80 = (void *)puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    lVar14 = *param_1;
    plVar5 = *(long **)(lVar14 + 0x10);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 004be528 to 004be533 has its CatchHandler @ 004bf4f4 */
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar14 + 0x38,param_1[1] + 0x18,param_1[2],8,&local_90);
    }
    break;
  case 10:
    uVar4 = FUN_004bf570(param_1,param_2,param_3);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    return 1;
  default:
    goto switchD_004be0a8_default;
  }
  *(undefined1 *)(lVar14 + 0x30) = 1;
  if (((ulong)local_90 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
  if (((ulong)local_b0 & 1) != 0) {
    uVar4 = local_a0;
LAB_004beb80:
    FUN_0049e790(PTR_LAB_047cba48,uVar4);
  }
  return 0;
}


