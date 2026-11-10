/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bdd10; name: FUN_027bdd10
 */


undefined ** FUN_027bdd10(void)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  
  if (((DAT_047ed390 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_047ed390), iVar1 == 0)) {
    return DAT_047ed388;
  }
  plVar2 = (long *)FUN_00249380();
  uVar3 = (**(code **)(*plVar2 + 0x28))();
  if (uVar3 < 0x1000) {
    if (((DAT_047ed370 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed370), iVar1 != 0)) {
      __cxa_guard_release(&DAT_047ed370);
    }
    DAT_047ed388 = &PTR_PTR_0448abf8;
  }
  else if (((DAT_047ed368 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_047ed368), iVar1 != 0)) {
    __cxa_guard_release(&DAT_047ed368);
    DAT_047ed388 = &PTR_PTR_0448abf0;
  }
  else {
    DAT_047ed388 = &PTR_PTR_0448abf0;
  }
  __cxa_guard_release(&DAT_047ed390);
  return DAT_047ed388;
}


