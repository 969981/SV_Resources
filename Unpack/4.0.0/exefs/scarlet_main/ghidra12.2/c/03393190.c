/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03393190; name: FUN_03393190
 */


void FUN_03393190(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x60);
  iVar1 = *(int *)(lVar2 + 0x68);
  *param_1 = lVar3;
  param_1[1] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x130);
  iVar1 = *(int *)(lVar2 + 0x138);
  param_1[2] = lVar3;
  param_1[3] = lVar3 + (long)iVar1 * 0x18;
  lVar3 = *(long *)(lVar2 + 0x70);
  iVar1 = *(int *)(lVar2 + 0x78);
  param_1[4] = lVar3;
  param_1[5] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x80);
  iVar1 = *(int *)(lVar2 + 0x88);
  param_1[6] = lVar3;
  param_1[7] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x90);
  iVar1 = *(int *)(lVar2 + 0x98);
  param_1[8] = lVar3;
  param_1[9] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x148);
  param_1[10] = *(long *)(lVar2 + 0x140);
  param_1[0xb] = lVar3;
  lVar3 = *(long *)(lVar2 + 0x118);
  iVar1 = *(int *)(lVar2 + 0x120);
  param_1[0xc] = lVar3;
  param_1[0xd] = lVar3 + (long)iVar1 * 8;
  lVar3 = *(long *)(lVar2 + 0x160);
  iVar1 = *(int *)(lVar2 + 0x168);
  param_1[0xe] = lVar3;
  param_1[0xf] = lVar3 + (long)iVar1 * 8;
  return;
}


