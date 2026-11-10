/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f7678; name: FUN_007f7678
 */


void FUN_007f7678(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *param_1 = (long)(PTR_DAT_047d1578 + 0x10);
  if (param_1[4] != 0) {
    FUN_007f7df8();
    puVar3 = (undefined8 *)param_1[4];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_007bfaa0(puVar3);
    }
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    FUN_007f8f50();
    puVar3 = (undefined8 *)param_1[3];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_007bfaa0(puVar3);
    }
    param_1[3] = 0;
  }
  puVar1 = PTR_DAT_047d0860;
  if (param_1[2] != 0) {
    plVar2 = (long *)FUN_007f738c(*(undefined8 *)PTR_DAT_047d0860);
    (**(code **)(*plVar2 + 0x90))(plVar2,param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    plVar2 = (long *)FUN_007f738c(*(undefined8 *)puVar1);
    (**(code **)(*plVar2 + 0x88))(plVar2,param_1[1]);
    param_1[1] = 0;
  }
  return;
}


