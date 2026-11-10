/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106c2b4; name: FUN_0106c2b4
 */


void FUN_0106c2b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = *(long *)(param_1 + 0x218);
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x220) = lVar3;
    lVar4 = *(long *)(param_1 + 0x228) - lVar3;
    plVar5 = *(long **)(param_1 + 0x230);
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00c4e600();
      if (0 < *(int *)(lVar2 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar3,lVar4,0x10);
        goto LAB_0106c310;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar3,lVar4,0x10);
  }
LAB_0106c310:
  if (*(long **)(param_1 + 0x208) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x208) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1e8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1c8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1c8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x20))();
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x20))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x20))();
  }
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x20))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0106c42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


