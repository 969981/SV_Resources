/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015db0e0; name: FUN_015db0e0
 */


void FUN_015db0e0(long *param_1,ulong *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *local_48 [3];
  
  plVar3 = param_1 + 1;
  if ((long *)*plVar3 == (long *)0x0) {
    plVar2 = plVar3;
LAB_015db108:
    if (*plVar2 == 0) {
      FUN_015db1b0(local_48,param_1,param_3);
      *local_48[0] = 0;
      local_48[0][1] = 0;
      local_48[0][2] = plVar3;
      *plVar2 = (long)local_48[0];
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        local_48[0] = (undefined8 *)*plVar2;
      }
      FUN_010108e0(param_1[1],local_48[0]);
      param_1[6] = param_1[6] + 1;
    }
    return;
  }
  plVar2 = param_1 + 1;
  plVar3 = (long *)*plVar3;
  do {
    if (*param_2 < (ulong)plVar3[4]) {
      plVar1 = (long *)*plVar3;
      plVar2 = plVar3;
      if (plVar1 == (long *)0x0) goto LAB_015db108;
    }
    else {
      if (*param_2 <= (ulong)plVar3[4]) goto LAB_015db108;
      plVar2 = plVar3 + 1;
      plVar1 = (long *)*plVar2;
      if (plVar1 == (long *)0x0) goto LAB_015db108;
    }
    plVar3 = plVar1;
  } while( true );
}


