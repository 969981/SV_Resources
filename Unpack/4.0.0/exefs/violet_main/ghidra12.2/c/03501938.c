/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03501938; name: FUN_03501938
 */


void FUN_03501938(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  
  puVar2 = PTR_PTR_047e71e0;
  puVar1 = PTR_DAT_047e2fd0;
  iVar8 = (int)param_1[1];
  if (iVar8 != 0) {
    lVar9 = (ulong)(iVar8 - 1) << 3;
    do {
      lVar4 = *param_1;
      plVar6 = *(long **)(lVar4 + lVar9);
      if (plVar6 != (long *)0x0) {
        plVar3 = (long *)plVar6[0xd];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,puVar2);
          plVar6[0xd] = 0;
        }
        puVar7 = (undefined8 *)plVar6[0xe];
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(puVar1 + 0x30))(5,puVar7);
          plVar6[0xe] = 0;
        }
        (**(code **)(*plVar6 + 0x28))(plVar6);
        lVar4 = *param_1;
        puVar7 = *(undefined8 **)(lVar4 + lVar9);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(puVar1 + 0x30))(5,puVar7);
          lVar4 = *param_1;
        }
      }
      uVar5 = *(uint *)(param_1 + 1);
      if (1 < uVar5) {
        *(undefined8 *)(lVar4 + lVar9) = *(undefined8 *)(lVar4 + (ulong)uVar5 * 8 + -8);
        uVar5 = *(uint *)(param_1 + 1);
      }
      lVar9 = lVar9 + -8;
      *(uint *)(param_1 + 1) = uVar5 - 1;
      iVar8 = iVar8 + -1;
      *(undefined1 *)((long)param_1 + 0x24) = 0;
    } while (iVar8 != 0);
  }
  lVar9 = param_1[2];
  if (*(uint *)(param_1 + 3) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 3) * 0x30;
    do {
      FUN_0350499c(lVar9);
      lVar9 = lVar9 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    lVar9 = param_1[2];
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0x1000000ffffffff;
  if (lVar9 != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar1 + 0x30))(0,lVar9);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


