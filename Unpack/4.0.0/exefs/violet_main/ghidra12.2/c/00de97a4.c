/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de97a4; name: FUN_00de97a4
 */


void FUN_00de97a4(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_04839790 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04839790), iVar2 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    return;
  }
  lVar5 = *(long *)(DAT_04839780 + 0x4058);
  lVar3 = *(long *)(DAT_04839780 + 0x4060);
  if (lVar5 != lVar3) {
    if (*(long *)(lVar5 + 8) != *param_1) {
      do {
        lVar4 = lVar5 + 0xb0;
        if (lVar3 == lVar4) {
          lVar5 = lVar3;
          break;
        }
        plVar1 = (long *)(lVar5 + 0xb8);
        lVar5 = lVar4;
      } while (*plVar1 != *param_1);
    }
  }
  if (lVar3 == lVar5) {
    return;
  }
  lVar3 = DAT_04839780 + 0x4058;
  if (*(long *)(lVar5 + 0x68) != 0) {
    FUN_00de9fbc();
  }
  FUN_00de98c8(lVar3,lVar5);
  return;
}


