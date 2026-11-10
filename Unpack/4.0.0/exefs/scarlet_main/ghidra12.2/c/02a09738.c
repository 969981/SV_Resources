/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a09738; name: FUN_02a09738
 */


void FUN_02a09738(undefined8 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 auStack_230 [256];
  
  sVar2 = strlen(param_2);
  lVar3 = FUN_019c9f30(auStack_230,0x100,param_2,sVar2);
  if (lVar3 != 0) {
    auStack_230[lVar3 - (ulong)(lVar3 == 0x100)] = 0;
  }
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar3 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar3;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
  }
  FUN_01e93784(param_1,uVar4,auStack_230);
  return;
}


