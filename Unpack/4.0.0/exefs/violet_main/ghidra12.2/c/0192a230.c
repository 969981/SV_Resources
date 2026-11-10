/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192a230; name: FUN_0192a230
 */


void FUN_0192a230(undefined1 param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  
  if ((DAT_04839cb0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04839cb0);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839cb0);
    }
  }
  lVar2 = DAT_04839ca0;
  DAT_04839c98 = DAT_04839ca0;
  if ((DAT_04839ca0 != 0) &&
     (pcVar1 = (char *)(DAT_04839ca0 + 0x1fe), *(undefined1 *)(DAT_04839ca0 + 0x1ff) = param_1,
     *pcVar1 == '\0')) {
    *(undefined1 *)(lVar2 + 0x1fe) = 1;
  }
  return;
}


