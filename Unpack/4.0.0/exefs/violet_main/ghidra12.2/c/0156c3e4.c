/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156c3e4; name: FUN_0156c3e4
 */


void FUN_0156c3e4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar4 = *param_4;
  plVar1 = (long *)FUN_0156c684(*param_3,*(undefined8 *)(*param_3 + 8));
  uVar4 = FUN_00f618d8(uVar4);
  FUN_0156c490(plVar1,uVar4);
  plVar1[0x1e] = *param_5;
  plVar1[0x1f] = param_5[1];
  plVar1[0x20] = param_5[2];
  plVar3 = (long *)param_5[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  plVar2 = (long *)plVar1[0x21];
  plVar1[0x21] = (long)plVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
                    /* WARNING: Could not recover jumptable at 0x0156c468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,0);
  return;
}


