/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02793068; name: FUN_02793068
 */


undefined8 FUN_02793068(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar4 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar4;
  if ((lVar4 == 0) || (*(char *)(param_1 + 0x1b8) == '\0')) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x9c) != '\0') && (*(uint *)(param_1 + 0xa0) < 2)) {
    uVar2 = FUN_0278dcb8(param_1 + 0xa8);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_027938a4(param_1 + 0xa8);
      FUN_027938ac(lVar4,uVar3,0xfc);
      goto LAB_0279310c;
    }
  }
  FUN_027938dc(lVar4);
LAB_0279310c:
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  return 1;
}


