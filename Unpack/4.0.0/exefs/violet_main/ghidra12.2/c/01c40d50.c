/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c40d50; name: FUN_01c40d50
 */


undefined8 FUN_01c40d50(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (((DAT_04839660 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839660), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1a5bc,&DAT_04839650,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839660);
  }
  lVar1 = DAT_04839650;
  DAT_04839648 = DAT_04839650;
  if (((((DAT_04839650 == 0) || (1 < *(uint *)(DAT_04839650 + 0x30))) ||
       (*(long *)(DAT_04839650 + 0x40) == 0)) ||
      ((*(short *)(*(long *)(DAT_04839650 + 0x40) + 0x1a) == 0 ||
       (lVar5 = *(long *)(DAT_04839650 + 0x40), lVar5 == 0)))) || (*(long *)(lVar5 + 0x10) == 0)) {
    uVar3 = 0;
  }
  else {
    if (((*(short *)(lVar5 + 0x1a) == 0) || (*(long *)(DAT_04839650 + 0x40) == 0)) ||
       (lVar5 = *(long *)(*(long *)(DAT_04839650 + 0x40) + 0x10), lVar5 == 0)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 2;
      if ((*(char *)(lVar5 + 0x98) != '\0') && (uVar4 = 2, *(long *)(lVar5 + 0xa0) != 0)) {
        uVar4 = 6;
      }
    }
    uVar3 = 1;
    *(undefined4 *)(DAT_04839650 + 0x30) = uVar4;
    *(undefined4 *)(lVar1 + 0x34) = 3;
  }
  return uVar3;
}


