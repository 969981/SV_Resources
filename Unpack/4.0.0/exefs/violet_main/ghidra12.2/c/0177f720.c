/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177f720; name: FUN_0177f720
 */


void FUN_0177f720(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    lVar4 = *(long *)(param_2 + 0x18);
    if (lVar4 != 0) {
      plVar3 = *(long **)(param_2 + 0x30);
      *(long *)(param_2 + 0x20) = lVar4;
      lVar5 = *(long *)(param_2 + 0x28) - lVar4;
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if ((uVar1 & 1) != 0) {
        lVar2 = FUN_00c4e600();
        if (0 < *(int *)(lVar2 + 0x12c8)) {
          FUN_00c48fe8(plVar3,lVar4,lVar5,8);
          goto LAB_0177f788;
        }
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar5,8);
    }
  }
LAB_0177f788:
  plVar3 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x50,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0177f7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x50,8);
  return;
}


