/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021737ec; name: FUN_021737ec
 */


int FUN_021737ec(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  uVar3 = FUN_021739cc();
  if (param_3 != (byte *)0x0) {
    *param_3 = (byte)(uVar3 >> 9) & 1;
  }
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar5 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar5;
  iVar4 = *(int *)(lVar5 + 0x2b0);
  if (4 < iVar4 - 2U) {
    return 0;
  }
  uVar2 = uVar3 >> 0x12 & 7;
  uVar1 = uVar3 & 3;
  uVar3 = uVar3 >> 2 & 7;
  switch(iVar4) {
  case 2:
    return uVar3 + uVar2 * 2;
  case 3:
    iVar4 = uVar2 * 4 + uVar1 * 2;
    break;
  default:
    iVar4 = (uVar1 | uVar1 << 2) + uVar2 * 10;
    break;
  case 5:
    return uVar2 * 3 + uVar1;
  }
  return iVar4 + uVar3;
}


