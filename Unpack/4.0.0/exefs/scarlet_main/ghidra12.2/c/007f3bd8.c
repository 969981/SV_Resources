/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3bd8; name: FUN_007f3bd8
 */


void FUN_007f3bd8(long param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  FUN_007ec490();
  plVar3 = (long *)FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 8));
  cVar2 = FUN_007ec4f0(param_1);
  if (((cVar2 != -3) && (lVar5 = FUN_007ec4a8(param_1), lVar5 != *(long *)(lVar4 + 0x30))) &&
     ((*param_2 == '\x01' || (*param_2 == '\0')))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + (ulong)*(byte *)(lVar4 + 0x28) * 0x40);
    puVar1[7] = 0;
    *puVar1 = 0;
  }
  return;
}


