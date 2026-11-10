/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0191c7d8; name: FUN_0191c7d8
 */


void FUN_0191c7d8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_0104c068();
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = &DAT_cbf29ce484222645;
  param_1[0x21] = &DAT_cbf29ce484222645;
  param_1[0x22] = &DAT_03c886bc;
  param_1[0x25] = &DAT_cbf29ce484222645;
  param_1[0x26] = &DAT_03c886bc;
  *param_1 = &PTR_FUN_04599528;
  param_1[0x43] = &DAT_03c886bc;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  param_1[0x2d] = &DAT_cbf29ce484222645;
  param_1[0x2e] = &DAT_03c886bc;
  param_1[0x31] = &DAT_cbf29ce484222645;
  param_1[0x32] = &DAT_03c886bc;
  param_1[0x36] = &DAT_cbf29ce484222645;
  param_1[0x37] = &DAT_03c886bc;
  param_1[0x3a] = &DAT_cbf29ce484222645;
  param_1[0x3b] = &DAT_03c886bc;
  param_1[0x3e] = &DAT_cbf29ce484222645;
  param_1[0x3f] = &DAT_03c886bc;
  param_1[0x52] = 0x3ecccccd3e99999a;
  param_1[0x53] = 0x2d3f0ccccd;
  *(undefined4 *)(param_1 + 0x54) = 3;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[4] = &PTR_LAB_04599678;
  param_1[5] = &DAT_045996c8;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((long)param_1 + 0x2a9) = 0;
  *(undefined8 *)((long)param_1 + 0x2a4) = 0;
  *(undefined1 *)((long)param_1 + 0x2b1) = 1;
  *(undefined4 *)((long)param_1 + 0x2b4) = 0;
  FUN_0174e530(&local_40,param_1[1]);
  lVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0x47];
  param_1[0x47] = lVar1;
  if (lVar2 == 0) {
    param_1[0x4a] = local_28;
    param_1[0x49] = local_30;
    param_1[0x48] = local_38;
    local_40 = 0;
  }
  else {
    FUN_0174e8ac(param_1 + 0x48);
    lVar1 = local_40;
    param_1[0x4a] = local_28;
    param_1[0x49] = local_30;
    param_1[0x48] = local_38;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_0174e8ac(&local_38);
    }
  }
  FUN_0191c9a0(&local_40,param_1[1]);
  lVar1 = local_40;
  local_40 = 0;
  FUN_0191cb38(param_1 + 0x4b,lVar1);
  param_1[0x4e] = local_28;
  param_1[0x4d] = local_30;
  param_1[0x4c] = local_38;
  FUN_0191cb38(&local_40,0);
  return;
}


