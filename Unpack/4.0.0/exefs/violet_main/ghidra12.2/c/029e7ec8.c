/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e7ec8; name: FUN_029e7ec8
 */


void FUN_029e7ec8(long *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ushort *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  undefined1 local_38 [4];
  uint local_34;
  
  puVar7 = param_2 + 1;
  if (*param_2 != 0) {
    puVar1 = puVar7 + *param_2;
    do {
      piVar2 = (int *)((long)puVar7 + (ulong)*puVar7);
      puVar6 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar6 < 5) {
        lVar9 = 0;
LAB_029e7f30:
        uVar8 = 0;
      }
      else {
        if ((ulong)puVar6[2] == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)((long)piVar2 + (ulong)puVar6[2]);
        }
        if ((*puVar6 < 7) || ((ulong)puVar6[3] == 0)) goto LAB_029e7f30;
        uVar8 = *(undefined4 *)((long)piVar2 + (ulong)puVar6[3]);
      }
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar3 != 0) {
        uVar10 = 0;
        do {
          local_38[0] = 1;
          local_34 = uVar10;
          plVar5 = (long *)(**(code **)(*param_1 + 0x58))(param_1,local_38);
          if (lVar9 == *plVar5) {
            local_38[0] = 1;
            local_34 = uVar10;
            (**(code **)(*param_1 + 0x60))(param_1,local_38,uVar8);
            break;
          }
          uVar10 = uVar10 + 1;
          uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        } while (uVar10 < uVar4);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  return;
}


