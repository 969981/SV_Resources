/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011adfd4; name: FUN_011adfd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011adfd4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
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
  *param_1 = (long)&DAT_046076e0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[4] = (long)&PTR_LAB_046077b0;
  *plVar5 = (long)&PTR_LAB_04607860;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x14] = (long)&DAT_cbf29ce484222645;
  param_1[0x15] = (long)&DAT_03c886bc;
  param_1[0x18] = 0x4120000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_047d3e28;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0;
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar1 = PTR_DAT_047d3e30;
  lVar3 = *(long *)(PTR_DAT_047d3e30 + 8);
  param_1[0x1a] = *(long *)PTR_DAT_047d3e30;
  param_1[0x1b] = lVar3;
  plVar5 = *(long **)(puVar1 + 0x18);
  param_1[0x1c] = *(long *)(puVar1 + 0x10);
  param_1[0x1d] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0x1e] = 0xffffffff;
  lVar4 = _UNK_03caaee8;
  lVar3 = _DAT_03caaee0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x21] = lVar4;
  param_1[0x20] = lVar3;
  param_1[0x22] = param_1[0x20];
  param_1[0x23] = param_1[0x21];
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_011ae2d8(param_1 + 0x25);
  auVar6 = NEON_fmov(0x3f800000,4);
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = auVar6._8_8_;
  param_1[0x36] = auVar6._0_8_;
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  param_1[0x3b] = lVar4;
  param_1[0x3a] = lVar3;
  param_1[0x3c] = param_1[0x3a];
  param_1[0x3d] = param_1[0x3b];
  *(undefined4 *)(param_1 + 0x3e) = 0;
  FUN_011ae2d8(param_1 + 0x3f);
  param_1[0x57] = param_1[1];
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = auVar6._8_8_;
  param_1[0x50] = auVar6._0_8_;
  param_1[0x58] = 0x30303030303030;
  param_1[0x60] = 0x200000002;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((long)param_1 + 0x2ea) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((long)param_1 + 0x31a) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  return;
}


