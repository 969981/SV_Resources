/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d5030; name: FUN_007d5030
 */


void FUN_007d5030(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long local_50 [2];
  
  uVar1 = *(uint *)(param_1 + 0x850);
  uVar7 = (ulong)uVar1;
  if (uVar1 == 0) {
    return;
  }
  lVar3 = FUN_007ec50c();
  if (lVar3 != 0) {
    lVar3 = FUN_007ec50c(param_1);
    lVar4 = FUN_007ec4a8(param_1);
    if (lVar3 == lVar4) {
      if (0 < (int)uVar1) {
        puVar8 = (undefined8 *)(param_1 + 0x798);
        do {
          FUN_007dc878(local_50,*(undefined8 *)(param_1 + 200),*puVar8,1);
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar7 != 0);
      }
      FUN_007d44f0(param_1);
      goto LAB_007d50dc;
    }
  }
  lVar3 = FUN_007ec50c(param_1);
  if ((lVar3 != 0) && (lVar3 = FUN_007ec4a8(param_1), lVar3 != 0)) {
    lVar3 = FUN_007ec50c(param_1);
    lVar4 = FUN_007ec4a8(param_1);
    if (lVar3 != lVar4) {
      lVar3 = FUN_007ec50c(param_1);
      if (0 < (int)*(uint *)(param_1 + 0x850)) {
        lVar4 = 0;
        do {
          if (*(long *)(param_1 + lVar4 + 0x798) == lVar3) {
            uVar6 = FUN_007ec50c(param_1);
            plVar5 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
            lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,uVar6);
            if (lVar3 != 0) {
              FUN_007d5240(param_1,lVar3);
              FUN_007d45f4(local_50,param_1,0);
            }
            goto LAB_007d50dc;
          }
          lVar4 = lVar4 + 8;
        } while ((ulong)*(uint *)(param_1 + 0x850) * 8 != lVar4);
      }
      FUN_007d4ef0(param_1,param_1 + 0x798,uVar1);
      plVar5 = (long *)FUN_0079365c();
      lVar3 = *plVar5;
      local_50[0] = 0;
      FUN_007935cc(local_50);
      *(long *)(param_1 + 0x860) = local_50[0] + lVar3 * 3000;
      plVar5 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      puVar2 = PTR_DAT_047d11a0;
      if (0 < (int)uVar1) {
        puVar8 = (undefined8 *)(param_1 + 0x798);
        do {
          lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,*puVar8);
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0x3a) == '\x02')) {
            *(undefined1 *)(lVar3 + 0x78) = 1;
            local_50[0] = 0;
            FUN_007935cc(local_50);
            *(long *)(lVar3 + 0x88) = local_50[0];
            FUN_007e0760(*(undefined8 *)puVar2,lVar3);
          }
          puVar8 = puVar8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
LAB_007d50dc:
  *(undefined4 *)(param_1 + 0x850) = 0;
  return;
}


