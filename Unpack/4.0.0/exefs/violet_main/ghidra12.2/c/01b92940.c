/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b92940; name: FUN_01b92940
 */


ulong FUN_01b92940(void)

{
  int iVar1;
  long lVar2;
  
  if (((DAT_0483adf8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483adf8), iVar1 != 0)) {
    FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483adf8);
  }
  DAT_0483ae00 = DAT_0483ade8;
  lVar2 = *(long *)(*(long *)(DAT_0483ade8 + 0x218) + 0x98);
  return (ulong)(*(long *)(lVar2 + 0x40) - *(long *)(lVar2 + 0x38)) >> 3;
}


