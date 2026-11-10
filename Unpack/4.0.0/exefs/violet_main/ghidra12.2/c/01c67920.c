/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c67920; name: FUN_01c67920
 */


undefined4 FUN_01c67920(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_04839720 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839720), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1b6d8,&DAT_04839710,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839720);
  }
  DAT_04839708 = DAT_04839710;
  if ((DAT_04839710 == 0) || (*(char *)(DAT_04839710 + 0x39) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_04839710 + 0x48);
  }
  return uVar1;
}


