/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02080a24; name: FUN_02080a24
 */


void FUN_02080a24(long param_1,int *param_2)

{
  ulong uVar1;
  long local_18;
  
  uVar1 = *(long *)(param_2 + 2) + 7U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar1;
  *(int *)(param_1 + 0xe8) = (int)uVar1 - *param_2;
  uVar1 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar1;
  *(int *)(param_1 + 0xec) = (int)uVar1 - *param_2;
  uVar1 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar1;
  *(int *)(param_1 + 0xf0) = (int)uVar1 - *param_2;
  *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 0x20;
  local_18 = param_1;
  FUN_02080aac(*(undefined8 *)(param_2 + 4),&local_18);
  return;
}


