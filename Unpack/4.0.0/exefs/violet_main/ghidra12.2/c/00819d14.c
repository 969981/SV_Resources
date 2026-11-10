/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819d14; name: FUN_00819d14
 */


void FUN_00819d14(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  *(undefined1 *)(param_1 + 2) = 0x20;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = s_0000000000000000_03c34208._8_8_;
  uVar1 = s_0000000000000000_03c34208._0_8_;
  *(undefined1 *)((long)param_1 + 0x21) = 0;
  puVar3 = PTR_DAT_047d1920;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  *(undefined8 *)((long)param_1 + 0x11) = uVar1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 8) = 0x2112a442;
  return;
}


