/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ca10; name: FUN_0034ca10
 */


undefined8 FUN_0034ca10(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047cc628;
  if (*param_1 == *(long *)(*(long *)PTR_DAT_047cc628 + 0xc40)) {
    return 0;
  }
  uVar3 = FUN_00368130(param_1,*(long *)PTR_DAT_047cc628 + 0xc40);
  if ((int)uVar3 != 0) {
    lVar4 = *(long *)puVar1;
    if ((*param_1 == *(long *)(lVar4 + 0x4c0)) ||
       (iVar2 = FUN_00368130(param_1,lVar4 + 0x4c0), iVar2 == 0)) {
      return 1;
    }
    lVar4 = *(long *)puVar1;
    if ((*param_1 == *(long *)(lVar4 + 0x4e0)) ||
       (iVar2 = FUN_00368130(param_1,lVar4 + 0x4e0), iVar2 == 0)) {
      return 2;
    }
    uVar3 = 3;
  }
  return uVar3;
}


