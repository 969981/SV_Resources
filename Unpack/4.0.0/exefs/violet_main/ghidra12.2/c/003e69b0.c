/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e69b0; name: FUN_003e69b0
 */


/* WARNING: Removing unreachable block (ram,0x003e6a1c) */
/* WARNING: Removing unreachable block (ram,0x003e7330) */

undefined8
FUN_003e69b0(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
            char *param_6)

{
  undefined8 uVar1;
  long local_68;
  
  local_68 = 0;
  if (*param_6 == '\0') {
    if (param_2 != 0) goto LAB_003e7334;
  }
  else if ((param_2 != 0) || (*param_3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x003e6a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((ulong)switchD_003e6a58::switchdataD_03cdd56c * 4 + 0x3e6a5c))();
    return uVar1;
  }
  *param_5 = 0;
LAB_003e7334:
  uVar1 = FUN_003e7440(param_1,param_2,&local_68,param_3,0);
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *param_4 = local_68 + -1;
  }
  return uVar1;
}


