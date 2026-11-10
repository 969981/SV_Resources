/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c14bd8; name: FUN_00c14bd8
 */


void FUN_00c14bd8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  piVar6 = (int *)*param_2;
  iVar2 = *piVar6;
  lVar7 = *(long *)(piVar6 + 2);
  lVar8 = *(long *)(piVar6 + 10);
  iVar5 = 1;
  if (*(char *)(param_1 + 0x44) == '\0') {
    iVar5 = 2;
  }
  if (iVar2 == iVar5) {
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 != 1) {
      if (lVar7 == 0) {
        return;
      }
LAB_00c14c4c:
      bVar3 = false;
      puVar4 = (undefined8 *)(lVar7 + 0x10);
      goto LAB_00c14c54;
    }
    if (lVar8 == 0) {
      return;
    }
  }
  else if (iVar2 != 1) goto LAB_00c14c4c;
  puVar4 = (undefined8 *)(lVar8 + 0x20);
  bVar3 = true;
LAB_00c14c54:
  FUN_00c14c90(param_2 + 2,*puVar4);
  plVar1 = (long *)(lVar8 + 0x20);
  if (!bVar3) {
    plVar1 = (long *)(lVar7 + 0x10);
  }
  lVar7 = *plVar1;
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar7 + 0x18);
  param_2[4] = *(undefined8 *)(lVar7 + 0x10);
  return;
}


