/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048dfd0; name: FUN_0048dfd0
 */


bool FUN_0048dfd0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) >> 2 & 1) != 0) || ((*pbVar4 & 3) == 0)) {
    iVar1 = FUN_0045d160(*(undefined8 *)(pbVar4 + 8),param_3);
    return iVar1 == 0;
  }
  iVar1 = FUN_0047e430(*(undefined8 *)(pbVar4 + 0x18));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_0047e450(*(undefined8 *)(pbVar4 + 0x18),iVar1);
      iVar2 = FUN_0045d160(uVar3,param_3);
      if (iVar2 == 0) {
        return true;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(*(undefined8 *)(pbVar4 + 0x18));
    } while (iVar1 < iVar2);
  }
  return false;
}


