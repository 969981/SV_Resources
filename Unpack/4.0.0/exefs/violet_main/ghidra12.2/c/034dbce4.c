/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dbce4; name: FUN_034dbce4
 */


void FUN_034dbce4(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ushort uVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  
  puVar12 = (ushort *)param_1[4];
  *param_1 = (long)(PTR_DAT_047e72f8 + 0x10);
  if (puVar12 != (ushort *)0x0) {
    uVar6 = *puVar12;
    if ((ulong)uVar6 != 0) {
      puVar3 = puVar12 + uVar6;
      lVar13 = (long)puVar12 + ((ulong)((uint)uVar6 * 2 + 5) & 0x3fffc);
      do {
        lVar8 = *(long *)(lVar13 + 8);
        puVar12 = puVar12 + 1;
        if (lVar8 != 0) {
          uVar5 = *(uint *)(lVar8 + 0x30);
          if (uVar5 != 0) {
            puVar10 = *(undefined8 **)(lVar8 + 0x28);
            puVar4 = puVar10 + uVar5;
            if ((long *)*puVar10 != param_1) {
              lVar11 = (ulong)uVar5 * 8;
              do {
                lVar11 = lVar11 + -8;
                if (lVar11 == 0) {
                  puVar10 = puVar4;
                  break;
                }
                puVar2 = puVar10 + 1;
                puVar1 = puVar10 + 1;
                puVar10 = puVar2;
              } while ((long *)*puVar1 != param_1);
            }
            if (puVar4 != puVar10) {
              if (uVar5 < 2) {
                iVar9 = 0;
              }
              else {
                *puVar10 = puVar4[-1];
                iVar9 = *(int *)(lVar8 + 0x30) + -1;
              }
              *(int *)(lVar8 + 0x30) = iVar9;
            }
          }
          *(undefined8 *)(lVar13 + 8) = 0;
          (**(code **)(*(long *)param_1[3] + 0x18))();
        }
        lVar13 = lVar13 + 0x10;
      } while (puVar12 != puVar3);
    }
  }
  puVar7 = PTR_DAT_047e2fd0;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)(puVar7 + 0x30))(0);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(puVar7 + 0x30))(0);
  }
  param_1[4] = 0;
  return;
}


