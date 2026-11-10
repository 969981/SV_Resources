/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ff9f0; name: FUN_003ff9f0
 */


uint FUN_003ff9f0(void *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong __n;
  
  uVar4 = (**(code **)(*(long *)(param_3 + 0x78) + 0x10))();
  __n = (ulong)uVar4;
  if (0 < (int)uVar4) {
    iVar5 = FUN_003eb2b0(*(undefined8 *)(param_3 + 8));
    iVar2 = iVar5 + 0xe;
    if (-1 < iVar5 + 7) {
      iVar2 = iVar5 + 7;
    }
    uVar1 = iVar2 >> 3;
    uVar3 = uVar1 - uVar4;
    uVar4 = uVar1;
    if (0 < (int)uVar3) {
      memmove((void *)((long)param_1 + (ulong)uVar3),param_1,__n);
      memset(param_1,0,(ulong)uVar3);
    }
  }
  return uVar4;
}


