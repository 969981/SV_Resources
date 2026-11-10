/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01416b64; name: FUN_01416b64
 */


void FUN_01416b64(long param_1,int param_2,int param_3,uint *param_4,byte param_5)

{
  long lVar1;
  byte bVar2;
  float fVar3;
  
  *(uint **)(param_1 + 0x60) = param_4;
  *(uint **)(param_1 + 0x68) = param_4;
  fVar3 = -5250.0;
  if (param_3 != 0 || 9 < param_2) {
    fVar3 = (float)-param_3 * 500.0 + -250.0;
  }
  *(int *)(param_1 + 0x2c) = param_2 % 10;
  *(int *)(param_1 + 0x30) = param_3;
  *(byte *)(param_1 + 0x58) = param_5 & 1;
  *(ulong *)(param_1 + 0x48) = (ulong)(uint)fVar3;
  *(ulong *)(param_1 + 0x40) = (ulong)(uint)((float)(param_2 % 10) * 500.0 + 250.0);
  *(uint *)(param_1 + 0x50) = param_4[2];
  param_4 = (uint *)((long)param_4 + (ulong)param_4[1] + (ulong)*param_4);
  *(uint **)(param_1 + 0x70) = param_4;
  param_4 = (uint *)((long)param_4 + (ulong)param_4[1] + (ulong)*param_4);
  *(uint **)(param_1 + 0x78) = param_4;
  bVar2 = *(byte *)((long)param_4 + 0x12);
  *(uint *)(param_1 + 0x54) = (uint)bVar2;
  switch(bVar2) {
  case 0:
    *(uint **)(param_1 + 0x80) = param_4 + 0x10;
    break;
  case 1:
    *(uint **)(param_1 + 0x88) = param_4 + 0x10;
    break;
  case 2:
    *(uint **)(param_1 + 0x90) = param_4 + 0x10;
    break;
  case 3:
    *(uint **)(param_1 + 0x98) = param_4 + 0x10;
  }
  lVar1 = (long)param_4 + (ulong)param_4[1] + (ulong)*param_4;
  *(long *)(param_1 + 0xa0) = lVar1;
  *(long *)(param_1 + 0xa8) = lVar1 + 0x40;
  return;
}


