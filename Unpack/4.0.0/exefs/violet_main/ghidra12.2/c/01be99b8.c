/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01be99b8; name: FUN_01be99b8
 */


void FUN_01be99b8(undefined8 *param_1,char *param_2,long param_3)

{
  long lVar1;
  
  if (((*param_2 == '\x01') || (*param_2 == '\0')) && (lVar1 = *(long *)(param_2 + 8), lVar1 != 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_014e02ac(param_1,lVar1 + param_3);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


