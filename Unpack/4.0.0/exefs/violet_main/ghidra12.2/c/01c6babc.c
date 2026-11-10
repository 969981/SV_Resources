/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6babc; name: FUN_01c6babc
 */


void FUN_01c6babc(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_048398e8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_048398e8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048398e8);
    }
  }
  lVar1 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(DAT_048398d8 + 0xaa8);
    param_1[3] = *(undefined8 *)(DAT_048398d8 + 0xab8);
    uVar3 = *(undefined8 *)(lVar1 + 0xab0);
    *param_1 = *(undefined8 *)(lVar1 + 0xaa0);
    param_1[1] = uVar4;
    param_1[2] = uVar3;
  }
  return;
}


