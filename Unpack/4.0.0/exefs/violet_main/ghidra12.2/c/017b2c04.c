/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b2c04; name: FUN_017b2c04
 */


void FUN_017b2c04(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_8 [8];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98,param_1), iVar3 != 0)) {
    FUN_00100190(&LAB_00a2f2f4,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  uVar4 = FUN_017b2ccc(auStack_8,param_1);
  puVar2 = PTR_DAT_047d4ca0;
  FUN_017b37e4(PTR_DAT_047d4ca0,uVar4);
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar1;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


