/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c3378; name: FUN_031c3378
 */


void FUN_031c3378(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (iVar1 < 1) {
      iVar5 = 0;
    }
    else {
      puVar8 = (uint *)0x0;
      iVar5 = 0;
      uVar7 = 0;
      puVar3 = puVar2;
      puVar6 = puVar2;
      do {
        puVar9 = (uint *)*puVar3;
        puVar2 = puVar6;
        if (puVar9 != (uint *)0x0) {
          if (puVar8 != (uint *)0x0) {
            *(uint **)(puVar8 + 2) = puVar9;
          }
          puVar2 = puVar6 + 1;
          *puVar6 = puVar9;
          puVar9[1] = uVar7;
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + (*puVar9 & 0xffff);
          puVar8 = puVar9;
        }
        puVar3 = puVar3 + 1;
        iVar1 = iVar1 + -1;
        puVar6 = puVar2;
      } while (iVar1 != 0);
      if (puVar8 != (uint *)0x0) {
        puVar8[2] = 0;
        puVar8[3] = 0;
      }
    }
    *(int *)(param_1 + 8) = iVar5;
    iVar1 = (int)((ulong)((long)puVar2 - *(long *)(param_1 + 0x10)) >> 3);
    if (*(int *)(param_1 + 0x18) != iVar1) {
      *(int *)(param_1 + 0x18) = iVar1;
    }
    if (iVar1 == 0) {
      uVar7 = *(int *)(param_2 + 0xb) - 1;
      if (*(int *)(param_2 + 0xb) < 1) {
        lVar4 = param_2[1];
        (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,lVar4,6);
        *(undefined4 *)(param_2 + 0xb) = 5;
        puVar2 = (undefined8 *)(lVar4 + 0x28);
      }
      else {
        *(uint *)(param_2 + 0xb) = uVar7;
        puVar2 = (undefined8 *)(param_2[1] + (ulong)uVar7 * 8);
      }
      puVar2 = (undefined8 *)*puVar2;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)((long)puVar2 + 4) = *(undefined4 *)(param_1 + 0x18);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar4 = (long)iVar1;
      if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) <= iVar1) {
        FUN_031c25b4(param_1 + 0x10,PTR_PTR_047d1a50,lVar4 + 1);
        iVar1 = *(int *)(param_1 + 0x18);
      }
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar1 * 8) = puVar2;
      *(int *)(param_1 + 0x18) = (int)(lVar4 + 1);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}


