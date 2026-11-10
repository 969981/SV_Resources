/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01762078; name: FUN_01762078
 */


void FUN_01762078(long *param_1,long *param_2,long param_3,byte param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
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
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar5;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar4 = param_1 + 5;
  *plVar4 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar4);
  *param_1 = (long)&DAT_045e6640;
  param_1[4] = (long)&PTR_LAB_045e66b8;
  *plVar4 = (long)&DAT_045e6708;
  plVar4 = (long *)*param_2;
  param_1[8] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[9] = param_2[1];
  param_1[10] = param_2[2];
  param_1[0xb] = param_2[3];
  plVar4 = (long *)param_2[4];
  param_1[0xc] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(int *)(param_1 + 0xd) = (int)param_2[5];
  param_1[0xe] = 0;
  param_1[0xf] = param_3;
  param_1[0x10] = 0;
  *(byte *)(param_1 + 0x11) = param_4 & 1;
  *(undefined1 *)((long)param_1 + 0x89) = 0;
  return;
}


