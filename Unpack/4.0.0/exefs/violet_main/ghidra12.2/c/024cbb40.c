/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024cbb40; name: FUN_024cbb40
 */


undefined1  [16] FUN_024cbb40(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  
  if (((*param_1 == '\x01') || (auVar1 = ZEXT816(0), *param_1 == '\0')) &&
     (auVar1 = ZEXT816(0), *(long *)(param_1 + 8) != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)(*param_4);
  }
  return auVar1;
}


