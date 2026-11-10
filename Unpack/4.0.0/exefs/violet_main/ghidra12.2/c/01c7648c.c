/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c7648c; name: FUN_01c7648c
 */


void FUN_01c7648c(undefined8 *param_1)

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
    pcVar5 = *(code **)(DAT_04839918 + 0x218);
    puVar1 = (undefined8 *)(DAT_04839918 + 0x210);
    if (pcVar5 != (code *)0x0) {
      lVar2 = DAT_04839918 + 0x230;
      *(undefined8 *)(DAT_04839918 + 0x220) = 0;
      *(undefined8 *)(lVar3 + 0x228) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x218) = 0;
      (*pcVar5)(lVar2);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar3 + 0x230);
      uVar6 = param_1[3];
      *(undefined8 *)(lVar3 + 0x218) = param_1[1];
      *(undefined8 *)(lVar3 + 0x228) = uVar6;
      uVar6 = *param_1;
      *(undefined8 *)(lVar3 + 0x220) = param_1[2];
      *puVar1 = uVar6;
    }
  }
  return;
}


