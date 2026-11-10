/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316c1b0; name: FUN_0316c1b0
 */


void FUN_0316c1b0(long param_1,int param_2,int param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  uint *puVar9;
  ushort *puVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  
  do {
    uVar3 = *(ushort *)(param_1 + (long)(param_2 + param_3 >> 1) * 2);
    uVar7 = (ulong)uVar3;
    iVar13 = param_2;
    iVar6 = param_3;
    do {
      puVar8 = (ushort *)(param_1 + (long)iVar13 * 2);
      uVar2 = *puVar8;
      while (uVar2 != uVar3) {
        lVar11 = *(long *)(param_4 + 0x100);
        iVar1 = *(int *)(lVar11 + (ulong)uVar2 * 0x20);
        puVar9 = (uint *)(lVar11 + (ulong)uVar2 * 0x20 + 4);
        puVar12 = (uint *)(lVar11 + uVar7 * 0x20 + 4);
        iVar5 = *puVar9 - iVar1;
        iVar1 = *puVar12 - iVar1;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        iVar1 = (iVar1 * 2 & 0x10000U) + iVar1;
        iVar4 = (int)(short)iVar1 * (iVar5 >> 0x10);
        iVar5 = (iVar1 >> 0x10) * (int)(short)iVar5;
        if (iVar4 == iVar5) {
          *param_5 = 1;
          if (*puVar12 <= *puVar9) break;
        }
        else if (iVar4 - iVar5 < 1) break;
        puVar8 = puVar8 + 1;
        iVar13 = iVar13 + 1;
        uVar2 = *puVar8;
      }
      puVar10 = (ushort *)(param_1 + (long)iVar6 * 2);
      uVar2 = *puVar10;
      while (uVar3 != uVar2) {
        lVar11 = *(long *)(param_4 + 0x100);
        iVar1 = *(int *)(lVar11 + uVar7 * 0x20);
        puVar9 = (uint *)(lVar11 + uVar7 * 0x20 + 4);
        puVar12 = (uint *)(lVar11 + (ulong)uVar2 * 0x20 + 4);
        iVar5 = *puVar9 - iVar1;
        iVar1 = *puVar12 - iVar1;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        iVar1 = (iVar1 * 2 & 0x10000U) + iVar1;
        iVar4 = (int)(short)iVar1 * (iVar5 >> 0x10);
        iVar5 = (iVar1 >> 0x10) * (int)(short)iVar5;
        if (iVar4 == iVar5) {
          *param_5 = 1;
          if (*puVar12 <= *puVar9) break;
        }
        else if (iVar4 - iVar5 < 1) break;
        puVar10 = puVar10 + -1;
        iVar6 = iVar6 + -1;
        uVar2 = *puVar10;
      }
      if (iVar13 <= iVar6) {
        if (iVar6 != iVar13) {
          uVar2 = *puVar10;
          *puVar10 = *puVar8;
          *puVar8 = uVar2;
        }
        iVar6 = iVar6 + -1;
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 <= iVar6);
    if (param_2 < iVar6) {
      FUN_0316c1b0(param_1,param_2,iVar6,param_4,param_5);
    }
    param_2 = iVar13;
    if (param_3 <= iVar13) {
      return;
    }
  } while( true );
}


