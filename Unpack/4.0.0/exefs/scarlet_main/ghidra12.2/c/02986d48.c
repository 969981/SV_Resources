/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986d48; name: FUN_02986d48
 */


undefined8 FUN_02986d48(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  FUN_01249340();
  cVar2 = FUN_01249348();
  if (cVar2 != '\0') {
    uVar9 = 0;
    do {
      uVar5 = FUN_01249340(param_1);
      piVar6 = (int *)FUN_01249354(uVar5,uVar9);
      if ((piVar6 != (int *)0x0) && (iVar1 = *piVar6, iVar1 != 0)) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x310);
        iVar4 = *(int *)(lVar10 + 0x18);
        if (((*(byte *)(*(long *)(*(long *)(lVar10 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
           (iVar4 == 0)) {
          lVar8 = *(long *)(*(long *)(lVar10 + 0x10) + 0x30);
          if (*(char *)(lVar8 + 0x90) == '\0') {
            iVar4 = 0;
          }
          else {
            plVar7 = *(long **)(lVar8 + 0x60);
            iVar4 = 0;
            if (plVar7 != (long *)0x0) {
              iVar4 = (**(code **)(*plVar7 + 0x98))();
              *(int *)(lVar10 + 0x18) = iVar4;
            }
          }
        }
        if (iVar4 != iVar1) {
          uVar5 = FUN_014813f4(param_1,*piVar6);
          return uVar5;
        }
      }
      uVar9 = uVar9 + 1;
      FUN_01249340(param_1);
      uVar3 = FUN_01249348();
    } while (uVar9 < (uVar3 & 0xff));
  }
  return 0;
}


