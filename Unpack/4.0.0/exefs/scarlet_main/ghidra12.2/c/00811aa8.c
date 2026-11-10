/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811aa8; name: FUN_00811aa8
 */


undefined8 FUN_00811aa8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  float fVar4;
  
  puVar2 = PTR_DAT_047d0dd8;
  fVar4 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,8);
  PTR_DAT_047d0868[0x416] = (char)(int)fVar4;
  if (((*(short *)(param_1 + 0x3dc) == 0) || (*(short *)(param_1 + 0x41c) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0xa00), iVar3 = FUN_00807e34(*(undefined8 *)puVar2,8),
     iVar1 < iVar3)) {
    return 1;
  }
  return 0;
}


