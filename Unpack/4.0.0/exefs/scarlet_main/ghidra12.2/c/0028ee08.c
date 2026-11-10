/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028ee08; name: FUN_0028ee08
 */


void FUN_0028ee08(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 0028ee6c to 0028ee9f has its CatchHandler @ 0028eee0 */
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
        FUN_0028f1a0(local_58);
      }
      param_2 = param_2 + 0x68;
      param_3 = param_3 + -0x68;
    } while (param_3 != 0);
  }
  return;
}


