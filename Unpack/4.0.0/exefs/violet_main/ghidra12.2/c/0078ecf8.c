/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ecf8; name: FUN_0078ecf8
 */


void FUN_0078ecf8(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  uVar10 = (ulong)(*param_1 ^ *param_4);
  uVar8 = (ulong)(param_1[1] ^ param_4[1]);
  uVar12 = (ulong)(param_1[2] ^ param_4[2]);
  uVar14 = (ulong)(param_1[3] ^ param_4[3]);
  uVar15 = 0xb;
  puVar6 = param_1;
  do {
    uVar9 = (uint)uVar10;
    uVar7 = (uint)uVar8;
    uVar11 = (uint)uVar12;
    uVar13 = (uint)uVar14;
    uVar15 = uVar15 - 1;
    uVar1 = *(uint *)(&DAT_03d0af0c + (ulong)(uVar9 & 0xff) * 4) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03d0af0c + (uVar14 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03d0af0c + (uVar14 >> 0x18) * 4) << 0x18) ^ puVar6[4];
    uVar10 = (ulong)uVar1;
    uVar2 = *(uint *)(&DAT_03d0af0c + (ulong)(uVar7 & 0xff) * 4) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar13 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar13 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 0x18) * 4) << 0x18) ^ puVar6[5];
    uVar8 = (ulong)uVar2;
    uVar3 = *(uint *)(&DAT_03d0af0c + (ulong)(uVar11 & 0xff) * 4) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar13 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar13 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 0x18) * 4) << 0x18) ^ puVar6[6];
    uVar12 = (ulong)uVar3;
    uVar7 = *(uint *)(&DAT_03d0af0c + (ulong)(uVar13 & 0xff) * 4) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar9 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar7 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_03d0af0c + (ulong)(uVar11 >> 0x18) * 4) << 0x18) ^ puVar6[7];
    uVar14 = (ulong)uVar7;
    puVar6 = puVar6 + 4;
  } while (2 < uVar15);
  *param_2 = CONCAT13((&DAT_03d0ae0a)[uVar7 >> 0x18],
                      CONCAT12((&DAT_03d0ae0a)[(ulong)(uVar3 >> 0x10) & 0xff],
                               CONCAT11((&DAT_03d0ae0a)[(ulong)(uVar2 >> 8) & 0xff],
                                        (&DAT_03d0ae0a)[uVar10 & 0xff]))) ^ param_1[0x28];
  uVar4 = (&DAT_03d0ae0a)[(ulong)(uVar2 >> 0x10) & 0xff];
  uVar5 = (&DAT_03d0ae0a)[(ulong)(uVar7 >> 8) & 0xff];
  param_2[1] = CONCAT13((&DAT_03d0ae0a)[uVar1 >> 0x18],
                        CONCAT12((&DAT_03d0ae0a)[(ulong)(uVar7 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_03d0ae0a)[(ulong)(uVar3 >> 8) & 0xff],
                                          (&DAT_03d0ae0a)[uVar8 & 0xff]))) ^ param_1[0x29];
  param_2[2] = CONCAT13((&DAT_03d0ae0a)[uVar2 >> 0x18],
                        CONCAT12((&DAT_03d0ae0a)[(ulong)(uVar1 >> 0x10) & 0xff],
                                 CONCAT11(uVar5,(&DAT_03d0ae0a)[uVar12 & 0xff]))) ^ param_1[0x2a];
  param_2[3] = CONCAT13((&DAT_03d0ae0a)[uVar3 >> 0x18],
                        CONCAT12(uVar4,CONCAT11((&DAT_03d0ae0a)[(ulong)(uVar1 >> 8) & 0xff],
                                                (&DAT_03d0ae0a)[uVar14 & 0xff]))) ^ param_1[0x2b];
  return;
}


