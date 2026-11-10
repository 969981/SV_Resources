/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159c9f4; name: FUN_0159c9f4
 */


void FUN_0159c9f4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
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
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_04601d68;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_04601da0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_00daf940(param_1 + 8,param_2);
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  memset(param_1 + 0x12,0,0x108);
  memset(param_1 + 0x34,0,0x88);
  memset(param_1 + 0x46,0,0x88);
  memset(param_1 + 0x58,0,0x88);
  memset(param_1 + 0x6a,0,0x88);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x7b),false,0);
  return;
}


