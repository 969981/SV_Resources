/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3d8ec; name: FUN_02a3d8ec
 */


void FUN_02a3d8ec(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_2;
  if ((*PTR_DAT_047d8c40 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d8c40);
    uVar2 = param_2 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c40);
      uVar2 = param_2 & 0xffffffff;
    }
  }
  lVar3 = *(long *)PTR_DAT_047d8c48;
  *(long *)PTR_DAT_047d8c50 = lVar3;
  FUN_02c74330(lVar3 + 0x30,uVar2);
  return;
}


