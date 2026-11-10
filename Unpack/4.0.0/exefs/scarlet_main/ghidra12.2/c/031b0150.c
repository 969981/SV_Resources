/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b0150; name: FUN_031b0150
 */


uint * FUN_031b0150(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar3 = (param_1 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_1 * -0x61c8864f & 0xff00ffU) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = (param_2 * -0x61c8864f & 0xff00ff00U) >> 8 | (param_2 * -0x61c8864f & 0xff00ffU) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar3 = uVar4 + uVar3 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar3;
  uVar5 = (ulong)(DAT_0487e9f0 & uVar3);
  uVar4 = *(uint *)(DAT_0487e9e8 + uVar5 * 8 + 4);
  while( true ) {
    if ((int)uVar4 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(DAT_0487e9e8 + uVar5 * 8);
    if ((*puVar1 == uVar3) &&
       (piVar2 = (int *)(DAT_0487e9d8 + (ulong)uVar4 * 0x20),
       *piVar2 == param_1 && piVar2[1] == param_2)) break;
    uVar5 = uVar5 + 1 & (long)(int)DAT_0487e9f0;
    uVar4 = *(uint *)(DAT_0487e9e8 + uVar5 * 8 + 4);
  }
  return puVar1;
}


