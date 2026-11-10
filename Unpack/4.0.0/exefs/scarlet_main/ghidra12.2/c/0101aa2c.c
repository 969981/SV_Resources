/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0101aa2c; name: FUN_0101aa2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0101aa2c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_8;
  
  FUN_010186a4();
  *param_1 = &PTR_FUN_045630d0;
  param_1[0x2a] = 0;
  param_1[4] = &PTR_LAB_04563230;
  param_1[5] = &DAT_04563358;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[6] = &PTR_LAB_045633b0;
  param_1[7] = &PTR_LAB_045633d8;
  puVar1 = PTR_DAT_047d5400 + 0x10;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  uVar2 = _UNK_03caaf48;
  uVar3 = _DAT_03caaf40;
  param_1[0x42] = puVar1;
  param_1[0x46] = PTR_DAT_047d53f0 + 0x10;
  param_1[0x47] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = 0;
  puVar1 = PTR_DAT_047d53f8;
  param_1[0x55] = uVar2;
  param_1[0x54] = uVar3;
  param_1[0x4c] = puVar1 + 0x10;
  param_1[0x52] = 0x33f4ccccd;
  *(undefined4 *)(param_1 + 0x53) = 0x3f000000;
  *(undefined1 *)((long)param_1 + 0x2b4) = 1;
  uVar2 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = uVar2;
  param_1[0x5c] = uVar3;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[99] = uVar2;
  param_1[0x62] = uVar3;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x69] = uVar2;
  param_1[0x68] = uVar3;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6f] = uVar2;
  param_1[0x6e] = uVar3;
  *(undefined4 *)(param_1 + 0x73) = 3;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x80] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = uVar2;
  param_1[0x76] = uVar3;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = uVar2;
  param_1[0x7c] = uVar3;
  *(undefined4 *)(param_1 + 0x81) = 3;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  uVar3 = FUN_0101ace0(param_1[1]);
  FUN_0101ac24(&local_28,uVar3);
  local_8 = param_1[0x84];
  param_1[0x84] = 0;
  FUN_0101abac(&local_8);
  uVar3 = local_28;
  local_28 = 0;
  param_1[0x84] = uVar3;
  FUN_0101abac(&local_28);
  return;
}


