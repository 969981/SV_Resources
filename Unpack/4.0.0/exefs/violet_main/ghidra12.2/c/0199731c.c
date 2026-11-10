/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199731c; name: FUN_0199731c
 */


void FUN_0199731c(long *param_1)

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
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_04530e98;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_04530f10;
  plVar5 = param_1 + 5;
  *plVar5 = (long)&PTR_LAB_04530f60;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  puVar1 = PTR_DAT_047d6a90;
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa0);
  *plVar5 = (long)(puVar1 + 0xf0);
  *(undefined2 *)(param_1 + 8) = 0x68;
  memset(param_1 + 10,0,0x11c);
  return;
}


