/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f2128; name: FUN_026f2128
 */


void FUN_026f2128(long *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (((*param_1 == 0) || (plVar5 = (long *)FUN_026e4c70(*param_1 + 8), plVar5 == (long *)0x0)) ||
     (uVar6 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar6 & 1) != 0)) {
    return;
  }
  uVar2 = FUN_026f20f4(plVar5);
  uVar3 = (**(code **)(*plVar5 + 0x170))(plVar5);
  if (uVar3 != 0) {
    if ((ulong)*(uint *)*param_2 + (ulong)uVar3 + 4 <= (ulong)*(uint *)(param_2 + 2)) {
      puVar1 = (undefined2 *)(param_2[1] + (ulong)*(uint *)*param_2);
      *puVar1 = uVar2;
      *(int *)*param_2 = *(int *)*param_2 + 2;
      puVar1[1] = uVar3;
      *(int *)*param_2 = *(int *)*param_2 + 2;
      uVar4 = (**(code **)(*plVar5 + 0x160))
                        (plVar5,puVar1 + 2,*(int *)(param_2 + 2) - *(int *)*param_2);
      *(int *)*param_2 = *(int *)*param_2 + (uVar4 & 0xffff);
    }
  }
  return;
}


