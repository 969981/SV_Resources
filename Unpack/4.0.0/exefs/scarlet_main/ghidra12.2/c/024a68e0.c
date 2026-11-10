/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a68e0; name: FUN_024a68e0
 */


undefined8 FUN_024a68e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined1 *local_38;
  
  lVar3 = param_1;
  if (*(long *)(param_1 + 0xf0) != 0) {
    lVar3 = param_1 + *(long *)(param_1 + 0xf0) * 0x18;
  }
  if (lVar3 != param_1) {
    lVar3 = param_1;
    do {
      local_38 = auStack_40;
      uVar2 = FUN_024a6c60(lVar3,&local_38);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar3 = lVar3 + 0x18;
      lVar1 = param_1;
      if (*(long *)(param_1 + 0xf0) != 0) {
        lVar1 = param_1 + *(long *)(param_1 + 0xf0) * 0x18;
      }
    } while (lVar3 != lVar1);
  }
  return 0;
}


