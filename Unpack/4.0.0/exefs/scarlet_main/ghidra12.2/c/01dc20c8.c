/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc20c8; name: FUN_01dc20c8
 */


void FUN_01dc20c8(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long local_120;
  long lStack_118;
  long local_110;
  long *local_108;
  undefined1 auStack_100 [24];
  long *local_e8;
  long *local_c0;
  long *local_b8;
  
  puVar4 = PTR_DAT_047d8b70;
  puVar3 = PTR_PTR_047d4508;
  if ((*(int *)(param_1 + 0x6c38) != 3) &&
     ((*(uint *)(param_1 + 0x6c3c) >> 0x14 & 0x3f) * (*(uint *)(param_1 + 0x6c3c) >> 0x1a) != 0)) {
    uVar9 = 0;
    do {
      FUN_014e5ac0(auStack_100,param_1 + (ulong)*(byte *)(param_1 + 0x68da + uVar9) * 0x98 + 0x30);
      plVar8 = *(long **)(param_1 + 0x6cd0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      plVar5 = local_b8;
      plVar1 = (long *)puVar3;
      plVar2 = (long *)puVar4;
      if (local_b8 != (long *)0x0) {
        plVar1 = local_b8 + 7;
        plVar2 = local_b8 + 6;
      }
      local_120 = *plVar2;
      lStack_118 = *plVar1;
      if (local_b8 == (long *)0x0) {
        local_110 = 0;
      }
      else {
        local_110 = local_b8[8];
        local_108 = (long *)0x0;
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
      local_108 = plVar5;
      if ((plVar8 != (long *)0x0) &&
         (puVar6 = (undefined8 *)FUN_00e895f4(plVar8[0x2e],&local_120), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)(*(long *)*puVar6 + 0x20))((long *)*puVar6,1);
        (**(code **)(*(long *)*puVar6 + 0xe0))();
        *(undefined1 *)((long)puVar6 + 0x31) = 0;
        if ((undefined1 *)puVar6[7] != (undefined1 *)0x0) {
          *(undefined1 *)puVar6[7] = 1;
        }
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x60))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x6cd0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      plVar5 = local_c0;
      plVar1 = (long *)puVar3;
      plVar2 = (long *)puVar4;
      if (local_c0 != (long *)0x0) {
        plVar1 = local_c0 + 7;
        plVar2 = local_c0 + 6;
      }
      local_120 = *plVar2;
      lStack_118 = *plVar1;
      if (local_c0 == (long *)0x0) {
        local_110 = 0;
      }
      else {
        local_110 = local_c0[8];
        local_108 = (long *)0x0;
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      local_108 = plVar5;
      if ((plVar8 != (long *)0x0) && (lVar7 = FUN_00e895f4(plVar8[0x2e],&local_120), lVar7 != 0)) {
        FUN_00dfcea4();
      }
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x60))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x6cd0);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
      }
      plVar5 = local_e8;
      plVar1 = (long *)puVar3;
      plVar2 = (long *)puVar4;
      if (local_e8 != (long *)0x0) {
        plVar1 = local_e8 + 7;
        plVar2 = local_e8 + 6;
      }
      local_120 = *plVar2;
      lStack_118 = *plVar1;
      if (local_e8 == (long *)0x0) {
        local_110 = 0;
      }
      else {
        local_110 = local_e8[8];
        local_108 = (long *)0x0;
        (**(code **)(*local_e8 + 0x18))(local_e8);
      }
      local_108 = plVar5;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x58))(plVar8);
        lVar7 = FUN_00c8c7b4(plVar8[0x2e],&local_120);
        (**(code **)(*plVar8 + 0x60))(plVar8);
        if (lVar7 != 0) {
          *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
        }
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x60))(plVar8);
      }
      FUN_014e58d8(auStack_100);
      uVar9 = uVar9 + 1;
    } while (uVar9 < ((ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x14) & 0x3f) *
                     (ulong)(*(uint *)(param_1 + 0x6c3c) >> 0x1a));
  }
  return;
}


