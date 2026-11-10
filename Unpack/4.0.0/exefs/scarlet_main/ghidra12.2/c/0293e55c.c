/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293e55c; name: FUN_0293e55c
 */


void FUN_0293e55c(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  *param_2 = 0;
  if (*param_3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = (long *)FUN_014813f4(param_1,*(undefined4 *)(param_3 + uVar5 * 4 + 4));
      uVar3 = (**(code **)(*plVar2 + 0x200))();
      if ((uVar3 & 1) == 0) {
        uVar4 = FUN_01243584(param_1);
        bVar1 = FUN_029842b4(uVar4,*(undefined4 *)(param_3 + uVar5 * 4 + 4));
        *param_2 = *param_2 | bVar1 & 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_3);
  }
  return;
}


