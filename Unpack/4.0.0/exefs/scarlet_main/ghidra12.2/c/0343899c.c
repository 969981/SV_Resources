/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343899c; name: FUN_0343899c
 */


void FUN_0343899c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  DAT_048af940 = 0;
  plVar2 = DAT_048af948;
  if (DAT_048af950 != 0) {
    plVar4 = DAT_048af948;
    uVar3 = DAT_048af950;
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x30))();
        plVar2 = DAT_048af948;
        uVar3 = DAT_048af950;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar3);
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (plVar2 != (long *)0x0) {
    DAT_048af950 = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7);
    DAT_048af948 = (long *)0x0;
    DAT_048af954 = 0;
  }
  if (DAT_048af958 != 0) {
    DAT_048af960 = 0;
    (**(code **)(puVar1 + 0x30))(7);
    DAT_048af958 = 0;
    DAT_048af964 = 0;
  }
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x03438a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x30))(7,param_1);
  return;
}


