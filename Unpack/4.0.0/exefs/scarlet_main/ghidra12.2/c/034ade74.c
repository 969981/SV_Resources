/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ade74; name: FUN_034ade74
 */


undefined4 FUN_034ade74(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  
  bVar7 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar14 = 0;
  if ((bVar7 & 1) != 0) {
    uVar14 = 0x20020000ffe;
  }
  *(ulong *)(param_1 + 0xb8) = uVar14 | *(ulong *)(param_1 + 0xb8) & 0xfffffdffdffff001;
  uVar6 = *(uint *)(param_1 + 0xda);
  uVar1 = uVar6 & 0x7ffff | ((bVar7 & 2) >> 1) << 0x13;
  *(uint *)(param_1 + 0xda) = uVar6 & 0xfff00000 | uVar1;
  if ((bVar7 & 1) == 0) {
    return 1;
  }
  *(uint *)(param_1 + 0xda) = uVar6 & 0xff800000 | uVar1 | (bVar7 >> 2 & 3) << 0x14;
  *(ushort *)(param_1 + 0xd8) = *(ushort *)(param_1 + 0xd8) & 0xfff8 | bVar7 >> 5 & 3;
  if ((bVar7 & 2) == 0) {
    return 1;
  }
  bVar7 = *(byte *)*param_2;
  uVar10 = (ushort)bVar7 << 3;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar9 = *(ushort *)(param_1 + 0xd8);
  *(ushort *)(param_1 + 0xd8) =
       uVar9 & 0xfc07 | uVar10 & 0x18 | uVar10 & 0x40 | uVar10 & 0x80 | (bVar7 & 0x80) << 2 |
       (bVar7 >> 5 & 1) << 8;
  if (1 < (ushort)((uVar9 & 7) - 1)) {
    return 1;
  }
  puVar15 = *(undefined4 **)(param_1 + 0x88);
  if (puVar15 == (undefined4 *)0x0) {
    *(ulong *)(param_1 + 0xb8) = *(ulong *)(param_1 + 0xb8) | 0x20020000ffe;
    puVar15 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x48);
    if (puVar15 == (undefined4 *)0x0) {
      return 0x34;
    }
    memset(puVar15,0,0x48);
    *puVar15 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 **)(param_1 + 0x88) = puVar15;
  }
  bVar8 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  puVar15[4] = (uint)bVar8;
  puVar15[0xc] = (bVar7 & 0x40) << 0x19 | puVar15[0xc] & 0x7fffffff;
  uVar11 = *(undefined4 *)*param_2;
  *param_2 = (long)((undefined4 *)*param_2 + 1);
  puVar15[5] = uVar11;
  puVar13 = (uint *)*param_2 + 1;
  uVar1 = *(uint *)*param_2;
  puVar2 = puVar13;
  if (uVar1 != 0) {
    puVar2 = puVar13 + (ulong)uVar1 * 4;
  }
  *param_2 = (long)puVar2;
  puVar16 = puVar2 + 1;
  uVar6 = *puVar2;
  uVar14 = (ulong)uVar6;
  puVar2 = (uint *)0x0;
  if (uVar1 != 0) {
    puVar2 = puVar13;
  }
  *param_2 = (long)puVar16;
  if (uVar6 == 0) {
    return 1;
  }
  *param_2 = (long)(puVar16 + uVar14 * 2);
  if (uVar1 == 0) {
LAB_034ae0f0:
    uVar11 = 1;
  }
  else {
    puVar15 = *(undefined4 **)(param_1 + 0x88);
    if (puVar15 == (undefined4 *)0x0) {
      *(ulong *)(param_1 + 0xb8) = *(ulong *)(param_1 + 0xb8) | 0x20020000ffe;
      puVar15 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x48);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(param_1 + 0x88);
      }
      else {
        memset(puVar15,0,0x48);
        *puVar15 = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 **)(param_1 + 0x88) = puVar15;
      }
      if (puVar15 == (undefined4 *)0x0) goto LAB_034ae0f0;
    }
    uVar12 = FUN_03483288(puVar15,puVar2,(ulong)uVar1,puVar16,uVar14);
    if ((uVar12 & 1) == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = FUN_0348339c(*(undefined8 *)(param_1 + 0x88),puVar2,uVar1,puVar16,uVar14);
    }
  }
  lVar17 = 0;
  uVar12 = 0;
  do {
    puVar15 = (undefined4 *)*param_2;
    uVar3 = *puVar15;
    *param_2 = (long)(puVar15 + 1);
    uVar4 = puVar15[1];
    *param_2 = (long)(puVar15 + 2);
    uVar5 = puVar15[2];
    *param_2 = (long)(puVar15 + 3);
    puVar15 = *(undefined4 **)(param_1 + 0x88);
    if (puVar15 == (undefined4 *)0x0) {
      *(ulong *)(param_1 + 0xb8) = *(ulong *)(param_1 + 0xb8) | 0x20020000ffe;
      puVar15 = (undefined4 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x48);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(param_1 + 0x88);
      }
      else {
        memset(puVar15,0,0x48);
        *puVar15 = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 **)(param_1 + 0x88) = puVar15;
      }
      if (puVar15 != (undefined4 *)0x0) goto LAB_034ae19c;
    }
    else {
LAB_034ae19c:
      if (uVar12 < ((ulong)(uint)puVar15[0xc] & 0x7fffffff)) {
        *(undefined4 *)(*(long *)(puVar15 + 10) + lVar17 + 0xc) = uVar3;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + lVar17 + 0x10) = uVar4;
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x28) + lVar17 + 0x14) = uVar5;
      }
    }
    uVar12 = uVar12 + 1;
    lVar17 = lVar17 + 0x18;
    if (uVar14 == uVar12) {
      return uVar11;
    }
  } while( true );
}


