/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a16d8; name: FUN_008a16d8
 */


void FUN_008a16d8(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  bVar7 = *(byte *)(param_2 + 0x48);
  *(byte *)(param_1 + 0x48) = bVar7 & 0xf | 0xe0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 0x48) & 0xf0 | bVar7 & 0xf;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar7 = *(byte *)(param_2 + 0x49);
  }
  else {
    puVar14 = (undefined8 *)FUN_00896e78(0x10);
    *(undefined8 **)(param_1 + 0x38) = puVar14;
    uVar1 = (*(undefined8 **)(param_2 + 0x38))[1];
    *puVar14 = **(undefined8 **)(param_2 + 0x38);
    puVar14[1] = uVar1;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xc) = 0;
    bVar7 = *(byte *)(param_2 + 0x49);
  }
  if ((bVar7 >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    puVar14 = (undefined8 *)FUN_00896e78(0x20);
    *(undefined8 **)(param_1 + 8) = puVar14;
    puVar17 = *(undefined8 **)(param_2 + 8);
    uVar1 = puVar17[2];
    uVar2 = puVar17[3];
    uVar3 = puVar17[1];
    *puVar14 = *puVar17;
    puVar14[1] = uVar3;
    puVar14[2] = uVar1;
    puVar14[3] = uVar2;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  uVar4 = *(uint *)(param_2 + 0x10);
  FUN_008a00ec(param_1,uVar4 & 3,uVar4 >> 2 & 3,uVar4 >> 4 & 3,uVar4 >> 6 & 7,uVar4 >> 9 & 1,
               uVar4 >> 10 & 3,uVar4 >> 0xc & 1,uVar4 >> 0xd & 3,(byte)(uVar4 >> 0xf) & 1,
               (byte)(uVar4 >> 0x10) & 1,(byte)(uVar4 >> 0x11) & 1,uVar4 >> 0x12 & 3,
               uVar4 >> 0x14 & 3);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar5 = *(uint *)(param_2 + 0x14);
    uVar13 = uVar5 & 3;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffffc | uVar13;
    uVar18 = (ulong)*(uint *)(param_2 + 0x14) & 0xc;
    uVar8 = (uint)uVar18;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffff0 | uVar13 | uVar8;
    uVar19 = (ulong)*(uint *)(param_2 + 0x14) & 0x30;
    uVar9 = (uint)uVar19;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xffffffc0 | uVar13 | uVar8 | uVar9;
    uVar21 = *(uint *)(param_2 + 0x14) & 0x1c0;
    uVar20 = (ulong)(*(uint *)(param_2 + 0x14) >> 6) & 7;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xfffffe00 | uVar13 | uVar8 | uVar9 | uVar21;
    uVar22 = (ulong)*(uint *)(param_2 + 0x14) & 0x6000;
    uVar10 = (uint)uVar22;
    *(uint *)(param_1 + 0x14) = uVar4 & 0xffff9e00 | uVar13 | uVar8 | uVar9 | uVar21 | uVar10;
    uVar23 = (ulong)*(uint *)(param_2 + 0x14) & 0x8000;
    uVar11 = (uint)uVar23;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xffff1e00 | uVar13 | uVar8 | uVar9 | uVar21 | uVar10 | uVar11;
    uVar24 = (ulong)*(uint *)(param_2 + 0x14) & 0xc0000;
    uVar16 = (ulong)(uVar4 >> 0x10) & 1;
    uVar12 = (uint)uVar24;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xfff31e00 | uVar13 | uVar8 | uVar9 | uVar21 | uVar10 | uVar11 | uVar12;
    uVar6 = *(uint *)(param_2 + 0x14);
    uVar15 = uVar6 & 0x300000;
    *(uint *)(param_1 + 0x14) =
         uVar4 & 0xffc31e00 | uVar13 | uVar8 | uVar9 | uVar21 | uVar10 | uVar11 | uVar12 | uVar15;
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
           (((ulong)uVar5 & 3) + (uVar19 >> 4) + uVar20 * uVar16) * 0x10 +
           (ulong)(uVar15 != 0) * 0x10 +
           ((ulong)(uVar4 >> 0x11) & 1) * 0x74 + ((ulong)(uVar6 >> 0x14) & 3) * 0x58 +
           (uVar24 >> 0xd) +
           ((ulong)(uVar4 >> 0xc) & 1) * 0xc + uVar16 * 0x1c +
           (uVar20 + ((ulong)(uVar4 >> 10) & 3)) * 4 +
           (((ulong)(uVar4 >> 9) & 1) + (uVar23 >> 0xf)) * 8 +
           ((uVar22 >> 0xd) + (uVar18 >> 2)) * 0x14);
  }
  FUN_008a19b0(param_1,param_2,param_3);
  FUN_008a0958(param_1,*param_3);
  return;
}


