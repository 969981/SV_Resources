/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030666a8; name: FUN_030666a8
 */


void FUN_030666a8(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  iVar2 = (int)param_1[1];
  iVar6 = iVar2 << 1;
  if (iVar2 == 0) {
    iVar6 = 1;
  }
  iVar1 = iVar2 + param_2;
  if (iVar2 + param_2 <= iVar6) {
    iVar1 = iVar6;
  }
  iVar6 = iVar2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar1) {
    FUN_03066780(param_1,PTR_PTR_047d1a50,(long)iVar1);
    iVar6 = (int)param_1[1];
  }
  if (iVar6 != iVar1) {
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar2 < iVar1) {
    lVar3 = (long)iVar2;
    do {
      if (lVar3 < iVar1 + -1) {
        iVar6 = (int)lVar3 + 1;
      }
      else {
        iVar6 = (int)param_1[2];
      }
      lVar5 = lVar3 + 1;
      puVar4 = (undefined8 *)(*param_1 + lVar3 * 0x18);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0xbf800000;
      *(int *)((long)puVar4 + 0xc) = iVar6;
      *(undefined4 *)(puVar4 + 2) = 0xffffffff;
      lVar3 = lVar5;
    } while (lVar5 != iVar1);
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}


