/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00179460; name: FUN_00179460
 */


int FUN_00179460(long param_1,uint param_2,ulong param_3,byte *param_4,long *param_5)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  byte *local_58;
  long lStack_50;
  uint local_48;
  
  uVar5 = param_5[3];
  puVar4 = (ulong *)*param_5;
  lStack_50 = param_5[1];
  uVar17 = param_3 >> 1 & 0x7fffffff;
  if ((param_3 & 1) == 0) {
    uVar8 = 0;
    uVar6 = uVar5;
  }
  else {
    if (lStack_50 - (long)puVar4 < 8) {
      if (lStack_50 - (long)puVar4 < 1) {
        uVar8 = 0;
        if (0 < lStack_50 - (long)((long)puVar4 + 1)) goto LAB_001794e0;
LAB_0017952c:
        uVar12 = 0;
        if (0 < lStack_50 - (long)((long)puVar4 + 2)) goto LAB_001794f8;
LAB_00179540:
        uVar14 = 0;
        if (0 < lStack_50 - (long)((long)puVar4 + 3)) goto LAB_00179510;
LAB_00179554:
        uVar6 = 0;
      }
      else {
        uVar8 = (uint)(byte)*puVar4 << 0x18;
        if (lStack_50 - (long)((long)puVar4 + 1) < 1) goto LAB_0017952c;
LAB_001794e0:
        uVar12 = (uint)*(byte *)((long)puVar4 + 1) << 0x10;
        if (lStack_50 - (long)((long)puVar4 + 2) < 1) goto LAB_00179540;
LAB_001794f8:
        uVar14 = (uint)*(byte *)((long)puVar4 + 2) << 8;
        if (lStack_50 - (long)((long)puVar4 + 3) < 1) goto LAB_00179554;
LAB_00179510:
        uVar6 = (ulong)*(byte *)((long)puVar4 + 3);
      }
      if (lStack_50 - ((long)puVar4 + 4) < 1) {
        uVar9 = 0;
        if (0 < lStack_50 - (long)((long)puVar4 + 5)) goto LAB_00179588;
LAB_001795a8:
        uVar13 = 0;
      }
      else {
        uVar9 = (uint)*(byte *)((long)puVar4 + 4) << 0x18;
        if (lStack_50 - (long)((long)puVar4 + 5) < 1) goto LAB_001795a8;
LAB_00179588:
        uVar13 = (uint)*(byte *)((long)puVar4 + 5) << 0x10;
      }
      if (lStack_50 - ((long)puVar4 + 6) < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)*(byte *)((long)puVar4 + 6) << 8;
      }
      if (lStack_50 - ((long)puVar4 + 7) < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)*(byte *)((long)puVar4 + 7);
      }
      uVar7 = (ulong)(uVar13 | uVar9 | uVar15) | (uVar6 | (uVar12 | uVar8 | uVar14)) << 0x20 | uVar7
      ;
    }
    else {
      uVar6 = (*puVar4 & 0xff00ff00ff00ff00) >> 8 | (*puVar4 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar6 >> 0x20 | uVar6 << 0x20;
    }
    puVar4 = (ulong *)((long)puVar4 + ((long)uVar5 >> 3));
    bVar2 = *param_4;
    uVar6 = uVar5 & 7;
    if (bVar2 < 8) {
      uVar6 = bVar2 + uVar6 + 1;
      uVar8 = ~(-2 << (ulong)(bVar2 & 0x1f)) +
              (int)((uVar7 >> (0x3f - uVar5 & 0x3f) | param_5[2]) >> (0x3f - (ulong)bVar2 & 0x3f)) &
              0xffff;
    }
    else {
      uVar8 = 0x1ff;
    }
    param_4 = param_4 + 1;
  }
  local_58 = (byte *)((long)puVar4 - (0x46 - uVar6 >> 3));
  local_48 = (int)uVar6 + 1U & 7;
  uVar5 = FUN_00179220(param_1 + 2,&local_58,param_4,uVar17);
  if ((uVar5 & 1) == 0) {
    return -1;
  }
  iVar16 = (int)uVar17;
  if (lStack_50 - (long)local_58 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)*local_58 << 0x38;
  }
  if (7 < lStack_50 - (long)(local_58 + 1)) {
    uVar6 = (*(ulong *)(local_58 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(local_58 + 1) & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    goto joined_r0x001796c8;
  }
  if (lStack_50 - (long)(local_58 + 1) < 1) {
    uVar12 = 0;
    if (0 < lStack_50 - (long)(local_58 + 2)) goto LAB_00179704;
LAB_00179750:
    uVar14 = 0;
    if (0 < lStack_50 - (long)(local_58 + 3)) goto LAB_0017971c;
LAB_00179764:
    uVar9 = 0;
    if (0 < lStack_50 - (long)(local_58 + 4)) goto LAB_00179734;
LAB_00179778:
    uVar6 = 0;
  }
  else {
    uVar12 = (uint)local_58[1] << 0x18;
    if (lStack_50 - (long)(local_58 + 2) < 1) goto LAB_00179750;
LAB_00179704:
    uVar14 = (uint)local_58[2] << 0x10;
    if (lStack_50 - (long)(local_58 + 3) < 1) goto LAB_00179764;
LAB_0017971c:
    uVar9 = (uint)local_58[3] << 8;
    if (lStack_50 - (long)(local_58 + 4) < 1) goto LAB_00179778;
LAB_00179734:
    uVar6 = (ulong)local_58[4];
  }
  if (lStack_50 - (long)(local_58 + 5) < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = (uint)local_58[5] << 0x18;
  }
  if (lStack_50 - (long)(local_58 + 6) < 1) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)local_58[6] << 0x10;
  }
  if (lStack_50 - (long)(local_58 + 7) < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)local_58[7] << 8;
  }
  uVar6 = (ulong)(uVar15 | uVar13 | uVar10) | (uVar6 | (uVar14 | uVar12 | uVar9)) << 0x20;
joined_r0x001796c8:
  uVar12 = 0;
  if (iVar16 != 0) {
    uVar12 = 0;
    puVar11 = (ushort *)(param_1 + 2);
    do {
      uVar3 = *puVar11;
      puVar1 = puVar11 + 1;
      puVar11[-1] = (ushort)uVar8;
      puVar11 = puVar11 + 2;
      uVar8 = uVar8 + uVar3 + (uint)*puVar1;
      uVar12 = uVar12 + uVar3;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (param_2 <= uVar12) {
    return -1;
  }
  if (0xff < uVar8) {
    return -1;
  }
  if (uVar8 + (param_2 - uVar12) < 0x101) {
    *(short *)(param_1 + ((long)(int)param_3 & 0x7ffffffffffffffeU) * 2) = (short)uVar8;
    *(short *)(param_1 +
              (-((param_3 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1
              | 2)) = (short)(param_2 - uVar12);
    param_5[2] = (uVar5 | uVar6 >> 8) << ((ulong)local_48 & 0x3f);
    param_5[3] = (ulong)local_48 + 7;
    *param_5 = (long)(local_58 + 7);
    param_5[1] = lStack_50;
    return iVar16 + 1;
  }
  return -1;
}


