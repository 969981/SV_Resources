/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015ff98c; name: FUN_015ff98c
 */


void FUN_015ff98c(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  *param_1 = (long)&PTR_FUN_04601468;
  param_1[4] = (long)&PTR_LAB_046014e0;
  *plVar5 = (long)&DAT_04601530;
  FUN_00daf940(param_1 + 8,param_3);
  FUN_00daf940(param_1 + 9,param_3);
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 10) = param_4;
  *(undefined4 *)((long)param_1 + 0x54) = param_6;
  *(undefined4 *)(param_1 + 0xb) = param_7;
  *(undefined4 *)((long)param_1 + 0x5c) = param_5;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0x1fffffffffffffff;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0x1fffffffffffffff;
  param_1[0x1a] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x1c),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x20),false,0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}


