/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c6838; name: FUN_014c6838
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014c6838(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar9 = param_1 + 5;
  *plVar9 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar9);
  *param_1 = (long)&PTR_LAB_04607c10;
  param_1[4] = (long)&PTR_LAB_04607d88;
  *plVar9 = (long)&DAT_04607dd8;
  param_1[8] = param_2;
  param_1[9] = (long)(param_1 + 9);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = 0;
  lVar4 = _UNK_03cabe68;
  lVar3 = _DAT_03cabe60;
  lVar2 = DAT_03cab628;
  lVar1 = DAT_03cab620;
  lVar8 = _UNK_03caa5b8;
  lVar7 = _DAT_03caa5b0;
  param_1[0xc] = param_2;
  param_1[0xd] = 0x1fffffffffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f8000003f800000;
  param_1[0x1e] = 0x3f8000003f800000;
  param_1[0x1f] = 0x3f8000003f800000;
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x1d] = lVar8;
  param_1[0x1c] = lVar7;
  param_1[0x13] = 0x42b4000000000000;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x19] = lVar4;
  param_1[0x18] = lVar3;
  param_1[0x1b] = lVar2;
  param_1[0x1a] = lVar1;
  param_1[0x23] = lVar2;
  param_1[0x22] = lVar1;
  param_1[0x25] = lVar4;
  param_1[0x24] = lVar3;
  lVar2 = _UNK_03cabe58;
  lVar1 = _DAT_03cabe50;
  *(undefined4 *)((long)param_1 + 0x154) = 0x40800000;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  param_1[0x2c] = 0x3e800000;
  param_1[0x27] = lVar8;
  param_1[0x26] = lVar7;
  param_1[0x29] = lVar2;
  param_1[0x28] = lVar1;
  return;
}


