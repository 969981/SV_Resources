/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02904b90; name: FUN_02904b90
 */


undefined8 FUN_02904b90(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  piVar4 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x290) + 8) + 0x50)
                              );
  if (piVar4 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar4;
    if (4 < iVar8) {
      iVar8 = 0;
    }
  }
  lVar5 = FUN_00f7e3c8(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30),iVar8);
  if (lVar5 != 0) {
    bVar1 = *(byte *)(lVar5 + 0x30);
    bVar2 = FUN_019a7b1c(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x290),iVar8);
    if (bVar2 < bVar1) {
      uVar10 = (uint)bVar2;
      do {
        plVar7 = *(long **)(lVar5 + (ulong)(uVar10 & 0xff) * 8);
        uVar6 = (**(code **)(*plVar7 + 0x200))(plVar7);
        if ((uVar6 & 1) == 0) {
          bVar2 = (**(code **)(*plVar7 + 0x708))(plVar7);
          if (bVar2 != 0) {
            uVar9 = 0;
            do {
              cVar3 = (**(code **)(*plVar7 + 0x670))(plVar7,uVar9);
              if (cVar3 != '\0') {
                return 1;
              }
              uVar9 = uVar9 + 1;
            } while (bVar2 != uVar9);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != bVar1);
    }
  }
  return 0;
}


