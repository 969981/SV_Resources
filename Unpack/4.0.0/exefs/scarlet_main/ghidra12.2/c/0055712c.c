/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0055712c; name: FUN_0055712c
 */


void FUN_0055712c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        puVar1 = (undefined8 *)(lVar3 + -0x18);
        lVar2 = lVar3 + -0x20;
        lVar3 = lVar3 + -0x28;
        FUN_01f6f680(lVar2,*puVar1);
      } while (lVar4 != lVar3);
      lVar3 = *(long *)(param_1 + 0x58);
    }
    *(long *)(param_1 + 0x60) = lVar4;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar3,*(long *)(param_1 + 0x68) - lVar3,8);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_01cfa44c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005571d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


