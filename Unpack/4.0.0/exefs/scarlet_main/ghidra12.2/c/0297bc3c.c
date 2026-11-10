/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297bc3c; name: FUN_0297bc3c
 */


ulong FUN_0297bc3c(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar10 = *param_2;
  plVar1 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x60) != 0) {
    plVar3 = *(long **)(param_1 + 0x38);
    if (plVar3 != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 0x40);
      plVar9 = (long *)*plVar3;
      uVar8 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar3,0x20,4);
      }
      else {
        FUN_00c48fe8(plVar11,plVar3,0x20,4);
      }
      while (plVar9 != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x40);
        plVar11 = (long *)*plVar9;
        uVar8 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,plVar9,0x20,4);
          plVar9 = plVar11;
        }
        else {
          FUN_00c48fe8(plVar3,plVar9,0x20,4);
          plVar9 = plVar11;
        }
      }
    }
    uVar8 = *(ulong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (uVar8 != 0) {
      uVar4 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar6 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar6 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar6 * 8 + 0x10) = 0;
          lVar7 = uVar6 * 8;
          uVar6 = uVar6 + 4;
          *(undefined8 *)(*plVar1 + lVar7 + 0x18) = 0;
        } while ((uVar8 & 0xfffffffffffffffc) != uVar6);
      }
      if (uVar4 != 0) {
        lVar7 = uVar6 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar7) = 0;
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  uVar8 = 8;
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    uVar5 = *(undefined8 *)((long)param_2 + uVar8);
    local_48 = *(undefined4 *)((undefined8 *)((long)param_2 + uVar8) + 1);
    local_50 = (undefined4)uVar5;
    uStack_4c = (undefined4)((ulong)uVar5 >> 0x20);
    puVar2 = (undefined8 *)FUN_010803d0(plVar1,&local_50);
    uVar8 = (ulong)((int)uVar8 + 0xc);
    *puVar2 = CONCAT44(local_48,uStack_4c);
  }
  return uVar8;
}


