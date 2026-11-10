/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6aa00; name: FUN_01c6aa00
 */


void FUN_01c6aa00(undefined1 *param_1)

{
  void *__src;
  int iVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048398e8), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 != 0) {
    __src = (void *)(DAT_048398d8 + 0x178);
    uVar2 = FUN_01eafda8(__src);
    if ((uVar2 & 1) == 0) {
      memcpy(param_1,__src,0x918);
      uVar3 = 1;
      goto LAB_01c6aa4c;
    }
  }
  uVar3 = 0;
  *param_1 = 0;
LAB_01c6aa4c:
  param_1[0x918] = uVar3;
  return;
}


