/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f3b10; name: FUN_004f3b10
 */


void FUN_004f3b10(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_3 == 0) goto LAB_004f3be0;
  uVar4 = *(ulong *)(param_3 + 8);
  plVar2 = (long *)(uVar4 & 0xfffffffffffffffe);
  if ((uVar4 & 1) == 0) {
    uVar3 = *(ulong *)(param_2 + 8);
    plVar1 = (long *)(uVar3 & 0xfffffffffffffffe);
    plVar5 = plVar2;
    if ((uVar3 & 1) == 0) goto LAB_004f3b4c;
LAB_004f3bac:
    if (plVar5 == (long *)*plVar1) goto LAB_004f3be0;
  }
  else {
    plVar5 = (long *)*plVar2;
    uVar3 = *(ulong *)(param_2 + 8);
    plVar1 = (long *)(uVar3 & 0xfffffffffffffffe);
    if ((uVar3 & 1) != 0) goto LAB_004f3bac;
LAB_004f3b4c:
    if (plVar5 == plVar1) goto LAB_004f3be0;
  }
  if ((uVar4 & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  if (plVar2 == (long *)0x0) {
    if ((uVar3 & 1) != 0) {
      plVar1 = (long *)*plVar1;
    }
    if (plVar1 != (long *)0x0) {
      FUN_004f7acc(plVar1,param_3);
LAB_004f3be0:
      FUN_004f7864(param_1,param_2,param_3,param_4);
      return;
    }
  }
  plVar2 = (long *)FUN_004f7424(param_1,param_2,param_4,0);
                    /* WARNING: Could not recover jumptable at 0x004f3b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x70))(plVar2,param_3);
  return;
}


