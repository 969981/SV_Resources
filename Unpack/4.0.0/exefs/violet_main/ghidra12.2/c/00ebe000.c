/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ebe000; name: FUN_00ebe000
 */


void FUN_00ebe000(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
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
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d34d0;
  param_1[1] = lVar5;
  param_1[8] = 0;
  param_1[9] = lVar5;
  param_1[4] = (long)&PTR_LAB_045d3508;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x10,0,1);
  param_1[0x14] = 0;
  param_1[0x15] = param_1[1];
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0x3fffffffffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = *param_2;
  param_1[0x1a] = param_2[1];
  param_1[0x1b] = param_2[2];
  plVar4 = (long *)param_2[3];
  param_1[0x1c] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1d] = (long)&DAT_cbf29ce484222645;
  param_1[0x1e] = (long)&DAT_03c886bc;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  param_1[0x21] = (long)&DAT_cbf29ce484222645;
  param_1[0x22] = (long)&DAT_03c886bc;
  *(undefined4 *)(param_1 + 0x33) = 0x1010101;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return;
}


