/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f8278; name: FUN_021f8278
 */


undefined1 FUN_021f8278(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*PTR_DAT_047d89b0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d89b0);
    if (iVar3 != 0) {
      FUN_00100190(PTR_LAB_047dcbf0,PTR_DAT_047d89b8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d89b0);
    }
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d89b8;
  *(undefined8 *)PTR_DAT_047d89c0 = uVar4;
  iVar3 = FUN_00cf50d0(uVar4,param_1);
  uVar1 = iVar3 - 0x1a;
  if (((uVar1 & 0xffff) < 0x1a) && ((0x200ffffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    uVar2 = (&DAT_03d62ffc)[*(long *)(&DAT_03d630c8 + (long)(short)uVar1 * 8) * 4];
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


