/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e7ff4; name: FUN_029e7ff4
 */


void FUN_029e7ff4(long *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ushort *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 local_58 [4];
  uint local_54;
  
  puVar7 = param_2 + 1;
  if (*param_2 != 0) {
    puVar1 = puVar7 + *param_2;
    do {
      piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar6 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar6 < 5) {
        lVar8 = 0;
LAB_029e80fc:
        uVar10 = 0;
      }
      else {
        if ((ulong)puVar6[2] == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)((long)piVar2 + (ulong)puVar6[2]);
        }
        if ((*puVar6 < 7) || ((ulong)puVar6[3] == 0)) goto LAB_029e80fc;
        uVar10 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[3]);
      }
      iVar3 = (**(code **)(*param_1 + 0x70))(param_1);
      if (iVar3 != 0) {
        uVar9 = 0;
        do {
          local_58[0] = 1;
          local_54 = uVar9;
          plVar5 = (long *)(**(code **)(*param_1 + 0x80))(param_1,local_58);
          if (lVar8 == *plVar5) {
            local_58[0] = 1;
            local_54 = uVar9;
            (**(code **)(*param_1 + 0x88))(uVar10,param_1,local_58);
            break;
          }
          uVar9 = uVar9 + 1;
          uVar4 = (**(code **)(*param_1 + 0x70))(param_1);
        } while (uVar9 < uVar4);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}


