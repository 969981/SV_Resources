/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0311a404; name: FUN_0311a404
 */


uint * FUN_0311a404(long *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (param_2[1] << 5 ^ *param_2 << 0x1b ^ param_2[2]) * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (ulong)(uVar4 & *(uint *)(param_1 + 3));
  do {
    uVar3 = *(uint *)(param_1[2] + uVar5 * 8 + 4);
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(param_1[2] + uVar5 * 8);
    if (*puVar1 == uVar4) {
      if (((*(int *)(*param_1 + (ulong)uVar3 * 0x10) == *param_2) &&
          (lVar2 = *param_1 + (ulong)uVar3 * 0x10, *(int *)(lVar2 + 4) == param_2[1])) &&
         (*(uint *)(lVar2 + 8) == param_2[2])) {
        return puVar1;
      }
    }
    uVar5 = uVar5 + 1 & (long)(int)*(uint *)(param_1 + 3);
  } while( true );
}


