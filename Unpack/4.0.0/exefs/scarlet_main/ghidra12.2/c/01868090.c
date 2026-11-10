/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01868090; name: FUN_01868090
 */


void FUN_01868090(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839b78), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  lVar3 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 != 0) {
    pcVar5 = *(code **)(DAT_04839b68 + 0x248);
    puVar1 = (undefined8 *)(DAT_04839b68 + 0x240);
    if (pcVar5 != (code *)0x0) {
      lVar2 = DAT_04839b68 + 0x260;
      *(undefined8 *)(DAT_04839b68 + 0x250) = 0;
      *(undefined8 *)(lVar3 + 600) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x248) = 0;
      (*pcVar5)(lVar2);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar3 + 0x260);
      uVar6 = param_1[3];
      *(undefined8 *)(lVar3 + 0x248) = param_1[1];
      *(undefined8 *)(lVar3 + 600) = uVar6;
      uVar6 = *param_1;
      *(undefined8 *)(lVar3 + 0x250) = param_1[2];
      *puVar1 = uVar6;
    }
  }
  return;
}


