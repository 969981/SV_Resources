/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c76564; name: FUN_01c76564
 */


void FUN_01c76564(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (((DAT_04839928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839928), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1ce58,&DAT_04839918,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839928);
  }
  lVar3 = DAT_04839918;
  DAT_04839910 = DAT_04839918;
  if (DAT_04839918 != 0) {
    pcVar5 = *(code **)(DAT_04839918 + 0x298);
    puVar1 = (undefined8 *)(DAT_04839918 + 0x290);
    if (pcVar5 != (code *)0x0) {
      lVar2 = DAT_04839918 + 0x2b0;
      *(undefined8 *)(DAT_04839918 + 0x2a0) = 0;
      *(undefined8 *)(lVar3 + 0x2a8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x298) = 0;
      (*pcVar5)(lVar2);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar3 + 0x2b0);
      uVar6 = param_1[3];
      *(undefined8 *)(lVar3 + 0x298) = param_1[1];
      *(undefined8 *)(lVar3 + 0x2a8) = uVar6;
      uVar6 = *param_1;
      *(undefined8 *)(lVar3 + 0x2a0) = param_1[2];
      *puVar1 = uVar6;
    }
  }
  return;
}


