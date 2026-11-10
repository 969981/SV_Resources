/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aa350; name: FUN_028aa350
 */


char * FUN_028aa350(undefined8 param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  ulong uVar2;
  
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == '\\')) {
    uVar2 = FUN_028aa488(param_1,param_2[1]);
    pcVar1 = param_2 + 2;
    if ((uVar2 & 1) == 0) {
      pcVar1 = param_2;
    }
    param_2 = pcVar1;
  }
  return param_2;
}


