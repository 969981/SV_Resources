/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003eb8f0; name: FUN_003eb8f0
 */


undefined8 * FUN_003eb8f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 8;
  if ((*(byte *)((long)param_2 + 0x14) & 4) != 0) {
    lVar2 = 0xc;
  }
  if (param_1 == param_2) {
    return param_2;
  }
  iVar1 = *(int *)((long)param_2 + lVar2);
  if ((*(int *)((long)param_1 + 0xc) < iVar1) && (lVar2 = FUN_003eb670(param_1,iVar1), lVar2 == 0))
  {
    return (undefined8 *)0x0;
  }
  iVar3 = *(int *)(param_2 + 1);
  if (0 < iVar3) {
    memcpy((void *)*param_1,(void *)*param_2,(long)iVar1 << 2);
    iVar3 = *(int *)(param_2 + 1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(int *)(param_1 + 1) = iVar3;
  return param_1;
}


