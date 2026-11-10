/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01460830; name: FUN_01460830
 */


void FUN_01460830(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xd0);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar2 = FUN_0129b478(uVar3,4,uVar1);
  if (lVar2 != 0) {
    do {
      if (*(int *)(lVar2 + 0x68) != 0) {
        return;
      }
      FUN_014608b0(param_1);
      lVar2 = FUN_0129b478(uVar3,4,uVar1);
    } while (lVar2 != 0);
  }
  return;
}


