/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e61bd8; name: FUN_01e61bd8
 */


undefined8 FUN_01e61bd8(long param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(long *)(param_1 + 0x120) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x120) + 0x10), lVar3 != 0)) {
    plVar4 = (long *)(lVar3 + -0x28);
    uVar1 = FUN_01e6b040(plVar4);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e61c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar4 + 0x70))(plVar4,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


