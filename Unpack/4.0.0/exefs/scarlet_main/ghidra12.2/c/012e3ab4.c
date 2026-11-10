/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e3ab4; name: FUN_012e3ab4
 */


void FUN_012e3ab4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  puVar1 = PTR_DAT_047dd660;
  plVar2 = *(long **)PTR_DAT_047dd660;
  *(long **)PTR_DAT_047dd660 = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  uVar3 = param_1[2];
  *(undefined8 *)(puVar1 + 8) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  plVar4 = (long *)param_1[4];
  *(undefined8 *)(puVar1 + 0x18) = param_1[3];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  plVar2 = *(long **)(puVar1 + 0x20);
  *(long **)(puVar1 + 0x20) = plVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(undefined4 *)(puVar1 + 0x28) = *(undefined4 *)(param_1 + 5);
  return;
}


