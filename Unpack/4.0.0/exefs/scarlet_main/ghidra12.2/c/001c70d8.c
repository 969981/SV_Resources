/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c70d8; name: FUN_001c70d8
 */


void FUN_001c70d8(long param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = param_2[0xcc];
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x1100);
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_001dc298(param_1,5,2);
    }
    FUN_001c71bc(lVar3,param_2);
    if ((*(long *)(lVar3 + 8) == 0) && (lVar2 != 0)) {
      FUN_001c8d30(lVar2,auStack_58);
      do {
        lVar1 = FUN_001c8d40(auStack_58);
        if (lVar1 == 0) goto LAB_001c7138;
      } while (*(long *)(lVar1 + 0x18) != lVar3);
      FUN_001c8a64(lVar2,lVar1 + 0x28,*(undefined8 *)(lVar1 + 0x20));
    }
LAB_001c7138:
    param_2[0xcc] = 0;
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + -1;
    }
    *param_2 = 0;
    if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0xe8) != 0)) {
      FUN_001dc2d8(param_1,5);
    }
  }
  return;
}


