/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0042b9b0; name: FUN_0042b9b0
 */


void FUN_0042b9b0(uint *param_1,uint *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_3;
  uVar5 = param_2[8];
  uVar1 = param_2[1] * uVar6 + (*param_2 * uVar6 >> 0x1c);
  uVar2 = param_2[9] * uVar6 + (uVar5 * uVar6 >> 0x1c);
  *param_1 = (uint)(*param_2 * uVar6) & 0xfffffff;
  param_1[1] = (uint)uVar1 & 0xfffffff;
  param_1[8] = (uint)(uVar5 * uVar6) & 0xfffffff;
  param_1[9] = (uint)uVar2 & 0xfffffff;
  uVar1 = param_2[2] * uVar6 + (uVar1 >> 0x1c);
  uVar2 = param_2[10] * uVar6 + (uVar2 >> 0x1c);
  uVar3 = param_2[3] * uVar6 + (uVar1 >> 0x1c);
  uVar4 = param_2[0xb] * uVar6 + (uVar2 >> 0x1c);
  param_1[2] = (uint)uVar1 & 0xfffffff;
  param_1[3] = (uint)uVar3 & 0xfffffff;
  param_1[10] = (uint)uVar2 & 0xfffffff;
  param_1[0xb] = (uint)uVar4 & 0xfffffff;
  uVar1 = param_2[4] * uVar6 + (uVar3 >> 0x1c);
  uVar2 = param_2[0xc] * uVar6 + (uVar4 >> 0x1c);
  uVar3 = param_2[5] * uVar6 + (uVar1 >> 0x1c);
  uVar4 = param_2[0xd] * uVar6 + (uVar2 >> 0x1c);
  param_1[4] = (uint)uVar1 & 0xfffffff;
  param_1[5] = (uint)uVar3 & 0xfffffff;
  param_1[0xc] = (uint)uVar2 & 0xfffffff;
  param_1[0xd] = (uint)uVar4 & 0xfffffff;
  uVar1 = param_2[6] * uVar6 + (uVar3 >> 0x1c);
  uVar2 = param_2[0xe] * uVar6 + (uVar4 >> 0x1c);
  uVar3 = param_2[7] * uVar6 + (uVar1 >> 0x1c);
  uVar4 = param_2[0xf] * uVar6 + (uVar2 >> 0x1c);
  param_1[6] = (uint)uVar1 & 0xfffffff;
  param_1[7] = (uint)uVar3 & 0xfffffff;
  uVar6 = uVar4 >> 0x1c;
  param_1[0xe] = (uint)uVar2 & 0xfffffff;
  param_1[0xf] = (uint)uVar4 & 0xfffffff;
  uVar1 = uVar6 + (uVar3 >> 0x1c) + (ulong)param_1[8];
  param_1[8] = (uint)uVar1 & 0xfffffff;
  param_1[9] = param_1[9] + (int)(uVar1 >> 0x1c);
  uVar6 = uVar6 + *param_1;
  *param_1 = (uint)uVar6 & 0xfffffff;
  param_1[1] = param_1[1] + (int)(uVar6 >> 0x1c);
  return;
}


