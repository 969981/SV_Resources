/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001207b0; name: FUN_001207b0
 */


undefined8 FUN_001207b0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_28;
  
  lVar4 = *(long *)(param_1 + 0x78);
  uVar2 = nn::os::GetCurrentThread();
  local_28 = 0;
  iVar1 = FUN_001201e0(lVar4 + 0x28,&local_28,uVar2);
  if (iVar1 == 0) {
    if ((local_28 & 0x7fffffffffffffff) == uVar2) {
      *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
      uVar3 = 1;
    }
    else if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00120850(lVar4,local_28,uVar2,param_2);
    }
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(lVar4 + 0x30) = 1;
  }
  return uVar3;
}


