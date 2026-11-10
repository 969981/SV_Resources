/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00458450; name: FUN_00458450
 */


undefined8 FUN_00458450(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  uVar11 = *(long *)(param_1 + 0x30) << 3;
  uVar2 = *(uint *)(param_1 + 0x170);
  uVar12 = *(long *)(param_1 + 0x38) << 3;
  if (uVar2 == 0) {
    if (*(int *)(param_1 + 0x174) == 0) {
      uVar13 = 0;
      goto LAB_0045870c;
    }
    uVar6 = (ulong)*(byte *)(param_1 + 0x4f);
    lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
    uVar8 = *(ulong *)(lVar5 + 0x60);
    uVar7 = *(ulong *)(lVar5 + 0x68);
    lVar5 = 0;
    while( true ) {
      lVar4 = param_1 + (uVar6 & 0xfffffffffffffff0);
      uVar9 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar8 >> 4 ^ *(ulong *)(lVar4 + 0x60);
      uVar7 = *(ulong *)(lVar4 + 0x68) ^ (uVar7 >> 4 | uVar8 << 0x3c);
      if (lVar5 == -0xf) break;
      uVar6 = (ulong)*(byte *)(param_1 + 0x4e + lVar5);
      lVar4 = param_1 + (uVar6 & 0xf) * 0x10;
      uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar9 >> 4 ^ *(ulong *)(lVar4 + 0x60);
      uVar7 = *(ulong *)(lVar4 + 0x68) ^ (uVar7 >> 4 | uVar9 << 0x3c);
      lVar5 = lVar5 + -1;
    }
    uVar8 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  }
  else {
    uVar13 = uVar2 + 0xf & 0xfffffff0;
    memset((void *)(param_1 + (ulong)uVar2 + 0x188),0,(ulong)(uVar13 - uVar2));
    if (uVar13 != 0x30) goto LAB_0045870c;
    lVar4 = 0;
    uVar6 = (ulong)(*(byte *)(param_1 + 0x197) ^ *(byte *)(param_1 + 0x4f));
    lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
    uVar8 = *(ulong *)(lVar5 + 0x60);
    uVar7 = *(ulong *)(lVar5 + 0x68);
    while( true ) {
      lVar5 = param_1 + (uVar6 & 0xfffffffffffffff0);
      uVar9 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar8 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar8 << 0x3c);
      if (lVar4 == -0xf) break;
      lVar5 = param_1 + lVar4;
      lVar4 = lVar4 + -1;
      uVar6 = (ulong)(*(byte *)(lVar5 + 0x196) ^ *(byte *)(lVar5 + 0x4e));
      lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
      uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar9 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar9 << 0x3c);
    }
    uVar8 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    lVar4 = 0;
    *(ulong *)(param_1 + 0x40) = uVar8 >> 0x20 | uVar8 << 0x20;
    *(ulong *)(param_1 + 0x48) = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar6 = (ulong)((uint)*(byte *)(param_1 + 0x1a7) ^ (uint)(uVar7 >> 0x18) & 0xff);
    lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
    uVar8 = *(ulong *)(lVar5 + 0x60);
    uVar7 = *(ulong *)(lVar5 + 0x68);
    while( true ) {
      lVar5 = param_1 + (uVar6 & 0xfffffffffffffff0);
      uVar9 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar8 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar8 << 0x3c);
      if (lVar4 == -0xf) break;
      lVar5 = param_1 + lVar4;
      lVar4 = lVar4 + -1;
      uVar6 = (ulong)(*(byte *)(lVar5 + 0x1a6) ^ *(byte *)(lVar5 + 0x4e));
      lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
      uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar9 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar9 << 0x3c);
    }
    uVar8 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    lVar4 = 0;
    *(ulong *)(param_1 + 0x40) = uVar8 >> 0x20 | uVar8 << 0x20;
    *(ulong *)(param_1 + 0x48) = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar6 = (ulong)((uint)*(byte *)(param_1 + 0x1b7) ^ (uint)(uVar7 >> 0x18) & 0xff);
    lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
    uVar8 = *(ulong *)(lVar5 + 0x60);
    uVar7 = *(ulong *)(lVar5 + 0x68);
    while( true ) {
      lVar5 = param_1 + (uVar6 & 0xfffffffffffffff0);
      uVar9 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar8 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar8 << 0x3c);
      if (lVar4 == -0xf) break;
      lVar5 = param_1 + lVar4;
      lVar4 = lVar4 + -1;
      uVar6 = (ulong)(*(byte *)(lVar5 + 0x1b6) ^ *(byte *)(lVar5 + 0x4e));
      lVar5 = param_1 + (uVar6 & 0xf) * 0x10;
      uVar8 = *(ulong *)(&DAT_03cfa528 + (uVar7 & 0xf) * 8) ^ uVar9 >> 4 ^ *(ulong *)(lVar5 + 0x60);
      uVar7 = *(ulong *)(lVar5 + 0x68) ^ (uVar7 >> 4 | uVar9 << 0x3c);
    }
    uVar8 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  }
  uVar13 = 0;
  *(ulong *)(param_1 + 0x40) = uVar6;
  *(ulong *)(param_1 + 0x48) = uVar8;
