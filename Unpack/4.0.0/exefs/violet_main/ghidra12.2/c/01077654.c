/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01077654; name: FUN_01077654
 */


void FUN_01077654(undefined1 *param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar3 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar3;
  if ((((lVar3 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) || (iVar2 = FUN_00f21480(), iVar2 != 1))
     || (uVar1 = FUN_01077730(lVar3), (uVar1 & 0xff) == 0xfd)) {
    *param_1 = 0;
    return;
  }
  iVar2 = DAT_04839748 << 2;
  DAT_04839748 = DAT_04839748 + 1;
  *(ushort *)(param_1 + 2) = uVar1 & 3 | (ushort)iVar2;
  *param_1 = 1;
  return;
}


