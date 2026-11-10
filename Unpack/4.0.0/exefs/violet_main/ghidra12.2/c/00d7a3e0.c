/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7a3e0; name: FUN_00d7a3e0
 */


long * FUN_00d7a3e0(void)

{
  int iVar1;
  long *plVar2;
  
  if (((DAT_0483b1e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b1e0), iVar1 != 0)) {
    FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483b1e0);
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  plVar2 = (long *)(DAT_0483b1d0 + 0x58);
  if ((*plVar2 == 0) || (*(short *)(*plVar2 + 0x1a) == 0)) {
    if (((DAT_0483b1e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483b1e0), iVar1 != 0)) {
      FUN_00100190(&LAB_02a42184,&DAT_0483b1d0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483b1e0);
    }
    plVar2 = (long *)(DAT_0483b1d0 + 0x48);
  }
  DAT_0483b1e8 = DAT_0483b1d0;
  return plVar2;
}


