/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d35e0; name: FUN_007d35e0
 */


int FUN_007d35e0(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_047d0dd8;
  iVar2 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0);
  iVar3 = FUN_00807e34(*(undefined8 *)puVar1,1);
  iVar4 = FUN_00807e34(*(undefined8 *)puVar1,3);
  iVar5 = FUN_00807e34(*(undefined8 *)puVar1,3);
  return iVar3 + iVar2 + iVar4 + iVar5;
}


