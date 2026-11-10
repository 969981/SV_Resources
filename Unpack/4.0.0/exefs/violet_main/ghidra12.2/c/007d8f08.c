/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d8f08; name: FUN_007d8f08
 */


void FUN_007d8f08(long param_1,long param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  ushort uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined2 uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  ulong *puVar29;
  undefined1 auStack_650 [32];
  undefined1 local_630;
  ulong local_62f;
  undefined2 local_627;
  undefined1 local_625;
  undefined1 local_624;
  byte local_623;
  byte local_622;
  byte local_621;
  byte local_620;
  byte local_61f;
  byte local_61e;
  byte local_61d;
  byte local_61c;
  byte local_61b;
  byte local_61a;
  byte local_619;
  byte local_618;
  undefined1 auStack_70 [16];
  
  if ((param_3 == 0x2e) || (param_3 == 0x22)) {
    bVar1 = *(byte *)(param_2 + 4);
    bVar2 = *(byte *)(param_2 + 1);
    bVar3 = *(byte *)(param_2 + 2);
    bVar4 = *(byte *)(param_2 + 3);
    bVar5 = *(byte *)(param_2 + 7);
    bVar6 = *(byte *)(param_2 + 8);
    bVar7 = *(byte *)(param_2 + 5);
    bVar8 = *(byte *)(param_2 + 6);
    bVar9 = *(byte *)(param_2 + 9);
    bVar10 = *(byte *)(param_2 + 10);
    bVar11 = *(byte *)(param_2 + 0xb);
    bVar12 = *(byte *)(param_2 + 0xc);
    FUN_00796584(auStack_650);
    cVar13 = *(char *)(param_2 + 0xd);
    FUN_0284e338(&local_630);
    if (cVar13 == '\x01') {
      FUN_0078b014(auStack_70,&local_630,param_2 + 0xe,0x12);
      puVar29 = (ulong *)(param_2 + 0x20);
    }
    else {
      FUN_0078b014(auStack_70,&local_630,param_2 + 0xe,6);
      puVar29 = (ulong *)(param_2 + 0x14);
    }
    FUN_007968fc(auStack_650,&local_630);
    FUN_0284e3d4(&local_630);
    uVar24 = (*puVar29 & 0xff00ff00ff00ff00) >> 8 | (*puVar29 & 0xff00ff00ff00ff) << 8;
    uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
    uVar18 = puVar29[1];
    bVar14 = *(byte *)((long)puVar29 + 9);
    bVar15 = *(byte *)((long)puVar29 + 10);
    bVar16 = *(byte *)((long)puVar29 + 0xb);
    uVar17 = *(ushort *)((long)puVar29 + 0xc);
    lVar28 = *(long *)PTR_DAT_047d0a08;
    uVar23 = FUN_007e5328(lVar28 + 0x178);
    if ((uVar23 == (uVar24 >> 0x20 | uVar24 << 0x20)) &&
       (uVar22 = FUN_007e5330(lVar28 + 0x178), puVar20 = PTR_DAT_047d0a08,
       ((uint)(byte)uVar18 << 0x18 | (uint)bVar14 << 0x10 | (uint)bVar15 << 8 | (uint)bVar16) ==
       (uVar22 & 0xffff))) {
      lVar28 = *(long *)PTR_DAT_047d0a08 + 0x1b8;
      uVar24 = FUN_007e5328(lVar28);
      local_623 = bVar2;
      local_622 = bVar3;
      local_621 = bVar4;
      local_620 = bVar1;
      local_61f = bVar7;
      local_61e = bVar8;
      local_61d = bVar5;
      local_61c = bVar6;
      local_61b = bVar9;
      local_61a = bVar10;
      local_619 = bVar11;
      local_618 = bVar12;
      if ((uVar24 == ((ulong)bVar2 << 0x38 | (ulong)bVar3 << 0x30 | (ulong)bVar4 << 0x28 |
                      (ulong)bVar1 << 0x20 | (ulong)bVar7 << 0x18 | (ulong)bVar8 << 0x10 |
                      (ulong)bVar5 << 8 | (ulong)bVar6)) &&
         (uVar22 = FUN_007e5330(lVar28), puVar19 = PTR_DAT_047d0860,
         ((uint)bVar9 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar11 << 8 | (uint)bVar12) ==
         (uVar22 & 0xffff))) {
        uVar25 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
        lVar26 = FUN_007e3cc8(uVar25,lVar28);
        if ((((lVar26 != 0) && (uVar24 = FUN_007e5294(param_1 + 0xe8,lVar28), (uVar24 & 1) == 0)) &&
            (uVar24 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xa8)), (uVar24 & 1) == 0)) &&
           ((((uVar24 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xb0)), (uVar24 & 1) == 0 &&
              (*(long *)(*(long *)PTR_DAT_047d0a08 + 0xc0) != 0)) &&
             ((uVar24 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xc0)), (uVar24 & 1) == 0 ||
              (*(char *)(*(long *)(param_1 + 0xc0) + 0xa9) == '\0')))) &&
            ((ushort)(uVar17 >> 8 | uVar17 << 8) <= *(ushort *)(param_1 + 0xdc))))) {
          lVar26 = *(long *)PTR_DAT_047d0a08;
          local_630 = 8;
          uVar24 = FUN_007e5328(lVar26 + 0x178);
          uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
          uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
          local_62f = uVar24 >> 0x20 | uVar24 << 0x20;
          uVar21 = FUN_007e5330(lVar26 + 0x178);
          local_625 = (undefined1)((ushort)uVar21 >> 8);
          local_624 = (undefined1)uVar21;
          local_627 = 0;
          FUN_007d5520(auStack_70,param_1,auStack_650,&local_630,0x19,1);
          uVar25 = FUN_01f7c4e8(*(undefined8 *)puVar19);
          uVar27 = FUN_007e5328(lVar28);
          uVar25 = FUN_007e2bb4(uVar25,uVar27);
          FUN_007d5240(param_1,uVar25);
          FUN_007d45f4(&local_630,param_1,1);
        }
      }
      else {
        lVar28 = *(long *)puVar20;
        local_630 = 8;
        uVar24 = FUN_007e5328(lVar28 + 0x178);
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        local_62f = uVar24 >> 0x20 | uVar24 << 0x20;
        uVar21 = FUN_007e5330(lVar28 + 0x178);
        local_625 = (undefined1)((ushort)uVar21 >> 8);
        local_624 = (undefined1)uVar21;
        local_627 = 0;
        FUN_007d5520(auStack_70,param_1,auStack_650,&local_630,0x19,1);
      }
    }
  }
  return;
}


