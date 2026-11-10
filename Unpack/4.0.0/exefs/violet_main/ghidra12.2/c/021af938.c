/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021af938; name: FUN_021af938
 */


void FUN_021af938(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40 [2];
  long local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(long *)(param_2 + 8);
  FUN_021af9cc(local_40,lVar2);
  if (local_40[0] == 0) {
    local_48 = 0;
  }
  else {
    FUN_021afc48(&local_48);
    lVar1 = local_48;
    if (local_48 != 0) {
      local_18 = *param_1;
      *param_1 = 0;
      FUN_021af8c0(&local_18);
      local_48 = 0;
      *param_1 = lVar1;
      param_1[1] = lVar2;
    }
  }
  FUN_021af8c0(&local_48);
  FUN_021afcdc(local_40);
  return;
}


