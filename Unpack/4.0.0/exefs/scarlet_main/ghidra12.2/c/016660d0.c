/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016660d0; name: FUN_016660d0
 */


void FUN_016660d0(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_2 + 0xa8) = 0;
  if (*(char *)(param_2 + 0xa6) != '\0') {
    uVar3 = 0;
    do {
      *(char *)(param_2 + 0xa8) = (char)uVar3 + '\x01';
      plVar2 = *(long **)(param_2 + uVar3 * 8);
      if (plVar2 == (long *)0x0) {
        return;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = (**(code **)(*plVar2 + 0x98))();
      uVar3 = FUN_012493a0(uVar4,uVar1);
      if ((uVar3 & 1) != 0) {
        FUN_0166616c(*(undefined8 *)(param_1 + 0x20),7,param_3);
        return;
      }
      uVar3 = (ulong)*(byte *)(param_2 + 0xa8);
    } while (*(byte *)(param_2 + 0xa8) < *(byte *)(param_2 + 0xa6));
  }
  return;
}


