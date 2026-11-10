/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004485e0; name: FUN_004485e0
 */


void FUN_004485e0(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2 + param_1[1];
  uVar1 = uVar1 >> (-param_2[1] & 0x1fU) | uVar1 << 0x20 - (-param_2[1] & 0x1fU);
  uVar2 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) ^
           *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4)) -
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) +
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ *param_1;
  uVar1 = uVar2 ^ param_2[2];
  uVar1 = uVar1 >> (-param_2[3] & 0x1fU) | uVar1 << 0x20 - (-param_2[3] & 0x1fU);
  uVar3 = *(uint *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ param_1[1] ^
          (*(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) -
          *(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4)) +
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4);
  uVar1 = param_2[4] - uVar3;
  uVar1 = uVar1 >> (-param_2[5] & 0x1fU) | uVar1 << 0x20 - (-param_2[5] & 0x1fU);
  uVar2 = (*(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar2;
  uVar1 = uVar2 + param_2[6];
  uVar1 = uVar1 >> (-param_2[7] & 0x1fU) | uVar1 << 0x20 - (-param_2[7] & 0x1fU);
  uVar3 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) ^
           *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4)) -
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) +
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = uVar3 ^ param_2[8];
  uVar1 = uVar1 >> (-param_2[9] & 0x1fU) | uVar1 << 0x20 - (-param_2[9] & 0x1fU);
  uVar2 = *(uint *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar2 ^
          (*(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) -
          *(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4)) +
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4);
  uVar1 = param_2[10] - uVar2;
  uVar1 = uVar1 >> (-param_2[0xb] & 0x1fU) | uVar1 << 0x20 - (-param_2[0xb] & 0x1fU);
  uVar3 = (*(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = uVar3 + param_2[0xc];
  uVar1 = uVar1 >> (-param_2[0xd] & 0x1fU) | uVar1 << 0x20 - (-param_2[0xd] & 0x1fU);
  uVar2 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) ^
           *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4)) -
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) +
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar2;
  uVar1 = uVar2 ^ param_2[0xe];
  uVar1 = uVar1 >> (-param_2[0xf] & 0x1fU) | uVar1 << 0x20 - (-param_2[0xf] & 0x1fU);
  uVar3 = *(uint *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3 ^
          (*(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) -
          *(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4)) +
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4);
  uVar1 = param_2[0x10] - uVar3;
  uVar1 = uVar1 >> (-param_2[0x11] & 0x1fU) | uVar1 << 0x20 - (-param_2[0x11] & 0x1fU);
  uVar2 = (*(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) +
           *(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) -
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar2;
  uVar1 = uVar2 + param_2[0x12];
  uVar1 = uVar1 >> (-param_2[0x13] & 0x1fU) | uVar1 << 0x20 - (-param_2[0x13] & 0x1fU);
  uVar3 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4) ^
           *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4)) -
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4)) +
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar3;
  uVar1 = uVar3 ^ param_2[0x14];
  uVar1 = uVar1 >> (-param_2[0x15] & 0x1fU) | uVar1 << 0x20 - (-param_2[0x15] & 0x1fU);
  uVar1 = *(uint *)(PTR_DAT_047cd3e0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^ uVar2 ^
          (*(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar1 >> 8 & 0xff) * 4) -
          *(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar1 & 0xff) * 4)) +
          *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = param_2[0x16] - uVar1 >> (-param_2[0x17] & 0x1fU) |
          param_2[0x16] - uVar1 << 0x20 - (-param_2[0x17] & 0x1fU);
  uVar3 = (*(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar2 & 0xff) * 4) +
           *(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(PTR_DAT_047cd3d8 + (ulong)(uVar2 >> 0x18) * 4)) -
          *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
  if (param_2[0x20] == 0) {
    uVar2 = param_2[0x18] + uVar3 >> (-param_2[0x19] & 0x1fU) |
            param_2[0x18] + uVar3 << 0x20 - (-param_2[0x19] & 0x1fU);
    uVar1 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar2 & 0xff) * 4) ^
             *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
            *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar2 >> 0x18) * 4)) +
            *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar1;
    uVar2 = uVar1 ^ param_2[0x1a];
    uVar2 = uVar2 >> (-param_2[0x1b] & 0x1fU) | uVar2 << 0x20 - (-param_2[0x1b] & 0x1fU);
    uVar3 = *(uint *)(PTR_DAT_047cd3e0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3 ^
            (*(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar2 >> 8 & 0xff) * 4) -
            *(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar2 & 0xff) * 4)) +
            *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar2 >> 0x18) * 4);
    uVar2 = param_2[0x1c] - uVar3;
    uVar2 = uVar2 >> (-param_2[0x1d] & 0x1fU) | uVar2 << 0x20 - (-param_2[0x1d] & 0x1fU);
    uVar1 = (*(int *)(PTR_DAT_047cd3d0 + (ulong)(uVar2 & 0xff) * 4) +
             *(int *)(PTR_DAT_047cd3c8 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(PTR_DAT_047cd3d8 + (ulong)(uVar2 >> 0x18) * 4)) -
            *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar1;
    uVar2 = uVar1 + param_2[0x1e];
    uVar2 = uVar2 >> (-param_2[0x1f] & 0x1fU) | uVar2 << 0x20 - (-param_2[0x1f] & 0x1fU);
    *param_1 = ((*(uint *)(PTR_DAT_047cd3d0 + (ulong)(uVar2 & 0xff) * 4) ^
                *(uint *)(PTR_DAT_047cd3c8 + (ulong)(uVar2 >> 8 & 0xff) * 4)) -
               *(int *)(PTR_DAT_047cd3d8 + (ulong)(uVar2 >> 0x18) * 4)) +
               *(int *)(PTR_DAT_047cd3e0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^ uVar3;
    param_1[1] = uVar1;
    return;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}


