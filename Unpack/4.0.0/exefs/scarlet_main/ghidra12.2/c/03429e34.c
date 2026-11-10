/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03429e34; name: FUN_03429e34
 */


void FUN_03429e34(undefined4 *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar8;
  undefined4 *puVar7;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_34 [4];
  
  lVar11 = *(long *)(*(long *)(param_2 + 8) + 0x58);
  FUN_03429b9c(param_1,0);
  uVar6 = (ulong)*(ushort *)(*(long *)(*(long *)(param_2 + 8) + 0x28) + 0x38);
  if (uVar6 != 0) {
    uVar4 = 0;
    lVar10 = 0x30;
    do {
      FUN_03428e80(*(long *)(param_2 + 0x20) + lVar10,param_1,*(undefined8 *)(param_2 + 0x30),
                   param_2,uVar4 & 0xffffffff);
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + 0x90;
    } while (uVar6 != uVar4);
  }
  puVar5 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar5 + 1);
    if (iVar2 != 0) {
      if (*(int *)(lVar11 + 0x28) == 0) {
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x78);
LAB_03429f90:
        iVar3 = 0x58;
        if (iVar2 != 0) {
          iVar3 = iVar2 * 0x48 + 0x10;
        }
        *puVar5 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x78);
      }
      else {
        puVar7 = *(undefined4 **)(lVar11 + 0x20);
        do {
          puVar8 = puVar7 + 2;
          FUN_0342a7e0(param_1 + 4,*puVar7,auStack_34);
          puVar7 = puVar8;
        } while (puVar8 != (undefined4 *)
                           (*(long *)(lVar11 + 0x20) + (ulong)*(uint *)(lVar11 + 0x28) * 8));
        puVar5 = *(undefined8 **)(param_1 + 2);
        uVar9 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x78);
        if (puVar5 != (undefined8 *)0x0) {
          iVar2 = *(int *)(puVar5 + 1);
          goto LAB_03429f90;
        }
        iVar3 = 0;
      }
      if (param_1[6] != 0) {
        puVar7 = *(undefined4 **)(param_1 + 4);
        do {
          puVar8 = puVar7 + 1;
          FUN_034785cc(*puVar7,uVar9,3,0,0xab,puVar5,iVar3,0);
          puVar7 = puVar8;
        } while (puVar8 != (undefined4 *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[6] * 4));
      }
      uVar1 = 1;
      goto LAB_0342a00c;
    }
  }
  if (param_1[6] != 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x78);
    puVar7 = *(undefined4 **)(param_1 + 4);
    do {
      puVar8 = puVar7 + 1;
      FUN_034785cc(*puVar7,uVar9,3,0,0xab,0,0,0);
      puVar7 = puVar8;
    } while (puVar8 != (undefined4 *)(*(long *)(param_1 + 4) + (ulong)(uint)param_1[6] * 4));
    puVar5 = *(undefined8 **)(param_1 + 2);
  }
  param_1[6] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,puVar5);
  }
  uVar1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
LAB_0342a00c:
  *(undefined1 *)(lVar11 + 0xc6) = uVar1;
  return;
}


