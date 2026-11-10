/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a9840; name: FUN_008a9840
 */


void FUN_008a9840(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_4 == 0) {
    if (param_5 == 0) {
      iVar1 = *(int *)(param_1 + 0x220);
      goto LAB_008a98d4;
    }
    uVar6 = 0x48535244;
    local_18 = 8;
    lVar3 = FUN_00899bd0(param_3,param_2,0x48535244,1,&local_18);
    *(long *)(param_1 + 0x218) = lVar3;
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    puVar5 = &local_18;
  }
  else {
    uVar6 = 0x4b53414d;
    local_14 = 1;
    lVar3 = FUN_00899bd0(param_3,param_2,0x4b53414d,1,&local_14);
    *(long *)(param_1 + 0x218) = lVar3;
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    puVar5 = &local_14;
  }
  iVar1 = FUN_008b4430(uVar4,uVar6,1,puVar5);
  *(int *)(param_1 + 0x220) = iVar1;
LAB_008a98d4:
  lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x30);
  iVar2 = FUN_008947b8();
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar3 + (long)(iVar2 * iVar1) * 4);
  return;
}


