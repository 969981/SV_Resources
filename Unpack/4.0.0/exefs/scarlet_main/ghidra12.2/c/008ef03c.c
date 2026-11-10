/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ef03c; name: FUN_008ef03c
 */


void FUN_008ef03c(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar3) != '\0') {
        lVar1 = *(long *)(param_1 + 0x38) + lVar3;
        FUN_008f1c84(lVar1,param_2);
        FUN_008f1bd4(lVar1);
      }
      lVar3 = lVar3 + 0x78;
    } while ((ulong)bVar2 * 0x78 != lVar3);
  }
  return;
}


