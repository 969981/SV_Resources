/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02159dfc; name: FUN_02159dfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02159dfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  
  FUN_0215b378();
  iVar11 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  uVar9 = _UNK_03caa988;
  puVar8 = _DAT_03caa980;
  uVar7 = _UNK_03caa5b8;
  uVar6 = _DAT_03caa5b0;
  if (0 < iVar11) {
    iVar11 = 0;
    do {
      uVar13 = (**(code **)(**(long **)(param_1 + 0x148) + 0x68))
                         (*(long **)(param_1 + 0x148),iVar11);
      if ((uVar13 & 1) != 0) {
        puVar14 = (undefined8 *)**(long **)(param_1 + 0x8c0);
        puVar3 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
        if ((puVar14 != puVar3) &&
           (*(char *)(puVar14 + 4) != '\0' || *(int *)((long)puVar14 + 0x24) != iVar11)) {
          puVar10 = puVar14 + 6;
          do {
            puVar14 = puVar10;
            if (puVar3 == puVar14) {
              puVar14 = puVar3;
              goto LAB_02159ec4;
            }
            puVar10 = puVar14 + 6;
          } while ((*(char *)(puVar14 + 4) != '\0') || (*(int *)((long)puVar14 + 0x24) != iVar11));
        }
LAB_02159ec4:
        if ((puVar14 != (undefined8 *)0x0) && (puVar3 != puVar14)) {
          uVar1 = *puVar14;
          uVar4 = puVar14[1];
          uVar2 = puVar14[2];
          plVar5 = (long *)puVar14[3];
          if (plVar5 == (long *)0x0) {
            local_a0 = 0;
            local_60 = (long *)0x0;
            local_80 = &local_a0;
            uStack_78 = uVar1;
            local_70 = uVar4;
            uStack_68 = uVar2;
          }
          else {
            (**(code **)(*plVar5 + 0x18))(plVar5);
            (**(code **)(*plVar5 + 0x18))(plVar5);
            local_a0 = 0;
            local_80 = &local_a0;
            uStack_78 = uVar1;
            local_70 = uVar4;
            uStack_68 = uVar2;
            local_60 = plVar5;
            (**(code **)(*plVar5 + 0x18))(plVar5);
          }
          FUN_0116c820(param_1,&local_80,0);
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
          uVar1 = local_a0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))(plVar5);
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
          local_88 = uVar1;
          local_a4 = 2;
          uStack_78 = uVar9;
          local_80 = puVar8;
          uStack_98 = uVar7;
          local_a0 = uVar6;
          FUN_0215b53c(*(undefined8 *)(param_1 + 0x900),&local_88,&local_80,&local_a0,&local_a4);
        }
      }
      iVar11 = iVar11 + 1;
      iVar12 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    } while (iVar11 < iVar12);
  }
  return;
}


