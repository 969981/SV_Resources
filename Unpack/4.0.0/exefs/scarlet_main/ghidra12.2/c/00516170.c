/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00516170; name: FUN_00516170
 */


undefined8 FUN_00516170(ulong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 < (byte *)param_1[1]) {
      uVar2 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_005161b4;
      *param_1 = (ulong)(pbVar1 + 1);
      *(uint *)(param_1 + 4) = uVar2;
    }
    else {
      uVar2 = 0;
LAB_005161b4:
      uVar2 = FUN_0052c138(param_1,uVar2);
      *(uint *)(param_1 + 4) = uVar2;
    }
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
    uVar3 = FUN_00515ed0(param_1,uVar2,param_2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  } while( true );
}


