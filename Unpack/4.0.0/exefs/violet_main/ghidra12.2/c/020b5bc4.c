/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020b5bc4; name: FUN_020b5bc4
 */


void FUN_020b5bc4(undefined8 param_1,undefined8 *param_2)

{
  size_t sVar1;
  char *__s;
  char *__s_00;
  char acStack_b0 [128];
  char *local_18;
  
  __s = (char *)*param_2;
  sVar1 = strlen(__s);
  __s_00 = acStack_b0 + (0x80 - (sVar1 + 0x1c & 0xfffffffffffffff0));
  local_18 = __s_00;
  *__s_00 = '\0';
  sVar1 = strlen(__s_00);
  *(ulong *)(__s_00 + sVar1) = CONCAT35(s_LocationType_03c56e43._5_3_,s_LocationType_03c56e43._0_5_)
  ;
  *(ulong *)(__s_00 + sVar1 + 5) =
       CONCAT53(s_LocationType_03c56e43._8_5_,s_LocationType_03c56e43._5_3_);
  strcat(__s_00,__s);
  FUN_00cf9768(param_1,&local_18);
  return;
}


