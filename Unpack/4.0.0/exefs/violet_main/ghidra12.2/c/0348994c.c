/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348994c; name: FUN_0348994c
 */


void FUN_0348994c(uint *param_1,long *param_2,long param_3,long param_4,uint param_5,uint param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  
  lVar15 = *(long *)(param_1 + 2);
  if (((lVar15 != 0) && ((*(byte *)(param_3 + 8) >> 2 & 1) != 0)) && (*param_1 != 0)) {
    uVar10 = 0;
    uVar14 = 0;
    puVar12 = (uint *)(lVar15 + 4);
    uVar16 = 0;
    do {
      uVar5 = *puVar12;
      bVar8 = uVar5 < param_6 + param_5;
      uVar3 = (uint)uVar10;
      if (uVar14 != 0 || (param_5 > uVar5 || !bVar8)) {
        uVar3 = uVar16;
      }
      uVar10 = uVar10 + 1;
      uVar14 = uVar14 + (param_5 <= uVar5 && bVar8);
      puVar12 = puVar12 + 4;
      uVar16 = uVar3;
    } while (*param_1 != uVar10);
    if (uVar14 != 0) {
      uVar5 = *(uint *)(param_2 + 1);
      uVar7 = *(ushort *)(param_4 + 0x12);
      uVar4 = *(undefined4 *)(param_3 + 0x228);
      uVar16 = uVar5;
      if (*(int *)((long)param_2 + 0xc) - uVar5 < uVar14) {
        uVar1 = uVar14 + *(int *)((long)param_2 + 0xc) + 5;
        lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,*param_2,(ulong)uVar1 << 5);
        if (lVar9 == 0) {
          return;
        }
        uVar16 = *(uint *)(param_2 + 1);
        *param_2 = lVar9;
        *(uint *)((long)param_2 + 0xc) = uVar1;
      }
      uVar10 = (ulong)uVar14;
      piVar11 = (int *)(lVar15 + (ulong)uVar3 * 0x10 + 4);
      do {
        puVar2 = (undefined8 *)(*param_2 + (ulong)uVar16 * 0x20);
        uVar13 = *(undefined8 *)(piVar11 + 1);
        uVar10 = uVar10 - 1;
        *puVar2 = *(undefined8 *)(piVar11 + -1);
        puVar2[1] = uVar13;
        iVar6 = *piVar11;
        *(undefined1 *)(puVar2 + 3) = 0;
        *(int *)(puVar2 + 2) =
             (int)((float)(iVar6 - param_5) * (float)uVar7 * (1.0 / (float)param_6));
        *(undefined4 *)((long)puVar2 + 0x14) = uVar4;
        uVar16 = (int)param_2[1] + 1;
        *(uint *)(param_2 + 1) = uVar16;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
      if (*(int *)(param_4 + 0x18) == 0) {
        *(uint *)(param_4 + 0x14) = uVar5;
      }
      *(uint *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + uVar14;
    }
  }
  return;
}


