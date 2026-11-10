/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc2404; name: FUN_01dc2404
 */


undefined8 FUN_01dc2404(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long local_118;
  long lStack_110;
  long local_108;
  long *local_100;
  undefined1 auStack_f8 [64];
  long *local_b8;
  long *local_48;
  
  puVar5 = PTR_DAT_047d8b70;
  puVar4 = PTR_PTR_047d4508;
  uVar2 = *(uint *)(param_1 + 0x6c3c);
  if ((uVar2 >> 0x14 & 0x3f) * (uVar2 >> 0x1a) != 0) {
    uVar8 = 0;
    do {
      FUN_014e5ac0(auStack_f8,param_1 + (ulong)*(byte *)(param_1 + 0x68da + uVar8) * 0x98 + 0x30);
      local_48 = *(long **)(param_1 + 0x6cd0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x58))();
      }
      plVar6 = local_b8;
      plVar1 = (long *)puVar4;
      plVar3 = (long *)puVar5;
      if (local_b8 != (long *)0x0) {
        plVar1 = local_b8 + 7;
        plVar3 = local_b8 + 6;
      }
      local_118 = *plVar3;
      lStack_110 = *plVar1;
      if (local_b8 == (long *)0x0) {
        local_108 = 0;
      }
      else {
        local_108 = local_b8[8];
        local_100 = (long *)0x0;
        (**(code **)(*local_b8 + 0x18))(local_b8);
      }
      local_100 = plVar6;
      uVar7 = FUN_01992df4(&local_48,&local_118);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x60))();
      }
      FUN_014e58d8(auStack_f8);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x6c3c);
      uVar8 = uVar8 + 1;
    } while (uVar8 < ((ulong)(uVar2 >> 0x14) & 0x3f) * (ulong)(uVar2 >> 0x1a));
  }
  return 1;
}


