/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175d978; name: FUN_0175d978
 */


void FUN_0175d978(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047dd2e8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047dd2e8);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dd9c8,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047dd2e8);
    }
  }
  uVar4 = FUN_0175df58(param_1);
  puVar2 = PTR_DAT_047dd2f0;
  FUN_0175f490(PTR_DAT_047dd2f0,uVar4);
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


