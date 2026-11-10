/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6b97c; name: FUN_01c6b97c
 */


void FUN_01c6b97c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048398e8), iVar3 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar2 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if ((((DAT_048398d8 != 0) && (*(long *)(DAT_048398d8 + 0x38) != 0)) &&
      (lVar5 = *(long *)(*(long *)(DAT_048398d8 + 0x38) + 0x10), lVar5 != 0)) &&
     (uVar4 = FUN_00ea2b08(lVar5 + -0x28), (uVar4 & 1) != 0)) {
    uVar1 = param_1[1];
    *(undefined8 *)(lVar2 + 0xaa0) = *param_1;
    *(undefined8 *)(lVar2 + 0xaa8) = uVar1;
    if (*(char *)(lVar2 + 0xab0) == '\0') {
      *(undefined1 *)(lVar2 + 0xab0) = 1;
    }
  }
  return;
}


