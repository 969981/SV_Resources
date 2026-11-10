/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f31d0; name: FUN_021f31d0
 */


void FUN_021f31d0(long param_1)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x70);
  sVar1 = FUN_00eedbc8(*puVar3,0);
  if (sVar1 != 0) {
    sVar2 = FUN_00eedbc8(*puVar3,1);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,1,0);
      FUN_00eee290(*puVar3,1,0);
      FUN_00eedf30(*puVar3,1,0);
    }
    sVar2 = FUN_00eedbc8(*puVar3,2);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,2,0);
      FUN_00eee290(*puVar3,2,0);
      FUN_00eedf30(*puVar3,2,0);
    }
    sVar2 = FUN_00eedbc8(*puVar3,3);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,3,0);
      FUN_00eee290(*puVar3,3,0);
      FUN_00eedf30(*puVar3,3,0);
    }
  }
  sVar1 = FUN_00eedbc8(*puVar3,1);
  if (sVar1 != 0) {
    sVar2 = FUN_00eedbc8(*puVar3,2);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,2,0);
      FUN_00eee290(*puVar3,2,0);
      FUN_00eedf30(*puVar3,2,0);
    }
    sVar2 = FUN_00eedbc8(*puVar3,3);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,3,0);
      FUN_00eee290(*puVar3,3,0);
      FUN_00eedf30(*puVar3,3,0);
    }
  }
  sVar1 = FUN_00eedbc8(*puVar3,2);
  if (sVar1 != 0) {
    sVar2 = FUN_00eedbc8(*puVar3,3);
    if (sVar2 == sVar1) {
      FUN_00eee5f0(*puVar3,3,0);
      FUN_00eee290(*puVar3,3,0);
      FUN_00eedf30(*puVar3,3,0);
      return;
    }
  }
  return;
}


