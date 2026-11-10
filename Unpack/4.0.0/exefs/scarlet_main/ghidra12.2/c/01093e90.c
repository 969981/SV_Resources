/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01093e90; name: FUN_01093e90
 */


uint FUN_01093e90(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04840ed0), iVar3 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  lVar1 = DAT_04840ec0;
  DAT_04840ed8 = DAT_04840ec0;
  local_40 = *(undefined8 *)(DAT_04840ec0 + 0x68);
  uStack_38 = *(undefined8 *)(DAT_04840ec0 + 0x70);
  local_30 = *(undefined8 *)(DAT_04840ec0 + 0x78);
  uStack_28 = 0;
  uVar4 = FUN_00d1e340(&local_40);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    local_40 = *(undefined8 *)(lVar1 + 0x68);
    uStack_38 = *(undefined8 *)(lVar1 + 0x70);
    local_30 = *(undefined8 *)(lVar1 + 0x78);
    uStack_28 = 0;
    uVar2 = FUN_00fe21e0(&local_40);
  }
  return uVar2 & 1;
}


