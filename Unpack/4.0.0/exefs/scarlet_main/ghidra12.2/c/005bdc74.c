/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005bdc74; name: FUN_005bdc74
 */


void FUN_005bdc74(long param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0xb0);
    if (lVar3 == lVar4) {
      lVar3 = lVar4;
    }
    else {
      do {
        lVar3 = lVar3 + -0xa8;
        FUN_005bdd78(lVar3);
      } while (lVar4 != lVar3);
      lVar3 = *(long *)(param_1 + 0xa8);
    }
    *(long *)(param_1 + 0xb0) = lVar4;
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))
              (*(long **)(param_1 + 0xc0),lVar3,*(long *)(param_1 + 0xb8) - lVar3,8);
  }
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x80),
               *(ulong *)(param_1 + 0x70) & 0xfffffffffffffffe,1);
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    cVar2 = *(char *)(param_1 + 0x28);
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
              (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x60),
               *(ulong *)(param_1 + 0x50) & 0xfffffffffffffffe,1);
    cVar2 = *(char *)(param_1 + 0x28);
  }
  if (cVar2 != '\0') {
    FUN_01cfa44c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005bdd74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
             *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,1);
  return;
}


