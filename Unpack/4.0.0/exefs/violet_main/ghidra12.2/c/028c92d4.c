/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c92d4; name: FUN_028c92d4
 */


void FUN_028c92d4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar2,param_2,lVar1 << 3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028c9328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,lVar1 << 3,8);
  return;
}


