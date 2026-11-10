/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212e47c; name: FUN_0212e47c
 */


void FUN_0212e47c(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 local_14;
  
  piVar2 = (int *)*param_3;
  puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (*puVar4 < 0xb) {
    iVar3 = 0;
    iVar5 = 0;
    iVar1 = 0;
    if (*puVar4 < 9) goto LAB_0212e4c8;
  }
  else {
    iVar1 = 0;
    if ((ulong)puVar4[5] != 0) {
      iVar1 = *(int *)((long)piVar2 + (ulong)puVar4[5]);
    }
  }
  iVar3 = iVar1;
  if ((ulong)puVar4[4] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((long)piVar2 + (ulong)puVar4[4]);
  }
LAB_0212e4c8:
  if (iVar3 - iVar5 != 1) {
    local_14 = param_1;
    FUN_01962f48(param_3,&local_14);
  }
  return;
}


