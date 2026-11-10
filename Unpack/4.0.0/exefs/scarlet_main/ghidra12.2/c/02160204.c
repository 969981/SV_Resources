/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02160204; name: FUN_02160204
 */


uint FUN_02160204(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar10 = *(uint *)(param_1 + 0x48);
  if (uVar10 < *(uint *)(param_1 + 0x4c)) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x80) + 0x930);
    local_70 = *(long ***)(lVar9 + 0x20);
    uVar8 = FUN_0215c4dc(lVar9,&local_70);
    uVar10 = *(uint *)(param_1 + 0x4c);
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = uVar10 / uVar8;
    }
    if (uVar10 == uVar5 * uVar8) {
      lVar9 = *(long *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x88) = 1;
      plVar12 = *(long **)(lVar9 + 0x8c0);
      puVar13 = (undefined8 *)*plVar12;
      puVar3 = (undefined8 *)plVar12[1];
      if ((puVar13 != puVar3) &&
         ((*(char *)(puVar13 + 4) != '\0' ||
          (*(int *)((long)puVar13 + 0x24) != *(int *)(param_1 + 0x44))))) {
        puVar7 = puVar13 + 6;
        do {
          puVar13 = puVar7;
          if (puVar3 == puVar13) {
            puVar13 = puVar3;
            goto LAB_021602d8;
          }
          puVar7 = puVar13 + 6;
        } while ((*(char *)(puVar13 + 4) != '\0') ||
                (*(int *)((long)puVar13 + 0x24) != *(int *)(param_1 + 0x44)));
      }
LAB_021602d8:
      if ((puVar13 != (undefined8 *)0x0) && (puVar3 != puVar13)) {
        uVar1 = *puVar13;
        uVar4 = puVar13[1];
        uVar2 = puVar13[2];
        plVar12 = (long *)puVar13[3];
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        local_70 = &local_48;
        local_48 = (long *)0x0;
        uStack_68 = uVar1;
        local_60 = uVar4;
        uStack_58 = uVar2;
        local_50 = plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        FUN_0116c820(lVar9,&local_70,0);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        plVar6 = local_48;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        uVar11 = plVar6[0x1a];
        if ((~(uint)uVar11 & 0xf) == 0) {
          (**(code **)(*plVar6 + 0xe0))(plVar6,0);
          uVar11 = plVar6[0x1a];
        }
        plVar6[0x1a] = uVar11 & 0xfffffffffffffffe;
        uVar10 = *(uint *)(param_1 + 0x4c);
      }
    }
    uVar10 = uVar10 - 1;
  }
  return uVar10;
}


