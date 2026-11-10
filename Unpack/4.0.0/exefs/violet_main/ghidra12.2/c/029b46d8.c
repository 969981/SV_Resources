/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b46d8; name: FUN_029b46d8
 */


void FUN_029b46d8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    if (lVar2 != 0) {
      FUN_010de998(param_2 + 0x40);
    }
    if (*(long **)(param_2 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x28) + 0x20))();
    }
  }
  plVar3 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x58,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029b4744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x58,8);
  return;
}


