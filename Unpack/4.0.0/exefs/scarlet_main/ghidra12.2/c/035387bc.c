/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035387bc; name: FUN_035387bc
 */


void FUN_035387bc(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  int *piVar7;
  uint uVar8;
  
  puVar3 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(puVar3 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x140);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x18) != 0)) {
    piVar7 = *(int **)(lVar5 + 0x10);
    sVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x28) == *piVar7) {
        uVar2 = *(uint *)(param_1 + 0x20);
        uVar8 = *(uint *)(param_1 + 0x24);
        if (uVar8 <= uVar2) {
          iVar1 = uVar8 + (uVar8 >> 1);
          if (uVar8 == 0) {
            iVar1 = 1;
          }
          uVar8 = iVar1 + uVar8;
          lVar4 = (**(code **)(puVar3 + 0x20))(0,*(undefined8 *)(param_1 + 0x18),(ulong)uVar8 << 1);
          if (lVar4 == 0) goto LAB_03538888;
          *(long *)(param_1 + 0x18) = lVar4;
          *(uint *)(param_1 + 0x24) = uVar8;
        }
        if (uVar2 < uVar8) {
          uVar8 = *(uint *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x20) = uVar8 + 1;
          if (*(long *)(param_1 + 0x18) != 0) {
            *(short *)(*(long *)(param_1 + 0x18) + (ulong)uVar8 * 2) = sVar6;
          }
        }
      }
LAB_03538888:
      piVar7 = piVar7 + 1;
      sVar6 = sVar6 + 1;
    } while (piVar7 != (int *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar5 + 0x18) * 4));
  }
  return;
}


