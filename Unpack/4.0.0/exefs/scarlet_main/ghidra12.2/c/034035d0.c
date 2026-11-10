/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034035d0; name: FUN_034035d0
 */


undefined8 FUN_034035d0(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  ulong uVar23;
  int local_a0 [2];
  undefined8 local_98;
  undefined1 auStack_90 [8];
  short *local_88;
  undefined4 local_7c;
  ushort *local_78;
  uint local_70;
  undefined1 local_68;
  
  if (param_2 == 0) {
    return 2;
  }
  local_a0[0] = 0;
  local_98 = 0;
  uVar10 = FUN_0347e990(param_2,param_3,auStack_90,param_1 + 0x40,(uint *)(param_1 + 0x34),
                        (uint *)(param_1 + 0x38),(int *)(param_1 + 0x2c),param_1 + 0x30,local_a0,0,0
                       );
  if ((int)uVar10 != 1) {
    return uVar10;
  }
  if (*local_88 != -1) {
    return 7;
  }
  uVar3 = *(undefined4 *)(local_88 + 10);
  lVar16 = *(long *)(param_1 + 0x18);
  if (lVar16 != 0) {
    sVar5 = local_88[1];
    *(undefined4 *)(lVar16 + 600) = *(undefined4 *)(local_88 + 2);
    *(undefined4 *)(lVar16 + 0x25c) = uVar3;
    *(undefined1 *)(lVar16 + 0x262) = 5;
    *(ushort *)(lVar16 + 0x260) = sVar5 << 8 | 0x20;
  }
  if (local_a0[0] != 0) {
    *(undefined8 *)(param_1 + 0x10) = local_98;
  }
  uVar9 = *(uint *)(param_1 + 0x30);
  puVar21 = (ushort *)(param_2 + (ulong)uVar9);
  *(ushort **)(param_1 + 0x110) = puVar21;
  uVar18 = *(uint *)(local_88 + 0xc);
  *(uint *)(param_1 + 0x24) = uVar18;
  memcpy((void *)(param_1 + 200),local_88 + 0xe,0x26);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(local_88 + 2);
  uVar14 = *(uint *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  if (uVar14 == 0) {
    uVar14 = uVar18 - 1;
    *(uint *)(param_1 + 0x38) = uVar14;
  }
  if (uVar18 <= uVar14) {
    return 2;
  }
  if (uVar14 < *(uint *)(param_1 + 0x34)) {
    return 2;
  }
  if (*(int *)(param_1 + 0x2c) + uVar9 != param_3) {
    return 2;
  }
  *(ushort **)(param_1 + 0x108) = puVar21;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x2b8);
  }
  *(undefined2 *)(param_1 + 0x54) = uVar13;
  puVar7 = PTR_DAT_047e2fd0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    pvVar11 = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5);
    *(void **)(param_1 + 0xf8) = pvVar11;
    if (pvVar11 == (void *)0x0) {
      return 0x34;
    }
    puVar21 = *(ushort **)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(uint *)(param_1 + 0xd4) != 0) {
      memcpy(pvVar11,puVar21,(ulong)*(uint *)(param_1 + 0xd4));
      puVar21 = (ushort *)(*(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0xd4));
      *(ushort **)(param_1 + 0x108) = puVar21;
    }
  }
  local_78 = puVar21 + 1;
  local_68 = 0;
  local_70 = (uint)*puVar21;
  *(ulong *)(param_1 + 0x108) = (long)puVar21 + (ulong)*puVar21 + 2;
  local_7c = 0;
  lVar16 = FUN_03402ac4(PTR_DAT_047e6c08,param_1 + 0x58,&local_78,&local_7c);
  *(long *)(param_1 + 0x80) = lVar16;
  if (lVar16 == 0) {
    return 2;
  }
  bVar4 = *(byte *)(param_1 + 0xb8);
  uVar23 = (ulong)bVar4;
  *(uint *)(param_1 + 0x78) = (uint)bVar4;
  puVar12 = (undefined8 *)(**(code **)(puVar7 + 0x18))(5,uVar23 << 4,0x10);
  *(undefined8 **)(param_1 + 0x88) = puVar12;
  puVar8 = PTR_DAT_047e6c10;
  if (puVar12 == (undefined8 *)0x0) {
    return 2;
  }
  *(undefined8 **)(param_1 + 0x90) = puVar12 + uVar23;
  *(undefined1 **)puVar8 = &LAB_03406380;
  *puVar12 = 0;
  **(undefined8 **)(param_1 + 0x90) = 0;
  uVar17 = (long)*(int *)(param_1 + 0x78) *
           ((long)*(int *)(*(long *)(param_1 + 0x80) + 4) & 0xfffffffffffffffcU) + 0xf;
  uVar22 = uVar17 & 0xfffffffffffffff0;
  pvVar11 = (void *)(**(code **)(puVar7 + 0x18))(5,uVar22,0x10);
  **(undefined8 **)(param_1 + 0x90) = pvVar11;
  if (pvVar11 == (void *)0x0) {
    return 2;
  }
  memset(pvVar11,0,uVar17 & 0xfffffff0);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if (bVar4 != 0) {
    iVar19 = 0;
    if (bVar4 != 0) {
      iVar19 = (int)uVar22 / (int)(uint)bVar4;
    }
    lVar16 = (long)iVar19;
    uVar17 = uVar23 & 3;
    if (uVar23 - 1 < 3) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      do {
        *(void **)(*(long *)(param_1 + 0x90) + uVar22 * 8) = pvVar11;
        *(long *)(*(long *)(param_1 + 0x90) + uVar22 * 8 + 8) = (long)pvVar11 + lVar16;
        lVar2 = (long)pvVar11 + lVar16 + lVar16;
        *(long *)(*(long *)(param_1 + 0x90) + uVar22 * 8 + 0x10) = lVar2;
        lVar2 = lVar2 + lVar16;
        lVar20 = uVar22 * 8;
        uVar22 = uVar22 + 4;
        pvVar11 = (void *)(lVar2 + lVar16);
        *(long *)(*(long *)(param_1 + 0x90) + lVar20 + 0x18) = lVar2;
      } while ((uVar23 & 0xfc) != uVar22);
    }
    if ((bVar4 & 3) != 0) {
      lVar20 = uVar22 << 3;
      do {
        *(void **)(*(long *)(param_1 + 0x90) + lVar20) = pvVar11;
        pvVar11 = (void *)((long)pvVar11 + lVar16);
        uVar17 = uVar17 - 1;
        lVar20 = lVar20 + 8;
      } while (uVar17 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x60) = 3;
  if ((*(long *)(param_1 + 0x18) == 0) ||
     ((*(byte *)(*(long *)(param_1 + 0x18) + 0x2bd) >> 6 & 1) == 0)) {
    uVar9 = 0;
    uVar10 = 1;
    goto LAB_03403a54;
  }
  uVar9 = FUN_034f988c(param_1);
  if (uVar9 < *(uint *)(param_1 + 0x24)) {
    if (uVar9 == 0) {
LAB_034039e0:
      uVar18 = *(uint *)(param_1 + 0xd8);
      uVar15 = 0;
    }
    else {
      uVar18 = *(uint *)(param_1 + 0xd4) >> 2;
      if (uVar18 == 0) goto LAB_034039e0;
      uVar23 = 0;
      iVar19 = 0;
      puVar21 = (ushort *)(*(long *)(param_1 + 0xf8) + 2);
      uVar14 = 0;
      do {
        uVar15 = uVar14 + puVar21[-1];
        if (uVar9 < uVar15) {
          uVar15 = uVar14;
          if ((int)uVar23 == 0) goto LAB_034039e0;
          break;
        }
        uVar23 = uVar23 + 1;
        iVar19 = iVar19 + (uint)*puVar21;
        puVar21 = puVar21 + 2;
        uVar14 = uVar15;
      } while (uVar18 != uVar23);
      uVar18 = iVar19 + *(uint *)(param_1 + 0xd4);
    }
    *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x110) + (ulong)uVar18;
    lVar16 = *(long *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x28) = uVar15;
    uVar10 = 1;
    *(uint *)(lVar16 + 0x2b4) = uVar9 - uVar15;
    puVar1 = (uint *)(lVar16 + 699);
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  else {
    uVar10 = 2;
  }
  lVar16 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar16 + 0x2bd) >> 6 & 1) == 0) {
    uVar9 = *(uint *)(lVar16 + 0x2b4);
  }
  else {
    uVar9 = 0;
  }
  *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + uVar9;
  *(undefined4 *)(lVar16 + 0x2b4) = 0;
  *(uint *)(lVar16 + 699) = *(uint *)(lVar16 + 699) & 0xfe3fffff;
  uVar9 = uVar9 & 0xffff;
LAB_03403a54:
  lVar16 = 0xde;
  if (*(short *)(param_1 + 0x54) != 1) {
    lVar16 = 0xd2;
  }
  uVar6 = *(ushort *)(param_1 + lVar16);
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  *(uint *)(param_1 + 0xa8) = uVar9;
  *(uint *)(param_1 + 0xac) = (uint)uVar6;
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar10;
}


