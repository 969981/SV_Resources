/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d3014; name: FUN_031d3014
 */


void FUN_031d3014(byte *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar4 = *param_1;
  uVar2 = 0;
  if (bVar4 != 0xff) {
    uVar2 = (uint)bVar4;
  }
  uVar10 = (ulong)uVar2;
  if (uVar2 < 0x20) {
    param_2 = param_2 + 0x28;
    do {
      lVar12 = param_2 + uVar10 * 0xe8;
      puVar11 = (undefined8 *)(lVar12 + 0xa0);
      *(undefined1 *)*puVar11 = 1;
      piVar13 = (int *)(lVar12 + 0xbc);
      iVar8 = *piVar13;
      if (bVar4 == 0xff) {
        if (0 < iVar8) {
          lVar9 = param_2 + uVar10 * 0xe8;
          lVar12 = 0;
          do {
            iVar5 = *(int *)(lVar9 + 0xb4);
            puVar1 = (undefined8 *)(*(long *)(lVar9 + 0xa8) + (long)iVar5 * 0x10);
            local_70 = *puVar1;
            uStack_68 = puVar1[1];
            iVar3 = 0;
            if (iVar5 + 1 != *(int *)(lVar9 + 0xb0)) {
              iVar3 = iVar5 + 1;
            }
            *(int *)(lVar9 + 0xb4) = iVar3;
            *piVar13 = iVar8 + -1;
            lVar7 = FUN_031d0950(&local_70);
            lVar12 = lVar7 + lVar12;
          } while ((lVar12 != -1) && (iVar8 = *piVar13, 0 < iVar8));
        }
        *(undefined1 *)*puVar11 = 0;
        *(undefined1 *)*puVar11 = 1;
        if (*piVar13 == 0) {
          lVar12 = param_2 + uVar10 * 0xe8;
          *(undefined8 *)(lVar12 + 0xb4) = 0;
          *piVar13 = 0;
          piVar13 = (int *)(lVar12 + 0xb0);
          iVar8 = *piVar13;
          if (iVar8 != 0) {
            puVar1 = (undefined8 *)(param_2 + uVar10 * 0xe8 + 0xa8);
            (**(code **)(PTR_PTR_046a5408 + 0x20))(&PTR_PTR_046a5408,*puVar1,(long)iVar8 << 4);
            *piVar13 = 0;
            *puVar1 = 0;
          }
        }
      }
      else if (0 < iVar8) {
        lVar9 = param_2 + uVar10 * 0xe8;
        lVar12 = 0;
        do {
          iVar5 = *(int *)(lVar9 + 0xb4);
          puVar1 = (undefined8 *)(*(long *)(lVar9 + 0xa8) + (long)iVar5 * 0x10);
          local_70 = *puVar1;
          uStack_68 = puVar1[1];
          iVar3 = 0;
          if (iVar5 + 1 != *(int *)(lVar9 + 0xb0)) {
            iVar3 = iVar5 + 1;
          }
          *(int *)(lVar9 + 0xb4) = iVar3;
          *piVar13 = iVar8 + -1;
          lVar7 = FUN_031d0950(&local_70);
          lVar12 = lVar7 + lVar12;
        } while ((lVar12 != -1) && (iVar8 = *piVar13, 0 < iVar8));
      }
      *(undefined1 *)*puVar11 = 0;
    } while ((bVar4 == 0xff) && (bVar6 = uVar10 < 0x1f, uVar10 = uVar10 + 1, bVar6));
  }
  return;
}


