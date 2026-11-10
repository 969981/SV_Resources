/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01100c60; name: FUN_01100c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01100c60(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar3 = PTR_DAT_047d8c78;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar3 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar3 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  lVar2 = _UNK_03cabe68;
  lVar1 = _DAT_03cabe60;
  lVar6 = DAT_03cab628;
  lVar5 = DAT_03cab620;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xed) = 0;
  param_1[9] = lVar6;
  param_1[8] = lVar5;
  param_1[0xb] = lVar2;
  param_1[10] = lVar1;
  lVar2 = _UNK_03cabe58;
  lVar1 = _DAT_03cabe50;
  lVar5 = _DAT_03caa5b0;
  param_1[0xd] = _UNK_03caa5b8;
  param_1[0xc] = lVar5;
  param_1[0xf] = lVar2;
  param_1[0xe] = lVar1;
  lVar6 = _UNK_03caa988;
  lVar5 = _DAT_03caa980;
  *param_1 = (long)&PTR_LAB_045958b0;
  param_1[4] = (long)&PTR_LAB_04595940;
  param_1[0x19] = lVar6;
  param_1[0x18] = lVar5;
  param_1[0x1b] = lVar2;
  param_1[0x1a] = lVar1;
  *plVar7 = (long)&DAT_04595990;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}


