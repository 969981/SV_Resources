/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b7f54; name: FUN_012b7f54
 */


void FUN_012b7f54(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  nn::os::InitializeLightEvent(param_1 + 2,0,1);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[0x38] = 0;
  param_1[6] = &DAT_cbf29ce484222645;
  param_1[7] = &DAT_03c886bc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &DAT_cbf29ce484222645;
  param_1[0xb] = &DAT_03c886bc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &DAT_cbf29ce484222645;
  param_1[0xf] = &DAT_03c886bc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = &DAT_cbf29ce484222645;
  param_1[0x13] = &DAT_03c886bc;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = &DAT_cbf29ce484222645;
  param_1[0x17] = &DAT_03c886bc;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = &DAT_cbf29ce484222645;
  param_1[0x1b] = &DAT_03c886bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = &DAT_cbf29ce484222645;
  param_1[0x1f] = &DAT_03c886bc;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = &DAT_cbf29ce484222645;
  param_1[0x23] = &DAT_03c886bc;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = &DAT_cbf29ce484222645;
  param_1[0x27] = &DAT_03c886bc;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = &DAT_cbf29ce484222645;
  param_1[0x2b] = &DAT_03c886bc;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &DAT_cbf29ce484222645;
  param_1[0x2f] = &DAT_03c886bc;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = &DAT_cbf29ce484222645;
  param_1[0x33] = &DAT_03c886bc;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar1 = (undefined4 *)FUN_01053840();
  lVar2 = nn::os::GetTlsValue(*puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_01060ed0();
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0x555555555555555;
  param_1[0x3b] = 0;
  param_1[0x39] = lVar2;
  return;
}


