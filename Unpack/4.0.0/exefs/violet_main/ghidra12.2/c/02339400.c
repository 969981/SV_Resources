/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02339400; name: FUN_02339400
 */


void FUN_02339400(undefined1 *param_1,long param_2)

{
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  *param_1 = 1;
  FUN_023392f0(auStack_30);
  local_28 = *(undefined4 *)(param_2 + 8);
  FUN_02339454(param_1 + 8,auStack_30);
  FUN_0199ade8(auStack_30);
  return;
}


