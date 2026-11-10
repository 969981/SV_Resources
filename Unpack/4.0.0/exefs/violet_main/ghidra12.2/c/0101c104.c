/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0101c104; name: FUN_0101c104
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0101c104(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  param_1[2] = 0;
  puVar3 = PTR_DAT_047d66f8;
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
  *param_1 = (long)&PTR_FUN_045dcfb8;
  param_1[4] = (long)&PTR_LAB_045dd030;
  *plVar7 = (long)&DAT_045dd080;
  FUN_017e1410(param_1 + 8,param_2);
  lVar2 = _UNK_03cabe58;
  lVar1 = _DAT_03cabe50;
  lVar6 = _UNK_03caa728;
  lVar5 = _DAT_03caa720;
  param_1[0x32] = 0;
  param_1[0x38] = 0;
  param_1[0x42] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = lVar6;
  param_1[0x36] = lVar5;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = lVar6;
  param_1[0x3c] = lVar5;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = lVar2;
  param_1[0x40] = lVar1;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  param_1[0x50] = 0;
  param_1[0x49] = lVar6;
  param_1[0x48] = lVar5;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = lVar2;
  param_1[0x4e] = lVar1;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0x101;
  param_1[0x57] = lVar6;
  param_1[0x56] = lVar5;
  FUN_0101c344(param_1 + 0x5c);
  lVar5 = param_1[1];
  param_1[0x8d] = 0x1c71c71c71c71c7;
  param_1[0x93] = lVar5;
  param_1[0x90] = (long)&DAT_cbf29ce484222645;
  param_1[0x8c] = lVar5;
  param_1[0x98] = lVar5;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0x199999999999999;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0x199999999999999;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  param_1[0x9e] = 0;
  return;
}


