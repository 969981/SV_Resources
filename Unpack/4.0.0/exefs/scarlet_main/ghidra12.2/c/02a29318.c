/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a29318; name: FUN_02a29318
 */


void FUN_02a29318(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
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
    if (plVar2 == plVar1) goto LAB_02a29388;
    lVar5 = *plVar2;
    uVar4 = FUN_02a1360c(lVar5 + 0x28);
    plVar2 = plVar2 + 1;
  } while ((uVar4 & 1) == 0);
  *(undefined1 *)(lVar5 + 0x40) = 1;
LAB_02a29388:
  FUN_02a299b4(param_1,1);
  return;
}


