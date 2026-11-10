/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0c0a4; name: FUN_00d0c0a4
 */


void FUN_00d0c0a4(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  size_t sVar5;
  char *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  char *__s;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    puVar11 = &DAT_cbf29ce484222645;
    sVar5 = strlen(s_data___045e68b0);
    uVar10 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar10;
    if (sVar5 <= uVar10) {
      uVar2 = sVar5;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar8 = uVar10 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar8;
    if (uVar8 == 0) goto LAB_00d0c144;
    if (uVar10 != uVar2 + 1) {
      lVar9 = -(uVar8 & 0xfffffffffffffffe);
      do {
        bVar4 = *pbVar7;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 2;
        puVar11 = (undefined1 *)
                  ((((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) *
                  0x100000001b3);
        lVar9 = lVar9 + 2;
      } while (lVar9 != 0);
    }
  }
  else {
    if (iVar3 == 3) {
      puVar11 = &DAT_cbf29ce484222645;
      sVar5 = strlen(s_save_d___045e68ce);
      uVar10 = *(ulong *)(param_1 + 0x18);
      uVar2 = uVar10;
      if (sVar5 - 1 <= uVar10) {
        uVar2 = sVar5 - 1;
      }
      pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
      uVar8 = uVar10 - uVar2;
      *(byte **)(param_1 + 0x10) = pbVar7;
      *(ulong *)(param_1 + 0x18) = uVar8;
      if (uVar8 != 0) {
        if (uVar10 != uVar2 + 1) {
          lVar9 = -(uVar8 & 0xfffffffffffffffe);
          do {
            bVar4 = *pbVar7;
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 2;
            puVar11 = (undefined1 *)
                      ((((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) *
                      0x100000001b3);
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0);
        }
        if ((uVar8 & 1) != 0) {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)*pbVar7) * 0x100000001b3);
        }
      }
      goto LAB_00d0c144;
    }
    if (iVar3 != 2) {
      if (iVar3 != 4) {
        return;
      }
      __s = *(char **)(param_1 + 0x10);
      pcVar6 = strchr(__s,0x2f);
      if (pcVar6 == (char *)0x0) {
        return;
      }
      uVar10 = *(ulong *)(param_1 + 0x18);
      puVar11 = &DAT_cbf29ce484222645;
      uVar2 = uVar10;
      if ((ulong)((long)pcVar6 - (long)__s) <= uVar10) {
        uVar2 = (long)pcVar6 - (long)__s;
      }
      pbVar7 = (byte *)(__s + uVar2);
      uVar8 = uVar10 - uVar2;
      *(byte **)(param_1 + 0x10) = pbVar7;
      *(ulong *)(param_1 + 0x18) = uVar8;
      if (uVar8 != 0) {
        if (uVar10 != uVar2 + 1) {
          lVar9 = -(uVar8 & 0xfffffffffffffffe);
          do {
            bVar4 = *pbVar7;
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 2;
            puVar11 = (undefined1 *)
                      ((((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) *
                      0x100000001b3);
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0);
        }
        if ((uVar8 & 1) != 0) {
          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)*pbVar7) * 0x100000001b3);
        }
      }
      *(undefined1 **)(param_1 + 8) = puVar11;
      return;
    }
    puVar11 = &DAT_cbf29ce484222645;
    sVar5 = strlen(&DAT_045e68bf);
    uVar10 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar10;
    if (sVar5 <= uVar10) {
      uVar2 = sVar5;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar8 = uVar10 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar8;
    if (uVar8 == 0) goto LAB_00d0c144;
    if (uVar10 != uVar2 + 1) {
      lVar9 = -(uVar8 & 0xfffffffffffffffe);
      do {
        bVar4 = *pbVar7;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 2;
        puVar11 = (undefined1 *)
                  ((((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3 ^ (ulong)*pbVar1) *
                  0x100000001b3);
        lVar9 = lVar9 + 2;
      } while (lVar9 != 0);
    }
  }
  if ((uVar8 & 1) != 0) {
    puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)*pbVar7) * 0x100000001b3);
  }
LAB_00d0c144:
  *(undefined1 **)(param_1 + 8) = puVar11;
  return;
}


