/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299901c; name: FUN_0299901c
 */


void FUN_0299901c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),*param_2);
                    /* WARNING: Could not recover jumptable at 0x02999058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x6d8))(plVar3,uVar1,uVar2);
  return;
}


