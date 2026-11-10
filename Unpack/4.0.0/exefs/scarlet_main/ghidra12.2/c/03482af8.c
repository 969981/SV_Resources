/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03482af8; name: FUN_03482af8
 */


void FUN_03482af8(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = &PTR_FUN_047c2b68;
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*plVar2 != 0) {
    FUN_034db9b8(param_1);
    FUN_034dac54(param_1,0);
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) goto LAB_03482b80;
  }
  *plVar2 = 0;
  puVar1 = PTR_DAT_047e2fd0;
  if (plVar2[1] != 0) {
    *(undefined4 *)(plVar2 + 2) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    plVar2[1] = 0;
    *(undefined4 *)((long)plVar2 + 0x14) = 0;
  }
  (**(code **)(puVar1 + 0x30))(2,plVar2);
LAB_03482b80:
  param_1[2] = 0;
  return;
}


