/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124bd5c; name: FUN_0124bd5c
 */


void FUN_0124bd5c(long param_1,long *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  
  bVar2 = FUN_0123e154(*(undefined8 *)(param_1 + 0x18));
  pbVar1 = (byte *)(param_1 + 0xc476);
  *pbVar1 = bVar2;
  if (bVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_0123e15c(*(undefined8 *)(param_1 + 0x18),uVar4 & 0xffffffff);
      *(undefined1 *)(param_1 + 0xc477 + uVar4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *pbVar1);
  }
  *param_2 = (long)pbVar1;
  *param_3 = 0xc;
  return;
}


