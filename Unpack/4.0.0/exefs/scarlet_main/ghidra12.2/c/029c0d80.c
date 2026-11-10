/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c0d80; name: FUN_029c0d80
 */


void FUN_029c0d80(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047e3080;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0x138);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  *plVar5 = (long)(puVar1 + 0x170);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  param_1[0xb] = 0;
  param_1[4] = (long)&PTR_LAB_04605bb8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *param_1 = (long)&PTR_FUN_04605a70;
  *plVar5 = (long)&PTR_LAB_04605c68;
  lVar3 = param_1[1];
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xd] = (long)&PTR_LAB_04605cc0;
  param_1[0xe] = (long)&PTR_LAB_04605d50;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar3;
  param_1[0x13] = 0x7ffffffffffffff;
  param_1[0x14] = 0;
  memset(param_1 + 0x16,0,0x58);
  param_1[0x21] = lVar3;
  param_1[0x22] = 0x1ffffffffffffff;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return;
}


