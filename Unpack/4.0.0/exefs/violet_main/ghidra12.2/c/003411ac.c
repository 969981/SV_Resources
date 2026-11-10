/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003411ac; name: FUN_003411ac
 */


void FUN_003411ac(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  param_1[2] = 0;
  plVar3 = param_1 + 1;
  *plVar3 = 0;
  *param_1 = (long)plVar3;
  if (param_3 != 0) {
    param_3 = param_3 * 0x68;
    do {
                    /* try { // try from 00341210 to 00341243 has its CatchHandler @ 00341284 */
      plVar1 = (long *)FUN_00288128(param_1,plVar3,&local_38,auStack_40,param_2);
      if (*plVar1 == 0) {
        FUN_002883f4(local_58,param_1,param_2);
        local_58[0][2] = local_38;
        *local_58[0] = 0;
        local_58[0][1] = 0;
        *plVar1 = (long)local_58[0];
        puVar2 = local_58[0];
        if (*(long *)*param_1 != 0) {
          *param_1 = *(long *)*param_1;
          puVar2 = (undefined8 *)*plVar1;
        }
        FUN_010108e0(param_1[1],puVar2);
        param_1[2] = param_1[2] + 1;
        local_58[0] = (undefined8 *)0x0;
        FUN_0034129c(local_58);
      }
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return;
}


