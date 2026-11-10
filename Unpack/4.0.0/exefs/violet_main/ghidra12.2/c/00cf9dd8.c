/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf9dd8; name: FUN_00cf9dd8
 */


int FUN_00cf9dd8(long *param_1,char *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *__s;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  undefined1 *puVar9;
  
  param_1[2] = 0;
  puVar2 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  puVar9 = &DAT_cbf29ce484222645;
  param_1[6] = (long)&DAT_cbf29ce484222645;
  param_1[7] = (long)&DAT_03c886bc;
  puVar2 = PTR_DAT_047d4240;
  *param_1 = (long)&PTR_FUN_045e8bb8;
  param_1[1] = lVar6;
  param_1[8] = 0;
  param_1[4] = (long)&PTR_LAB_045e8bf0;
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  lVar4 = *(long *)PTR_DAT_047d4248;
  *(long *)PTR_DAT_047d4250 = lVar4;
  plVar8 = *(long **)(lVar4 + 8);
  sVar5 = strlen(param_2);
  __s = (char *)(**(code **)(*plVar8 + 0x10))(plVar8,sVar5 + 1,8);
  param_1[9] = (long)__s;
  iVar3 = snprintf(__s,sVar5 + 1,"%s",param_2);
  pbVar7 = (byte *)param_1[9];
  param_1[7] = (long)pbVar7;
  bVar1 = *pbVar7;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar7;
  }
  param_1[6] = (long)puVar9;
  param_1[8] = sVar5;
  return iVar3;
}


