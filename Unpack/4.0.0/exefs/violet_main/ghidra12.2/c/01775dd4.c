/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01775dd4; name: FUN_01775dd4
 */


/* WARNING: Removing unreachable block (ram,0x01775e58) */
/* WARNING: Removing unreachable block (ram,0x01775e60) */
/* WARNING: Removing unreachable block (ram,0x01775e68) */
/* WARNING: Removing unreachable block (ram,0x01775e70) */
/* WARNING: Removing unreachable block (ram,0x01775ea4) */
/* WARNING: Removing unreachable block (ram,0x01775e78) */
/* WARNING: Removing unreachable block (ram,0x01775e7c) */

void FUN_01775dd4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_40 [2];
  long local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *(long *)(param_2 + 8);
  FUN_01775fc8(local_40,lVar2);
  if (local_40[0] == 0) {
    local_18 = 0;
  }
  else {
    FUN_01776408(&local_18);
    lVar1 = local_18;
    if (local_18 != 0) {
      FUN_01776494(param_1);
      local_18 = 0;
      *param_1 = lVar1;
      param_1[1] = lVar2;
    }
  }
  FUN_01775eb8(local_40);
  return;
}


