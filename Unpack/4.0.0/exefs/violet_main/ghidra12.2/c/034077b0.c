/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034077b0; name: FUN_034077b0
 */


undefined8
FUN_034077b0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int *param_5,
            long param_6,int param_7)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  
  *(uint *)(param_6 + 0x58) =
       *(int *)(param_6 + 0x58) +
       ((*(byte *)(param_1 + 0x1b) + 1) * (uint)*(ushort *)((long)param_5 + 10) + -2) * param_5[10];
  uVar3 = *(ushort *)((long)param_5 + 10);
  if (uVar3 == 0) {
    iVar16 = 0x100;
  }
  else {
    uVar8 = (uint)uVar3;
    bVar5 = uVar8 == 1;
    if (uVar3 < 2) {
      uVar8 = 1;
    }
    uVar12 = 0;
    if (bVar5) {
      uVar10 = 0xff;
    }
    else {
      uVar10 = 0xff;
      do {
        pbVar1 = (byte *)(param_2 + uVar12);
        uVar12 = uVar12 + 2;
        bVar13 = *pbVar1;
        bVar2 = pbVar1[1];
        uVar9 = (uint)bVar13;
        if (uVar10 <= bVar13 || bVar13 == 0) {
          uVar9 = uVar10;
        }
        uVar10 = (uint)bVar2;
        if (uVar9 <= bVar2 || bVar2 == 0) {
          uVar10 = uVar9;
        }
      } while (((ulong)uVar8 & 0xfffe) != uVar12);
    }
    uVar9 = uVar10;
    if (((uVar8 & 1) != 0) &&
       (bVar13 = *(byte *)(param_2 + uVar12), uVar9 = (uint)bVar13, uVar10 <= bVar13 || bVar13 == 0)
       ) {
      uVar9 = uVar10;
    }
    iVar16 = uVar9 + 1;
  }
  do {
    iVar16 = iVar16 + 1;
    iVar6 = FUN_034064d0(param_1,param_2,param_3,param_4,param_5,param_6,iVar16);
  } while (iVar6 == 1);
  if (iVar6 == 2) {
    uVar7 = 0xffffff75;
  }
  else {
    if ((param_5[9] == 1) && (*(char *)(*(long *)(param_1 + 0x10) + 0x50) != '\0')) {
      uVar8 = -param_5[3] - 8;
      *(int *)(*(long *)(param_1 + 0x10) + 0x34) =
           *param_5 << (ulong)(-(0x18U - param_5[1] & 0x1f) & 0x1f) |
           *param_5 >> (0x18U - param_5[1] & 0x1f);
      *(int *)(*(long *)(param_1 + 0x10) + 0x38) =
           ~(-1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f));
      iVar16 = *(int *)(*(long *)(param_1 + 0x10) + 0x40);
      *(int *)(*(long *)(param_1 + 0x10) + 0x3c) =
           iVar16 << (ulong)(-(uVar8 & 0x1f) & 0x1f) | iVar16 >> (uVar8 & 0x1f);
      lVar11 = 0;
      do {
        uVar10 = (uint)lVar11;
        lVar11 = lVar11 + 1;
      } while (1 << (ulong)(uVar10 & 0x1f) != (uint)*(byte *)(param_1 + 0x1a));
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) =
           *(undefined8 *)
            (((long)param_7 + -1) * 0x20 + (ulong)*(byte *)(param_1 + 0x1b) * 0x40 + lVar11 * 8 +
            0x47bdf88);
      bVar13 = *(byte *)(param_1 + 0x1a);
      if ((bVar13 < 9) && ((1 << (ulong)(bVar13 & 0x1f) & 0x114U) != 0)) {
        puVar14 = *(undefined8 **)(param_1 + 0x10);
        uVar4 = *(undefined4 *)((long)puVar14 + 0x34);
        puVar14[1] = CONCAT44(uVar4,uVar4);
        *puVar14 = CONCAT44(uVar4,uVar4);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x38);
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x14) =
             *(int *)(lVar15 + 0x38) << (ulong)(*(byte *)(lVar15 + 0x50) & 0x1f);
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x18) =
             *(int *)(lVar15 + 0x38) << (ulong)((*(byte *)(lVar15 + 0x50) & 0xf) << 1);
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x1c) =
             *(int *)(lVar15 + 0x38) << (ulong)((uint)*(byte *)(lVar15 + 0x50) * 3 & 0x1f);
        bVar13 = *(byte *)(param_1 + 0x1a);
      }
      if (bVar13 == 8) {
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x3c);
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x3c) >> (*(byte *)(lVar15 + 0x50) & 0x1f);
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x28) = *(int *)(lVar15 + 0x3c) >> ((*(byte *)(lVar15 + 0x50) & 0xf) << 1)
        ;
        lVar15 = *(long *)(param_1 + 0x10);
        *(int *)(lVar15 + 0x2c) =
             *(int *)(lVar15 + 0x3c) >> ((uint)*(byte *)(lVar15 + 0x50) * 3 & 0x1f);
        bVar13 = *(byte *)(param_1 + 0x1a);
      }
      if ((bVar13 == 4) || (bVar13 == 2)) {
        lVar15 = *(long *)(param_1 + 0x10);
        uVar10 = (uint)*(byte *)(lVar15 + 0x50) * -3 - param_5[3];
        iVar16 = uVar8 - uVar10;
        if (iVar16 < 1) {
          *(undefined4 *)(lVar15 + 0x30) = 0;
          uVar8 = *(uint *)(lVar15 + 0x3c);
          lVar15 = *(long *)(param_1 + 0x10);
        }
        else {
          *(int *)(lVar15 + 0x30) = iVar16;
          lVar15 = *(long *)(param_1 + 0x10);
          uVar8 = *(int *)(lVar15 + 0x40) >> (uVar10 & 0x1f);
        }
        *(uint *)(lVar15 + 0x20) = uVar8;
        *(uint *)(*(long *)(param_1 + 0x10) + 0x24) =
             uVar8 >> (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x28) =
             uVar8 >> (ulong)((*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0xf) << 1);
        *(uint *)(*(long *)(param_1 + 0x10) + 0x2c) =
             uVar8 >> (ulong)((uint)*(byte *)(*(long *)(param_1 + 0x10) + 0x50) * 3 & 0x1f);
        if (0xffff < uVar8 * ~(-1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f))) {
          *(undefined **)(*(long *)(param_1 + 0x10) + 0x48) =
               (&PTR_LAB_047be008)
               [lVar11 + (ulong)*(byte *)(param_1 + 0x1b) * 8 + ((long)param_7 + -1) * 4];
          return 0;
        }
      }
    }
    uVar7 = 0;
  }
  return uVar7;
}


