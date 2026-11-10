/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d1a240; name: FUN_00d1a240
 */


void FUN_00d1a240(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *param_1 = (long)&PTR_LAB_045e95a0;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045e9618;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x81) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 1;
  param_1[0x12] = 0;
  plVar5 = param_1 + 5;
  *plVar5 = (long)&DAT_045e9740;
  param_1[0x14] = 0;
  param_1[6] = (long)&PTR_LAB_045e9798;
  param_1[7] = (long)&PTR_LAB_045e97c0;
  param_1[0x13] = 0;
  FUN_00d1a3f4(param_1 + 0x13,plVar5);
  *param_1 = (long)&DAT_045e9280;
  param_1[4] = (long)&PTR_LAB_045e93c0;
  *plVar5 = (long)&DAT_045e94e8;
  param_1[0x15] = 0;
  param_1[6] = (long)&PTR_LAB_045e9540;
  param_1[7] = (long)&PTR_LAB_045e9568;
  *(undefined4 *)((long)param_1 + 0xbc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x16,0,1);
  *(undefined4 *)(param_1 + 0x22) = param_2;
  param_1[0x1e] = (long)&DAT_cbf29ce484222645;
  param_1[0x1f] = (long)&DAT_03c886bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x11c) = 1;
  return;
}


