/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c7746c; name: FUN_01c7746c
 */


void FUN_01c7746c(undefined8 *param_1)

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
    pcVar5 = *(code **)(DAT_04839918 + 0x398);
    puVar1 = (undefined8 *)(DAT_04839918 + 0x390);
    if (pcVar5 != (code *)0x0) {
      lVar2 = DAT_04839918 + 0x3b0;
      *(undefined8 *)(DAT_04839918 + 0x3a0) = 0;
      *(undefined8 *)(lVar3 + 0x3a8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x398) = 0;
      (*pcVar5)(lVar2);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar3 + 0x3b0);
      uVar6 = param_1[3];
      *(undefined8 *)(lVar3 + 0x398) = param_1[1];
      *(undefined8 *)(lVar3 + 0x3a8) = uVar6;
      uVar6 = *param_1;
      *(undefined8 *)(lVar3 + 0x3a0) = param_1[2];
      *puVar1 = uVar6;
    }
  }
  return;
}


