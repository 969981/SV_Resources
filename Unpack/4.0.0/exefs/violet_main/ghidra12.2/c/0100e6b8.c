/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100e6b8; name: FUN_0100e6b8
 */


void FUN_0100e6b8(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_18;
  
  if ((*PTR_DAT_047d4df8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047d4df8);
    if (iVar1 != 0) {
      FUN_00100190(param_1,PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
  }
  lVar2 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar2;
  local_18 = *(undefined8 *)(lVar2 + (long)param_4 * 8 + 0x28);
  FUN_00de1c30(param_1,param_2 + 0x40,param_3,&local_18);
  return;
}


