/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351f770; name: FUN_0351f770
 */


undefined8
FUN_0351f770(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,long *param_12)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 == 0) {
    uVar3 = 0x1f;
  }
  else {
    plVar2 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x188);
    if (plVar2 != (long *)0x0) {
      FUN_0351fe94(plVar2,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
      *param_12 = (long)plVar2;
      uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if ((int)uVar3 == 1) {
        return uVar3;
      }
      puVar4 = (undefined8 *)*param_12;
      iVar1 = *(int *)((long)puVar4 + 0x4c) + -1;
      *(int *)((long)puVar4 + 0x4c) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar4);
      }
    }
    uVar3 = 2;
    *param_12 = 0;
  }
  return uVar3;
}


