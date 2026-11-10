/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cdbcc; name: FUN_007cdbcc
 */


void FUN_007cdbcc(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    bVar4 = true;
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    uVar2 = FUN_0078cdf4();
    bVar4 = (uVar2 & 1) == 0;
    if (!bVar4) {
      *(undefined1 *)(*(long *)(param_1 + 0x48) + 0x90) = 1;
    }
    lVar3 = *(long *)(param_1 + 0x50);
  }
  if ((lVar3 != 0) && (uVar2 = FUN_0078cdf4(), (uVar2 & 1) != 0)) {
    FUN_007ce650(*(undefined8 *)(param_1 + 0x50));
    bVar4 = false;
  }
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar2 = FUN_0078cdf4(), (uVar2 & 1) != 0)) {
    FUN_007ce650(*(undefined8 *)(param_1 + 0x30));
    bVar4 = false;
  }
  if ((*(long **)(param_1 + 0x18) != (long *)0x0) &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x198))(), (uVar2 & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 400))();
    bVar4 = false;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    bVar1 = FUN_0078cdf4();
    bVar4 = (bool)(bVar4 & (bVar1 ^ 1));
  }
  if ((*(long *)(param_1 + 0x10) == 0) || (bVar4 == false)) {
    return;
  }
  FUN_007d5464();
  return;
}


