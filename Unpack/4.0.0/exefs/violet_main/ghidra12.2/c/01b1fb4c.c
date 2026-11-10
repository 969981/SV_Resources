/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b1fb4c; name: FUN_01b1fb4c
 */


void FUN_01b1fb4c(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  
  *param_1 = (long)&PTR_LAB_0451dab0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  puVar5 = &DAT_cbf29ce484222645;
  param_1[6] = (long)&DAT_cbf29ce484222645;
  param_1[8] = 0;
  puVar2 = PTR_DAT_047d4268;
  *param_1 = (long)(PTR_DAT_047d4268 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar2 + 0x48);
  pbVar6 = *(byte **)PTR_PTR_047d4270;
  param_1[7] = (long)pbVar6;
  bVar1 = *pbVar6;
  while (bVar1 != 0) {
    pbVar6 = pbVar6 + 1;
    puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar6;
  }
  param_1[6] = (long)puVar5;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = (long)param_1;
  return;
}


