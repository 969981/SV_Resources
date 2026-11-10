/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc7280; name: FUN_01dc7280
 */


undefined8 FUN_01dc7280(undefined8 param_1,long param_2)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    if ((*(byte *)(*(long *)(lVar2 + 0x10) + 4) >> 2 & 1) == 0) {
      sVar1 = FUN_00cf44f4();
      if (sVar1 == 0) {
        return 0;
      }
      lVar2 = *(long *)(param_2 + 0x70);
    }
    sVar1 = FUN_00cf44f4(lVar2);
    if (((sVar1 == 0x3e6) || (sVar1 = FUN_00cf44f4(*(undefined8 *)(param_2 + 0x70)), sVar1 == 999))
       && (uVar3 = FUN_01dc72f8(param_2), (int)uVar3 == 1)) {
      return uVar3;
    }
  }
  return 0;
}


