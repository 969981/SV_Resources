/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020de818; name: FUN_020de818
 */


void FUN_020de818(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (((*PTR_DAT_047d8aa8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8aa8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dcb40,PTR_DAT_047d8ab0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8aa8);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8ab0;
  *(undefined8 *)PTR_DAT_047d8ab8 = uVar2;
  FUN_00f0630c(uVar2,lVar3 + 0x120,lVar3);
  *(undefined1 *)(lVar3 + 0x140) = 0;
  return;
}


