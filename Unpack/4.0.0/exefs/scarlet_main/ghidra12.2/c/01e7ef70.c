/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7ef70; name: FUN_01e7ef70
 */


void FUN_01e7ef70(long *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  
  uVar7 = *(undefined8 *)(param_2 + 8);
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  puVar2 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar5;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar8 = param_1 + 5;
  *plVar8 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar8);
  *param_1 = (long)&DAT_045521e0;
  param_1[4] = (long)&PTR_LAB_04552288;
  *plVar8 = (long)&PTR_LAB_045522d8;
  FUN_00ddaef8(param_1 + 8,uVar7,0);
  *(undefined4 *)(param_1 + 9) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  *param_1 = (long)&DAT_04552450;
  param_1[4] = (long)&PTR_LAB_045524f8;
  param_1[5] = (long)&PTR_LAB_04552548;
  uVar1 = *param_3;
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0xe);
    lVar4 = param_4[3];
    param_1[0xb] = param_4[1];
    param_1[0xd] = lVar4;
    lVar4 = *param_4;
    param_1[0xc] = param_4[2];
    param_1[10] = lVar4;
  }
  param_1[0x1c] = param_1[1];
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = param_1[1];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x22] = 0x1fffffffffffffff;
  param_1[0x23] = 0;
  return;
}


