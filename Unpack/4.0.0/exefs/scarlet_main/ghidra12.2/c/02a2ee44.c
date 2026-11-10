/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a2ee44; name: FUN_02a2ee44
 */


void FUN_02a2ee44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_02a2ee44(param_1,*param_2);
  FUN_02a2ee44(param_1,param_2[1]);
  if (*(char *)(param_2 + 5) != '\0') {
    if ((long *)param_2[9] != (long *)0x0) {
      (**(code **)(*(long *)param_2[9] + 0x20))();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x50,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a2eebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x50,8);
  return;
}


