/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc01b0; name: FUN_01dc01b0
 */


void FUN_01dc01b0(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_130 [272];
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  uVar2 = *(undefined8 *)PTR_DAT_047d8558;
  *(undefined8 *)PTR_DAT_047d8560 = uVar2;
  memcpy(auStack_130,param_1,0x110);
  FUN_01dc025c(uVar2,auStack_130);
  return;
}


