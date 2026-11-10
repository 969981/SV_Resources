/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123e08c; name: FUN_0123e08c
 */


void FUN_0123e08c(long param_1,long *param_2,undefined4 *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  long lVar5;
  
  pbVar2 = (byte *)(param_1 + 0xc476);
  bVar3 = FUN_0123e154(*(undefined8 *)(param_1 + 0x18));
  *pbVar2 = bVar3;
  if (bVar3 != 0) {
    uVar4 = FUN_0123e15c(*(undefined8 *)(param_1 + 0x18),0);
    *(undefined1 *)(param_1 + 0xc477) = uVar4;
    if (1 < *pbVar2) {
      uVar4 = FUN_0123e15c(*(undefined8 *)(param_1 + 0x18),1);
      *(undefined1 *)(param_1 + 0xc478) = uVar4;
      if (2 < *pbVar2) {
        lVar5 = 0;
        do {
          uVar4 = FUN_0123e15c(*(undefined8 *)(param_1 + 0x18),(int)lVar5 + 2);
          *(undefined1 *)(param_1 + 0xc479 + lVar5) = uVar4;
          uVar1 = lVar5 + 3;
          lVar5 = lVar5 + 1;
        } while (uVar1 < *pbVar2);
      }
    }
  }
  *param_2 = (long)pbVar2;
  *param_3 = 0xc;
  return;
}


