/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02945250; name: FUN_02945250
 */


void FUN_02945250(long param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  byte local_14 [4];
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar2 = 0;
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0xc);
  }
  if ((iVar2 == param_2) &&
     (((uVar1 = FUN_0293d5a0(param_1,0x31,local_14), (uVar1 & 1) == 0 ||
       ((local_14[0] >> 2 & 1) != 0)) &&
      (uVar1 = FUN_02945400(param_1,param_2,param_3), (uVar1 & 1) != 0)))) {
    FUN_018286e0(param_1,param_2);
  }
  return;
}


