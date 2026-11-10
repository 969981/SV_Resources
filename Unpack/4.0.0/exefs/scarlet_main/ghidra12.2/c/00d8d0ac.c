/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d8d0ac; name: FUN_00d8d0ac
 */


void FUN_00d8d0ac(undefined1 *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = param_2;
  bVar1 = param_1[1] | 5;
  if ((param_3 & 1) == 0) {
    bVar1 = param_1[1] & 0xfe | 4;
  }
  param_1[1] = bVar1;
  uVar2 = 0x1f;
  if ((param_4 & 0x20) != 0) {
    uVar2 = 0x20;
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}


