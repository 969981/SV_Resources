/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb90ac; name: FUN_01bb90ac
 */


void FUN_01bb90ac(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *local_28;
  
  puVar1 = PTR_LAB_047d5430;
  if (DAT_0480ef38 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01bb9584(&local_28,param_2,puVar1,0);
  plVar2 = local_28;
  if (local_28 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    (**(code **)(*local_28 + 0x10))(local_28);
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar2;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
  }
  return;
}


