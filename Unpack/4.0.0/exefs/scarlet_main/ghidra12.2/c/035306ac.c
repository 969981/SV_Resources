/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035306ac; name: FUN_035306ac
 */


void FUN_035306ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined2 local_66;
  undefined4 *local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  uVar6 = *(uint *)(param_2 + 9);
  if (uVar6 != 0) {
    puVar10 = (undefined8 *)param_2[8];
    piVar7 = (int *)*puVar10;
    *param_1 = piVar7;
    uVar2 = *(undefined4 *)((long)puVar10 + 0xc);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    if (piVar7 != (int *)0x0) {
      *piVar7 = *piVar7 + 1;
      puVar10 = (undefined8 *)param_2[8];
      uVar6 = *(uint *)(param_2 + 9);
    }
    puVar4 = PTR_DAT_047e2fd0;
    puVar9 = puVar10 + (ulong)uVar6 * 2 + -2;
    for (puVar1 = puVar10; puVar1 < puVar9; puVar1 = puVar1 + 2) {
      piVar7 = (int *)*puVar1;
      if ((piVar7 != (int *)0x0) && (iVar3 = *piVar7, *piVar7 = iVar3 + -1, iVar3 + -1 == 0)) {
        (**(code **)(puVar4 + 0x30))(*(undefined4 *)((long)puVar1 + 0xc),*puVar1);
      }
      piVar7 = (int *)puVar1[2];
      *puVar1 = piVar7;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)((long)puVar1 + 0x1c);
      if (piVar7 != (int *)0x0) {
        *piVar7 = *piVar7 + 1;
      }
    }
    piVar7 = (int *)*puVar9;
    if ((piVar7 != (int *)0x0) && (iVar3 = *piVar7, *piVar7 = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))
                (*(undefined4 *)((long)puVar10 + (ulong)uVar6 * 0x10 + -4),*puVar9);
    }
    *puVar9 = 0;
    *(undefined4 *)(puVar10 + (ulong)uVar6 * 2 + -1) = 0;
    *(int *)(param_2 + 9) = *(int *)(param_2 + 9) + -1;
    local_88 = 0;
    local_66 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = (undefined4 *)0x0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_90 = *param_2;
    FUN_0352eab8(&local_90,param_1);
    if ((int)local_58 != 0) {
      puVar8 = local_60;
      do {
        uVar5 = FUN_0351a604(local_90,*puVar8,*(undefined8 *)(puVar8 + 2),
                             *(undefined2 *)(puVar8 + 4));
        if ((uVar5 & 1) == 0) break;
        puVar8 = puVar8 + 6;
      } while (puVar8 != local_60 + (local_58 & 0xffffffff) * 6);
    }
    FUN_0352ef88(&local_90);
  }
  return;
}


