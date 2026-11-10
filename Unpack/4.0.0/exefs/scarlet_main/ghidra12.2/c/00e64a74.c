/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e64a74; name: FUN_00e64a74
 */


void FUN_00e64a74(void)

{
  int iVar1;
  
  if (((*PTR_DAT_047e0da8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e0ec8,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0da8);
  }
  *(undefined8 *)PTR_DAT_047e0db8 = *(undefined8 *)PTR_DAT_047e0db0;
  FUN_00e64be0();
  if (((*PTR_DAT_047e0ea0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e0ea0), iVar1 != 0))
  {
    FUN_00100190(&LAB_02bb7238,PTR_DAT_047e0ea8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0ea0);
  }
  *(undefined8 *)PTR_DAT_047e0eb0 = *(undefined8 *)PTR_DAT_047e0ea8;
  FUN_00e65224();
  (**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x28))();
  FUN_00e64d28(*(undefined8 *)(DAT_0485a0a0 + 0x70),0);
  if (((*PTR_DAT_047e0d80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e0d80), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e0d98,PTR_DAT_047e0d88,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e0d80);
  }
  *(undefined8 *)PTR_DAT_047e0d90 = *(undefined8 *)PTR_DAT_047e0d88;
  FUN_00e64f50();
  return;
}


