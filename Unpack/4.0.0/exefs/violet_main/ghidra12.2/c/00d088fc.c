/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d088fc; name: FUN_00d088fc
 */


void FUN_00d088fc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
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
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d99b0;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d99e8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  param_1[8] = 0;
  param_1[9] = lVar4;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = (long)(param_1 + 0x11);
  param_1[0x12] = (long)(param_1 + 0x11);
  FUN_00d08a08(param_1 + 0x14);
  param_1[0x18] = 0;
  return;
}


