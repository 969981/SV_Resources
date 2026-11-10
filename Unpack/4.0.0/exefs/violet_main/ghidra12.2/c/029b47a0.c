/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b47a0; name: FUN_029b47a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b47a0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047e3080;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[1] = lVar6;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar1 + 0x138);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  *plVar7 = (long)(puVar1 + 0x170);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  *param_1 = (long)&PTR_FUN_04604b10;
  param_1[4] = (long)&PTR_LAB_04604c28;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  *plVar7 = (long)&PTR_LAB_04604cd8;
  lVar6 = _UNK_03caa988;
  lVar5 = _DAT_03caa980;
  param_1[0xd] = (long)&PTR_LAB_04604d30;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar1 = PTR_DAT_047e3138 + 0x10;
  param_1[0x1b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0xf] = (long)puVar1;
  param_1[0x10] = 0;
  lVar3 = _UNK_03cabe58;
  lVar2 = _DAT_03cabe50;
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x2a] = param_1[1];
  param_1[0x2b] = 0x666666666666666;
  param_1[0x2e] = 0;
  param_1[0x2f] = param_1[1];
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x30] = 0x666666666666666;
  param_1[0x31] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = lVar3;
  param_1[0x20] = lVar2;
  param_1[0x23] = lVar6;
  param_1[0x22] = lVar5;
  param_1[0x25] = lVar3;
  param_1[0x24] = lVar2;
  return;
}


