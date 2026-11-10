/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020049e0; name: FUN_020049e0
 */


void FUN_020049e0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((*PTR_DAT_047d7d30 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7d30);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
    }
  }
  plVar4 = (long *)PTR_DAT_047d7d40;
  plVar3 = (long *)PTR_DAT_047d7d38;
  puVar1 = PTR_DAT_047d7d30;
  lVar5 = *(long *)PTR_DAT_047d7d38;
  *(long *)PTR_DAT_047d7d40 = lVar5;
  DAT_0456f834 = *(float *)(lVar5 + 0x3e0);
  DAT_0456f858 = DAT_0456f834 + 2.0;
  DAT_0456f838 = *(undefined4 *)(lVar5 + 0x3e4);
  DAT_0456f854 = DAT_0456f834;
  if ((*puVar1 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_047d7d30);
    plVar3 = (long *)PTR_DAT_047d7d38;
    plVar4 = (long *)PTR_DAT_047d7d40;
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7d30);
      plVar3 = (long *)PTR_DAT_047d7d38;
      plVar4 = (long *)PTR_DAT_047d7d40;
    }
  }
  lVar5 = *plVar3;
  *plVar4 = lVar5;
  DAT_0456f844 = *(float *)(lVar5 + 0x3d8);
  DAT_0456f848 = *(undefined4 *)(lVar5 + 0x3dc);
  DAT_0456f864 = DAT_0456f844;
  DAT_0456f868 = DAT_0456f844 + 2.0;
  return;
}


