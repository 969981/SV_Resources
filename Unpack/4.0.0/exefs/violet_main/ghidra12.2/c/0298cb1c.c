/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298cb1c; name: FUN_0298cb1c
 */


void FUN_0298cb1c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  uVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3);
                    /* WARNING: Could not recover jumptable at 0x0298cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x5a8))(plVar1,uVar2);
  return;
}


