/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d0004; name: FUN_011d0004
 */


void FUN_011d0004(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_18;
  
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
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&DAT_04543f98;
  param_1[4] = (long)&PTR_LAB_04544010;
  *plVar5 = (long)&PTR_LAB_04544060;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0x200000001;
  param_1[9] = 0xf4b17a579f18960;
  param_1[0xc] = 0x3f800000;
  param_1[10] = -0x7d5d4e8add6295a5;
  param_1[0xb] = 0;
  memset(param_1 + 0xe,0,0x150);
  *(undefined1 *)((long)param_1 + 0x1c2) = 0;
  *(undefined2 *)(param_1 + 0x38) = 1;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = (long)&DAT_cbf29ce484222645;
  param_1[0x3b] = (long)&DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = (long)&DAT_cbf29ce484222645;
  param_1[0x43] = (long)&DAT_03c886bc;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = (long)&DAT_cbf29ce484222645;
  param_1[0x47] = (long)&DAT_03c886bc;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = (long)&DAT_cbf29ce484222645;
  param_1[0x4b] = (long)&DAT_03c886bc;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = (long)&DAT_cbf29ce484222645;
  param_1[0x4f] = (long)&DAT_03c886bc;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x3e] = (long)&DAT_cbf29ce484222645;
  param_1[0x3f] = (long)&DAT_03c886bc;
  puVar1 = PTR_DAT_047d3e28;
  *(undefined2 *)((long)param_1 + 0x28c) = 1;
  param_1[0x52] = -0x100000000;
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar1 = PTR_DAT_047d3e30;
  param_1[0x53] = *(long *)PTR_DAT_047d3e30;
  param_1[0x54] = *(long *)(puVar1 + 8);
  plVar5 = *(long **)(puVar1 + 0x18);
  param_1[0x55] = *(long *)(puVar1 + 0x10);
  param_1[0x56] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0x57] = (long)&PTR_FUN_045440b8;
  param_1[0x5f] = (long)&PTR_FUN_045440b8;
  param_1[0x67] = (long)&PTR_FUN_045440b8;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined4 *)((long)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((long)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
  param_1[10] = -0x7d5d4e8add6295a5;
  param_1[0xb] = local_18;
  param_1[9] = local_18;
  return;
}


