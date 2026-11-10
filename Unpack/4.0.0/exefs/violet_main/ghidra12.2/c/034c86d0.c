/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c86d0; name: FUN_034c86d0
 */


byte * FUN_034c86d0(undefined4 param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  byte *pbVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  size_t __n;
  
  puVar4 = PTR_DAT_047e2fd0;
  pbVar10 = *(byte **)(param_2 + 0x18);
  if (pbVar10 != (byte *)0x0) {
    bVar3 = *pbVar10;
    uVar2 = (uint)bVar3;
    if (bVar3 < 2) {
      uVar2 = 1;
    }
    uVar9 = (ulong)uVar2;
    pbVar6 = pbVar10 + ((ulong)(bVar3 + 4) & 0x1fc);
    do {
      pbVar10 = pbVar10 + 1;
      if ((uint)*pbVar10 == (param_3 & 0xff)) {
        return pbVar6;
      }
      pbVar6 = pbVar6 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar14 = *(long *)(param_2 + 8);
  puVar7 = *(ulong **)(lVar14 + 0x60);
  if (puVar7 == (ulong *)0x0) {
    puVar7 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x28);
    if (puVar7 == (ulong *)0x0) {
      *(undefined8 *)(lVar14 + 0x60) = 0;
      return (byte *)0x0;
    }
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *puVar7 = 0;
    puVar7[1] = 0xffffffffffffffff;
    *(ulong **)(lVar14 + 0x60) = puVar7;
  }
  uVar9 = 1L << ((ulong)*(uint *)(PTR_DAT_047e7190 + (ulong)param_3 * 4) & 0x3f);
  if ((*puVar7 & uVar9) == 0) {
    *puVar7 = *puVar7 | uVar9;
    FUN_034be24c();
    lVar14 = *(long *)(lVar14 + 0x60);
    *(undefined8 *)(lVar14 + 8) = 0xffffffffffffffff;
    if (*(uint *)(lVar14 + 0x18) != 0) {
      puVar7 = *(ulong **)(lVar14 + 0x10);
      uVar13 = (ulong)*(uint *)(lVar14 + 0x18) * 0x10 - 0x10;
      uVar9 = (uVar13 >> 4) + 1;
      uVar11 = uVar9 & 3;
      if (uVar13 < 0x30) {
        uVar9 = 0xffffffffffffffff;
      }
      else {
        lVar12 = -(uVar9 & 0x1ffffffffffffffc);
        uVar9 = 0xffffffffffffffff;
        do {
          uVar13 = *puVar7;
          *(ulong *)(lVar14 + 8) = uVar13 & uVar9;
          uVar9 = puVar7[2] & uVar13 & uVar9;
          *(ulong *)(lVar14 + 8) = uVar9;
          uVar9 = puVar7[4] & uVar9;
          *(ulong *)(lVar14 + 8) = uVar9;
          puVar1 = puVar7 + 6;
          puVar7 = puVar7 + 8;
          uVar9 = *puVar1 & uVar9;
          lVar12 = lVar12 + 4;
          *(ulong *)(lVar14 + 8) = uVar9;
        } while (lVar12 != 0);
      }
      if (uVar11 != 0) {
        lVar12 = -uVar11;
        do {
          uVar9 = *puVar7 & uVar9;
          bVar5 = lVar12 != -1;
          lVar12 = lVar12 + 1;
          *(ulong *)(lVar14 + 8) = uVar9;
          puVar7 = puVar7 + 2;
        } while (bVar5);
      }
    }
  }
  if (*(byte **)(param_2 + 0x18) == (byte *)0x0) {
    __n = 0;
  }
  else {
    __n = (size_t)**(byte **)(param_2 + 0x18);
  }
  uVar2 = (int)__n + 5U & 0x1fc;
  lVar14 = __n + 1;
  puVar8 = (undefined1 *)(**(code **)(puVar4 + 0x10))(0,uVar2 + (int)lVar14 * 0x10);
  pbVar10 = (byte *)0x0;
  if (puVar8 != (undefined1 *)0x0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      memcpy(puVar8 + 1,(void *)(*(long *)(param_2 + 0x18) + 1),__n);
      memcpy(puVar8 + uVar2,(void *)(*(long *)(param_2 + 0x18) + (ulong)((int)__n + 4U & 0x1fc)),
             __n << 4);
      (**(code **)(puVar4 + 0x30))(0,*(undefined8 *)(param_2 + 0x18));
    }
    pbVar10 = puVar8 + __n * 0x10 + (ulong)uVar2;
    puVar8[lVar14] = (char)param_3;
    *puVar8 = (char)lVar14;
    *(undefined1 **)(param_2 + 0x18) = puVar8;
    *(undefined4 *)pbVar10 = param_1;
    pbVar10[8] = 0;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
  }
  return pbVar10;
}


