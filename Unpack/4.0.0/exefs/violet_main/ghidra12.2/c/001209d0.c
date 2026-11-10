/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001209d0; name: FUN_001209d0
 */


void FUN_001209d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong local_28;
  
  lVar3 = *(long *)(param_1 + 0x78);
  uVar2 = nn::os::GetCurrentThread();
  local_28 = 0;
  iVar1 = FUN_001201e0(lVar3 + 0x28,&local_28,uVar2);
  if (iVar1 == 0) {
    if ((local_28 & 0x7fffffffffffffff) != uVar2) {
      FUN_00120850(lVar3,local_28,uVar2,0xffffffff);
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x30) + 1;
  }
  else {
    iVar1 = 1;
  }
  *(int *)(lVar3 + 0x30) = iVar1;
  return;
}


