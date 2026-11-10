/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d7bb0; name: FUN_007d7bb0
 */


int FUN_007d7bb0(long param_1,undefined1 *param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  ulong *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint uVar19;
  uint local_1a4;
  undefined1 auStack_1a0 [16];
  undefined4 local_190 [34];
  undefined1 auStack_108 [16];
  undefined4 local_f8 [8];
  long local_d8 [4];
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [16];
  uint local_68 [2];
  
  *param_2 = 5;
  puVar2 = PTR_DAT_047d0a08;
  *(ushort *)(param_2 + 1) = *(ushort *)(param_1 + 0xdc) >> 8 | *(ushort *)(param_1 + 0xdc) << 8;
  lVar10 = *(long *)puVar2;
  uVar6 = FUN_007e5328(lVar10 + 0x178);
  uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_2 + 3) = uVar6 >> 0x20 | uVar6 << 0x20;
  uVar5 = FUN_007e5330(lVar10 + 0x178);
  *(undefined2 *)(param_2 + 0xb) = 0;
  param_2[0xe] = (char)uVar5;
  param_2[0xd] = (char)((ushort)uVar5 >> 8);
  lVar7 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar11 = *(long *)(lVar7 + 0x20);
  lVar10 = lVar7 + 0x18;
  if (lVar11 == lVar10) {
    bVar18 = 0;
  }
  else {
    bVar18 = 0;
    do {
      lVar13 = *(long *)(lVar11 + 0x10);
      if ((*(char *)(lVar13 + 0x28) != -3) && (*(char *)(lVar13 + 0x3a) == '\x02')) {
        bVar18 = (*(byte *)(lVar13 + 0x78) ^ 1) + bVar18;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar10);
  }
  param_2[0xf] = bVar18;
  memset(local_68,0,4);
  lVar7 = *(long *)(lVar7 + 0x20);
  uVar6 = (ulong)(bVar18 + 0x1f >> 3) & 0x3c;
  puVar15 = (ulong *)(param_2 + 0x10 + uVar6);
  if (lVar7 != lVar10) {
    uVar19 = 0;
    do {
      lVar11 = *(long *)(lVar7 + 0x10);
      if (((*(char *)(lVar11 + 0x28) != -3) && (*(char *)(lVar11 + 0x3a) == '\x02')) &&
         (*(char *)(lVar11 + 0x78) == '\0')) {
        FUN_007e5190(local_a8);
        FUN_007e1c44(auStack_b8,*(undefined8 *)(lVar7 + 0x10),local_a8);
        uVar12 = *(ulong *)(*(long *)(lVar7 + 0x10) + 0x30);
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        *puVar15 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar5 = FUN_007e5330(local_a8);
        *(undefined2 *)(puVar15 + 1) = 0;
        puVar8 = (ulong *)((long)puVar15 + 0xc);
        *(char *)((long)puVar15 + 10) = (char)((ushort)uVar5 >> 8);
        *(char *)((long)puVar15 + 0xb) = (char)uVar5;
        FUN_00796868(local_d8,*(long *)(lVar7 + 0x10) + 8);
        uVar12 = FUN_0078a34c(local_d8);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_0078b12c(local_d8);
          if ((uVar12 & 1) == 0) {
            *(undefined4 *)((long)puVar15 + 0xc) = 0;
            pcVar14 = *(code **)(local_d8[0] + 0x10);
            puVar8 = puVar15 + 2;
            uVar9 = 2;
          }
          else {
            pcVar14 = *(code **)(local_d8[0] + 0x10);
            uVar9 = 6;
          }
          local_f8[0] = 0;
          (*pcVar14)(local_190,local_d8,puVar8,local_f8,uVar9);
          FUN_018ff39c(auStack_b8,local_190);
          puVar17 = (undefined1 *)((long)puVar15 + 0x12);
        }
        else {
          local_68[0] = local_68[0] | 1 << (ulong)(uVar19 & 0x1f);
          local_f8[0] = 0;
          (**(code **)(local_d8[0] + 0x10))(local_190,local_d8,puVar8,local_f8,0x12);
          FUN_018ff39c(auStack_b8,local_190);
          puVar17 = (undefined1 *)((long)puVar15 + 0x1e);
        }
        *puVar17 = *(undefined1 *)(*(long *)(lVar7 + 0x10) + 0x28);
        uVar1 = *(ushort *)(*(long *)(lVar7 + 0x10) + 0xf0);
        *(ushort *)(puVar17 + 1) = uVar1 >> 8 | uVar1 << 8;
        uVar3 = FUN_007e5310(local_a8);
        puVar17[3] = uVar3;
        bVar4 = FUN_007e531c(local_a8);
        puVar17[4] = bVar4 & 1;
        FUN_007e1a54(local_190,*(undefined8 *)(lVar7 + 0x10),local_f8);
        memcpy(puVar17 + 5,local_f8,0x20);
        puVar15 = (ulong *)(puVar17 + 0x27);
        bVar4 = *(byte *)(*(long *)(lVar7 + 0x10) + 0x358);
        uVar3 = *(undefined1 *)(*(long *)(lVar7 + 0x10) + 0x359);
        puVar17[0x25] = bVar4;
        puVar17[0x26] = uVar3;
        if (bVar4 != 0) {
          uVar16 = 0;
          do {
            FUN_018dd988(local_190);
            FUN_018dd980(local_190);
            memset(auStack_108,0,0x10);
            FUN_007e1b3c(auStack_1a0,*(undefined8 *)(lVar7 + 0x10),uVar16,local_190);
            FUN_007d59b4(auStack_1a0,local_190,puVar15,&local_1a4,
                         ((int)param_2 + param_3) - (int)puVar15);
            puVar15 = (ulong *)((long)puVar15 + (ulong)local_1a4);
            FUN_018dd490(local_190);
            uVar16 = uVar16 + 1;
          } while (bVar4 != uVar16);
        }
        uVar19 = uVar19 + 1;
        FUN_0284e3d4(local_d8);
        FUN_007e51d0(local_a8);
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != lVar10);
  }
  if (bVar18 != 0) {
    memcpy(param_2 + 0x10,local_68,uVar6);
    local_190[0] = 0;
    local_a8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_190 | 4),(Result *)local_a8);
    FUN_00cbd7c0(local_a8,local_190);
  }
  return (int)puVar15 - (int)param_2;
}


