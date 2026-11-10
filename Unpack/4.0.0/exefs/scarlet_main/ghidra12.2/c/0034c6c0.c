/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034c6c0; name: FUN_0034c6c0
 */


undefined8 FUN_0034c6c0(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_047cc628;
  if ((*param_1 == *(long *)(*(long *)PTR_DAT_047cc628 + 0xc40)) ||
     (iVar2 = FUN_00368130(param_1,*(long *)PTR_DAT_047cc628 + 0xc40), iVar2 == 0)) {
    uVar3 = 0;
  }
  else if ((*param_1 == *(long *)(*(long *)puVar1 + 0x4c0)) ||
          (iVar2 = FUN_00368130(param_1,*(long *)puVar1 + 0x4c0), iVar2 == 0)) {
    uVar3 = 1;
  }
  else if ((*param_1 == *(long *)(*(long *)puVar1 + 0x4e0)) ||
          (iVar2 = FUN_00368130(param_1,*(long *)puVar1 + 0x4e0), iVar2 == 0)) {
    uVar3 = 2;
  }
  else {
    if ((*param_1 != *(long *)(*(long *)puVar1 + 0x500)) &&
       (iVar2 = FUN_00368130(param_1,*(long *)puVar1 + 0x500), iVar2 != 0)) {
      return 0;
    }
    uVar3 = 3;
  }
  *param_2 = uVar3;
  return 1;
}


