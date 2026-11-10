/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b5178; name: FUN_019b5178
 */


undefined8 FUN_019b5178(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  if (((DAT_04839660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839660), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  lVar1 = DAT_04839650;
  DAT_04839648 = DAT_04839650;
  if (DAT_04839650 != 0) {
    uVar3 = *(uint *)(DAT_04839650 + 0x30);
    if (uVar3 == 5) {
      if ((((*(long *)(DAT_04839650 + 0x40) != 0) &&
           (*(short *)(*(long *)(DAT_04839650 + 0x40) + 0x1a) != 0)) &&
          (*(long *)(DAT_04839650 + 0x40) != 0)) &&
         (lVar4 = *(long *)(*(long *)(DAT_04839650 + 0x40) + 0x10), lVar4 != 0)) {
        FUN_01e9a5ec(lVar4 + -0x28);
      }
      uVar3 = *(uint *)(lVar1 + 0x30);
    }
    if (1 < uVar3) {
      return 0;
    }
    if (((*(long *)(lVar1 + 0x40) != 0) && (*(short *)(*(long *)(lVar1 + 0x40) + 0x1a) != 0)) &&
       ((*(long *)(lVar1 + 0x40) != 0 &&
        (lVar4 = *(long *)(*(long *)(lVar1 + 0x40) + 0x10), lVar4 != 0)))) {
      FUN_01e9a5ec(lVar4 + -0x28);
    }
    *(undefined4 *)(lVar1 + 0x30) = 0x18;
  }
  return 1;
}


