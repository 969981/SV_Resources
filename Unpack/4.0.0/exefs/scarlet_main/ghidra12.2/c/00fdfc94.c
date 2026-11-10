/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdfc94; name: FUN_00fdfc94
 */


undefined8 FUN_00fdfc94(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((((*(char *)(param_1 + 0x40) != '\0') && (lVar2 = *(long *)(param_1 + 0x28), lVar2 != 0)) &&
      (*(long *)(lVar2 + 0x50) != 0)) && (*(int *)(lVar2 + 0x40) == 0)) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    uVar1 = FUN_00fdfd20();
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x3c) = 0x20;
    lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar1,0x20);
    *(long *)(param_1 + 0x30) = lVar2;
    if (lVar2 != 0) {
      uVar3 = FUN_00fdfed8(*(undefined8 *)(param_1 + 0x28),lVar2,*(undefined4 *)(param_1 + 0x38));
      return uVar3;
    }
  }
  return 0;
}


