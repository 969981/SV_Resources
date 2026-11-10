/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322be48; name: FUN_0322be48
 */


void FUN_0322be48(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    uVar2 = 0;
    do {
      lVar1 = uVar3 - uVar2;
      if (uVar3 < uVar2 || lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        break;
      }
      lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
                        (*(long **)(param_1 + 0x18),*(long *)(param_1 + 0x20) + uVar2,lVar1);
      uVar2 = lVar1 + uVar2;
    } while (lVar1 != 0);
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0322beb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
      return;
    }
  }
  return;
}


