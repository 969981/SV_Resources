/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0810; name: FUN_010a0810
 */


void FUN_010a0810(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_010a0028(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),1,0);
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(short *)(lVar2 + 0xe) != 10) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x10) != '\n') {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x11) != '\n') {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,2);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x12) != '\n') {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,3);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x13) != '\n') {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,4);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (*(char *)(lVar2 + 0x14) != '\n') {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,5);
  }
                    /* WARNING: Could not recover jumptable at 0x010a092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x660))(plVar1,0x64000);
  return;
}


