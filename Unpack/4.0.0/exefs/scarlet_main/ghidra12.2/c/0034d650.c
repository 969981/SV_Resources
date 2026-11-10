/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034d650; name: FUN_0034d650
 */


undefined8 FUN_0034d650(long *param_1,uint param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_047cc628;
  if ((*param_1 == *(long *)(*(long *)PTR_DAT_047cc628 + 0xc40)) ||
     (iVar2 = FUN_00368130(param_1,*(long *)PTR_DAT_047cc628 + 0xc40), iVar2 == 0)) {
    uVar3 = ~param_2 & 1;
  }
  else {
    if ((*param_1 != *(long *)(*(long *)puVar1 + 0x4e0)) &&
       (iVar2 = FUN_00368130(param_1,*(long *)puVar1 + 0x4e0), iVar2 != 0)) {
      return 0;
    }
    uVar3 = 2;
    if ((param_2 & 1) == 0) {
      uVar3 = 3;
    }
  }
  *param_3 = uVar3;
  return 1;
}


