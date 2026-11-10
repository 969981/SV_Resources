/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017716d0; name: FUN_017716d0
 */


void FUN_017716d0(long *param_1)

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
  *param_1 = (long)&PTR_FUN_045d8218;
  param_1[1] = lVar4;
  param_1[8] = 0;
  param_1[9] = lVar4;
  param_1[4] = (long)&PTR_LAB_045d8250;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  memset(param_1 + 0x19,0,0x6000);
  return;
}


