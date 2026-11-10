/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df20a4; name: FUN_01df20a4
 */


void FUN_01df20a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_00cf4c90(param_2,2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_01889030(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_01df2144(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      if ((uVar1 & 1) == 0) {
        FUN_01dcfe4c(uVar2);
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x1b8);
        if (lVar4 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x170) = 0x18;
          *(undefined4 *)(lVar4 + 0x30) = 0x18;
        }
        return;
      }
      uVar3 = 7;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar3 = 0x19;
  }
  FUN_01dcddfc(uVar2,uVar3,0,1,1,0);
  return;
}


