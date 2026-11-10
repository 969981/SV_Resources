/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02012c18; name: FUN_02012c18
 */


uint FUN_02012c18(void)

{
  uint uVar1;
  int iVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840ed0), iVar2 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  DAT_04840ed8 = DAT_04840ec0;
  local_30 = *(undefined8 *)(DAT_04840ec0 + 0x68);
  uStack_28 = *(undefined8 *)(DAT_04840ec0 + 0x70);
  local_20 = *(undefined8 *)(DAT_04840ec0 + 0x78);
  uStack_18 = 0;
  uVar1 = FUN_00d1e340(&local_30);
  return uVar1 & 1;
}


