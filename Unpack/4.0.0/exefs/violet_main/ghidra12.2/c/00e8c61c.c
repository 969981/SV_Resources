/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8c61c; name: FUN_00e8c61c
 */


void FUN_00e8c61c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  do {
    lVar2 = param_1[0xf] - param_1[0xe];
    if (lVar2 == 0) {
      lVar2 = *param_1;
      lVar1 = param_1[1];
      FUN_00e8c738(param_1,param_2);
      uVar6 = (lVar1 - lVar2 >> 3) * -0x5555555555555555;
      goto LAB_00e8c670;
    }
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar2 + param_1[0xe] + -8;
    uVar4 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar4) =
         *(ulong *)(param_1[7] + uVar4) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
    lVar2 = *param_1;
  } while ((ulong)((param_1[1] - lVar2 >> 3) * -0x5555555555555555) <= uVar6);
  puVar7 = (undefined8 *)(lVar2 + uVar6 * 0x18);
  plVar8 = puVar7 + 1;
  *puVar7 = *param_2;
  plVar5 = (long *)param_2[1];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar3 = (long *)*plVar8;
  *plVar8 = (long)plVar5;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  *(undefined4 *)(lVar2 + uVar6 * 0x18 + 0x10) = *(undefined4 *)(param_2 + 2);
  if ((ulong)param_1[0x15] <= uVar6) {
LAB_00e8c670:
    param_1[0x15] = uVar6 + 1;
  }
  return;
}


