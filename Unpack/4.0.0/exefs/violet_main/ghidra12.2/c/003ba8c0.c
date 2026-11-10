/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ba8c0; name: FUN_003ba8c0
 */


undefined8 FUN_003ba8c0(int *param_1,uint param_2,uint param_3,long param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar6 = (undefined8 *)(param_4 + (ulong)param_2 * 0x28);
  if (*(int *)(puVar6 + 2) == 0) {
    return 1;
  }
  uVar7 = (ulong)param_2;
  piVar8 = (int *)(param_4 + uVar7 * 0x28 + 0x14);
  if (*piVar8 != 0) {
    return 1;
  }
  *piVar8 = 1;
  if (0x1b < param_2) goto LAB_003baa08;
  uVar2 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
  if ((param_3 >> 0xb & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      bVar4 = false;
      goto LAB_003ba940;
    }
    iVar3 = **(int **)(param_1 + 2);
    if (iVar3 < 0x304) {
      bVar4 = false;
    }
    else {
      bVar4 = iVar3 != 0x10000;
    }
  }
  else {
    bVar4 = true;
LAB_003ba940:
    if (((0x4e1ffffUL >> (uVar7 & 0x3f) & 1) == 0) && ((uVar2 >> 3 & 1) != 0)) {
      return 1;
    }
  }
  if ((((((param_2 != 0) && (*param_1 == 0x300)) ||
        (((0xfdfd6a6U >> (uVar7 & 0x3f) & 1) == 0 && (bVar4)))) ||
       (((uVar2 = 0x4237fff >> (uVar7 & 0x3f), (param_3 >> 7 & 1) == 0 && ((uVar2 & 1) == 0)) &&
        (!bVar4)))) || ((((uVar2 & 1) == 0 && (!bVar4)) && (param_1[0xe] != 0)))) ||
     ((((uint)(&DAT_044a0ddc)[uVar7 * 0xe] >> 6 ^ 0xffffffff) & 1) == 0 && param_1[0x32] != 0)) {
    return 1;
  }
  ppuVar1 = &PTR_LAB_044a0df0 + uVar7 * 7;
  if (param_1[0xe] != 0) {
    ppuVar1 = &PTR_LAB_044a0de8 + uVar7 * 7;
  }
  if ((code *)*ppuVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003baa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)*ppuVar1)();
    return uVar5;
  }
LAB_003baa08:
  param_4 = param_4 + uVar7 * 0x28;
  uVar5 = FUN_003bf680(param_1,param_3,*(undefined4 *)(param_4 + 0x18),*puVar6,
                       *(undefined8 *)(param_4 + 8));
  return uVar5;
}


