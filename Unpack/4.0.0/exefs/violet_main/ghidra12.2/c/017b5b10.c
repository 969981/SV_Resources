/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b5b10; name: FUN_017b5b10
 */


undefined8 FUN_017b5b10(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_04839660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839660), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  DAT_04839648 = DAT_04839650;
  if (((DAT_04839650 != 0) && (*(uint *)(DAT_04839650 + 0x30) < 2)) &&
     (*(long *)(DAT_04839650 + 0x40) != 0)) {
    lVar2 = *(long *)(DAT_04839650 + 0x40);
    if (*(short *)(*(long *)(DAT_04839650 + 0x40) + 0x1a) == 0) {
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      if (lVar2 == 0) {
        return 0;
      }
      lVar3 = *(long *)(lVar2 + 0x10);
      if (((lVar3 != 0) && (*(char *)(lVar3 + 0x98) != '\0')) && (*(long *)(lVar3 + 0xa0) != 0)) {
        return 1;
      }
    }
    if (((*(short *)(lVar2 + 0x1a) != 0) && (*(long *)(DAT_04839650 + 0x40) != 0)) &&
       (*(long *)(*(long *)(DAT_04839650 + 0x40) + 0x10) != 0)) {
      *(undefined8 *)(DAT_04839650 + 0x30) = 2;
      return 1;
    }
  }
  DAT_04839648 = DAT_04839650;
  return 0;
}


