/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045b0d0; name: FUN_0045b0d0
 */


bool FUN_0045b0d0(int param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
  pcVar1 = strerror_r(param_1,param_2,param_3);
  return (int)pcVar1 == 0;
}


