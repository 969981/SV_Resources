/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fdba4; name: FUN_030fdba4
 */


void FUN_030fdba4(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  lVar2 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x20) * 0x60;
  iVar10 = -(uint)((float)*param_3 <= (float)*(undefined8 *)(lVar2 + 0x20));
  iVar11 = -(uint)((float)((ulong)*param_3 >> 0x20) <=
                  (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20));
  iVar12 = -(uint)((float)param_3[1] <= (float)*(undefined8 *)(lVar2 + 0x28));
  iVar7 = -(uint)((float)*(undefined8 *)(lVar2 + 0x10) <= (float)param_3[2]);
  iVar8 = -(uint)((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) <=
                 (float)((ulong)param_3[2] >> 0x20));
  iVar9 = -(uint)((float)*(undefined8 *)(lVar2 + 0x18) <= (float)param_3[3]);
  if (CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar8 >> 0x18) &
               (byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar7 >> 0x18) &
               (byte)((uint)iVar12 >> 0x18) & (byte)((uint)iVar9 >> 0x18),
               CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar8 >> 0x10) &
                        (byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar7 >> 0x10) &
                        (byte)((uint)iVar12 >> 0x10) & (byte)((uint)iVar9 >> 0x10),
                        CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar8 >> 8) &
                                 (byte)((uint)iVar10 >> 8) & (byte)((uint)iVar7 >> 8) &
                                 (byte)((uint)iVar12 >> 8) & (byte)((uint)iVar9 >> 8),
                                 (byte)iVar11 & (byte)iVar8 & (byte)iVar10 & (byte)iVar7 &
                                 (byte)iVar12 & (byte)iVar9))) != 0) {
    param_2 = param_2 & 0x3fffff;
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0xa8);
    puVar3 = (uint *)(lVar2 + (ulong)param_2 * 0x10 + 8);
    uVar1 = *puVar3;
    uVar5 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      lVar6 = *(long *)(lVar2 + (ulong)param_2 * 0x10);
      lVar4 = 0;
      lVar2 = 0;
      do {
        if (*(int *)(lVar6 + lVar2 * 4) == *(int *)(param_1 + 0x20)) {
          if ((int)lVar2 == -1) {
            return;
          }
          *puVar3 = uVar1 - 1;
          if ((int)uVar5 != 1) {
            *(undefined4 *)(lVar6 + (lVar4 >> 0x1e)) =
                 *(undefined4 *)(lVar6 + (long)(int)(uVar1 - 1) * 4);
          }
          lVar4 = *(long *)(param_1 + 0x30);
          iVar7 = *(int *)(lVar4 + 0x38);
          lVar2 = (long)iVar7;
          if ((int)(*(uint *)(lVar4 + 0x3c) & 0x7fffffff) <= iVar7) {
            FUN_03078498(lVar4 + 0x30,PTR_PTR_047d1a50,lVar2 + 1);
            iVar7 = *(int *)(lVar4 + 0x38);
          }
          *(uint *)(*(long *)(lVar4 + 0x30) + (long)iVar7 * 4) = param_2;
          *(int *)(lVar4 + 0x38) = (int)(lVar2 + 1);
          return;
        }
        lVar2 = lVar2 + 1;
        lVar4 = lVar4 + 0x100000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


