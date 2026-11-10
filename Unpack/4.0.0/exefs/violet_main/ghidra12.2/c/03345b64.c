/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03345b64; name: FUN_03345b64
 */


undefined8 FUN_03345b64(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = FUN_03340ed4();
  iVar4 = (int)uVar3;
  if ((int)param_1[1] == iVar4) {
    iVar2 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_0334108c(param_1,PTR_PTR_047d1a50,(long)iVar2);
      iVar4 = (int)param_1[1];
    }
    lVar1 = *param_1 + (long)iVar4 * 0x10;
    FUN_031ca554(lVar1,*param_2,param_2[1]);
    *(undefined4 *)(lVar1 + 8) = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar3;
}


