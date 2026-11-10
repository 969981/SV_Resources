/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dc2d8; name: FUN_001dc2d8
 */


undefined8 FUN_001dc2d8(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0xe8);
  if (puVar2 == (uint *)0x0) {
    uVar1 = 3;
  }
  else {
    if (((*puVar2 >> (ulong)(param_2 & 0x1f) & 1) != 0) && (*(code **)(puVar2 + 4) != (code *)0x0))
    {
      (**(code **)(puVar2 + 4))(param_1,param_2,*(undefined8 *)(puVar2 + 6));
    }
    uVar1 = 0;
  }
  return uVar1;
}


