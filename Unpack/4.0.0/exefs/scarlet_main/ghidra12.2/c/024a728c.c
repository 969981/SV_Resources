/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a728c; name: FUN_024a728c
 */


void FUN_024a728c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined1 *local_48;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    if (*(long *)(lVar3 + 0xf0) != 0) {
      lVar2 = lVar3 + *(long *)(lVar3 + 0xf0) * 0x18;
    }
    if (lVar2 != lVar3) {
      do {
        local_48 = auStack_68;
        FUN_024a73d8(auStack_60,lVar3,&local_48);
        local_48 = auStack_68;
        uVar1 = FUN_024a6c60(lVar3,&local_48);
        if ((uVar1 & 1) != 0) {
          if (*(char *)(param_1 + 0x18) != '\0') {
            *(undefined1 *)(param_1 + 0x18) = 0;
            FUN_024a65bc(param_1,param_2);
          }
          FUN_024a73f4(auStack_60,&local_48);
          return;
        }
        FUN_024a7410(param_3,auStack_60);
        FUN_024a73f4(auStack_60,&local_48);
        lVar2 = *(long *)(param_1 + 0x20);
        lVar3 = lVar3 + 0x18;
        if (*(long *)(lVar2 + 0xf0) != 0) {
          lVar2 = lVar2 + *(long *)(lVar2 + 0xf0) * 0x18;
        }
      } while (lVar3 != lVar2);
    }
  }
  return;
}


