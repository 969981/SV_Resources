/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ce20; name: FUN_0034ce20
 */


undefined8 FUN_0034ce20(long *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047cc628;
  if ((*param_1 == *(long *)(*(long *)PTR_DAT_047cc628 + 0xc40)) ||
     (iVar2 = FUN_00368130(param_1,*(long *)PTR_DAT_047cc628 + 0xc40), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)puVar1;
    if ((*param_1 == *(long *)(lVar4 + 0x4c0)) ||
       (iVar2 = FUN_00368130(param_1,lVar4 + 0x4c0), iVar2 == 0)) {
      uVar3 = 1;
    }
    else {
      lVar4 = *(long *)puVar1;
      if ((*param_1 != *(long *)(lVar4 + 0x4e0)) &&
         (iVar2 = FUN_00368130(param_1,lVar4 + 0x4e0), iVar2 != 0)) {
        return 0;
      }
      uVar3 = 2;
    }
  }
  *param_2 = uVar3;
  return 1;
}


