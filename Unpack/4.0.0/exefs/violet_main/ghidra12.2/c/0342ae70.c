/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342ae70; name: FUN_0342ae70
 */


undefined8 FUN_0342ae70(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047e2fd0;
  lVar8 = *(long *)(param_1 + 8);
  plVar7 = *(long **)(lVar8 + 0x38);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x48);
    if (plVar7 != (long *)0x0) {
      plVar7[7] = 0;
      plVar7[8] = 0;
      plVar7[2] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      *plVar7 = (long)(PTR_DAT_047e6e88 + 0x10);
      plVar7[1] = 0;
      puVar3 = PTR_DAT_047e6e58;
      lVar6 = *(long *)(PTR_DAT_047e6e58 + 8);
      plVar7[2] = 0;
      plVar7[3] = lVar6;
      plVar1 = (long *)(puVar3 + 0x10);
      if (*(long *)(puVar3 + 0x10) != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
      }
      *plVar1 = (long)plVar7;
      *(long **)(puVar3 + 8) = plVar7;
      *(int *)puVar3 = *(int *)puVar3 + 1;
      puVar3 = PTR_DAT_047e6e60;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[8] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      *plVar7 = (long)(puVar3 + 0x10);
      *(long **)(lVar8 + 0x38) = plVar7;
      plVar7[1] = lVar8;
      iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(lVar8 + 0x78));
      if (iVar4 == 1) goto LAB_0342ae8c;
      (**(code **)*plVar7)(plVar7);
      (**(code **)(puVar2 + 0x30))(4,plVar7);
      *(undefined8 *)(lVar8 + 0x38) = 0;
    }
    uVar5 = 2;
  }
  else {
LAB_0342ae8c:
    plVar7[8] = (long)FUN_0342af8c;
    uVar5 = 1;
  }
  return uVar5;
}


