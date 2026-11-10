/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01741fec; name: FUN_01741fec
 */


void FUN_01741fec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d7940 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d7940);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02b72d48,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
  }
  uVar4 = FUN_017470c4(param_1);
  puVar2 = PTR_DAT_047d7948;
  FUN_0174221c(PTR_DAT_047d7948,uVar4);
  lVar1 = 0;
  if (*(long *)puVar2 != 0) {
    lVar1 = *(long *)puVar2 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


