/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043ce20; name: FUN_0043ce20
 */


int FUN_0043ce20(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_80 [64];
  undefined4 local_34;
  
  local_34 = 0;
  pcVar3 = *(code **)(**(long **)(param_1 + 0x20) + 0x88);
  if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
    lVar2 = FUN_0042bbc0();
    if (lVar2 == 0) {
      return -1;
    }
    iVar1 = FUN_0042bfb0(lVar2,param_1);
    if (iVar1 == 0) {
      FUN_0042bbe0(lVar2);
      return -1;
    }
    if (pcVar3 == (code *)0x0) {
      iVar1 = FUN_0042be20(lVar2,auStack_80,&local_34);
    }
    else {
      iVar1 = (**(code **)(**(long **)(lVar2 + 0x20) + 0x88))
                        (*(long **)(lVar2 + 0x20),param_2,param_3 & 0xffffffff,lVar2);
    }
    FUN_0042bbe0(lVar2);
    if (pcVar3 != (code *)0x0 || iVar1 == 0) {
      return iVar1;
    }
  }
  else {
    if (pcVar3 != (code *)0x0) {
      iVar1 = (*pcVar3)(*(long **)(param_1 + 0x20),param_2,param_3 & 0xffffffff,param_1);
      return iVar1;
    }
    iVar1 = FUN_0042be20(param_1,auStack_80,&local_34);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0043f440(*(undefined8 *)(param_1 + 0x20),param_2,param_3,auStack_80,local_34);
  return iVar1;
}


