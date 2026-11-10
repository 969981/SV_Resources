/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00107b90; name: FUN_00107b90
 */


bool FUN_00107b90(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 local_18;
  
  iVar1 = nn::fs::OpenFile((FileHandle *)&local_18,param_2,1);
  if (iVar1 == 0) {
    *param_1 = local_18;
    param_1[1] = 0;
  }
  return iVar1 == 0;
}


