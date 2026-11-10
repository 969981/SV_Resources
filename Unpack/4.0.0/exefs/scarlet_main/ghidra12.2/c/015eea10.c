/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015eea10; name: FUN_015eea10
 */


void FUN_015eea10(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  undefined1 *puVar11;
  uint uVar12;
  
  piVar6 = (int *)*param_2;
  if ((0x16 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
     (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[0xb], uVar7 != 0)) {
    puVar1 = (uint *)((long)piVar6 + uVar7);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar12 = *puVar1;
    if (uVar12 != 0) {
      uVar7 = 0;
      do {
        piVar6 = (int *)((long)(puVar1 + uVar7 + 1) + (ulong)puVar1[uVar7 + 1]);
        if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
          lVar10 = 0;
        }
        else {
          uVar8 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2];
          lVar10 = 0;
          if (uVar8 != 0) {
            puVar2 = (uint *)((long)piVar6 + uVar8);
            lVar10 = (long)puVar2 + (ulong)*puVar2;
          }
        }
        bVar4 = *(byte *)(lVar10 + 4);
        puVar11 = &DAT_cbf29ce484222645;
        if (bVar4 != 0) {
          puVar11 = &DAT_cbf29ce484222645;
          pbVar9 = (byte *)(lVar10 + 5);
          do {
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar4 != 0);
        }
        if ((undefined1 *)*param_3 == puVar11) {
          if ((uint)uVar7 < uVar12) {
            piVar6 = (int *)((long)(puVar1 + (uVar7 & 0xffffffff) + 1) +
                            (ulong)puVar1[(uVar7 & 0xffffffff) + 1]);
            puVar1 = (uint *)((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (8 - (long)*piVar6)))
            ;
            piVar6 = (int *)((long)puVar1 + (ulong)*puVar1);
            puVar3 = (undefined8 *)
                     ((long)piVar6 + (ulong)*(ushort *)((long)piVar6 + (4 - (long)*piVar6)));
            uVar5 = *puVar3;
            uVar12 = *(uint *)(puVar3 + 1);
            *param_1 = 1;
            *(ulong *)(param_1 + 0x18) = (ulong)uVar12;
            *(undefined8 *)(param_1 + 0x10) = uVar5;
            return;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar12);
    }
  }
  *param_1 = 0;
  return;
}


