/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c53b6c; name: FUN_00c53b6c
 */


void FUN_00c53b6c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x74);
  if (iVar1 == 2) {
    uVar2 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*param_1 + 0x70) + 0x110),*param_1 + 0x30);
    uVar3 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1[6] + 0x70) + 0x110),param_1[6] + 0x30);
    FUN_00c56998(param_2,uVar2,param_1 + 1,param_1 + 3,uVar3,param_1 + 7,param_1 + 9,
                 (int)param_1[0xe]);
    return;
  }
  if (iVar1 == 0) {
    uVar2 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*param_1 + 0x70) + 0x110),*param_1 + 0x30);
    uVar3 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1[6] + 0x70) + 0x110),param_1[6] + 0x30);
    FUN_00c59578(param_2,uVar2,param_1 + 0xd,uVar3,param_1 + 7,param_1 + 9,(int)param_1[0xe]);
    return;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*param_1 + 0x70) + 0x110),*param_1 + 0x30);
    uVar3 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1[6] + 0x70) + 0x110),param_1[6] + 0x30);
    FUN_00c59da4(param_2,uVar2,param_1 + 1,param_1 + 3,uVar3,(int)param_1[0xe]);
    return;
  }
  if (iVar1 == 3) {
    uVar2 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(*param_1 + 0x70) + 0x110),*param_1 + 0x30);
    uVar3 = FUN_00ccbbb0(*(undefined8 *)(*(long *)(param_1[6] + 0x70) + 0x110),param_1[6] + 0x30);
    FUN_00c5a30c(param_2,uVar2,uVar3,param_1[0xc],(int)param_1[0xe]);
    return;
  }
  return;
}


