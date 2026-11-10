/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004711f0; name: FUN_004711f0
 */


void FUN_004711f0(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  uint uVar3;
  uint uVar6;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = *param_3 ^ uVar4;
  uVar5 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
  uVar5 = uVar3 ^ param_3[1] ^ uVar6;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar7 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar8 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar8 = uVar5 ^ (uVar8 >> 0x10 | uVar8 << 0x10);
  uVar7 = uVar5 + uVar3 ^ (uVar7 >> 0x10 | uVar7 << 0x10);
  uVar3 = uVar7 ^ param_3[2];
  uVar5 = uVar8 ^ param_3[3] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[4];
  uVar5 = uVar6 ^ param_3[5] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[6];
  uVar5 = uVar8 ^ param_3[7] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[8];
  uVar5 = uVar6 ^ param_3[9] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[10];
  uVar5 = uVar8 ^ param_3[0xb] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[0xc];
  uVar5 = uVar6 ^ param_3[0xd] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[0xe];
  uVar5 = uVar8 ^ param_3[0xf] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[0x10];
  uVar5 = uVar6 ^ param_3[0x11] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[0x12];
  uVar5 = uVar8 ^ param_3[0x13] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[0x14];
  uVar5 = uVar6 ^ param_3[0x15] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[0x16];
  uVar5 = uVar8 ^ param_3[0x17] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[0x18];
  uVar5 = uVar6 ^ param_3[0x19] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  uVar3 = uVar7 ^ param_3[0x1a];
  uVar5 = uVar8 ^ param_3[0x1b] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  uVar3 = uVar4 ^ param_3[0x1c];
  uVar5 = uVar6 ^ param_3[0x1d] ^ uVar3;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar3 = uVar5 + uVar3;
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar1 = param_3[0x1e];
  uVar2 = param_3[0x1f];
  uVar8 = uVar5 ^ uVar8;
  uVar7 = uVar5 + uVar3 ^ uVar7;
  param_2[0xc] = (char)(uVar8 >> 0x18);
  uVar3 = uVar8 ^ uVar2 ^ uVar7 ^ uVar1;
  param_2[0xd] = (char)(uVar8 >> 0x10);
  param_2[9] = (char)(uVar7 >> 0x10);
  param_2[8] = (char)(uVar7 >> 0x18);
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar3 = uVar5 + (uVar7 ^ uVar1);
  uVar3 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar3 >> 0x18) * 4);
  uVar5 = uVar3 + uVar5;
  uVar5 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_03cffda4 + (ulong)(uVar5 & 0xff) * 4) ^
          *(uint *)(&DAT_03d005a4 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_03d009a4 + (ulong)(uVar5 >> 0x18) * 4);
  uVar6 = uVar5 ^ uVar6;
  param_2[7] = (char)uVar6;
  uVar4 = uVar5 + uVar3 ^ uVar4;
  param_2[4] = (char)(uVar6 >> 0x18);
  param_2[6] = (char)(uVar6 >> 8);
  param_2[3] = (char)uVar4;
  param_2[5] = (char)(uVar6 >> 0x10);
  *param_2 = (char)(uVar4 >> 0x18);
  param_2[0xb] = (char)uVar7;
  param_2[10] = (char)(uVar7 >> 8);
  param_2[2] = (char)(uVar4 >> 8);
  param_2[1] = (char)(uVar4 >> 0x10);
  param_2[0xe] = (char)(uVar8 >> 8);
  param_2[0xf] = (char)uVar8;
  return;
}


