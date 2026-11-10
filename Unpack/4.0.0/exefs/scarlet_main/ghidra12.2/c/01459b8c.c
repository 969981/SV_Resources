/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01459b8c; name: FUN_01459b8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01459b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_4;
  
  FUN_01459d84();
  param_1[0x4b] = 0;
  *param_1 = &PTR_FUN_04595d58;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_04595d88;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_0145a380(param_1 + 0x8b);
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)((long)param_1 + 0x49c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x92,0,1);
  FUN_01459cac(param_1 + 0x94);
  FUN_01459cec(param_1 + 0xa1);
  uVar2 = _UNK_03cabda8;
  uVar1 = _DAT_03cabda0;
  param_1[0xc0] = 0;
  param_1[0xaf] = uVar2;
  param_1[0xae] = uVar1;
  local_4 = 0;
  FUN_01459d2c(param_1 + 0xc2,&local_4);
  param_1[0x17a] = 0xffffffffffffffff;
  param_1[0x179] = 0xffffffffffffffff;
  param_1[0x178] = 0xffffffffffffffff;
  param_1[0x177] = 0xffffffffffffffff;
  param_1[0x176] = 0xffffffffffffffff;
  param_1[0x17b] = 0;
  return;
}


