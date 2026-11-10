/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e5f6f4; name: FUN_01e5f6f4
 */


undefined8 FUN_01e5f6f4(ushort *param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
  lVar2 = FUN_01e5f7a8();
  uVar3 = 0;
  if ((1 < param_2) && (lVar2 != 0)) {
    FUN_017d0b00(lVar2,*param_1 >> 8 | *param_1 << 8,param_1 + 1);
    uVar3 = 1;
  }
  return uVar3;
}


