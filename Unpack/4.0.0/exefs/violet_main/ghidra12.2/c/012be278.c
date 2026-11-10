/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012be278; name: FUN_012be278
 */


void FUN_012be278(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047e2400 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047e2400);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02c7b564,PTR_DAT_047e2408,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e2400);
    }
  }
  uVar4 = FUN_012beea0(param_1,param_2);
  puVar2 = PTR_DAT_047e2408;
  FUN_012cb3f8(PTR_DAT_047e2408,uVar4);
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


