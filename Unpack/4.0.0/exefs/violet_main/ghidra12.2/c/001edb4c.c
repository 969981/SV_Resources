/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001edb4c; name: FUN_001edb4c
 */


void FUN_001edb4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_8;
  
  iVar1 = FUN_001edb90(&local_8,param_2,param_3,0,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_8 + 0x930) = 1;
    *param_1 = local_8;
  }
  return;
}


