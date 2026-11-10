/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078e5ac; name: FUN_0078e5ac
 */


void FUN_0078e5ac(long param_1)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_1 + 0x78) == 0)) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    uVar9 = *(ulong *)(param_1 + 0x20);
  }
  else {
    lVar7 = param_1 + 0x88;
    puVar1 = (ulong *)(lVar7 + ((ulong)*(byte *)(param_1 + 0x27) & 0xf) * 0x10);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (ulong *)(lVar7 + ((ulong)*(byte *)(param_1 + 0x27) & 0xf0));
    puVar6 = (ulong *)(param_1 + 0x58);
    *puVar6 = uVar8;
    *(ulong *)(param_1 + 0x60) = uVar9;
    uVar10 = puVar1[1];
    *puVar6 = *puVar1 ^ uVar8 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar9 & 0xf) * 4) << 0x20;
    *(ulong *)(param_1 + 0x60) = uVar10 ^ (uVar9 >> 4 | uVar8 << 0x3c);
    lVar3 = 0;
    do {
      uVar8 = (ulong)*(byte *)(param_1 + 0x26 + lVar3);
      puVar1 = (ulong *)(lVar7 + (uVar8 & 0xf) * 0x10);
      uVar11 = *puVar1 ^ *(ulong *)(param_1 + 0x58) >> 4;
      uVar10 = uVar11 ^ (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x60) & 0xf) * 4) <<
                        0x20;
      uVar9 = puVar1[1] ^ (*(ulong *)(param_1 + 0x60) >> 4 | *(ulong *)(param_1 + 0x58) << 0x3c);
      puVar1 = (ulong *)(lVar7 + (uVar8 & 0xf0));
      *(ulong *)(param_1 + 0x58) = uVar10;
      *(ulong *)(param_1 + 0x60) = uVar9;
      uVar8 = puVar1[1];
      bVar2 = lVar3 != -0xe;
      *(ulong *)(param_1 + 0x58) =
           *puVar1 ^ uVar10 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar9 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x60) = uVar8 ^ (uVar9 >> 4 | uVar11 << 0x3c);
      lVar3 = lVar3 + -1;
    } while (bVar2);
    *(ulong *)(param_1 + 0x18) = *puVar6;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x60);
    uVar8 = (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar9 = (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    *(ulong *)(param_1 + 0x18) = uVar8;
    *(ulong *)(param_1 + 0x20) = uVar9;
  }
  uVar10 = *(long *)(param_1 + 0x68) << 3;
  uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
  uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
  uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
  puVar4 = (ulong *)(param_1 + 0x18);
  *puVar4 = uVar8 ^ uVar10;
  puVar5 = (ulong *)(param_1 + 0x58);
  *puVar5 = uVar10;
  uVar8 = *(long *)(param_1 + 0x70) << 3;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
  *(ulong *)(param_1 + 0x60) = uVar8;
  *(ulong *)(param_1 + 0x20) = uVar9 ^ uVar8;
  puVar1 = (ulong *)(param_1 + 0x88 + ((ulong)*(byte *)(param_1 + 0x27) & 0xf) * 0x10);
  puVar6 = (ulong *)(param_1 + 0x88 + ((ulong)*(byte *)(param_1 + 0x27) & 0xf0));
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  *puVar5 = uVar8;
  *(ulong *)(param_1 + 0x60) = uVar9;
  uVar10 = *puVar6 ^ uVar8 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar9 & 0xf) * 4) << 0x20;
  *puVar5 = uVar10;
  uVar8 = puVar6[1] ^ (uVar9 >> 4 | uVar8 << 0x3c);
  *(ulong *)(param_1 + 0x60) = uVar8;
  lVar7 = 0xe;
  do {
    puVar1 = (ulong *)(param_1 + 0x88 + ((ulong)*(byte *)((long)puVar4 + lVar7) & 0xf0));
    puVar6 = (ulong *)(param_1 + 0x88 + ((ulong)*(byte *)((long)puVar4 + lVar7) & 0xf) * 0x10);
    uVar9 = *puVar6 ^ uVar10 >> 4;
    uVar11 = uVar9 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar8 & 0xf) * 4) << 0x20;
    uVar8 = puVar6[1] ^ (uVar8 >> 4 | uVar10 << 0x3c);
    *(ulong *)(param_1 + 0x58) = uVar11;
    *(ulong *)(param_1 + 0x60) = uVar8;
    uVar10 = *puVar1 ^ uVar11 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar8 & 0xf) * 4) << 0x20;
    uVar8 = puVar1[1] ^ (uVar8 >> 4 | uVar9 << 0x3c);
    bVar2 = lVar7 != 0;
    *(ulong *)(param_1 + 0x58) = uVar10;
    *(ulong *)(param_1 + 0x60) = uVar8;
    lVar7 = lVar7 + -1;
  } while (bVar2);
  *puVar4 = *puVar5;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x60);
  uVar8 = (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x18) & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar9 = (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x20) & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x48) ^ (uVar8 >> 0x20 | uVar8 << 0x20);
  *(ulong *)(param_1 + 0x20) = (uVar9 >> 0x20 | uVar9 << 0x20) ^ *(ulong *)(param_1 + 0x50);
  return;
}


