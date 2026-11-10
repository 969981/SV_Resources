/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec190; name: FUN_007ec190
 */


void FUN_007ec190(void *param_1,int *param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  uint local_58 [2];
  
  lVar4 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  lVar9 = *(long *)(lVar4 + 0x98);
  if (lVar9 == 0) {
    memset(param_1,0,4);
    return;
  }
  iVar2 = *param_2;
  plVar5 = (long *)FUN_0079365c();
  lVar10 = *plVar5;
  uVar11 = *param_4;
  memset(local_58,0,4);
  lVar8 = *(long *)(lVar4 + 0x20);
  if (lVar8 != lVar4 + 0x18) {
    do {
      lVar6 = *(long *)(lVar8 + 0x10);
      if ((((lVar6 != lVar9) && (*(char *)(lVar6 + 0x3a) == '\x02')) &&
          (*(char *)(lVar6 + 0x78) == '\0')) && (bVar1 = *(byte *)(lVar6 + 0x28), bVar1 < 0x18)) {
        uVar3 = 1 << (ulong)(bVar1 & 0x1f);
        if ((*(uint *)(param_3 + (ulong)(bVar1 >> 5) * 4) & uVar3) == 0) {
          uVar7 = *(ulong *)(lVar6 + 0x80);
          if (uVar7 < uVar11 - lVar10 * iVar2) {
            local_58[0] = local_58[0] | uVar3;
          }
        }
        else {
          uVar7 = *param_4;
          *(ulong *)(lVar6 + 0x80) = uVar7;
        }
        if (uVar7 != 0) {
          FUN_0079365c();
        }
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != lVar4 + 0x18);
  }
  memcpy(param_1,local_58,4);
  return;
}


