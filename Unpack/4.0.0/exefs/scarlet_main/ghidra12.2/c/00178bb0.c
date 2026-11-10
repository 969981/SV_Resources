/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00178bb0; name: FUN_00178bb0
 */


void FUN_00178bb0(long *param_1,byte *param_2,byte *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = param_1[2];
  lVar5 = param_1[3];
  puVar4 = (ulong *)*param_1;
  lVar1 = param_1[1];
  uVar3 = uVar2 << (lVar5 + 1U & 0x3f);
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
  puVar4 = (ulong *)((long)puVar4 + ((long)(0x3fU - lVar5) >> 3));
  lVar5 = (0x3fU - lVar5 & 0xfffffffffffffff8) + lVar5;
  if (0 < param_4) {
    do {
      lVar5 = lVar5 - (ulong)*param_3;
      uVar2 = uVar2 << ((ulong)*param_3 & 0x3f) | (ulong)*param_2;
      uVar3 = uVar2 << (lVar5 + 1U & 0x3f);
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      *puVar4 = uVar3 >> 0x20 | uVar3 << 0x20;
      puVar4 = (ulong *)((long)puVar4 + ((long)(0x3fU - lVar5) >> 3));
      lVar5 = (0x3fU - lVar5 & 0xfffffffffffffff8) + lVar5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  param_1[2] = uVar2;
  param_1[3] = lVar5;
  *param_1 = (long)puVar4;
  param_1[1] = lVar1;
  return;
}


