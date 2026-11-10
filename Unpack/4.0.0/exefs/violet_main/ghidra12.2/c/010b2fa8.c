/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b2fa8; name: FUN_010b2fa8
 */


void FUN_010b2fa8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *param_1;
  *param_1 = param_2;
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)param_1[1];
  lVar2 = param_1[2];
  lVar6 = param_1[3];
  uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar5,lVar2,lVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x010b3004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,lVar2,lVar6);
  return;
}


