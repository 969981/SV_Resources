/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290475c; name: FUN_0290475c
 */


undefined8 FUN_0290475c(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) ||
     (plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30)),
     plVar2 == (long *)0x0)) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar2 + 0x2a8))();
                    /* WARNING: Could not recover jumptable at 0x029047a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),uVar1);
  return uVar3;
}


