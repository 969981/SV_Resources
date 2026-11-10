/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02960210; name: FUN_02960210
 */


undefined8 FUN_02960210(long param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30));
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (((short)plVar2[0xe2] == 0x3b8) &&
       (uVar3 = (**(code **)(*plVar2 + 0x4d0))(plVar2,0x1a), (uVar3 & 1) == 0)) {
      plVar2 = (long *)FUN_029603d0(param_1,param_2);
      uVar4 = 0;
      if (plVar2 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar2 + 0x98))();
        *param_3 = uVar1;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


