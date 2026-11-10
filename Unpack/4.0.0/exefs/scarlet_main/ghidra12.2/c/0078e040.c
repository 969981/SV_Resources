/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078e040; name: FUN_0078e040
 */


uint FUN_0078e040(undefined4 *param_1,byte *param_2,undefined8 param_3,byte *param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  
  if (param_1[0x1e] != 0) {
    uVar9 = *(ulong *)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf) * 4 + 0x22);
    uVar10 = *(ulong *)((long)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf) * 4 + 0x22)
                       + 8);
    puVar2 = (ulong *)((long)param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf0) + 0x88);
    puVar8 = (ulong *)(param_1 + 0x16);
    *puVar8 = uVar9;
    *(ulong *)(param_1 + 0x18) = uVar10;
    uVar11 = puVar2[1];
    *puVar8 = *puVar2 ^ uVar9 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar10 & 0xf) * 4) << 0x20;
    *(ulong *)(param_1 + 0x18) = uVar11 ^ (uVar10 >> 4 | uVar9 << 0x3c);
    lVar7 = 0;
    do {
      uVar9 = (ulong)*(byte *)((long)param_1 + lVar7 + 0x26);
      uVar12 = *(ulong *)(param_1 + (uVar9 & 0xf) * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4;
      uVar11 = uVar12 ^ (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) <<
                        0x20;
      uVar10 = *(ulong *)((long)(param_1 + (uVar9 & 0xf) * 4 + 0x22) + 8) ^
               (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
      puVar2 = (ulong *)((long)param_1 + (uVar9 & 0xf0) + 0x88);
      *(ulong *)(param_1 + 0x16) = uVar11;
      *(ulong *)(param_1 + 0x18) = uVar10;
      uVar9 = puVar2[1];
      bVar5 = lVar7 != -0xe;
      *(ulong *)(param_1 + 0x16) =
           *puVar2 ^ uVar11 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar10 & 0xf) * 4) << 0x20;
      *(ulong *)(param_1 + 0x18) = uVar9 ^ (uVar10 >> 4 | uVar12 << 0x3c);
      lVar7 = lVar7 + -1;
    } while (bVar5);
    *(ulong *)(param_1 + 6) = *puVar8;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
    param_1[0x1e] = 0;
    uVar9 = (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar10 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
             (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_1 + 6) = uVar9 >> 0x20 | uVar9 << 0x20;
    *(ulong *)(param_1 + 8) = uVar10 >> 0x20 | uVar10 << 0x20;
  }
  *param_1 = 3;
  *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + (ulong)param_5;
  if (param_5 != 0) {
    uVar6 = param_1[0x1f];
    puVar1 = (undefined8 *)(param_1 + 6);
    uVar13 = param_5;
    do {
      if (uVar6 == 0) {
        uVar6 = param_1[0x20] + 1;
        param_1[0x20] = uVar6;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        param_1[0xd] = uVar6 >> 0x10 | uVar6 << 0x10;
        (**(code **)(param_1 + 4))(param_1 + 0xe,param_1 + 10,*(undefined8 *)(param_1 + 2));
        uVar6 = param_1[0x1f];
      }
      uVar13 = uVar13 - 1;
      bVar3 = *(byte *)((long)(param_1 + 0xe) + (long)(int)uVar6) ^ *param_4;
      *param_2 = bVar3;
      *(byte *)((long)puVar1 + (long)(int)param_1[0x1f]) =
           *(byte *)((long)puVar1 + (long)(int)param_1[0x1f]) ^ bVar3;
      uVar6 = param_1[0x1f] + 1 & 0xf;
      param_1[0x1f] = uVar6;
      if (uVar6 == 0) {
        uVar4 = *(undefined8 *)
                 ((long)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf) * 4 + 0x22) + 8);
        *(undefined8 *)(param_1 + 0x16) =
             *(undefined8 *)(param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf) * 4 + 0x22);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        uVar9 = *(ulong *)(param_1 + 0x16);
        puVar2 = (ulong *)((long)param_1 + ((ulong)*(byte *)((long)param_1 + 0x27) & 0xf0) + 0x88);
        uVar10 = puVar2[1];
        *(ulong *)(param_1 + 0x16) =
             *puVar2 ^ uVar9 >> 4 ^
             (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4) << 0x20;
        *(ulong *)(param_1 + 0x18) = uVar10 ^ (*(ulong *)(param_1 + 0x18) >> 4 | uVar9 << 0x3c);
        lVar7 = 0;
        do {
          uVar9 = (ulong)*(byte *)((long)param_1 + lVar7 + 0x26);
          uVar12 = *(ulong *)(param_1 + (uVar9 & 0xf) * 4 + 0x22) ^ *(ulong *)(param_1 + 0x16) >> 4;
          uVar11 = uVar12 ^ (ulong)*(uint *)(&DAT_03d0adac + (*(ulong *)(param_1 + 0x18) & 0xf) * 4)
                            << 0x20;
          uVar10 = *(ulong *)((long)(param_1 + (uVar9 & 0xf) * 4 + 0x22) + 8) ^
                   (*(ulong *)(param_1 + 0x18) >> 4 | *(ulong *)(param_1 + 0x16) << 0x3c);
          puVar2 = (ulong *)((long)param_1 + (uVar9 & 0xf0) + 0x88);
          *(ulong *)(param_1 + 0x16) = uVar11;
          *(ulong *)(param_1 + 0x18) = uVar10;
          uVar9 = puVar2[1];
          bVar5 = lVar7 != -0xe;
          *(ulong *)(param_1 + 0x16) =
               *puVar2 ^ uVar11 >> 4 ^ (ulong)*(uint *)(&DAT_03d0adac + (uVar10 & 0xf) * 4) << 0x20;
          *(ulong *)(param_1 + 0x18) = uVar9 ^ (uVar10 >> 4 | uVar12 << 0x3c);
          lVar7 = lVar7 + -1;
        } while (bVar5);
        *puVar1 = *(undefined8 *)(param_1 + 0x16);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x18);
        uVar9 = (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 6) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar10 = (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 8) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        *(ulong *)(param_1 + 6) = uVar9 >> 0x20 | uVar9 << 0x20;
        *(ulong *)(param_1 + 8) = uVar10 >> 0x20 | uVar10 << 0x20;
      }
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (uVar13 != 0);
  }
  return param_5;
}


