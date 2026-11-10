/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c1198; name: FUN_012c1198
 */


void FUN_012c1198(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_048638a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048638a8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02c7b5ec,&DAT_04863898,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048638a8);
    }
  }
  uVar3 = FUN_012c23fc(param_1);
  FUN_012cc338(&DAT_04863898,uVar3);
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar1 = 0;
  if (DAT_04863898 != 0) {
    lVar1 = DAT_04863898 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar1;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


