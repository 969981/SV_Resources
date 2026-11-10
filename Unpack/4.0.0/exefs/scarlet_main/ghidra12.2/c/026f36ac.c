/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f36ac; name: FUN_026f36ac
 */


void FUN_026f36ac(undefined1 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x58) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    plVar1 = *(long **)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x70);
    *(long **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
    *param_1 = 1;
  }
  return;
}


