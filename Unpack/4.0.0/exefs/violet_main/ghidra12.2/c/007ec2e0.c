/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec2e0; name: FUN_007ec2e0
 */


void FUN_007ec2e0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_047d14e0 + 0x10);
  FUN_00797e48(param_1 + 1);
  FUN_00797e48(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  puVar2 = PTR_DAT_047d0e88;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *(undefined4 *)puVar2;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined1 *)((long)param_1 + 0x4a) = 0xfd;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return;
}


