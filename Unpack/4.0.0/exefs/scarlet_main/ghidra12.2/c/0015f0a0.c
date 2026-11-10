/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015f0a0; name: FUN_0015f0a0
 */


void FUN_0015f0a0(uint *param_1,ulong param_2,void *param_3,ulong param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  
  if ((param_5 & 1) == 0) {
    memset(param_3,0,-(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2);
  }
  puVar5 = (uint *)((long)param_1 + (param_2 & 0xfffffffffffffffc));
  puVar1 = (uint *)((long)param_1 + param_2);
  for (; param_1 < puVar5; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    lVar4 = ((ulong)uVar2 & 0xff) * 4;
    *(int *)((long)param_3 + lVar4) = *(int *)((long)param_3 + lVar4) + 1;
    lVar4 = ((ulong)(uVar2 >> 8) & 0xff) * 4;
    *(int *)((long)param_3 + lVar4) = *(int *)((long)param_3 + lVar4) + 1;
    lVar4 = ((ulong)(uVar2 >> 0x10) & 0xff) * 4;
    *(int *)((long)param_3 + lVar4) = *(int *)((long)param_3 + lVar4) + 1;
    uVar3 = (ulong)(uVar2 >> 0x16) & 0x3fc;
    *(int *)((long)param_3 + uVar3) = *(int *)((long)param_3 + uVar3) + 1;
  }
  if (param_1 < puVar1) {
    do {
      puVar5 = (uint *)((long)param_1 + 1);
      lVar4 = (ulong)(byte)*param_1 * 4;
      *(int *)((long)param_3 + lVar4) = *(int *)((long)param_3 + lVar4) + 1;
      param_1 = puVar5;
    } while (puVar1 != puVar5);
  }
  return;
}


