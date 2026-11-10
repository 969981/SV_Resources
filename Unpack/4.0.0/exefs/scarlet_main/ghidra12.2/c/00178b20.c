/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00178b20; name: FUN_00178b20
 */


void FUN_00178b20(long *param_1,byte *param_2,long param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_4 != 0) {
    uVar2 = param_1[2];
    lVar4 = param_1[3];
    lVar1 = param_1[1];
    uVar5 = uVar2 << (lVar4 + 1U & 0x3f);
    puVar3 = (ulong *)(*param_1 + ((long)(0x3fU - lVar4) >> 3));
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    *(ulong *)*param_1 = uVar5 >> 0x20 | uVar5 << 0x20;
    lVar4 = (0x3fU - lVar4 & 0xfffffffffffffff8) + lVar4;
    if (0 < param_3) {
      do {
        lVar4 = lVar4 - (int)param_4;
        uVar2 = uVar2 << ((ulong)param_4 & 0x3f) | (ulong)*param_2;
        uVar5 = uVar2 << (lVar4 + 1U & 0x3f);
        uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        *puVar3 = uVar5 >> 0x20 | uVar5 << 0x20;
        puVar3 = (ulong *)((long)puVar3 + ((long)(0x3fU - lVar4) >> 3));
        lVar4 = (0x3fU - lVar4 & 0xfffffffffffffff8) + lVar4;
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    param_1[2] = uVar2;
    param_1[3] = lVar4;
    *param_1 = (long)puVar3;
    param_1[1] = lVar1;
  }
  return;
}


