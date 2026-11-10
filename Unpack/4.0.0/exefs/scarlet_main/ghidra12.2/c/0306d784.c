/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0306d784; name: FUN_0306d784
 */


void FUN_0306d784(long *param_1,long param_2,uint *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 local_38 [2];
  
  *param_1 = 0;
  lVar9 = *(long *)PTR_DAT_047e4f50;
  iVar1 = *(int *)(lVar9 + 0x1c);
  *(bool *)(param_1 + 1) = 0 < iVar1;
  if (0 < iVar1) {
    lVar11 = tpidr_el0;
    lVar4 = *(long *)(lVar11 + 0x1000b8);
    if (lVar4 == 0) {
      lVar4 = FUN_00e5d3b4();
      *(long *)(lVar11 + 0x1000b8) = lVar4;
    }
    plVar10 = *(long **)(lVar4 + 0x3e0);
    *param_1 = (long)plVar10;
    if (plVar10 != (long *)0x0) {
      lVar11 = *plVar10;
      if (*(code **)(lVar11 + 0x18) != (code *)0x0) {
        (**(code **)(lVar11 + 0x18))(&DAT_03c7fb74,0,*(undefined8 *)(lVar11 + 0x28));
      }
      puVar6 = (undefined8 *)plVar10[2];
      uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar10[3]) && (plVar10[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c7fb72;
        uVar3 = nn::os::GetSystemTick();
        puVar6[1] = uVar3;
      }
      if (((*(byte *)(lVar11 + 0x38) & 1) != 0) && (plVar10[6] != 0)) {
        puVar6 = (undefined8 *)plVar10[2];
        uVar5 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
        if ((uVar5 <= (ulong)plVar10[3]) && (plVar10[2] = uVar5, puVar6 != (undefined8 *)0x0)) {
          *puVar6 = &DAT_03c4e575;
          puVar6[1] = *(undefined8 *)(plVar10[6] + 8);
        }
      }
    }
    lVar11 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(*param_3 >> 0xe) & 0x3ff00));
    FUN_03056218(local_38,*(undefined4 *)(lVar9 + 0x20),
                 *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x180),0);
    puVar2 = PTR_DAT_047e48d8;
    lVar9 = *param_1;
    if ((lVar9 != 0) && (puVar6 = *(undefined8 **)(lVar9 + 0x10), puVar6 != (undefined8 *)0x0)) {
      puVar8 = (undefined4 *)((long)puVar6 + 0x13U & 0xfffffffffffffffc);
      uVar5 = (long)puVar8 + 0xbU & 0xfffffffffffffff8;
      if (uVar5 <= *(ulong *)(lVar9 + 0x18)) {
        *(ulong *)(lVar9 + 0x10) = uVar5;
        *puVar6 = &DAT_03c1a9df;
        puVar6[1] = puVar2;
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = local_38[0];
        }
      }
    }
    local_68[0] = *param_3 & 0x3fffff;
    FUN_03096684(lVar11,local_68,&local_60);
    puVar2 = PTR_DAT_047e4f58;
    lVar9 = *param_1;
    if ((lVar9 != 0) && (puVar6 = *(undefined8 **)(lVar9 + 0x10), puVar6 != (undefined8 *)0x0)) {
      puVar7 = (undefined8 *)((long)puVar6 + 0x13U & 0xfffffffffffffffc);
      uVar5 = (long)puVar7 + 0x13U & 0xfffffffffffffff8;
      if (uVar5 <= *(ulong *)(lVar9 + 0x18)) {
        *(ulong *)(lVar9 + 0x10) = uVar5;
        *puVar6 = &DAT_03c1a9df;
        puVar6[1] = puVar2;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = local_60;
          *(undefined4 *)(puVar7 + 1) = uStack_58;
        }
      }
    }
  }
  return;
}


