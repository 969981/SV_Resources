/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215a304; name: FUN_0215a304
 */


undefined8 FUN_0215a304(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  FUN_0215b674(0,0,*(undefined8 *)(param_1 + 0x8a0));
  uVar5 = FUN_021545c4(*(undefined8 *)(param_1 + 0x900));
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    if (0 < iVar3) {
      iVar8 = 0;
      iVar3 = 0;
      do {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x148) + 0x68))
                          (*(long **)(param_1 + 0x148),iVar8);
        if ((uVar5 & 1) == 0) {
          lVar7 = **(long **)(param_1 + 0x8c0);
          lVar1 = (*(long **)(param_1 + 0x8c0))[1];
          if ((lVar7 != lVar1) &&
             (*(char *)(lVar7 + 0x20) != '\0' || *(int *)(lVar7 + 0x24) != iVar8)) {
            lVar2 = lVar7 + 0x30;
            do {
              lVar7 = lVar2;
              if (lVar1 == lVar7) {
                lVar7 = lVar1;
                goto LAB_0215a3bc;
              }
              lVar2 = lVar7 + 0x30;
            } while ((*(char *)(lVar7 + 0x20) != '\0') || (*(int *)(lVar7 + 0x24) != iVar8));
          }
LAB_0215a3bc:
          if ((lVar7 != 0) && (lVar1 != lVar7)) {
            *(int *)(lVar7 + 0x24) = iVar3;
          }
          iVar3 = iVar3 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar4 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
      } while (iVar8 < iVar4);
    }
    uVar6 = 1;
  }
  return uVar6;
}


