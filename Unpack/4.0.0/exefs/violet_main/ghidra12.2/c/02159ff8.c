/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02159ff8; name: FUN_02159ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02159ff8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long **pplVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  
  uVar11 = FUN_021545c4(*(undefined8 *)(param_1 + 0x900));
  if ((uVar11 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    iVar9 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
    uVar6 = _UNK_03caa988;
    pplVar5 = _DAT_03caa980;
    uVar12 = 1;
    if (0 < iVar9) {
      iVar9 = 0;
      do {
        uVar11 = (**(code **)(**(long **)(param_1 + 0x148) + 0x68))
                           (*(long **)(param_1 + 0x148),iVar9);
        if ((uVar11 & 1) != 0) {
          puVar13 = (undefined8 *)**(long **)(param_1 + 0x8c0);
          puVar2 = (undefined8 *)(*(long **)(param_1 + 0x8c0))[1];
          if ((puVar13 != puVar2) &&
             (*(char *)(puVar13 + 4) != '\0' || *(int *)((long)puVar13 + 0x24) != iVar9)) {
            puVar8 = puVar13 + 6;
            do {
              puVar13 = puVar8;
              if (puVar2 == puVar13) {
                puVar13 = puVar2;
                goto LAB_0215a0c4;
              }
              puVar8 = puVar13 + 6;
            } while ((*(char *)(puVar13 + 4) != '\0') || (*(int *)((long)puVar13 + 0x24) != iVar9));
          }
LAB_0215a0c4:
          if ((puVar13 != (undefined8 *)0x0) && (puVar2 != puVar13)) {
            uVar12 = *puVar13;
            uVar3 = puVar13[1];
            uVar1 = puVar13[2];
            plVar4 = (long *)puVar13[3];
            if (plVar4 == (long *)0x0) {
              local_68 = (long *)0x0;
              local_70 = (long *)0x0;
              local_90 = &local_68;
              uStack_88 = uVar12;
              local_80 = uVar3;
              uStack_78 = uVar1;
            }
            else {
              (**(code **)(*plVar4 + 0x18))(plVar4);
              (**(code **)(*plVar4 + 0x18))(plVar4);
              local_68 = (long *)0x0;
              local_90 = &local_68;
              uStack_88 = uVar12;
              local_80 = uVar3;
              uStack_78 = uVar1;
              local_70 = plVar4;
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            FUN_0116c820(param_1,&local_90,0);
            if (local_70 != (long *)0x0) {
              (**(code **)(*local_70 + 0x20))();
            }
            plVar7 = local_68;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x20))(plVar4);
              (**(code **)(*plVar4 + 0x20))(plVar4);
            }
            uVar11 = plVar7[0x1a];
            if ((~(uint)uVar11 & 0xf) == 0) {
              (**(code **)(*plVar7 + 0xe0))(plVar7,0);
              uVar11 = plVar7[0x1a];
            }
            plVar7[0x1a] = uVar11 & 0xfffffffffffffffe;
            uStack_88 = uVar6;
            local_90 = pplVar5;
            (**(code **)(*plVar7 + 0x78))(plVar7,&local_90);
            *(undefined4 *)((long)puVar13 + 0x24) = 0xffffffff;
            *(undefined1 *)(puVar13 + 4) = 1;
          }
        }
        iVar9 = iVar9 + 1;
        iVar10 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
      } while (iVar9 < iVar10);
      uVar12 = 1;
    }
  }
  return uVar12;
}


