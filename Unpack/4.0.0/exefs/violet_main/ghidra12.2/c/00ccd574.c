/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccd574; name: FUN_00ccd574
 */


void FUN_00ccd574(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  *param_1 = param_2;
  if (lVar4 == 0) {
    return;
  }
  plVar1 = (long *)param_1[1];
  lVar2 = param_1[2];
  lVar5 = param_1[3];
  uVar3 = FUN_00c4e564(plVar1);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ccd5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar2,lVar5);
    return;
  }
  FUN_00c48fe8(plVar1,lVar4,lVar2,lVar5);
  return;
}


