/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008eea8c; name: FUN_008eea8c
 */


void FUN_008eea8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008eef3c(*(long *)(param_1 + 0x38) + lVar2,param_2);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x6a);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008efcd4(*(long *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008efaa8(*(long *)(param_1 + 0x20) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x58;
    } while ((ulong)uVar1 * 0x58 != lVar2);
  }
  return;
}


