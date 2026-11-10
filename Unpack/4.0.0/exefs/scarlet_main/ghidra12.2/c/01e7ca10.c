/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7ca10; name: FUN_01e7ca10
 */


void FUN_01e7ca10(void *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (((DAT_0483adf8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483adf8), iVar3 != 0)) {
    FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adf8);
  }
  DAT_0483ae00 = DAT_0483ade8;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar5 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar5;
  plVar1 = *(long **)(lVar5 + 0x1c8);
  plVar2 = *(long **)(lVar5 + 0x1c0);
  do {
    if (plVar2 == plVar1) {
      return;
    }
    lVar5 = *plVar2;
    uVar4 = FUN_02a1360c(lVar5 + 0x28);
    plVar2 = plVar2 + 1;
  } while ((uVar4 & 1) == 0);
  memcpy(*(void **)(lVar5 + 0xb8),param_1,0x300);
  return;
}


