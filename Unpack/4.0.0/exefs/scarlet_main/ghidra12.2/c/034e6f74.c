/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e6f74; name: FUN_034e6f74
 */


void FUN_034e6f74(undefined8 param_1,int param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar4 = *(uint *)(param_3 + 1);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      plVar7 = (long *)(*param_3 + uVar12 * 8);
      lVar11 = *plVar7;
      if (*(int *)(lVar11 + 0x30) == 0) {
        plVar9 = (long *)((*param_3 + (ulong)uVar4 * 8) - 8);
        if (plVar7 < plVar9) {
          do {
            plVar5 = plVar7 + 1;
            *plVar7 = *plVar5;
            plVar7 = plVar5;
          } while (plVar5 < plVar9);
LAB_034e706c:
          uVar4 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar4 - 1;
        if (lVar11 != 0) {
LAB_034e7090:
          if (*(long *)(lVar11 + 0x28) != 0) {
            *(undefined4 *)(lVar11 + 0x30) = 0;
            (**(code **)(puVar2 + 0x30))(0);
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined4 *)(lVar11 + 0x34) = 0;
          }
          (**(code **)(puVar2 + 0x30))(0,lVar11);
        }
      }
      else {
        iVar1 = *(int *)(lVar11 + 0x3c);
        if (iVar1 == 0) {
LAB_034e7024:
          uVar3 = FUN_034e62b0(lVar11,param_2);
          if ((uVar3 & 1) != 0) {
            puVar8 = (undefined8 *)(*param_3 + uVar12 * 8);
            puVar6 = (undefined8 *)((*param_3 + (ulong)*(uint *)(param_3 + 1) * 8) - 8);
            if (puVar8 < puVar6) {
              do {
                puVar10 = puVar8 + 1;
                *puVar8 = *puVar10;
                puVar8 = puVar10;
              } while (puVar10 < puVar6);
              goto LAB_034e706c;
            }
            *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) - 1;
            goto LAB_034e7090;
          }
        }
        else {
          if (iVar1 == 3) {
            *(int *)(lVar11 + 0x18) = (param_2 - *(int *)(lVar11 + 0x24)) + *(int *)(lVar11 + 0x18);
            *(undefined4 *)(lVar11 + 0x3c) = 0;
            goto LAB_034e7024;
          }
          if (iVar1 == 1) {
            *(int *)(lVar11 + 0x24) = param_2;
            *(undefined4 *)(lVar11 + 0x3c) = 2;
          }
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      uVar4 = *(uint *)(param_3 + 1);
    } while ((uint)uVar12 < uVar4);
  }
  return;
}


