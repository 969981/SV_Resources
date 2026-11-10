/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b2ea78; name: FUN_01b2ea78
 */


void FUN_01b2ea78(void)

{
  long lVar1;
  int iVar2;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840ed0), iVar2 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  lVar1 = DAT_04840ec0;
  DAT_04840ed8 = DAT_04840ec0;
  *(undefined8 *)(DAT_04840ec0 + 0x3c) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined4 *)(lVar1 + 0x38) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x4c) = 0xffffffff;
  return;
}


