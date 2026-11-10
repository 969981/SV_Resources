/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00820dd0; name: FUN_00820dd0
 */


uint FUN_00820dd0(uint param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = param_2;
  pbVar2 = param_2;
  switch(param_3 & 0xf) {
  case 0:
    goto switchD_00820e08_caseD_0;
  case 0xc:
    pbVar3 = param_2 + 4;
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 8:
    param_2 = pbVar3 + 4;
    param_1 = param_1 + *(int *)pbVar3 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 4:
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
    goto switchD_00820e08_caseD_0;
  case 0xd:
    pbVar3 = param_2 + 4;
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 9:
    param_2 = pbVar3 + 4;
    param_1 = param_1 + *(int *)pbVar3 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 5:
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (uint)param_2[4] * 0x165667b1 + (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
    break;
  case 0xe:
    pbVar3 = param_2 + 4;
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 10:
    param_2 = pbVar3 + 4;
    param_1 = param_1 + *(int *)pbVar3 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 6:
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    uVar1 = (uint)param_2[4] * 0x165667b1 + (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
    param_1 = (uint)param_2[5] * 0x165667b1 + (uVar1 >> 0x15 | uVar1 * 0x800) * -0x61c8864f;
    break;
  case 0xf:
    pbVar2 = param_2 + 4;
    param_1 = param_1 + *(int *)param_2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 0xb:
    pbVar3 = pbVar2 + 4;
    param_1 = param_1 + *(int *)pbVar2 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 7:
    param_2 = pbVar3 + 4;
    param_1 = param_1 + *(int *)pbVar3 * -0x3d4d51c3;
    param_1 = (param_1 >> 0xf | param_1 * 0x20000) * 0x27d4eb2f;
  case 3:
    pbVar3 = param_2 + 1;
    param_1 = param_1 + (uint)*param_2 * 0x165667b1;
    param_1 = (param_1 >> 0x15 | param_1 * 0x800) * -0x61c8864f;
  case 2:
    param_2 = pbVar3 + 1;
    param_1 = param_1 + (uint)*pbVar3 * 0x165667b1;
    param_1 = (param_1 >> 0x15 | param_1 * 0x800) * -0x61c8864f;
  case 1:
    param_1 = param_1 + (uint)*param_2 * 0x165667b1;
  }
  param_1 = (param_1 >> 0x15 | param_1 << 0xb) * -0x61c8864f;
switchD_00820e08_caseD_0:
  uVar1 = (param_1 ^ param_1 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  return uVar1 ^ uVar1 >> 0x10;
}


