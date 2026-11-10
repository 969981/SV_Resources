/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f6500; name: FUN_018f6500
 */


undefined8 FUN_018f6500(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_018f6550();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_01079790(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x018f653c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x2a8))();
  return uVar3;
}


