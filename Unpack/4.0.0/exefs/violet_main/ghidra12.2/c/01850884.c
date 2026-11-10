/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01850884; name: FUN_01850884
 */


void FUN_01850884(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_18;
  
  if (((DAT_04840ed0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04840ed0), iVar2 != 0)) {
    FUN_00100190(&LAB_02b28d28,&DAT_04840ec0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840ed0);
  }
  lVar1 = DAT_04840ec0;
  DAT_04840ed8 = DAT_04840ec0;
  plVar4 = (long *)(DAT_04840ec0 + 0x50);
  if (*plVar4 == 0) {
    uVar3 = FUN_01851000(*(undefined8 *)(DAT_04840ec0 + 8));
    FUN_01850adc(&local_18,uVar3);
    FUN_01850964(plVar4,0);
    uVar3 = local_18;
    local_18 = 0;
    *(undefined8 *)(lVar1 + 0x50) = uVar3;
    FUN_018509a0(&local_18);
    FUN_01850a18(param_1,*(undefined8 *)(lVar1 + 0x50));
    return;
  }
  FUN_01850a18(param_1);
  return;
}


