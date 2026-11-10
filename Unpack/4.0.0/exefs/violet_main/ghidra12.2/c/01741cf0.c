/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01741cf0; name: FUN_01741cf0
 */


void FUN_01741cf0(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_01741fec();
  if (((*PTR_DAT_047d7940 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar1 != 0))
  {
    FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7940);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d7948;
  *(undefined8 *)PTR_DAT_047d7950 = uVar2;
  FUN_017435b8(uVar2,param_2 & 1);
  return;
}


