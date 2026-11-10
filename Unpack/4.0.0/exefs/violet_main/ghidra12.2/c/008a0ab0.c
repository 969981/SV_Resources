/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a0ab0; name: FUN_008a0ab0
 */


void FUN_008a0ab0(undefined8 param_1,ushort *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 0x30);
  iVar1 = FUN_0089a648(*(undefined8 *)(param_4 + 0xa0));
  uVar3 = FUN_008b50f0(param_5);
  if (lVar7 == param_3) {
    iVar6 = iVar1;
  }
  else {
    iVar6 = *(int *)(param_4 + 0x94);
    iVar2 = FUN_008b5170(param_5);
    iVar6 = iVar2 + iVar6;
  }
  uVar4 = FUN_0089a63c(*(undefined8 *)(param_4 + 0xa0),iVar6);
  lVar7 = FUN_0089a2b0(uVar4,uVar3);
  if (lVar7 == 0) {
    FUN_00899e88(uVar4,uVar3);
    uVar5 = *param_2 | 0x100;
    *param_2 = uVar5;
  }
  else {
    uVar5 = *param_2;
  }
  *param_2 = uVar5 & 0xf1ff | ((short)iVar1 - (short)iVar6) * 0x200 & 0xe00U;
  return;
}


