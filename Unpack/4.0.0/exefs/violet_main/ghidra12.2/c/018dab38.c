/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018dab38; name: FUN_018dab38
 */


void FUN_018dab38(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar2 = (undefined4 *)FUN_01053840();
  lVar3 = nn::os::GetTlsValue(*puVar2);
  lVar4 = 0;
  if ((lVar3 != 0) && (lVar4 = 0, *(long *)(lVar3 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_FUN_045d8650;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d8688;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0xc] = lVar4;
  param_1[0xd] = 0x1fffffffffffffff;
  param_1[0x14] = (long)&DAT_045d8718;
  param_1[0x15] = (long)(param_1 + 0x15);
  param_1[0x16] = (long)(param_1 + 0x15);
  param_1[0x17] = 0;
  param_1[0x18] = lVar4;
  param_1[0x19] = 0x7ffffffffffffff;
  param_1[0x1c] = (long)param_1;
  param_1[0x1d] = (long)&PTR_LAB_045d86e8;
  param_1[0x20] = 0;
  param_1[0x21] = lVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1e] = (long)(param_1 + 0x1e);
  param_1[0x1f] = (long)(param_1 + 0x1e);
  param_1[0x22] = 0x7ffffffffffffff;
  param_1[0x23] = 0;
  param_1[0x25] = (long)param_1;
  param_1[0x26] = (long)&DAT_045d86b8;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return;
}


