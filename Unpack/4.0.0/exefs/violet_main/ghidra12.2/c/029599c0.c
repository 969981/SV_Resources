/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029599c0; name: FUN_029599c0
 */


undefined8 FUN_029599c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0293d6f0();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
                    /* WARNING: Could not recover jumptable at 0x02959a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x300))(plVar2,0xb);
  return uVar3;
}


