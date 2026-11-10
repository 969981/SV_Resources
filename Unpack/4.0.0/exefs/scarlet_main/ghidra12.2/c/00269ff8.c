/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00269ff8; name: FUN_00269ff8
 */


void FUN_00269ff8(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  
  puVar6 = (ulong *)(param_1 + 1);
  *puVar6 = 0;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  puVar3 = PTR_DAT_047cc2f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  FUN_0026c014(plVar5);
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar6 & 1) == 0) {
      lVar4 = FUN_0021d48c(puVar6);
    }
    else {
      lVar4 = (*puVar6 & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar7 + 0x10);
    lVar2 = *(long *)(uVar7 + 0x18);
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      lVar2 = uVar7 + 9;
      uVar1 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    FUN_0021d540(lVar4,lVar2,uVar1);
  }
  FUN_0026a0a0(plVar5,param_2 + 0x10);
  return;
}


