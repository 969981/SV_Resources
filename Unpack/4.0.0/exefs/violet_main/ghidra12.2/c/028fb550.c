/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028fb550; name: FUN_028fb550
 */


ulong FUN_028fb550(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_48;
  long local_28;
  
  piVar5 = (int *)0x0;
  if (*(long *)(param_1 + 0xb8) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      puVar3 = (uint *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x70))();
      piVar5 = (int *)((long)puVar3 + (ulong)*puVar3);
    }
  }
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar6 == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((long)piVar5 + uVar6);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  }
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    lVar8 = 0;
    uVar6 = 0;
    do {
      uVar4 = (ulong)*(uint *)((long)puVar3 + lVar8 + 4);
      lVar1 = lVar8 + (uVar4 - (long)*(int *)((long)puVar3 + lVar8 + uVar4 + 4));
      if ((*(ushort *)((long)puVar3 + lVar1 + 4) < 5) ||
         (uVar7 = (ulong)*(ushort *)((long)puVar3 + lVar1 + 8), uVar7 == 0)) {
        local_28 = 0;
      }
      else {
        lVar1 = uVar4 + uVar7;
        local_28 = (long)puVar3 +
                   lVar8 + lVar1 + (ulong)*(uint *)((long)puVar3 + lVar8 + lVar1 + 4) + 4;
      }
      local_28 = local_28 + 4;
      local_48 = &DAT_03c7f8fc;
      uVar4 = FUN_028fb6b0(&local_28,&local_48);
      if ((uVar4 & 1) != 0) {
        uVar4 = uVar6 & 0xffffff00;
        uVar6 = uVar6 & 0xff;
        uVar7 = 0x100000000;
        goto LAB_028fb670;
      }
      lVar8 = lVar8 + 4;
      uVar6 = uVar6 + 1;
    } while ((ulong)uVar2 * 4 != lVar8);
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar4 = 0;
LAB_028fb670:
  return uVar7 | uVar6 | uVar4;
}


