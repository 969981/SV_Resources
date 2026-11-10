/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020aa7b0; name: FUN_020aa7b0
 */


void FUN_020aa7b0(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int local_c [3];
  
  local_c[1] = 0x16;
  local_c[2] = param_2;
  local_c[0] = 0;
  piVar1 = local_c + 1;
  if (param_2 < 0x17) {
    piVar1 = local_c + 2;
  }
  piVar2 = local_c;
  if (-1 < param_2) {
    piVar2 = piVar1;
  }
  *(int *)(param_1 + 0x740) = *piVar2;
  return;
}


