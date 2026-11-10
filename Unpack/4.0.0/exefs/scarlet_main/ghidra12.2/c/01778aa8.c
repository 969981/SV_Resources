/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01778aa8; name: FUN_01778aa8
 */


undefined8 FUN_01778aa8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*PTR_DAT_047d8950 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d8950);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047d8df8,PTR_DAT_047d8958,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8950);
    }
  }
  uVar4 = FUN_01778c00(param_1);
  puVar2 = PTR_DAT_047d8958;
  FUN_01778b50(PTR_DAT_047d8958,uVar4);
  lVar5 = *(long *)puVar2;
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return *(undefined8 *)puVar2;
}


