/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297c32c; name: FUN_0297c32c
 */


ulong FUN_0297c32c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar10 = *param_2;
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x40);
      plVar8 = (long *)*plVar9;
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar9,0x28,4);
      }
      else {
        FUN_00c48fe8(plVar11,plVar9,0x28,4);
      }
      while (plVar8 != (long *)0x0) {
        plVar9 = *(long **)(param_1 + 0x40);
        plVar11 = (long *)*plVar8;
        uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x28,4);
          plVar8 = plVar11;
        }
        else {
          FUN_00c48fe8(plVar9,plVar8,0x28,4);
          plVar8 = plVar11;
        }
      }
    }
    uVar7 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (lVar10 == 0) {
    uVar7 = 8;
  }
  else {
    uVar7 = 8;
    do {
      puVar3 = (undefined8 *)((long)param_2 + uVar7);
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      local_48 = *(undefined4 *)(puVar3 + 2);
      puVar3 = (undefined8 *)FUN_010807f8(plVar1,&local_58);
      uVar2 = ((undefined8 *)((ulong)&local_58 | 4))[1];
      uVar7 = (ulong)((int)uVar7 + 0x14);
      lVar10 = lVar10 + -1;
      *puVar3 = *(undefined8 *)((ulong)&local_58 | 4);
      puVar3[1] = uVar2;
    } while (lVar10 != 0);
  }
  return uVar7;
}


