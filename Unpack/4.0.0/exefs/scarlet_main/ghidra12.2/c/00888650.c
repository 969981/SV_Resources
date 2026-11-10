/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00888650; name: FUN_00888650
 */


long FUN_00888650(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x1884) != 0) {
    uVar3 = 0;
    do {
      uVar1 = FUN_00888360(param_1,auStack_48,uVar3 & 0xffff,param_2);
      if ((((uVar1 & 1) != 0) &&
          (uVar1 = FUN_00888360(param_1,&local_44,uVar3 & 0xffff,param_2), (uVar1 & 1) != 0)) &&
         (lVar2 = FUN_00888fbc(param_1 + 0x30,param_2,param_3,local_44), lVar2 != 0)) {
        return lVar2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x1884));
  }
  return 0;
}


