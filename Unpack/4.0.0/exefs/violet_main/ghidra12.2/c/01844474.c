/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01844474; name: FUN_01844474
 */


void FUN_01844474(long *param_1,byte param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (((DAT_04839790 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04839790), iVar1 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 != 0) {
    lVar2 = *(long *)(DAT_04839780 + 0x4058);
    lVar3 = *(long *)(DAT_04839780 + 0x4060);
    if (lVar2 == lVar3) {
LAB_018444b4:
      if (lVar2 != lVar3) {
        *(byte *)(lVar2 + 0x80) = param_2 & 1;
        *(undefined1 *)(lVar2 + 0xac) = 1;
      }
    }
    else {
      do {
        if (*(long *)(lVar2 + 8) == *param_1) goto LAB_018444b4;
        lVar2 = lVar2 + 0xb0;
      } while (lVar3 != lVar2);
    }
  }
  return;
}


