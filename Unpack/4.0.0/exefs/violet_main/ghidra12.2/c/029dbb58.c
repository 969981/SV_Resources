/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dbb58; name: FUN_029dbb58
 */


void FUN_029dbb58(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04608f20;
  if (param_1[2] == 0) {
    return;
  }
  FUN_00d24ae4();
  lVar5 = param_1[2];
  lVar1 = param_1[4];
  plVar2 = (long *)param_1[5];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029dbbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  return;
}


