/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010970f8; name: FUN_010970f8
 */


void FUN_010970f8(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
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
  plVar6 = param_1 + 5;
  *plVar6 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  *param_1 = (long)&PTR_FUN_04545c80;
  param_1[4] = (long)&PTR_LAB_04545d20;
  *plVar6 = (long)&PTR_LAB_04545d70;
  *(undefined4 *)(param_1 + 8) = 6;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[0xe] = -1;
  *(undefined4 *)((long)param_1 + 0x9c) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x12,0,1);
  puVar2 = PTR_DAT_047d9a40;
  param_1[0x25] = 0;
  param_1[0x17] = (long)&DAT_cbf29ce484222645;
  param_1[0x18] = (long)&DAT_03c886bc;
  param_1[0x1b] = (long)&DAT_cbf29ce484222645;
  param_1[0x1c] = (long)&DAT_03c886bc;
  lVar4 = *(long *)puVar2;
  lVar5 = *(long *)(puVar2 + 8);
  uVar1 = *(undefined4 *)(puVar2 + 0xf);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xaf) = uVar1;
  param_1[0x14] = lVar4;
  param_1[0x15] = lVar5;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = -1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return;
}


