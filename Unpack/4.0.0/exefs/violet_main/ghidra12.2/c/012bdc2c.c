/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bdc2c; name: FUN_012bdc2c
 */


void FUN_012bdc2c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d8c58 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c58);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c58);
    }
  }
  uVar4 = FUN_012c27c8(param_1);
  puVar2 = PTR_DAT_047d8c60;
  FUN_012cac58(PTR_DAT_047d8c60,uVar4);
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


