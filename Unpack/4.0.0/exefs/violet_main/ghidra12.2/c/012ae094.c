/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012ae094; name: FUN_012ae094
 */


void FUN_012ae094(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04842058 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04842058);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02b6f1ec,&DAT_04842048,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04842058);
    }
  }
  uVar3 = FUN_012b3690(param_1);
  FUN_012aede0(&DAT_04842048,uVar3);
  lVar1 = 0;
  if (DAT_04842048 != 0) {
    lVar1 = DAT_04842048 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return;
}


