/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030e2bc; name: FUN_0030e2bc
 */


void FUN_0030e2bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047ccaf0;
  param_1[3] = 0x7fffffff;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0x7fffffff;
  param_1[1] = 0x7fffffff;
  uVar1 = DAT_03cb55d0;
  *(undefined8 *)(param_2 + 0xda0) = DAT_03cb55d0;
  *(undefined8 *)(param_2 + 0xdd8) = uVar1;
  *(undefined8 *)(param_2 + 0xdf4) = uVar1;
  return;
}


