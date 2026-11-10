/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c6f90; name: FUN_008c6f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c6f90(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  FUN_008926d8();
  puVar5 = PTR_DAT_047d24e8;
  lVar2 = DAT_03cab628;
  lVar1 = DAT_03cab620;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  lVar4 = _UNK_03cabe68;
  lVar3 = _DAT_03cabe60;
  param_1[6] = 0x100000001;
  param_1[0x2e] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[9] = lVar2;
  param_1[8] = lVar1;
  param_1[0xb] = lVar4;
  param_1[10] = lVar3;
  lVar3 = _UNK_03cabe58;
  lVar2 = _DAT_03cabe50;
  lVar1 = _DAT_03caa5b0;
  param_1[0xd] = _UNK_03caa5b8;
  param_1[0xc] = lVar1;
  param_1[0xf] = lVar3;
  param_1[0xe] = lVar2;
  FUN_008f28c4(param_1 + 0x2f);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc | 1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return;
}


