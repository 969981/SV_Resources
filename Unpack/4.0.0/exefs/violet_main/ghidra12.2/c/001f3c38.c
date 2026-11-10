/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f3c38; name: FUN_001f3c38
 */


void FUN_001f3c38(long param_1,long *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_2 + 0x100;
  if (0x3fff < uVar1) {
    uVar1 = 0x4000;
  }
  lVar3 = FUN_001f3710(param_1,param_2,uVar1);
  if (-0x385 < (int)lVar3) {
    lVar4 = *param_2;
    iVar2 = FUN_001f5560(param_1 + 0x158,param_2,lVar3 - lVar4,0);
    if (iVar2 == 0) {
      param_2[2] = lVar3 - lVar4;
    }
  }
  return;
}


