/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00301f80; name: FUN_00301f80
 */


undefined8 FUN_00301f80(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 auStack_30 [16];
  
  piVar3 = *(int **)(param_1 + 0x28);
  if ((piVar3 == (int *)0x0) ||
     (*piVar3 == *(int *)(param_2 + 2) && (short)piVar3[1] == *(short *)(param_2 + 6))) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 2);
  *(undefined2 *)(piVar3 + 1) = *(undefined2 *)(param_2 + 6);
  *piVar3 = iVar1;
  iVar1 = FUN_00302040(auStack_30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    iVar1 = FUN_0043a9a0(*(undefined8 *)(param_1 + 0x30),0,0,auStack_30,0);
    if (iVar1 != 0) {
      return 0;
    }
    pcVar2 = "Rekeying failed in context update.";
  }
  else {
    pcVar2 = "Rekeying failed in key derivation.";
  }
  FUN_00301490(pcVar2,param_3);
  return 0xd;
}


