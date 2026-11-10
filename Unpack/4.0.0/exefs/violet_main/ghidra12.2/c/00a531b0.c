/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a531b0; name: FUN_00a531b0
 */


void FUN_00a531b0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00a531b0(param_1,*param_2);
  FUN_00a531b0(param_1,param_2[1]);
  plVar3 = *(long **)(param_1 + 0x10);
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x28,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a53214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x28,4);
  return;
}


