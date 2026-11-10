/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336f75c; name: FUN_0336f75c
 */


uint * FUN_0336f75c(long *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  uVar2 = *param_2 * -0x61c8864f;
  uVar3 = param_2[1] * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  lVar4 = param_1[2];
  uVar2 = uVar3 + uVar2 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar2;
  uVar5 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar4 + uVar5 * 8);
    if ((*puVar1 == uVar2) &&
       (piVar6 = (int *)(*param_1 + (ulong)uVar3 * 0xc),
       *piVar6 == *param_2 && piVar6[1] == param_2[1])) break;
    uVar5 = uVar5 + 1 & (long)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar4 + uVar5 * 8 + 4);
  }
  return puVar1;
}


