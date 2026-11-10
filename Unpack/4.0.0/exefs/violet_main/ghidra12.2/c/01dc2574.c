/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc2574; name: FUN_01dc2574
 */


void FUN_01dc2574(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *local_120;
  long local_118;
  long lStack_110;
  long local_108;
  long *local_100;
  undefined1 auStack_f8 [72];
  long *local_b0;
  
  puVar4 = PTR_DAT_047d8b70;
  puVar3 = PTR_PTR_047d4508;
  if ((*(int *)(param_1 + 0x6c38) != 3) &&
     ((*(uint *)(param_1 + 0x6c3c) >> 0x14 & 0x3f) * (*(uint *)(param_1 + 0x6c3c) >> 0x1a) != 0)) {
    uVar8 = 0;
    if ((param_2 & 1) == 0) {
      do {
        FUN_014e5ac0(auStack_f8,param_1 + (ulong)*(byte *)(param_1 + 0x68da + uVar8) * 0x98 + 0x30);
        plVar7 = *(long **)(param_1 + 0x6cd0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x58))(plVar7);
        }
        plVar5 = local_b0;
        plVar1 = (long *)puVar3;
        plVar2 = (long *)puVar4;
        if (local_b0 != (long *)0x0) {
          plVar1 = local_b0 + 7;
          plVar2 = local_b0 + 6;
        }
        local_118 = *plVar2;
        lStack_110 = *plVar1;
        if (local_b0 == (long *)0x0) {
          local_108 = 0;
        }
        else {
          local_108 = local_b0[8];
          local_100 = (long *)0x0;
          (**(code **)(*local_b0 + 0x18))(local_b0);
        }
        local_100 = plVar5;
        if ((plVar7 != (long *)0x0) && (lVar6 = FUN_00e895f4(plVar7[0x2e],&local_118), lVar6 != 0))
        {
          FUN_00dfcea4();
        }
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x60))(plVar7);
        }
        FUN_014e58d8(auStack_f8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x14) & 0x3f) *
                       (ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x1a));
    }
    else {
      do {
        FUN_014e5ac0(auStack_f8,param_1 + (ulong)*(byte *)(param_1 + 0x68da + uVar8) * 0x98 + 0x30);
        plVar7 = *(long **)(param_1 + 0x6cd0);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x58))(plVar7);
        }
        plVar5 = local_b0;
        plVar1 = (long *)puVar3;
        plVar2 = (long *)puVar4;
        if (local_b0 != (long *)0x0) {
          plVar1 = local_b0 + 7;
          plVar2 = local_b0 + 6;
        }
        local_118 = *plVar2;
        lStack_110 = *plVar1;
        if (local_b0 == (long *)0x0) {
          local_108 = 0;
        }
        else {
          local_108 = local_b0[8];
          local_100 = (long *)0x0;
          (**(code **)(*local_b0 + 0x18))(local_b0);
        }
        local_100 = plVar5;
        if ((plVar7 != (long *)0x0) && (lVar6 = FUN_00e895f4(plVar7[0x2e],&local_118), lVar6 != 0))
        {
          FUN_00dfcea4();
        }
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x60))(plVar7);
        }
        local_120 = *(long **)(param_1 + 0x6cd0);
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x58))();
        }
        plVar2 = local_b0;
        plVar7 = (long *)puVar3;
        plVar1 = (long *)puVar4;
        if (local_b0 != (long *)0x0) {
          plVar7 = local_b0 + 7;
          plVar1 = local_b0 + 6;
        }
        local_118 = *plVar1;
        lStack_110 = *plVar7;
        if (local_b0 == (long *)0x0) {
          local_108 = 0;
        }
        else {
          local_108 = local_b0[8];
          local_100 = (long *)0x0;
          (**(code **)(*local_b0 + 0x18))(local_b0);
        }
        local_100 = plVar2;
        FUN_01dc287c(&local_120,&local_118);
        if (local_100 != (long *)0x0) {
          (**(code **)(*local_100 + 0x20))();
        }
        if (local_120 != (long *)0x0) {
          (**(code **)(*local_120 + 0x60))();
        }
        FUN_014e58d8(auStack_f8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < ((ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x14) & 0x3f) *
                       (ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x1a));
    }
  }
  return;
}


