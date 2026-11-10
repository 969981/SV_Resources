/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e603d4; name: FUN_01e603d4
 */


void FUN_01e603d4(long *param_1,long param_2)

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
  *param_1 = (long)&DAT_04550f28;
  param_1[4] = (long)&PTR_LAB_04550fa8;
  *plVar5 = (long)&PTR_LAB_04550ff8;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x974) = 0;
  param_1[8] = (long)&PTR_LAB_04551050;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 599) = 0;
  *(undefined1 *)((long)param_1 + 0x12ba) = 0;
  *(undefined1 *)((long)param_1 + 0x12bc) = 0;
  *(undefined1 *)((long)param_1 + 0x12be) = 0;
  param_1[600] = 0;
  param_1[0x252] = 0;
  *(undefined1 *)(param_1 + 0x254) = 0;
  param_1[0x253] = 0;
  *(undefined1 *)(param_1 + 0x259) = 1;
  return;
}


