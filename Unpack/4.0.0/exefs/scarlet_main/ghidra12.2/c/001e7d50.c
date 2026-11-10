/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e7d50; name: FUN_001e7d50
 */


uint FUN_001e7d50(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (((*(byte *)(*(long *)(param_2 + 0x420) + 0x80) & 3) == 0) ||
     (((*(uint *)(param_2 + 0x3fc) ^ 0xffffffff) & 0x1001) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_001cf51c(*(undefined8 *)(param_1 + 0xd8),1);
    if ((((uVar2 & 1) == 0) || (*(long *)(param_1 + 0xa40) == 1)) ||
       ((*(int *)(param_1 + 0xa38) != 6 && (*(int *)(param_1 + 0xa38) != 1)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    uVar2 = FUN_001cf51c(*(undefined8 *)(param_1 + 0xd8),2);
    if ((uVar2 & 1) != 0) {
      uVar1 = uVar3 | 2;
      if (*(long *)(param_1 + 0xa40) < 3) {
        uVar1 = uVar3;
      }
      return uVar1;
    }
  }
  return uVar3;
}


