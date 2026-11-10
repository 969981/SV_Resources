/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024da820; name: FUN_024da820
 */


undefined1  [16]
FUN_024da820(char *param_1,code *param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  long *plVar1;
  undefined1 auVar2 [16];
  
  if (((*param_1 == '\x01') || (auVar2 = ZEXT816(0), *param_1 == '\0')) &&
     (auVar2 = ZEXT816(0), *(long *)(param_1 + 8) != 0)) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar1);
    }
    auVar2 = (*param_2)(*param_5,plVar1,param_4);
  }
  return auVar2;
}


