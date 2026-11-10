/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0cf88; name: FUN_00b0cf88
 */


void FUN_00b0cf88(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_38 [24];
  
  if (((DAT_04839420 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839420), iVar2 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  lVar1 = DAT_04839410;
  DAT_04839408 = DAT_04839410;
  if (DAT_04839410 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *(undefined8 *)(DAT_04839410 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0xc0) = 0;
    FUN_01e999f4(auStack_38,0xc);
    FUN_01e9583c(param_1,auStack_38);
    FUN_00d8e444(auStack_38);
  }
  return;
}


