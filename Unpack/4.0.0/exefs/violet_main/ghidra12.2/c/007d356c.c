/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d356c; name: FUN_007d356c
 */


int FUN_007d356c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_047d0dd8;
  if (*(long *)(param_1 + 0x130) == 0) {
    return 0;
  }
  iVar2 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0);
  iVar3 = FUN_00807e34(*(undefined8 *)puVar1,1);
  iVar4 = FUN_00807e34(*(undefined8 *)puVar1,3);
  iVar5 = FUN_00807e34(*(undefined8 *)puVar1,3);
  return iVar3 + iVar2 + iVar4 + iVar5;
}


