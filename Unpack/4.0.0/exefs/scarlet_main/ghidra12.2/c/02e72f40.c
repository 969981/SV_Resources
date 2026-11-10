/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e72f40; name: FUN_02e72f40
 */


void FUN_02e72f40(long param_1,byte param_2,long *param_3)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_70;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar3 = *(uint *)(lVar5 + 0x18);
  if ((int)uVar3 < 1) {
    return;
  }
  local_70 = 1;
  uVar8 = 0;
  puVar2 = PTR_PTR_047d1a50 + 0x20;
  while ((lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + uVar8 * 8), *(int *)(lVar5 + 0x58) == 0 ||
         ((param_2 & *(byte *)(lVar5 + 0x1af0)) == 0))) {
LAB_02e7308c:
    uVar8 = uVar8 + 1;
    if (uVar8 == uVar3) {
      return;
    }
    local_70 = local_70 + 1;
    lVar5 = *(long *)(param_1 + 8);
  }
  lVar6 = lVar5;
  uVar9 = local_70;
  do {
    uVar7 = (int)uVar9 - 1;
    if ((((*(uint *)(lVar5 + 0x1af4) >> (ulong)(uVar7 & 0x1f) & 1) != 0) ||
        ((*(uint *)(lVar6 + 0x1af4) & 1 << (ulong)((uint)uVar8 & 0x1f)) != 0)) &&
       ((((*(char *)(lVar5 + 0x1af8) != '\0' || (*(char *)(lVar6 + 0x1af8) != '\0')) ||
         ((*(char *)(lVar5 + 0x1af9) != '\0' && (*(char *)(lVar5 + 0x1afc) != '\0')))) ||
        ((*(char *)(lVar6 + 0x1af9) != '\0' && (*(char *)(lVar6 + 0x1afc) != '\0')))))) {
      iVar4 = (int)param_3[1];
      lVar6 = (long)iVar4;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar4) {
        FUN_02e80088(param_3,puVar2,lVar6 + 1);
        iVar4 = (int)param_3[1];
      }
      puVar1 = (uint *)(*param_3 + (long)iVar4 * 8);
      *puVar1 = (uint)uVar8;
      puVar1[1] = uVar7;
      *(int *)(param_3 + 1) = (int)(lVar6 + 1);
    }
    do {
      if (uVar3 == uVar9) goto LAB_02e7308c;
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (*(int *)(lVar6 + 0x58) == 0);
  } while( true );
}


