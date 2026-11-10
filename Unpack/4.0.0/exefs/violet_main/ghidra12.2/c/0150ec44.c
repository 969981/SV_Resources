/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0150ec44; name: FUN_0150ec44
 */


void FUN_0150ec44(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_8 [8];
  
  if (((*PTR_DAT_047d8af8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8af8,param_1), iVar3 != 0)) {
    FUN_00100190(&LAB_00a2f26c,PTR_DAT_047d8b00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8af8);
  }
  uVar4 = FUN_0150ed0c(auStack_8,param_1);
  puVar2 = PTR_DAT_047d8b00;
  FUN_0150f250(PTR_DAT_047d8b00,uVar4);
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


