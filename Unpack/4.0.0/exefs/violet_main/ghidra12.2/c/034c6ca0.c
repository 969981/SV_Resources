/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c6ca0; name: FUN_034c6ca0
 */


void FUN_034c6ca0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar2) * 8)
        ; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9[1] == param_2) {
        if (plVar9[2] == 0) {
          return;
        }
        lVar8 = *(long *)(plVar9[2] + 0x30);
        if (lVar8 == 0) {
          return;
        }
        *(undefined1 *)(lVar8 + 0xe0) = 0;
        *(undefined4 *)(lVar8 + 0x48) = 0;
        *(undefined4 *)(lVar8 + 0x68) = 0;
        FUN_03477638(lVar8);
        if (*(int *)PTR_DAT_047e7008 != 2) {
          *(undefined4 *)PTR_DAT_047e7008 = 1;
        }
        puVar4 = PTR_DAT_047e2fd0;
        lVar10 = plVar9[2];
        plVar9 = *(long **)(lVar10 + 0x28);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x58);
          if (plVar9 == (long *)0x0) {
            return;
          }
          *plVar9 = (long)(PTR_DAT_047e72c0 + 0x10);
          plVar9[1] = 0;
          puVar5 = PTR_DAT_047e6f98;
          lVar7 = *(long *)(PTR_DAT_047e6f98 + 8);
          plVar9[2] = 0;
          plVar9[3] = lVar7;
          plVar1 = (long *)(puVar5 + 0x10);
          if (*(long *)(puVar5 + 0x10) != 0) {
            plVar1 = (long *)(lVar7 + 0x10);
          }
          *plVar1 = (long)plVar9;
          *(long **)(puVar5 + 8) = plVar9;
          *(int *)puVar5 = *(int *)puVar5 + 1;
          puVar5 = PTR_DAT_047e72c8;
          plVar9[6] = 0;
          plVar9[4] = 0;
          plVar9[5] = 0;
          *(undefined2 *)(plVar9 + 7) = 0;
          plVar9[8] = 0;
          plVar9[9] = 0;
          *plVar9 = (long)(puVar5 + 0x10);
          *(byte *)((long)plVar9 + 0x3a) = *(byte *)((long)plVar9 + 0x3a) & 0xf8;
          *(undefined4 *)(plVar9 + 10) = 0x3f800000;
          *(byte *)((long)plVar9 + 0x54) = *(byte *)((long)plVar9 + 0x54) | 1;
          *(long **)(lVar10 + 0x28) = plVar9;
          plVar9[1] = lVar10;
          iVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(lVar10 + 0x78));
          if (iVar6 != 1) {
            (**(code **)*plVar9)(plVar9);
            (**(code **)(puVar4 + 0x30))(4,plVar9);
            *(undefined8 *)(lVar10 + 0x28) = 0;
            return;
          }
        }
        *(byte *)((long)plVar9 + 0x54) = *(byte *)((long)plVar9 + 0x54) | 1;
        FUN_034c696c(plVar9 + 4,lVar8 + 0xc0);
        return;
      }
    }
  }
  return;
}


