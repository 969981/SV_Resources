/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007efc2c; name: FUN_007efc2c
 */


void FUN_007efc2c(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  undefined **ppuVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined *local_638 [2];
  undefined *local_628;
  undefined8 local_620;
  byte local_618;
  uint auStack_614 [361];
  undefined *local_70 [2];
  undefined4 local_58 [2];
  
  if ((((int)param_2[0xb] == *(int *)PTR_DAT_047d0e88) || (param_2[0xd] == 0)) || (param_2[1] == 0))
  {
    local_628 = (undefined *)CONCAT44(local_628._4_4_,0x10408);
    local_70[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_628 | 4),(Result *)local_70);
    ppuVar8 = &local_628;
    goto LAB_007efcec;
  }
  if ((*(byte *)((long)param_3 + 0x29) >> 5 & 1) == 0) {
    bVar1 = *(byte *)(param_3 + 5);
    uVar13 = 1;
    if ((bVar1 & 1) != 0) {
      uVar13 = 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar13 = uVar13 + 2;
    }
    if ((bVar1 & 4) != 0) {
      uVar13 = uVar13 + 4;
    }
    uVar18 = (uint)*(ushort *)((long)param_3 + 0x2a);
    if ((bVar1 & 8) != 0) {
      uVar13 = uVar13 + 8;
    }
    lVar16 = *param_3 + (ulong)uVar13;
LAB_007efd78:
    local_628 = PTR_DAT_047d1498 + 0x10;
    memset(auStack_614,0,4);
    local_620 = 0;
    local_618 = 0;
    memset(auStack_614,0,4);
    FUN_007e8528(local_70,&local_628,lVar16,uVar18);
    puVar5 = PTR_DAT_047d0860;
    if (*(short *)(*(long *)PTR_DAT_047d0860 + 0x50) == 0) {
      uVar13 = 0xfd;
      lVar7 = FUN_007ed654(param_3);
      uVar19 = local_620;
    }
    else {
      uVar19 = 0;
      uVar17 = 0xfd;
      do {
        lVar20 = *(long *)(param_2[8] + uVar19 * 8);
        lVar7 = FUN_007ed654(param_3);
        uVar13 = (uint)uVar19;
        if (lVar20 != lVar7) {
          uVar13 = uVar17;
        }
        uVar19 = uVar19 + 1;
        uVar17 = uVar13;
      } while (uVar19 < *(ushort *)(*(long *)puVar5 + 0x50));
      lVar7 = FUN_007ed654(param_3);
      uVar19 = local_620;
    }
    local_620 = uVar19;
    if (((lVar7 != 0) && (param_2[1] != lVar7)) &&
       (uVar11 = (ulong)*(ushort *)(*(long *)puVar5 + 0x50), uVar11 != 0)) {
      plVar12 = (long *)param_2[8];
      do {
        if (*plVar12 == lVar7) {
          local_620._2_2_ = (ushort)(uVar19 >> 0x10);
          uVar17 = local_618 + 0x1f >> 3 & 0x3c;
          uVar10 = (uint)local_620._2_2_;
          if ((0x597 - uVar17 < uVar10) || (uVar18 != uVar10 + uVar17 + 9)) goto LAB_007efd64;
          local_620._1_1_ = (char)(uVar19 >> 8);
          cVar6 = local_620._1_1_;
          lVar7 = (**(code **)(*param_2 + 0x40))(param_2,uVar13);
          if ((cVar6 != *(char *)(lVar7 + 0x1e)) ||
             ((local_618 != 0 &&
              ((*(uint *)((long)auStack_614 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c)) >>
                (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 1) == 0)))) goto LAB_007f001c;
          lVar7 = (**(code **)(*param_2 + 0x40))(param_2,uVar13);
          *(uint *)(lVar7 + 0x20) = (uint)local_620._6_2_;
          uVar9 = *(ushort *)(lVar7 + 0x18);
          iVar4 = (uint)local_620._6_2_ - (uint)uVar9;
          if (iVar4 < 1) goto LAB_007f001c;
          sVar15 = *(short *)(lVar7 + 0x1a);
          iVar14 = 0;
          goto LAB_007eff68;
        }
        uVar11 = uVar11 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar11 != 0);
    }
    local_70[0]._0_4_ = 0x10408;
  }
  else {
    bVar1 = *(byte *)(param_3 + 5);
    uVar18 = 1;
    if ((bVar1 & 1) != 0) {
      uVar18 = 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar18 = uVar18 + 2;
    }
    if ((bVar1 & 4) != 0) {
      uVar18 = uVar18 + 4;
    }
    if ((bVar1 & 8) != 0) {
      uVar18 = uVar18 + 8;
    }
    FUN_007e9984(&local_628,param_2[0xd],*param_3 + (ulong)uVar18,
                 *(undefined2 *)((long)param_3 + 0x2a));
    if ((int)local_628 == 0) {
      lVar16 = *(long *)(param_2[0xd] + 0x28);
      uVar18 = *(uint *)(param_2[0xd] + 0x30);
      goto LAB_007efd78;
    }
LAB_007efd64:
    local_70[0]._0_4_ = 0x2c03;
  }
  local_638[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_638);
  ppuVar8 = local_70;
