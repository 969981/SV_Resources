/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135da3c; name: FUN_0135da3c
 */


void FUN_0135da3c(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *__s;
  char *__s_00;
  char acStack_b0 [128];
  undefined8 local_18;
  
  __s = (char *)*param_2;
  sVar2 = strlen(__s);
  __s_00 = acStack_b0 + (0x80 - (sVar2 + 0x20 & 0xfffffffffffffff0));
  local_18 = __s_00;
  *__s_00 = '\0';
  sVar2 = strlen(__s_00);
  pcVar1 = __s_00 + sVar2;
  pcVar1[0x10] = '\0';
  *(undefined8 *)pcVar1 = s_message_dat_JPN__03c7db5d._0_8_;
  *(undefined8 *)(pcVar1 + 8) = s_message_dat_JPN__03c7db5d._8_8_;
  strcat(__s_00,__s);
  FUN_00cf9768(param_1,&local_18);
  return;
}


