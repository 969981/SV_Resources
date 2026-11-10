/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cd028; name: FUN_034cd028
 */


undefined8 FUN_034cd028(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_047e2fd0;
  lVar9 = *(long *)(param_2 + 0x10);
  plVar8 = *(long **)(lVar9 + 0x58);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xe0);
    if (plVar8 != (long *)0x0) {
      *plVar8 = (long)(PTR_DAT_047e6d70 + 0x10);
      plVar8[1] = 0;
      puVar3 = PTR_DAT_047e6cc8;
      lVar7 = *(long *)(PTR_DAT_047e6cc8 + 8);
      plVar8[2] = 0;
      plVar8[3] = lVar7;
      plVar1 = (long *)(puVar3 + 0x10);
      if (*(long *)(puVar3 + 0x10) != 0) {
        plVar1 = (long *)(lVar7 + 0x10);
      }
      *plVar1 = (long)plVar8;
      puVar4 = PTR_DAT_047e6d78;
      *(long **)(puVar3 + 8) = plVar8;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      *plVar8 = (long)(puVar4 + 0x10);
      plVar8[10] = -1;
      plVar8[0xb] = -1;
      plVar8[0xc] = 0x3f80000000000000;
      plVar8[0xd] = -1;
      plVar8[0x10] = -1;
      plVar8[8] = 0;
      plVar8[9] = 0;
      *(undefined4 *)(plVar8 + 0xe) = 0;
      *(undefined8 *)((long)plVar8 + 0x74) = 0x3f80000000000000;
      *(undefined4 *)((long)plVar8 + 0x7c) = 0;
      *(undefined4 *)(plVar8 + 0x11) = 0;
      *(undefined8 *)((long)plVar8 + 0x8c) = 0x3f80000000000000;
      *(undefined8 *)((long)plVar8 + 0x94) = 0;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      *(undefined1 *)(plVar8 + 0x19) = 0;
      plVar8[0x14] = 0;
      plVar8[0x15] = 0;
      plVar8[0x18] = 0x10100000000;
      plVar8[0x1a] = 0;
      plVar8[0x1b] = 0;
      *(long **)(lVar9 + 0x58) = plVar8;
      plVar8[1] = lVar9;
      iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar9 + 0x78));
      if (iVar5 == 1) goto LAB_034cd050;
      (**(code **)*plVar8)(plVar8);
      (**(code **)(puVar2 + 0x30))(4,plVar8);
      *(undefined8 *)(lVar9 + 0x58) = 0;
    }
    uVar6 = 2;
  }
  else {
LAB_034cd050:
    *(long *)(param_1 + 8) = param_2;
    FUN_034cbb38(plVar8,param_1);
    uVar6 = 1;
  }
  return uVar6;
}


