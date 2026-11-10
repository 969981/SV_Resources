/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026644c4; name: FUN_026644c4
 */


void FUN_026644c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  FUN_02663d68(&local_38);
  if (local_38 != 0) {
    local_58 = *param_4;
    uStack_50 = param_4[1];
    local_48 = param_4[2];
    plVar1 = (long *)param_4[3];
    param_4[3] = 0;
    plStack_40 = plVar1;
    FUN_02664554(&local_38,param_2,param_3,&local_58);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  FUN_01751d6c(&local_38);
  return;
}


