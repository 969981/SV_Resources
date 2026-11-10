/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d88a4; name: FUN_007d88a4
 */


ulong * FUN_007d88a4(long param_1,ulong *param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 auStack_350 [20];
  uint local_33c;
  undefined4 local_338 [34];
  undefined1 local_2b0 [16];
  undefined1 auStack_2a0 [136];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [136];
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [136];
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [8];
  int local_78 [4];
  uint local_68 [2];
  
  memset(local_68,0,4);
  local_78[0] = 0;
  local_338[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_338);
  puVar16 = param_2;
  if ((param_4 & 0xff) != 0) {
    uVar15 = (ulong)((param_4 & 0xff) + 0x1f >> 3) & 0x3c;
    if (param_3 < uVar15) {
      local_338[0] = 0x10407;
    }
    else {
      memcpy(local_68,param_2,uVar15);
      local_338[0] = 0;
    }
    local_98[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_338 | 4),(Result *)local_98);
    FUN_00cbd7c0(local_98,local_338);
    FUN_018ff39c(local_78,local_98);
    if (local_78[0] != 0) {
      return (ulong *)0x0;
    }
    puVar16 = (ulong *)((long)param_2 + uVar15);
  }
  puVar1 = (undefined8 *)(param_1 + 0x138);
  if (*(undefined8 **)(param_1 + 0x140) != puVar1) {
    puVar11 = *(undefined8 **)(param_1 + 0x140);
    do {
      puVar18 = (undefined8 *)puVar11[1];
      *puVar11 = 0;
      puVar11[1] = 0;
      FUN_0078fa04(param_1 + 0x150,param_1 + 0x150,(long)*(int *)(param_1 + 0x164) + (long)puVar11);
      puVar11 = puVar18;
    } while (puVar18 != puVar1);
  }
  FUN_0078f9d4(puVar1);
  if ((param_4 & 0xff) != 0) {
    uVar17 = 0;
    do {
      uVar12 = *puVar16;
      puVar2 = (ulong *)((long)puVar16 + 0xc);
      uVar15 = puVar16[1];
      FUN_0284e338(local_98);
      if ((local_68[0] >> (ulong)(uVar17 & 0x1f) & 1) == 0) {
        FUN_0078b014(local_338,local_98,puVar2,6);
        FUN_018ff39c(local_78,local_338);
      }
      else {
        FUN_0078b014(local_338,local_98,puVar2,0x12);
        FUN_018ff39c(local_78,local_338);
        puVar16 = puVar2;
      }
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar8 = ((uint)uVar15 & 0xff00ff00) >> 8 | ((uint)uVar15 & 0xff00ff) << 8;
      FUN_00796584(auStack_b8);
      FUN_007968fc(auStack_b8,local_98);
      uVar3 = *(undefined1 *)((long)puVar16 + 0x12);
      uVar4 = *(undefined1 *)((long)puVar16 + 0x15);
      cVar5 = *(char *)((long)puVar16 + 0x16);
      uVar7 = *(ushort *)((long)puVar16 + 0x13);
      memcpy(&local_d8,(void *)((long)puVar16 + 0x17),0x20);
      uVar12 = puVar16[7];
      bVar6 = *(byte *)((long)puVar16 + 0x37);
      uVar15 = (ulong)bVar6;
      FUN_018dd988(local_338);
      FUN_018dd980(local_338);
      memset(local_2b0,0,0x10);
      FUN_018dd988(auStack_2a0);
      FUN_018dd980(auStack_2a0);
      memset(auStack_218,0,0x10);
      FUN_018dd988(auStack_208);
      FUN_018dd980(auStack_208);
      memset(auStack_180,0,0x10);
      FUN_018dd988(auStack_170);
      FUN_018dd980(auStack_170);
      memset(auStack_e8,0,0x10);
      puVar16 = (ulong *)((long)puVar16 + 0x39);
      if (uVar15 != 0) {
        puVar14 = local_338;
        uVar19 = uVar15;
        do {
          FUN_007d6608(auStack_350,puVar14,puVar16,((int)param_2 + (int)param_3) - (int)puVar16,
                       &local_33c);
          puVar16 = (ulong *)((long)puVar16 + (ulong)local_33c);
          puVar14 = puVar14 + 0x26;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      FUN_007d6964(param_1,uVar13,uVar8 >> 0x10 | uVar8 << 0x10,auStack_b8);
      uVar9 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      uVar9 = FUN_007e2bb4(uVar9,uVar13);
      if (*(int *)(param_1 + 0x160) != 0) {
        lVar10 = FUN_0078fac8(param_1 + 0x150);
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar10 - *(int *)(param_1 + 0x164);
        }
        memset((void *)(lVar10 + 0x10),0,0x2c8);
        FUN_00796584(lVar10 + 0x20);
        FUN_018dd988(lVar10 + 0x78);
        FUN_018dd980(lVar10 + 0x78);
        memset((undefined8 *)(lVar10 + 0x100),0,0x10);
        FUN_018dd988(lVar10 + 0x110);
        FUN_018dd980(lVar10 + 0x110);
        memset((void *)(lVar10 + 0x198),0,0x10);
        FUN_018dd988(lVar10 + 0x1a8);
        FUN_018dd980(lVar10 + 0x1a8);
        memset((void *)(lVar10 + 0x230),0,0x10);
        FUN_018dd988(lVar10 + 0x240);
        FUN_018dd980(lVar10 + 0x240);
        memset((void *)(lVar10 + 0x2c8),0,0x10);
        FUN_0078f9e0(puVar1,puVar1,lVar10);
        *(ulong *)(lVar10 + 0x10) = uVar13;
        *(short *)(lVar10 + 0x18) = (short)(uVar8 >> 0x10);
        FUN_00796828(lVar10 + 0x20,auStack_b8);
        *(undefined1 *)(lVar10 + 0x40) = uVar3;
        *(undefined1 *)(lVar10 + 0x1a) = uVar4;
        *(ushort *)(lVar10 + 0x1c) = uVar7 >> 8 | uVar7 << 8;
        *(bool *)(lVar10 + 0x1b) = cVar5 != '\0';
        *(undefined8 *)(lVar10 + 0x58) = local_d0;
        *(undefined8 *)(lVar10 + 0x60) = local_c8;
        *(undefined8 *)(lVar10 + 0x68) = local_c0;
        *(byte *)(lVar10 + 0x70) = bVar6;
        *(undefined8 *)(lVar10 + 0x48) = uVar9;
        *(undefined8 *)(lVar10 + 0x50) = local_d8;
        *(char *)(lVar10 + 0x71) = (char)uVar12;
        if (bVar6 != 0) {
          puVar14 = local_338;
          puVar11 = (undefined8 *)(lVar10 + 0x100);
          do {
            FUN_018dd4a4(puVar11 + -0x11,puVar14);
            puVar18 = (undefined8 *)(puVar14 + 0x22);
            uVar9 = *(undefined8 *)(puVar14 + 0x24);
            puVar14 = puVar14 + 0x26;
            *puVar11 = *puVar18;
            puVar11[1] = uVar9;
            uVar15 = uVar15 - 1;
            puVar11 = puVar11 + 0x13;
          } while (uVar15 != 0);
        }
      }
      FUN_018dd490(auStack_170);
      FUN_018dd490(auStack_208);
      FUN_018dd490(auStack_2a0);
      FUN_018dd490(local_338);
      FUN_0284e3d4(local_98);
      uVar17 = uVar17 + 1;
    } while ((uVar17 & 0xff) < (param_4 & 0xff));
  }
  return puVar16;
}


