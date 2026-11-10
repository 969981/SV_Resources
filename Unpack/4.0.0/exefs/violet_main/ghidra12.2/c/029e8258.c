/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e8258; name: FUN_029e8258
 */


void FUN_029e8258(long *param_1,uint *param_2)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ushort *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  undefined1 local_38 [4];
  uint local_34;
  
  puVar8 = param_2 + 1;
  if (*param_2 != 0) {
    puVar1 = puVar8 + *param_2;
    do {
      piVar2 = (int *)((long)puVar8 + (ulong)*puVar8);
      puVar7 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar7 < 5) {
        lVar9 = 0;
LAB_029e8360:
        bVar3 = false;
      }
      else {
        if ((ulong)puVar7[2] == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)((long)piVar2 + (ulong)puVar7[2]);
        }
        if ((*puVar7 < 7) || ((ulong)puVar7[3] == 0)) goto LAB_029e8360;
        bVar3 = *(char *)((long)piVar2 + (ulong)puVar7[3]) != '\0';
      }
      iVar4 = (**(code **)(*param_1 + 200))(param_1);
      if (iVar4 != 0) {
        uVar10 = 0;
        do {
          local_38[0] = 1;
          local_34 = uVar10;
          plVar6 = (long *)(**(code **)(*param_1 + 0xd8))(param_1,local_38);
          if (lVar9 == *plVar6) {
            local_38[0] = 1;
            local_34 = uVar10;
            (**(code **)(*param_1 + 0xe0))(param_1,local_38,bVar3);
            break;
          }
          uVar10 = uVar10 + 1;
          uVar5 = (**(code **)(*param_1 + 200))(param_1);
        } while (uVar10 < uVar5);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  return;
}


