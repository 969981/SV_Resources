/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01575d7c; name: FUN_01575d7c
 */


void FUN_01575d7c(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    pvVar1 = *(void **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
    }
    lVar3 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    if (lVar3 != 0) {
      FUN_028b4e64(param_2 + 0x28);
    }
    if (*(long **)(param_2 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x18) + 0x20))();
    }
  }
  plVar4 = *(long **)*param_1;
  uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar4,param_2,0x58,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01575df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x58,8);
  return;
}


