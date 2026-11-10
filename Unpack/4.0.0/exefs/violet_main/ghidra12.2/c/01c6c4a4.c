/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c6c4a4; name: FUN_01c6c4a4
 */


void FUN_01c6c4a4(undefined8 *param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 uVar4;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048398e8), iVar3 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  DAT_048398d0 = DAT_048398d8;
  if (((DAT_048398d8 == 0) || (3 < param_2)) ||
     (lVar1 = DAT_048398d8 + (long)(int)param_2 * 0x10,
     *(short *)(DAT_048398d8 + (long)(int)param_2 * 0xc + 0x104) != *(short *)(lVar1 + 0x134))) {
    uVar4 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x13c);
    *param_1 = *(undefined8 *)(lVar1 + 0x134);
    param_1[1] = uVar2;
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}


