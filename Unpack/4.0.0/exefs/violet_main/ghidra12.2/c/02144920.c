/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02144920; name: FUN_02144920
 */


void FUN_02144920(long *param_1)

{
  undefined *puVar1;
  
  FUN_0104c068();
  puVar1 = PTR_DAT_047dd028;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[4] = (long)(puVar1 + 0x150);
  param_1[5] = (long)(puVar1 + 0x1a0);
  param_1[0x21] = (long)&DAT_cbf29ce484222645;
  param_1[0x22] = (long)&DAT_03c886bc;
  param_1[0x25] = (long)&DAT_cbf29ce484222645;
  param_1[0x26] = (long)&DAT_03c886bc;
  param_1[0x29] = (long)&DAT_cbf29ce484222645;
  param_1[0x2a] = (long)&DAT_03c886bc;
  return;
}


