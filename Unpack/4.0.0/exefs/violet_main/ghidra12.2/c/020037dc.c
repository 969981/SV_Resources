/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020037dc; name: FUN_020037dc
 */


undefined8 FUN_020037dc(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  *(undefined8 *)PTR_DAT_047d9220 = *(undefined8 *)PTR_DAT_047d9218;
  lVar2 = FUN_02003870();
  if (lVar2 != 0) {
    FUN_02003954(lVar2,*param_2,param_2[1]);
  }
  return 1;
}


