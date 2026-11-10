/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015763ac; name: FUN_015763ac
 */


void FUN_015763ac(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  code *local_98;
  undefined1 auStack_80 [96];
  
  local_98 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_80);
    local_98 = *(code **)(param_3 + 8);
  }
  piVar2 = (int *)*param_2;
  puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
  if (*puVar4 < 0xb) {
    iVar3 = 0;
    iVar5 = 0;
    iVar1 = 0;
    if (*puVar4 < 9) goto LAB_01576438;
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
LAB_01576438:
  if (iVar3 - iVar5 != 1) {
    FUN_0157648c(param_2);
  }
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