LAB_0045870c:
  lVar5 = param_1 + 0x188;
  uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
  uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
  uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
  uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
  *(ulong *)(lVar5 + (ulong)uVar13) = uVar11 >> 0x20 | uVar11 << 0x20;
  ((ulong *)(lVar5 + (ulong)uVar13))[1] = uVar12 >> 0x20 | uVar12 << 0x20;
  uVar12 = (ulong)*(byte *)(param_1 + 0x4f);
  uVar11 = (ulong)(uVar13 + 0x10);
  lVar4 = param_1 + 0x196;
  do {
    uVar7 = (ulong)((uint)*(byte *)(lVar5 + 0xf) ^ (uint)uVar12);
    lVar1 = param_1 + (uVar7 & 0xf) * 0x10;
    lVar10 = 0;
    uVar12 = *(ulong *)(lVar1 + 0x60);
    uVar8 = *(ulong *)(lVar1 + 0x68);
    while( true ) {
      lVar1 = param_1 + (uVar7 & 0xfffffffffffffff0);
      uVar6 = *(ulong *)(&DAT_03cfa528 + (uVar8 & 0xf) * 8) ^ uVar12 >> 4 ^ *(ulong *)(lVar1 + 0x60)
      ;
      uVar8 = *(ulong *)(lVar1 + 0x68) ^ (uVar8 >> 4 | uVar12 << 0x3c);
      if (lVar10 == -0xf) break;
      uVar7 = (ulong)(*(byte *)(lVar4 + lVar10) ^ *(byte *)(param_1 + 0x4e + lVar10));
      lVar1 = param_1 + (uVar7 & 0xf) * 0x10;
      lVar10 = lVar10 + -1;
      uVar12 = *(ulong *)(&DAT_03cfa528 + (uVar8 & 0xf) * 8) ^ uVar6 >> 4 ^ *(ulong *)(lVar1 + 0x60)
      ;
      uVar8 = *(ulong *)(lVar1 + 0x68) ^ (uVar8 >> 4 | uVar6 << 0x3c);
    }
    uVar12 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar12 >> 0x20 | uVar12 << 0x20;
    lVar5 = lVar5 + 0x10;
    uVar11 = uVar11 - 0x10;
    uVar12 = (uVar12 & 0xffffffff) >> 0x18;
    lVar4 = lVar4 + 0x10;
    uVar8 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    *(ulong *)(param_1 + 0x40) = uVar8;
    *(ulong *)(param_1 + 0x48) = uVar7;
  } while (uVar11 != 0);
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x20) ^ uVar8;
  *(ulong *)(param_1 + 0x48) = uVar7 ^ *(ulong *)(param_1 + 0x28);
  if ((param_2 == 0) || (0x10 < param_3)) {
    return 0xffffffff;
  }
  uVar3 = FUN_003f6d80(param_1 + 0x40,param_2,param_3);
  return uVar3;
}


