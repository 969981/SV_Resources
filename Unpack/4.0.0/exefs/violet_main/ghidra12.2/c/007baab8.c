/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007baab8; name: FUN_007baab8
 */


void FUN_007baab8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0f20;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0x165);
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  memset((void *)((long)param_1 + 0x6a),0,0x554);
  memset((void *)((long)param_1 + 0x5be),0,0x554);
  memset(param_1 + 0x16d,0,0x10);
  memset(param_1 + 0x16f,0,0x100);
  return;
}


