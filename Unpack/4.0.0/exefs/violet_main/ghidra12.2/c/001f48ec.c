/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f48ec; name: FUN_001f48ec
 */


int FUN_001f48ec(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = 0;
  if ((*(byte *)((long)param_2 + 0xd) & 0x20) != 0) {
    lVar4 = 5;
  }
  lVar1 = *(long *)(lVar6 + 0x18) + lVar4;
  *(long *)(lVar6 + 0x18) = lVar1;
  *(long *)(lVar6 + 0x20) = lVar1;
  iVar3 = FUN_001f5a14(param_3,param_1,param_2[5],param_2[6]);
  iVar2 = -0x20b;
  if (iVar3 != -0x1f6) {
    iVar2 = iVar3;
  }
  lVar4 = *(long *)(lVar6 + 0x18) - lVar4;
  *(long *)(lVar6 + 0x18) = lVar4;
  if (iVar2 == 0) {
    if ((*(byte *)((long)param_2 + 0xd) >> 5 & 1) != 0) {
      FUN_001f499c(lVar4,param_2 + 3);
    }
    param_2[2] = 0;
    uVar5 = FUN_001f42e4(param_1);
    *param_2 = uVar5;
    FUN_001f49e4(param_1,param_2);
  }
  return iVar2;
}


