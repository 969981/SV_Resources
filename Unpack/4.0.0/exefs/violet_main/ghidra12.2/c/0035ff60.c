/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035ff60; name: FUN_0035ff60
 */


int FUN_0035ff60(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = nnsocketAccept(param_1,param_2,param_2 + 0x80);
  if ((-1 < iVar1) &&
     (((param_3 != 0 &&
       ((uVar2 = FUN_003629c0(iVar1,3,0), (int)uVar2 < 0 ||
        (iVar3 = FUN_003629c0(iVar1,4,uVar2 | 0x800), iVar3 != 0)))) ||
      ((param_4 != 0 &&
       ((uVar2 = FUN_003629c0(iVar1,1,0), (int)uVar2 < 0 ||
        (iVar3 = FUN_003629c0(iVar1,2,uVar2 | 1), iVar3 != 0)))))))) {
    nnsocketClose(iVar1);
    iVar1 = -1;
  }
  return iVar1;
}


