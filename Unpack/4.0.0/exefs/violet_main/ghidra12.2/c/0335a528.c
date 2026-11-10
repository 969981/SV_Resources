/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335a528; name: FUN_0335a528
 */


ulong * FUN_0335a528(long param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  char *pcVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  char *local_120;
  char *local_118;
  char *local_110;
  ulong local_108;
  char local_100 [128];
  undefined4 local_80;
  char *local_78;
  undefined8 local_70;
  
  local_100[0] = '\0';
  local_110 = local_100;
  local_108 = 0x8000008000000001;
  local_80 = 1;
  uVar10 = *param_2;
  uVar8 = (uint)uVar10;
  if (((ulong *)0x1 < param_2) && ((uVar8 >> 0x11 & 1) != 0)) {
    uVar16 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
    puVar13 = param_2;
    if ((param_2[(ulong)(byte)(POPCOUNT((char)uVar16) + POPCOUNT((char)(uVar16 >> 8)) +
                              POPCOUNT((char)(uVar16 >> 0x10))) + 2] & 0x300000) != 0) {
      while ((uVar8 >> 0x12 & 1) == 0) {
        if (((uVar10 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0)) {
          puVar13 = (ulong *)0x0;
          goto LAB_0335a7ec;
        }
        uVar10 = *puVar13;
        uVar8 = (uint)uVar10;
      }
      uVar10 = CONCAT44(uVar8,uVar8) & 0x3ffff0003ffff;
      puVar13 = (ulong *)puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                               POPCOUNT((char)(uVar10 >> 8)) +
                                              POPCOUNT((char)(uVar10 >> 0x10))) + 2];
LAB_0335a7ec:
      FUN_031e12d8(puVar13,&local_110,0,0);
      local_70 = local_110 + (long)(int)local_108 + -1;
      local_78 = local_110;
      do {
        uVar10 = *puVar13;
        if (((uint)uVar10 >> 4 & 1) != 0) {
          uVar7 = (undefined4)puVar13[(ulong)(byte)POPCOUNT((byte)uVar10 & 0xf) + 2];
          goto LAB_0335a858;
        }
      } while (((uVar10 & 9) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
      uVar7 = 0;
LAB_0335a858:
      local_120 = (char *)FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),&local_78,
                                       uVar7);
      lVar5 = FUN_03349b40((long *)(param_1 + 0x110),&local_120);
      if ((((lVar5 == 0) || (lVar11 = *(long *)(param_1 + 0x110), lVar11 == 0)) ||
          (*(int *)(lVar11 + (long)*(int *)(lVar5 + 4) * 0x18 + 0x10) < 1)) ||
         (uVar8 = **(uint **)(lVar11 + (long)*(int *)(lVar5 + 4) * 0x18 + 8), (int)uVar8 < 0)) {
        param_2 = (ulong *)0x0;
      }
      else {
        for (; param_2 != (ulong *)0x0; param_2 = (ulong *)param_2[1]) {
          uVar9 = (uint)*param_2;
          if ((uVar9 >> 0x10 & 1) != 0) {
            uVar10 = CONCAT44(uVar9,uVar9) & 0xffff0000ffff;
            uVar10 = param_2[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) +
                             2];
            goto LAB_0335addc;
          }
          if ((*param_2 & 1) != 0) break;
        }
        uVar10 = 0;
LAB_0335addc:
        param_2 = (ulong *)FUN_031e1c40(*(undefined8 *)
                                         (*(long *)(*(long *)(param_1 + 0x130) + (ulong)uVar8 * 8) +
                                         0x50),uVar10,0);
        if (param_2 < (ulong *)0x2) {
          param_2 = (ulong *)0x0;
        }
      }
      goto LAB_0335ac20;
    }
  }
  if ((uVar10 & 1) == 0) {
    uVar3 = FUN_0335a528(param_1,param_2[1]);
    puVar13 = param_2;
LAB_0335a604:
    uVar8 = (uint)*puVar13;
    if ((uVar8 >> 0xf & 1) == 0) goto code_r0x0335a60c;
    uVar10 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
    uVar10 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    if (uVar10 == 0) goto LAB_0335a758;
    local_78 = (char *)0x0;
    local_70 = (char *)0x8000000000000000;
    if (*(short *)(uVar10 + 8) != 0) {
      local_70._0_4_ = 0;
      puVar15 = (undefined8 *)(uVar10 + 0x18);
      uVar16 = 1;
      uVar8 = 0;
      while( true ) {
        iVar1 = (int)local_70 + 1;
        iVar17 = (int)local_70;
        if ((int)(uVar8 & 0x7fffffff) <= (int)local_70) {
          FUN_03341778(&local_78,PTR_PTR_047d1a50,(long)iVar1);
          iVar17 = (int)local_70;
        }
        pcVar14 = local_78;
        local_70 = (char *)CONCAT44(local_70._4_4_,iVar1);
        uVar4 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar15,0xffffffff,1);
        *(undefined8 *)(pcVar14 + (long)iVar17 * 0x10 + 8) = uVar4;
        if (*(char *)*puVar15 == 'v') {
          uVar4 = puVar15[-1];
        }
        else {
          uVar4 = FUN_0335a528(param_1,puVar15[-1]);
        }
        *(undefined8 *)(pcVar14 + (long)iVar17 * 0x10) = uVar4;
        if (*(ushort *)(uVar10 + 8) <= uVar16) break;
        uVar16 = uVar16 + 1;
        puVar15 = puVar15 + 2;
        uVar8 = local_70._4_4_;
      }
    }
    do {
      uVar10 = *param_2;
      if (((uint)uVar10 >> 3 & 1) != 0) {
        if (param_2 == (ulong *)0x0) break;
        pcVar14 = (char *)param_2[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
        local_120 = pcVar14;
        if (pcVar14 == (char *)0x0) {
          local_118 = (char *)0x0;
        }
        else {
          sVar6 = strlen(pcVar14);
          local_118 = pcVar14 + sVar6;
        }
        goto LAB_0335acb0;
      }
    } while (((uVar10 & 1) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
    local_118 = (char *)0x0;
    local_120 = (char *)0x0;
LAB_0335acb0:
    param_2 = (ulong *)FUN_03367e18(param_1 + 0x458,&local_120,uVar3,local_78,
                                    local_78 + (long)(int)local_70 * 0x10);
    goto LAB_0335acd0;
  }
  if ((param_2[2] & 0x1f) == 6) {
    puVar13 = param_2;
    if ((uVar8 >> 1 & 1) == 0) {
      do {
        puVar13 = (ulong *)puVar13[1];
        if (puVar13 == (ulong *)0x0) goto LAB_0335a9b0;
      } while (((byte)*puVar13 >> 1 & 1) == 0);
    }
    if (puVar13[3] == 0) {
LAB_0335a9b0:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0335a528(param_1);
    }
    puVar13 = param_2;
    while (uVar10 = *puVar13, ((uint)uVar10 >> 3 & 1) == 0) {
      if (((uVar10 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto LAB_0335ab44;
    }
    if (puVar13 != (ulong *)0x0) {
      pcVar14 = (char *)puVar13[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
      local_78 = pcVar14;
      if (pcVar14 == (char *)0x0) {
        local_70 = (char *)0x0;
      }
      else {
        sVar6 = strlen(pcVar14);
        local_70 = pcVar14 + sVar6;
      }
      goto LAB_0335ab54;
    }
LAB_0335ab44:
    local_70 = (char *)0x0;
    local_78 = (char *)0x0;
LAB_0335ab54:
    do {
      uVar8 = (uint)*param_2;
      if ((uVar8 >> 0xf & 1) != 0) {
        uVar10 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
        bVar2 = param_2[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2]
                != 0;
        goto LAB_0335ac0c;
      }
      if ((*param_2 & 9) != 0) break;
      param_2 = (ulong *)param_2[1];
    } while (param_2 != (ulong *)0x0);
    bVar2 = false;
LAB_0335ac0c:
    param_2 = (ulong *)FUN_03367c74(param_1 + 0x458,&local_78,uVar3,bVar2);
  }
  else if ((param_2[2] & 0x1f) == 8) {
    puVar13 = param_2;
    if ((uVar8 >> 1 & 1) == 0) {
      do {
        puVar13 = (ulong *)puVar13[1];
        if (puVar13 == (ulong *)0x0) goto LAB_0335a96c;
      } while (((byte)*puVar13 >> 1 & 1) == 0);
    }
    if (puVar13[3] == 0) {
LAB_0335a96c:
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0335a528(param_1);
    }
    local_78 = (char *)0x0;
    local_70 = (char *)0x8000000000000000;
    puVar13 = param_2;
    while( true ) {
      uVar8 = (uint)*puVar13;
      puVar12 = param_2;
      if ((uVar8 >> 0xf & 1) != 0) break;
      if (((*puVar13 & 9) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
      goto LAB_0335a99c;
    }
    uVar10 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
    uVar10 = puVar13[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
    if ((uVar10 != 0) && (*(short *)(uVar10 + 8) != 0)) {
      local_70._0_4_ = 0;
      puVar15 = (undefined8 *)(uVar10 + 0x18);
      uVar16 = 1;
      uVar8 = 0;
      while( true ) {
        iVar1 = (int)local_70 + 1;
        iVar17 = (int)local_70;
        if ((int)(uVar8 & 0x7fffffff) <= (int)local_70) {
          FUN_03341778(&local_78,PTR_PTR_047d1a50,(long)iVar1);
          iVar17 = (int)local_70;
        }
        pcVar14 = local_78;
        local_70 = (char *)CONCAT44(local_70._4_4_,iVar1);
        uVar4 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar15,0xffffffff,1);
        *(undefined8 *)(pcVar14 + (long)iVar17 * 0x10 + 8) = uVar4;
        if (*(char *)*puVar15 == 'v') {
          uVar4 = puVar15[-1];
        }
        else {
          uVar4 = FUN_0335a528(param_1,puVar15[-1]);
        }
        *(undefined8 *)(pcVar14 + (long)iVar17 * 0x10) = uVar4;
        if (*(ushort *)(uVar10 + 8) <= uVar16) break;
        uVar16 = uVar16 + 1;
        puVar15 = puVar15 + 2;
        uVar8 = local_70._4_4_;
      }
    }
LAB_0335a99c:
    do {
      if ((*puVar12 & 1) != 0) {
        if (puVar12 != (ulong *)0x0) {
          uVar10 = puVar12[2] >> 8;
          goto LAB_0335a9fc;
        }
        break;
      }
      puVar13 = puVar12 + 1;
      puVar12 = (ulong *)*puVar13;
    } while ((ulong *)*puVar13 != (ulong *)0x0);
    uVar10 = 0;
LAB_0335a9fc:
    do {
      uVar16 = *param_2;
      if (((uint)uVar16 >> 3 & 1) != 0) {
        if (param_2 != (ulong *)0x0) {
          pcVar14 = (char *)param_2[(ulong)(byte)POPCOUNT((byte)uVar16 & 7) + 2];
          local_120 = pcVar14;
          if (pcVar14 == (char *)0x0) {
            local_118 = (char *)0x0;
          }
          else {
            sVar6 = strlen(pcVar14);
            local_118 = pcVar14 + sVar6;
          }
          goto LAB_0335abb8;
        }
        break;
      }
    } while (((uVar16 & 1) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
    local_118 = (char *)0x0;
    local_120 = (char *)0x0;
LAB_0335abb8:
    param_2 = (ulong *)FUN_03368094(param_1 + 0x458,&local_120,uVar3,0,uVar10 & 0xffffffff,local_78,
                                    local_78 + (long)(int)local_70 * 0x10);
LAB_0335acd0:
    lVar5 = (long)local_70;
    uVar10 = (ulong)local_70._4_4_;
    local_70 = (char *)((ulong)local_70._4_4_ << 0x20);
    if ((-1 < lVar5) && (local_78 != (char *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar10 << 4);
    }
  }
  else {
    lVar5 = FUN_031e12d8(param_2,&local_110,0,0);
    if (lVar5 != 0) {
      puVar13 = param_2;
      do {
        uVar10 = *puVar13;
        if (((uint)uVar10 >> 4 & 1) != 0) {
          uVar7 = (undefined4)puVar13[(ulong)(byte)POPCOUNT((byte)uVar10 & 0xf) + 2];
          goto LAB_0335ad24;
        }
      } while (((uVar10 & 9) == 0) && (puVar13 = (ulong *)puVar13[1], puVar13 != (ulong *)0x0));
      uVar7 = 0;
LAB_0335ad24:
      local_70 = local_110 + (long)(int)local_108 + -1;
      local_78 = local_110;
      local_78 = (char *)FUN_03342334(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),&local_78,
                                      uVar7);
      lVar5 = FUN_03349b40((long *)(param_1 + 0x110),&local_78);
      if ((((lVar5 != 0) && (lVar11 = *(long *)(param_1 + 0x110), lVar11 != 0)) &&
          (0 < *(int *)(lVar11 + (long)*(int *)(lVar5 + 4) * 0x18 + 0x10))) &&
         (uVar8 = **(uint **)(lVar11 + (long)*(int *)(lVar5 + 4) * 0x18 + 8), -1 < (int)uVar8)) {
        param_2 = *(ulong **)(*(long *)(*(long *)(param_1 + 0x130) + (ulong)uVar8 * 8) + 0x50);
      }
    }
  }
  goto LAB_0335ac20;
code_r0x0335a60c:
  if (((*puVar13 & 9) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
  goto LAB_0335a758;
  goto LAB_0335a604;
LAB_0335a758:
  do {
    uVar10 = *param_2;
    if (((uint)uVar10 >> 3 & 1) != 0) {
      if (param_2 != (ulong *)0x0) {
        pcVar14 = (char *)param_2[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
        local_78 = pcVar14;
        if (pcVar14 == (char *)0x0) {
          local_70 = (char *)0x0;
        }
        else {
          sVar6 = strlen(pcVar14);
          local_70 = pcVar14 + sVar6;
        }
        goto LAB_0335a92c;
      }
      break;
    }
  } while (((uVar10 & 1) == 0) && (param_2 = (ulong *)param_2[1], param_2 != (ulong *)0x0));
  local_70 = (char *)0x0;
  local_78 = (char *)0x0;
LAB_0335a92c:
  param_2 = (ulong *)FUN_03367e18(param_1 + 0x458,&local_78,uVar3,0,0);
LAB_0335ac20:
  uVar10 = local_108;
  local_108 = local_108 & 0xffffffff00000000;
  if ((-1 < (long)uVar10) && (local_110 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return param_2;
}


