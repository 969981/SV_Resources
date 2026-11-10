/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0335dd40; name: FUN_0335dd40
 */


undefined8 FUN_0335dd40(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = FUN_0335ddd8();
  iVar4 = (int)uVar3;
  if ((int)param_1[1] == iVar4) {
    iVar2 = iVar4 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar4) {
      FUN_0335def4(param_1,PTR_PTR_047d1a50,(long)iVar2);
      iVar4 = (int)param_1[1];
    }
    puVar1 = (undefined8 *)(*param_1 + (long)iVar4 * 0x10);
    *puVar1 = *param_2;
    puVar1[1] = *param_3;
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar3;
}


