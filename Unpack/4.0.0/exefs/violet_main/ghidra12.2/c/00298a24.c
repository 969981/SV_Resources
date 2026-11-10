/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298a24; name: FUN_00298a24
 */


bool FUN_00298a24(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((((*param_1 == *param_2) &&
       (iVar1 = memcmp(param_1 + 1,param_2 + 1,(long)*param_1), iVar1 == 0)) &&
      (param_1[5] == param_2[5])) &&
     (iVar1 = strncmp((char *)(param_1 + 6),(char *)(param_2 + 6),0x32), iVar1 == 0)) {
    return *(char *)((long)param_1 + 0x4a) == *(char *)((long)param_2 + 0x4a);
  }
  return false;
}


