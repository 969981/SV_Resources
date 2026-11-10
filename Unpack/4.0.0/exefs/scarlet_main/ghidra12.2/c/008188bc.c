/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008188bc; name: FUN_008188bc
 */


void FUN_008188bc(undefined8 *param_1,long param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_047d1908;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)param_1 = 0;
  param_1[2] = 0;
  param_1[3] = puVar2 + 0x10;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 7) = param_3;
  return;
}


