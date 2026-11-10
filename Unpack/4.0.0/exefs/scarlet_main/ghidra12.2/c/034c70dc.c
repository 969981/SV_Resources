/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c70dc; name: FUN_034c70dc
 */


void FUN_034c70dc(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (plVar7 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar2) * 8)
        ; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7[1] == param_2) {
        lVar9 = plVar7[2];
        if (*(long *)(lVar9 + 0x40) != 0) {
          return;
        }
        plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90);
        puVar5 = PTR_DAT_047e6d58;
        if (plVar7 == (long *)0x0) {
          return;
        }
        *plVar7 = (long)(PTR_DAT_047e6d50 + 0x10);
        plVar7[1] = 0;
        lVar8 = *(long *)(puVar5 + 8);
        plVar7[2] = 0;
        plVar7[3] = lVar8;
        plVar1 = (long *)(puVar5 + 0x10);
        if (*(long *)(puVar5 + 0x10) != 0) {
          plVar1 = (long *)(lVar8 + 0x10);
        }
        *plVar1 = (long)plVar7;
        *(long **)(puVar5 + 8) = plVar7;
        *(int *)puVar5 = *(int *)puVar5 + 1;
        puVar5 = PTR_DAT_047e6d60;
        plVar7[6] = 0;
        plVar7[4] = 0;
        plVar7[5] = 0;
        *(undefined4 *)(plVar7 + 7) = 0;
        *(undefined8 *)((long)plVar7 + 0x74) = 0;
        *(undefined8 *)((long)plVar7 + 0x7c) = 0;
        *(undefined8 *)((long)plVar7 + 0x44) = 0;
        *(undefined8 *)((long)plVar7 + 0x54) = 0;
        *(undefined1 *)(plVar7 + 0x11) = 1;
        *(undefined8 *)((long)plVar7 + 100) = 0x3f80000000000000;
        *(undefined8 *)((long)plVar7 + 0x6c) = 0x3f80000000000000;
        *plVar7 = (long)(puVar5 + 0x10);
        *(undefined4 *)((long)plVar7 + 0x84) = 0x3f800000;
        *(undefined8 *)((long)plVar7 + 0x3c) = 0x3f800000;
        *(undefined8 *)((long)plVar7 + 0x4c) = 0x3f800000;
        *(undefined8 *)((long)plVar7 + 0x5c) = 0x3f800000;
        *(long **)(lVar9 + 0x40) = plVar7;
        plVar7[1] = lVar9;
        iVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(lVar9 + 0x78));
        if (iVar6 == 1) {
          return;
        }
        (**(code **)*plVar7)(plVar7);
        (**(code **)(puVar4 + 0x30))(4,plVar7);
        *(undefined8 *)(lVar9 + 0x40) = 0;
        return;
      }
    }
  }
  return;
}


