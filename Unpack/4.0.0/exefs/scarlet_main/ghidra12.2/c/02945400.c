/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02945400; name: FUN_02945400
 */


ulong FUN_02945400(long param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  if (param_3 == 0x31) {
    sVar1 = (**(code **)(*plVar3 + 0x230))(plVar3);
    return (ulong)(sVar1 != 0);
  }
  if (param_3 == 0x33) {
    uVar2 = FUN_018ce3c0(plVar3);
  }
  else {
    if (param_3 != 0x32) {
                    /* WARNING: Could not recover jumptable at 0x029454c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x220))(plVar3,param_3);
      return uVar4;
    }
    sVar1 = (**(code **)(*plVar3 + 0x230))(plVar3);
    if (sVar1 != 0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar3 + 0x220))(plVar3,6);
    uVar2 = uVar2 & 1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 1;
}


