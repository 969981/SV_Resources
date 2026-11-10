/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ca61c; name: FUN_034ca61c
 */


undefined8 FUN_034ca61c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*(int *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0x108) == 0)) {
    lVar5 = *(long *)PTR_DAT_047e70e8;
    if (*(char *)(lVar5 + 0xf0) == '\0') {
      uVar4 = FUN_03469170(lVar5,(undefined8 *)(param_1 + 0xf8));
      return uVar4;
    }
    puVar3 = (undefined8 *)
             FUN_03469004(lVar5 + 0xe0,*(undefined8 *)(param_1 + 0xf8),
                          *(undefined8 *)(param_1 + 0x100));
    if (puVar3 == (undefined8 *)0x0) {
      return 0x34;
    }
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    puVar3[2] = *(undefined8 *)(param_1 + 0x108);
    puVar3[3] = uVar2;
    *puVar3 = uVar4;
    puVar3[1] = uVar1;
  }
  return 1;
}


