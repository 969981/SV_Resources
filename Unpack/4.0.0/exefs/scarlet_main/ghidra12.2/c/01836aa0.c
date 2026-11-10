/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01836aa0; name: FUN_01836aa0
 */


void FUN_01836aa0(long *param_1,undefined8 param_2)

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
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&PTR_FUN_04553db0;
  param_1[4] = (long)&PTR_LAB_04553e28;
  *plVar5 = (long)&PTR_LAB_04553e78;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_00d4ca00(param_1 + 8,param_2);
  memset(param_1 + 10,0,0x204);
  lVar3 = param_1[1];
  param_1[0x4e] = lVar3;
  param_1[0x55] = lVar3;
  param_1[0x5c] = lVar3;
  param_1[99] = lVar3;
  param_1[0x4f] = 0x3333333333333333;
  param_1[0x5d] = 0x3333333333333333;
  param_1[0x50] = 0;
  param_1[100] = 0x5555555555555555;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0xccccccccccccccc;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = (long)&DAT_cbf29ce484222645;
  param_1[0x69] = (long)&DAT_03c886bc;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = (long)&DAT_cbf29ce484222645;
  param_1[0x6d] = (long)&DAT_03c886bc;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  return;
}


