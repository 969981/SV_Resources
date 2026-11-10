/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043d050; name: FUN_0043d050
 */


void FUN_0043d050(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0045bce0(*param_1);
  iVar1 = FUN_0045b7a0(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_0045bdc0(*param_1);
    iVar1 = FUN_0045b7a0(uVar3,1,param_1);
    if (iVar1 != 0) {
      iVar1 = param_1[1];
      if ((iVar1 != 0) && (*param_1 != iVar1)) {
        uVar3 = FUN_0045bce0(iVar1);
        iVar1 = FUN_0045b7a0(uVar3,0x8001,uVar2);
        if (iVar1 != 0) {
          uVar3 = FUN_0045bdc0(param_1[1]);
          FUN_0045b7a0(uVar3,0x8001,uVar2);
          return;
        }
      }
    }
  }
  return;
}


