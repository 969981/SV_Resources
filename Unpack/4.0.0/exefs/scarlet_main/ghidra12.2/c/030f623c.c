/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f623c; name: FUN_030f623c
 */


uint * FUN_030f623c(long *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *param_2 * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
  while( true ) {
    uVar2 = *(uint *)(param_1[2] + uVar4 * 8 + 4);
    if ((int)uVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(param_1[2] + uVar4 * 8);
    if ((*puVar1 == uVar3) && (*(int *)(*param_1 + (ulong)uVar2 * 4) == *param_2)) break;
    uVar4 = uVar4 + 1 & (long)(int)*(uint *)(param_1 + 3);
  }
  return puVar1;
}


