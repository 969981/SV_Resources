/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034cad0; name: FUN_0034cad0
 */


undefined8 FUN_0034cad0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_047cc628;
  if (*param_1 == *(long *)(*(long *)PTR_DAT_047cc628 + 0xc40)) {
    return 0;
  }
  uVar3 = FUN_00368130(param_1,*(long *)PTR_DAT_047cc628 + 0xc40);
  if ((int)uVar3 != 0) {
    if ((*param_1 == *(long *)(*(long *)puVar1 + 0x4e0)) ||
       (iVar2 = FUN_00368130(param_1,*(long *)puVar1 + 0x4e0), iVar2 == 0)) {
      return 1;
    }
    uVar3 = 2;
  }
  return uVar3;
}


