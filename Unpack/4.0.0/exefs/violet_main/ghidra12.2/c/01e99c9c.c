/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e99c9c; name: FUN_01e99c9c
 */


long FUN_01e99c9c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_8 [8];
  
  if (((DAT_04839660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839660,param_1), iVar2 != 0))
  {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  uVar3 = FUN_01e99d44(auStack_8,param_1);
  FUN_01e99ea4(&DAT_04839650,uVar3);
  lVar1 = 0;
  if (DAT_04839650 != 0) {
    lVar1 = DAT_04839650 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839650;
}


