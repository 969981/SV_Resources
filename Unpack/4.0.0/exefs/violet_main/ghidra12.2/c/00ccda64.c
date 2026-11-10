/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccda64; name: FUN_00ccda64
 */


void FUN_00ccda64(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00ccdaf8(param_1,param_1[1]);
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar4 = *(long **)param_1[4];
  uVar2 = FUN_00c4e564(plVar4);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ccdad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar1 - lVar3,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar3,lVar1 - lVar3,8);
  return;
}


