/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145f3c8; name: FUN_0145f3c8
 */


void FUN_0145f3c8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[10] = 0;
  puVar2 = PTR_DAT_047d2680;
  puVar1 = PTR_DAT_047d25c0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[8] = (long)(puVar1 + 0x10);
  param_1[9] = 0;
  memset(param_1 + 0x11c,0,0x898);
  FUN_008f07f4(param_1 + 0x263);
  *(undefined1 *)(param_1 + 0x26d) = 0;
  FUN_00fad31c(param_1 + 0x26e);
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x299] = (long)(PTR_DAT_047d24f8 + 0x10);
  FUN_008f07f4(param_1 + 0x29a);
  FUN_00fad31c(param_1 + 0x2a3);
  param_1[0x2c9] = (long)(param_1 + 0x2c9);
  param_1[0x2ca] = (long)(param_1 + 0x2c9);
  param_1[0x2cb] = (long)(param_1 + 0x2cb);
  param_1[0x2cc] = (long)(param_1 + 0x2cb);
  param_1[0x2ce] = 0;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d8),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2dc),false,0);
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Vfx-13_3_13-Release");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x255] = 0;
  param_1[0x256] = 0;
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_2);
  return;
}


