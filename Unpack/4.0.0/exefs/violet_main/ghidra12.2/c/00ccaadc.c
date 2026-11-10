/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccaadc; name: FUN_00ccaadc
 */


void FUN_00ccaadc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_60;
  long *local_58;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
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
  *param_1 = (long)&PTR_FUN_045d0630;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d06a0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  memset(param_1 + 6,0,0x91);
  *(undefined4 *)(param_1 + 0x23) = 0x1f;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  local_38 = lVar4;
  FUN_00ccad10(&local_58,lVar4,&local_38);
  local_60 = local_58;
  local_58 = (long *)0x0;
  lVar5 = param_1[6];
  param_1[6] = (long)local_60;
  if (lVar5 == 0) {
    param_1[8] = lStack_48;
    param_1[9] = local_40;
    param_1[7] = local_50;
  }
  else {
    FUN_02708438(param_1 + 7);
    param_1[7] = local_50;
    local_60 = (long *)param_1[6];
    param_1[8] = lStack_48;
    param_1[9] = local_40;
  }
  FUN_00ccb010(&local_58,lVar4,&local_38,&local_60);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  lVar5 = param_1[10];
  param_1[10] = (long)plVar2;
  if (lVar5 != 0) {
    FUN_027087f4(param_1 + 0xb);
  }
  param_1[0xc] = lStack_48;
  param_1[0xd] = local_40;
  param_1[0xb] = local_50;
  local_60 = param_1;
  FUN_00ccae30(&local_58,lVar4,&local_60);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  lVar4 = param_1[0xe];
  param_1[0xe] = (long)plVar2;
  if (lVar4 != 0) {
    FUN_02708bb0(param_1 + 0xf);
  }
  param_1[0x10] = lStack_48;
  param_1[0x11] = local_40;
  param_1[0xf] = local_50;
  return;
}


