/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02998978; name: FUN_02998978
 */


void FUN_02998978(long param_1,uint *param_2,ushort *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  long lVar9;
  short sVar10;
  undefined1 uVar11;
  int iVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  
  lVar9 = *(long *)(param_1 + 0x50);
  uVar5 = *(uint *)(lVar9 + 0x6c);
  if (param_4 == 0) {
    if (uVar5 != *(uint *)(lVar9 + 0x68)) {
      uVar18 = (ulong)uVar5;
      uVar17 = 0xffffffff;
LAB_02998c74:
      uVar13 = uVar18;
      uVar8 = FUN_00f515ec(lVar9,param_2 + 2,0x10,0);
      if ((int)uVar17 == -1) {
        memset(param_2 + 0x14,0,0x41);
      }
      if (uVar8 < 0xd1) {
        if (uVar8 != 0xd0) {
          uVar19 = 0;
          if ((uVar8 != 0x8b) && (uVar8 != 0xce)) goto LAB_02998cd8;
          goto LAB_02998e10;
        }
        uVar19 = param_2[2];
        *(char *)(param_2 + 0x24) = (char)uVar19;
        if ((((uVar19 & 0xf0) == 0) &&
            ((((uVar19 & 0xff) != 0 && (param_2[0x14] = param_2[3], 1 < (byte)param_2[0x24])) &&
             (param_2[0x15] = param_2[4], 2 < (byte)param_2[0x24])))) &&
           (param_2[0x16] = param_2[5], 3 < (byte)param_2[0x24])) {
          lVar9 = 0;
          do {
            param_2[lVar9 + 0x17] = param_2[lVar9 + 6];
            uVar18 = lVar9 + 4;
            lVar9 = lVar9 + 1;
          } while (uVar18 < (byte)param_2[0x24]);
        }
        lVar9 = *(long *)(param_1 + 0x50);
        uVar18 = (ulong)*(uint *)(lVar9 + 0x6c);
        uVar17 = uVar13;
        if (*(uint *)(lVar9 + 0x6c) == *(uint *)(lVar9 + 0x68)) goto LAB_02998d5c;
        goto LAB_02998c74;
      }
      if (uVar8 != 0xd1) {
LAB_02998cd8:
        lVar9 = *(long *)(param_1 + 0x50);
        uVar18 = (ulong)*(uint *)(lVar9 + 0x6c);
        uVar17 = 0xffffffff;
        if (*(uint *)(lVar9 + 0x6c) == *(uint *)(lVar9 + 0x68)) goto LAB_02998d5c;
        goto LAB_02998c74;
      }
      uVar19 = 0;
LAB_02998d68:
      lVar9 = *(long *)(param_1 + 0x50);
      uVar3 = *(uint *)(lVar9 + 0x68);
      uVar4 = *(undefined4 *)(lVar9 + 0x6c);
      *(int *)(lVar9 + 0x6c) = (int)uVar13;
      uVar18 = uVar13;
      while( true ) {
        iVar12 = (int)uVar18;
        bVar6 = *(byte *)(lVar9 + 0x70 + uVar18);
        bVar7 = *(byte *)(lVar9 + 0x70 + (ulong)(iVar12 + 1));
        sVar10 = CONCAT11(bVar6,bVar7);
        uVar2 = iVar12 + 2;
        *(uint *)(lVar9 + 0x6c) = uVar2;
        if ((sVar10 != 0xd2) && (sVar10 != 0xcf)) break;
        uVar2 = iVar12 + (uint)*(byte *)(lVar9 + (ulong)uVar2 + 0x70) + 3;
        uVar18 = (ulong)uVar2;
        *(uint *)(lVar9 + 0x6c) = uVar2;
        if (uVar3 <= uVar2) {
          uVar11 = 0;
          uVar18 = uVar13;
          sVar10 = 0xce;
LAB_02998dfc:
          *(int *)(lVar9 + 0x68) = (int)uVar18;
          FUN_011afcb8(lVar9,sVar10,0xd2,uVar11);
          *(uint *)(lVar9 + 0x68) = uVar3;
          *(undefined4 *)(lVar9 + 0x6c) = uVar4;
          goto LAB_02998e10;
        }
      }
      if ((bVar7 & 0xfffe | (uint)bVar6 << 8) == 0xd0) {
        *(int *)(lVar9 + 0x6c) = iVar12 + 3;
        uVar11 = *(undefined1 *)(lVar9 + (ulong)uVar2 + 0x70);
      }
      else {
        uVar11 = 0;
      }
      goto LAB_02998dfc;
    }
  }
  else if (uVar5 != *(uint *)(lVar9 + 0x68)) {
    uVar18 = 0;
    uVar3 = uVar5;
LAB_029989d0:
    uVar19 = (uint)uVar18;
    uVar17 = 0xffffffff;
    while( true ) {
      uVar13 = (ulong)uVar3;
      uVar8 = FUN_00f515ec(lVar9,param_2 + uVar18 * 0x24 + 2,0x10,0);
      iVar12 = (int)uVar17;
      if (iVar12 == -1) {
        memset(param_2 + uVar18 * 0x24 + 0x14,0,0x41);
      }
      puVar14 = param_3;
      lVar9 = param_4;
      if (0xd0 < uVar8) {
        if (uVar8 != 0xd1) goto LAB_02998a54;
        goto LAB_02998d68;
      }
      if (uVar8 != 0xd0) break;
      uVar3 = param_2[uVar18 * 0x24 + 2];
      puVar16 = param_2 + uVar18 * 0x24 + 0x24;
      *(byte *)puVar16 = (byte)uVar3;
      if (((((uVar3 & 0xf0) == 0) && ((uVar3 & 0xff) != 0)) &&
          (param_2[uVar18 * 0x24 + 0x14] = param_2[uVar18 * 0x24 + 3], 1 < (byte)*puVar16)) &&
         ((param_2[uVar18 * 0x24 + 0x15] = param_2[uVar18 * 0x24 + 4], 2 < (byte)*puVar16 &&
          (param_2[uVar18 * 0x24 + 0x16] = param_2[uVar18 * 0x24 + 5], 3 < (byte)*puVar16)))) {
        lVar9 = 0;
        do {
          param_2[uVar18 * 0x24 + lVar9 + 0x17] = param_2[uVar18 * 0x24 + lVar9 + 6];
          uVar17 = lVar9 + 4;
          lVar9 = lVar9 + 1;
        } while (uVar17 < (byte)*puVar16);
      }
      lVar9 = *(long *)(param_1 + 0x50);
      uVar3 = *(uint *)(lVar9 + 0x6c);
      uVar17 = uVar13;
      if (uVar3 == *(uint *)(lVar9 + 0x68)) goto LAB_02998e10;
    }
    if ((uVar8 != 0x8b) && (uVar8 != 0xce)) {
LAB_02998a54:
      do {
        if (*puVar14 == uVar8) {
          if (iVar12 == -1) goto LAB_02998b9c;
          lVar9 = *(long *)(param_1 + 0x50);
          uVar2 = *(uint *)(lVar9 + 0x68);
          uVar4 = *(undefined4 *)(lVar9 + 0x6c);
          *(int *)(lVar9 + 0x6c) = iVar12;
          uVar15 = uVar17;
          goto LAB_02998aac;
        }
        lVar9 = lVar9 + -1;
        puVar14 = puVar14 + 1;
        uVar15 = uVar18;
      } while (lVar9 != 0);
      goto LAB_02998a6c;
    }
    goto LAB_02998e10;
  }
LAB_02998d5c:
  uVar19 = 0;
LAB_02998e10:
  *param_2 = uVar19;
  *(uint *)(*(long *)(param_1 + 0x50) + 0x6c) = uVar5;
  return;
  while( true ) {
    uVar1 = iVar12 + (uint)*(byte *)(lVar9 + (ulong)uVar1 + 0x70) + 3;
    uVar15 = (ulong)uVar1;
    *(uint *)(lVar9 + 0x6c) = uVar1;
    if (uVar2 <= uVar1) break;
LAB_02998aac:
    iVar12 = (int)uVar15;
    bVar6 = *(byte *)(lVar9 + 0x70 + uVar15);
    bVar7 = *(byte *)(lVar9 + 0x70 + (ulong)(iVar12 + 1));
    uVar1 = iVar12 + 2;
    *(uint *)(lVar9 + 0x6c) = uVar1;
    sVar10 = CONCAT11(bVar6,bVar7);
    if ((sVar10 != 0xd2) && (sVar10 != 0xcf)) {
      if ((bVar7 & 0xfffe | (uint)bVar6 << 8) == 0xd0) {
        *(int *)(lVar9 + 0x6c) = iVar12 + 3;
        uVar11 = *(undefined1 *)(lVar9 + (ulong)uVar1 + 0x70);
      }
      else {
        uVar11 = 0;
      }
      goto LAB_02998b84;
    }
  }
  uVar11 = 0;
  sVar10 = 0xce;
  uVar15 = uVar17;
LAB_02998b84:
  *(int *)(lVar9 + 0x68) = (int)uVar15;
  FUN_011afcb8(lVar9,sVar10,0xd2,uVar11);
  *(uint *)(lVar9 + 0x68) = uVar2;
  *(undefined4 *)(lVar9 + 0x6c) = uVar4;
LAB_02998b9c:
  lVar9 = *(long *)(param_1 + 0x50);
  uVar2 = *(uint *)(lVar9 + 0x68);
  uVar4 = *(undefined4 *)(lVar9 + 0x6c);
  *(uint *)(lVar9 + 0x6c) = uVar3;
  uVar17 = uVar13;
  do {
    iVar12 = (int)uVar17;
    bVar6 = *(byte *)(lVar9 + 0x70 + uVar17);
    bVar7 = *(byte *)(lVar9 + 0x70 + (ulong)(iVar12 + 1));
    uVar3 = iVar12 + 2;
    *(uint *)(lVar9 + 0x6c) = uVar3;
    sVar10 = CONCAT11(bVar6,bVar7);
    if ((sVar10 != 0xd2) && (sVar10 != 0xcf)) {
      if ((bVar7 & 0xfffe | (uint)bVar6 << 8) == 0xd0) {
        *(int *)(lVar9 + 0x6c) = iVar12 + 3;
        uVar11 = *(undefined1 *)(lVar9 + (ulong)uVar3 + 0x70);
      }
      else {
        uVar11 = 0;
      }
      goto LAB_02998c24;
    }
    uVar3 = iVar12 + (uint)*(byte *)(lVar9 + (ulong)uVar3 + 0x70) + 3;
    uVar17 = (ulong)uVar3;
    *(uint *)(lVar9 + 0x6c) = uVar3;
  } while (uVar3 < uVar2);
  uVar11 = 0;
  sVar10 = 0xce;
  uVar17 = uVar13;
LAB_02998c24:
  *(int *)(lVar9 + 0x68) = (int)uVar17;
  FUN_011afcb8(lVar9,sVar10,0xd2,uVar11);
  uVar15 = (ulong)(uVar19 + 1);
  *(uint *)(lVar9 + 0x68) = uVar2;
  *(undefined4 *)(lVar9 + 0x6c) = uVar4;
  *(ushort *)(param_2 + uVar18 * 0x24 + 1) = uVar8;
  *(undefined1 *)(param_2 + uVar18 * 0x24 + 0x13) = 0;
  param_2[uVar18 * 0x24 + 0x12] = 0;
LAB_02998a6c:
  uVar19 = (uint)uVar15;
  if (0xf < uVar19) goto LAB_02998e10;
  lVar9 = *(long *)(param_1 + 0x50);
  uVar3 = *(uint *)(lVar9 + 0x6c);
  uVar18 = uVar15;
  if (uVar3 == *(uint *)(lVar9 + 0x68)) goto LAB_02998e10;
  goto LAB_029989d0;
}


