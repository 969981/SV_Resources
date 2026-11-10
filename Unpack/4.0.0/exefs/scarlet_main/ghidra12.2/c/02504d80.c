/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02504d80; name: FUN_02504d80
 */


undefined1  [16] FUN_02504d80(char *param_1,code *param_2,ulong param_3,undefined8 *param_4)

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


