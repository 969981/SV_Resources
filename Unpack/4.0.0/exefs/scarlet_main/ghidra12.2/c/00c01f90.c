/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c01f90; name: FUN_00c01f90
 */


undefined8 FUN_00c01f90(long param_1,ulong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  do {
    pbVar1 = (byte *)*param_2;
    if (pbVar1 < (byte *)param_2[1]) {
      uVar2 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_00c01fd0;
      *(uint *)(param_2 + 4) = uVar2;
      *param_2 = (ulong)(pbVar1 + 1);
    }
    else {
      uVar2 = 0;
LAB_00c01fd0:
      uVar2 = FUN_00c096d0(param_2,uVar2);
      *(uint *)(param_2 + 4) = uVar2;
    }
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
    uVar3 = FUN_00c01b50(param_2,uVar2,uVar4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  } while( true );
}


