/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec28f0; name: FUN_01ec28f0
 */


void FUN_01ec28f0(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if ((lVar5 == 0) || (uVar3 = FUN_019d8b40(lVar5), (uVar3 & 1) == 0)) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_01077730(lVar5);
    uVar4 = (uint)DAT_04839bf0;
    DAT_04839bf0 = DAT_04839bf0 + 1;
    *(uint *)(param_1 + 2) = uVar1 & 0xff | uVar4 << 0x10;
    *param_1 = 1;
  }
  return;
}


