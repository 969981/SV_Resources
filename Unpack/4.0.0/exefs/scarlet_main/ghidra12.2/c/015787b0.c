/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015787b0; name: FUN_015787b0
 */


undefined8 FUN_015787b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = DAT_048af960;
  if (DAT_048af964 <= DAT_048af960) {
    iVar1 = DAT_048af964 + (DAT_048af964 >> 1);
    if (DAT_048af964 == 0) {
      iVar1 = 1;
    }
    uVar2 = iVar1 + DAT_048af964;
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(7,DAT_048af958,(ulong)uVar2 << 4);
    if (lVar5 == 0) {
      return 2;
    }
    DAT_048af958 = lVar5;
    DAT_048af964 = uVar2;
  }
  if (uVar4 < DAT_048af964) {
    uVar6 = (ulong)DAT_048af960;
    DAT_048af960 = DAT_048af960 + 1;
    if (DAT_048af958 != 0) {
      puVar3 = (undefined8 *)(DAT_048af958 + uVar6 * 0x10);
      *puVar3 = param_1;
      puVar3[1] = param_2;
      return 1;
    }
  }
  return 2;
}


