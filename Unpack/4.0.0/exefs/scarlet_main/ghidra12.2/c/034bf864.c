/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bf864; name: FUN_034bf864
 */


int FUN_034bf864(long *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  undefined *puVar20;
  uint *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined4 local_6c;
  uint *local_68;
  
  local_6c = param_3;
  local_68 = param_2;
  iVar15 = (**(code **)(*param_1 + 0x88))();
  if (iVar15 != 2) {
    (**(code **)(*param_1 + 0x88))(param_1);
    return 0x5b;
  }
  local_68 = param_2 + 1;
  iVar15 = FUN_034ae500(param_1,&local_68,&local_6c,0);
  if (iVar15 != 1) {
    return iVar15;
  }
  sVar12 = (short)*local_68;
  sVar13 = *(short *)((long)local_68 + 2);
  uVar23 = local_68[1];
  *(short *)((long)param_1 + 0x13c) = sVar12;
  sVar14 = 0;
  if (sVar12 != 0) {
    sVar14 = sVar13;
  }
  sVar13 = 0;
  if (sVar12 != 0) {
    sVar13 = (short)uVar23;
  }
  *(short *)((long)param_1 + 0x13e) = sVar14;
  *(short *)(param_1 + 0x28) = sVar13;
  uVar6 = *(undefined4 *)((long)local_68 + 6);
  uVar7 = *(undefined4 *)((long)local_68 + 10);
  uVar8 = *(undefined4 *)((long)local_68 + 0xe);
  sVar14 = *(short *)((long)local_68 + 0x12);
  uVar23 = local_68[5];
  bVar9 = *(byte *)((long)local_68 + 0x15);
  pbVar1 = (byte *)((long)local_68 + 0x16);
  bVar10 = *(byte *)((long)local_68 + 0x17);
  local_68 = local_68 + 6;
  puVar2 = (ushort *)((long)param_1 + 0x145);
  if ((*puVar2 & 7) == (ushort)*pbVar1) {
LAB_034bfa18:
    *(undefined4 *)(param_1 + 0x26) = uVar6;
    *(undefined4 *)((long)param_1 + 0x134) = uVar7;
    *(undefined4 *)(param_1 + 0x27) = uVar8;
    if (*(short *)((long)param_1 + 0x142) != sVar14) {
      *(short *)((long)param_1 + 0x142) = sVar14;
      FUN_034c16c0(param_1);
    }
    bVar11 = *(byte *)((long)param_1 + 0x144);
    if ((bVar11 & 0xf) != (byte)uVar23) {
      *(byte *)((long)param_1 + 0x144) = bVar11 & 0xf0 | (byte)uVar23 & 0xf;
      FUN_034c16c0(param_1);
      bVar11 = *(byte *)((long)param_1 + 0x144);
    }
    if ((bVar11 >> 4 & 3) != bVar9) {
      *(byte *)((long)param_1 + 0x144) = bVar11 & 0xcf | (bVar9 & 3) << 4;
      FUN_034c16c0(param_1);
    }
    uVar18 = *puVar2;
    if ((uint)((uVar18 & 0x10) == 0) == (bVar10 & 2) >> 1) {
      *puVar2 = uVar18 & 0xffef | (ushort)((bVar10 & 2) << 3);
      FUN_034c16c0(param_1);
      uVar18 = *puVar2;
    }
    uVar3 = (bVar10 & 4) << 3;
    uVar19 = uVar18 & 0xffdf | uVar3;
    *puVar2 = uVar19;
    uVar23 = bVar10 & 8;
    if ((uint)((uVar18 & 0x40) == 0) == uVar23 >> 3) {
      *puVar2 = uVar18 & 0xff9f | uVar3 | (ushort)(uVar23 << 3);
      FUN_034c16c0(param_1);
      uVar19 = *puVar2;
    }
    uVar23 = bVar10 & 0x10;
    if ((uint)((uVar19 & 0x80) == 0) == uVar23 >> 4) {
      *puVar2 = uVar19 & 0xff7f | (ushort)(uVar23 << 3);
      FUN_034c16c0(param_1);
    }
    puVar21 = local_68 + 1;
    uVar23 = *local_68;
    uVar22 = (ulong)uVar23;
    if (uVar23 != 0) {
      local_68 = puVar21;
      if (uVar23 == 1) {
        param_1[0x20] = (long)(param_1 + 0x1f);
      }
      else {
        lVar17 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar22 << 3,1);
        param_1[0x20] = lVar17;
        if (lVar17 == 0) {
          return 0x34;
        }
      }
      *(uint *)((long)param_1 + 0x10c) = uVar23;
      do {
        uVar23 = *local_68;
        local_68 = local_68 + 1;
        iVar15 = (**(code **)(*param_1 + 0x58))(param_1,uVar23);
        if (iVar15 != 0xf && iVar15 != 1) {
          return iVar15;
        }
        uVar23 = (int)uVar22 - 1;
        uVar22 = (ulong)uVar23;
      } while (uVar23 != 0);
      if (iVar15 != 1) {
        return iVar15;
      }
      puVar21 = local_68;
    }
    local_68 = (uint *)((long)puVar21 + 2);
    uVar23 = (uint)(ushort)*puVar21;
    if (uVar23 != 0) {
      do {
        uVar23 = uVar23 - 1;
        uVar4 = *local_68;
        uVar5 = local_68[1];
        local_68 = local_68 + 2;
        uVar18 = *puVar2;
        if (uVar5 != 50000) {
          uVar18 = uVar18 | 8;
          *puVar2 = uVar18;
        }
        if (((uVar18 & 7) != 1) &&
           (uVar22 = (**(code **)(*(long *)param_1[0x22] + 0x48))((long *)param_1[0x22],uVar4),
           (uVar22 & 1) != 0)) {
          return 0x23;
        }
        iVar15 = (**(code **)(*(long *)param_1[0x22] + 0x30))((long *)param_1[0x22],uVar4,uVar5);
        if (iVar15 != 0xf) {
          if (iVar15 != 1) {
            return iVar15;
          }
          FUN_034c16c0(param_1);
        }
      } while (uVar23 != 0);
    }
    iVar15 = 1;
  }
  else {
    uVar18 = *puVar2 & 0xfff8 | *pbVar1 & 7;
    *puVar2 = uVar18;
    if ((long *)param_1[0x22] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x22] + 0x18))();
      uVar18 = *puVar2;
    }
    plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x18);
    if ((uVar18 & 7) == 1) {
      if (plVar16 != (long *)0x0) {
        puVar20 = PTR_DAT_047e7298;
        goto LAB_034bf9e8;
      }
    }
    else if (plVar16 != (long *)0x0) {
      puVar20 = PTR_DAT_047e72a0;
LAB_034bf9e8:
      *plVar16 = (long)(puVar20 + 0x10);
      plVar16[1] = 0;
      plVar16[2] = 0;
    }
    param_1[0x22] = (long)plVar16;
    if (plVar16 == (long *)0x0) {
      iVar15 = 2;
    }
    else {
      iVar15 = (**(code **)(*plVar16 + 0x10))();
      if (iVar15 == 1) {
        FUN_034c16c0(param_1);
        goto LAB_034bfa18;
      }
      (**(code **)(*(long *)param_1[0x22] + 0x18))();
      param_1[0x22] = 0;
    }
    FUN_034c16c0(param_1);
  }
  return iVar15;
}


