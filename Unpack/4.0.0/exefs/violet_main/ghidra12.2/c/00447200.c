/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00447200; name: FUN_00447200
 */


void FUN_00447200(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_2 ^ *param_1;
  uVar2 = param_2[1] ^ param_1[1] ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[2] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[3] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[4] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[5] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[6] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[7] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[8] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[9] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[10] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[0xb] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[0xc] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[0xd] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar1 = param_2[0xe] ^ uVar1 ^
          (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  uVar2 = param_2[0xf] ^ uVar2 ^
          (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12];
  uVar3 = param_2[0x10];
  uVar4 = param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12];
  uVar5 = param_2[(ulong)(uVar2 >> 0x18) + 0x12];
  uVar6 = param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12];
  uVar7 = param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12];
  *param_1 = param_2[0x11] ^ uVar2;
  param_1[1] = uVar3 ^ uVar1 ^ (uVar4 + uVar5 ^ uVar6) + uVar7;
  return;
}


