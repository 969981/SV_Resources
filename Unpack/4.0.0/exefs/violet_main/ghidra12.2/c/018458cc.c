/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018458cc; name: FUN_018458cc
 */


void FUN_018458cc(long param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 0x5c0);
  if (*pcVar1 == '\0') {
    if (*param_2 != '\0') {
      FUN_01950664(param_1 + 0x5c8,param_2 + 8);
      *pcVar1 = '\x01';
    }
  }
  else if (*param_2 == '\0') {
    FUN_0193777c(param_1 + 0x5c8);
    *pcVar1 = '\0';
  }
  else {
    FUN_01dffd84(param_1 + 0x5c8,param_2 + 8);
  }
  return;
}


