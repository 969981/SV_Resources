/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ecbe4; name: FUN_020ecbe4
 */


void FUN_020ecbe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (((DAT_04840858 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04840858), iVar4 != 0)) {
    FUN_00100190(&LAB_02af32dc,&DAT_04840848,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840858);
  }
  lVar3 = DAT_04840848;
  DAT_04840840 = DAT_04840848;
  pcVar5 = *(code **)(DAT_04840848 + 0xb8);
  puVar1 = (undefined8 *)(DAT_04840848 + 0xb0);
  if (pcVar5 != (code *)0x0) {
    lVar2 = DAT_04840848 + 0xd0;
    *(undefined8 *)(DAT_04840848 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 200) = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 0;
    (*pcVar5)(lVar2);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,lVar3 + 0xd0);
    uVar6 = param_1[3];
    *(undefined8 *)(lVar3 + 0xb8) = param_1[1];
    *(undefined8 *)(lVar3 + 200) = uVar6;
    uVar6 = *param_1;
    *(undefined8 *)(lVar3 + 0xc0) = param_1[2];
    *puVar1 = uVar6;
  }
  return;
}


