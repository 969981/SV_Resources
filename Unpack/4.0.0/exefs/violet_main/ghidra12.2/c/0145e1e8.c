/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145e1e8; name: FUN_0145e1e8
 */


void FUN_0145e1e8(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = *param_2 + 0x1ff;
  iVar1 = *param_2;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[2] = iVar1;
  param_1[3] = 0;
  memset(param_1 + 0x204,0,0x48);
  param_1[0x21f] = 1;
  nn::os::InitializeLightEvent(param_1 + 0x21c,0,1);
  return;
}