LAB_007efcec:
  FUN_00cbd7c0(param_1,ppuVar8);
  return;
LAB_007eff68:
  do {
    if (sVar15 == 0) {
      uVar17 = (uint)*(ushort *)(lVar7 + 0x10);
      uVar18 = *(uint *)(lVar7 + 0x14);
    }
    else {
      uVar18 = *(uint *)(lVar7 + 0x14);
      uVar2 = *(ushort *)(lVar7 + 0x10);
      uVar17 = (uint)uVar2;
      if (*(long *)(lVar7 + 8) != 0) {
        uVar10 = 0;
        if (uVar2 <= uVar18) {
          uVar10 = (uint)uVar2;
        }
        if (*(char *)(*(long *)(lVar7 + 8) + (ulong)(uVar18 - uVar10) * 0x5b8) != '\0') break;
      }
    }
    do {
      uVar18 = uVar17 + 1 + uVar18;
      do {
        uVar18 = uVar18 - uVar17;
      } while (uVar17 <= uVar18);
      if (sVar15 == 0) {
        sVar15 = 0;
        sVar3 = *(short *)(lVar7 + 0x1c);
      }
      else {
        sVar15 = sVar15 + -1;
        *(short *)(lVar7 + 0x1a) = sVar15;
        sVar3 = *(short *)(lVar7 + 0x1c);
      }
      if (sVar3 == 0) {
        uVar9 = uVar9 + 1;
        *(uint *)(lVar7 + 0x14) = uVar18;
        *(undefined2 *)(lVar7 + 0x1c) = 0;
        *(ushort *)(lVar7 + 0x18) = uVar9;
        goto joined_r0x007f0018;
      }
      *(short *)(lVar7 + 0x1c) = sVar3 + -1;
    } while ((sVar3 != 1) &&
            (((sVar15 == 0 || (*(long *)(lVar7 + 8) == 0)) ||
             (*(char *)(*(long *)(lVar7 + 8) + (ulong)uVar18 * 0x5b8) == '\0'))));
    *(uint *)(lVar7 + 0x14) = uVar18;
joined_r0x007f0018:
    iVar14 = iVar14 + 1;
  } while (iVar14 != iVar4);
LAB_007f001c:
  local_638[0]._0_4_ = 0;
  local_70[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_638 | 4),(Result *)local_70);
  FUN_00cbd7c0(local_70,local_638);
  if (((byte)local_620 >> 5 & 1) == 0) {
    if (((byte)local_620 >> 6 & 1) == 0) {
      if ((local_620 & 1) == 0) {
        (**(code **)(*param_2 + 0x68))(local_638,param_2,lVar16,&local_628,uVar13);
      }
      else {
        FUN_007f0330(local_638,param_2,lVar16,&local_628,uVar13);
      }
      FUN_018ff39c(local_70,local_638);
    }
    else if ((local_618 == 0) ||
            ((*(uint *)((long)auStack_614 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c)) >>
              (ulong)(*(byte *)(param_2 + 2) & 0x1f) & 1) != 0)) {
      uVar19 = (ulong)(uVar13 >> 3) & 0x1c;
      *(uint *)((long)param_2 + uVar19 + 0x78) =
           *(uint *)((long)param_2 + uVar19 + 0x78) & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
    }
  }
  else {
    FUN_007f0154(param_2,&local_628,uVar13);
  }
  if ((int)local_70[0] == 0) {
    local_638[0]._0_4_ = 0;
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_638 | 4),(Result *)local_58);
    ppuVar8 = local_638;
  }
  else {
    ppuVar8 = local_70;
  }
  goto LAB_007efcec;
}


