/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ddc800; name: FUN_00ddc800
 */


long FUN_00ddc800(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != param_2) && (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x20))) {
    lVar4 = param_1;
    do {
      if (param_2 + -0x28 == lVar4) {
        return param_2;
      }
      param_1 = lVar4 + 0x28;
      plVar1 = (long *)(lVar4 + 0x40);
      lVar4 = param_1;
    } while (*plVar1 != *(long *)(param_3 + 0x20));
  }
  lVar4 = param_1;
  if (param_1 != param_2) {
    while (lVar3 = lVar4, lVar4 = lVar3 + 0x28, lVar4 != param_2) {
      if (*(long *)(lVar3 + 0x40) != *(long *)(param_3 + 0x20)) {
        FUN_00c96b7c(param_1,lVar4);
        uVar2 = *(undefined8 *)(lVar3 + 0x38);
        uVar5 = *(undefined8 *)(lVar3 + 0x48);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar3 + 0x40);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        param_1 = param_1 + 0x28;
      }
    }
  }
  return param_1;
}


