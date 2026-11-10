/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030f8420; name: FUN_030f8420
 */


void FUN_030f8420(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *local_278;
  undefined8 local_270;
  int local_268 [130];
  
  iVar2 = (int)param_1[1];
  iVar4 = iVar2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar2) {
    FUN_030fe544(param_1,(long)iVar2 + 1);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = (int)((long)iVar2 + 1);
  uVar11 = *param_2;
  puVar7 = (undefined8 *)(*param_1 + (long)iVar4 * 0x50);
  puVar7[1] = param_2[1];
  *puVar7 = uVar11;
  uVar11 = param_2[2];
  puVar7[3] = param_2[3];
  puVar7[2] = uVar11;
  *(undefined1 *)(puVar7 + 8) = 0;
  uVar3 = FUN_0086f578(param_1 + 4,param_2,iVar2);
  *(undefined4 *)((long)puVar7 + 0x44) = uVar3;
  local_278 = local_268;
  local_270 = -0x7fffff8000000000;
  FUN_0087011c(param_1 + 8,param_2,&local_278);
  if ((int)local_270 != 0) {
    lVar9 = (long)(int)local_270 << 2;
    piVar8 = local_278;
    do {
      iVar4 = *piVar8;
      puVar7 = (undefined8 *)(param_1[2] + (long)iVar4 * 0x50);
      iVar10 = -(uint)((float)*param_2 <= (float)puVar7[2]);
      iVar12 = -(uint)((float)((ulong)*param_2 >> 0x20) <= (float)((ulong)puVar7[2] >> 0x20));
      iVar13 = -(uint)((float)param_2[1] <= (float)puVar7[3]);
      iVar14 = -(uint)((float)*puVar7 <= (float)param_2[2]);
      iVar15 = -(uint)((float)((ulong)*puVar7 >> 0x20) <= (float)((ulong)param_2[2] >> 0x20));
      iVar16 = -(uint)((float)puVar7[1] <= (float)param_2[3]);
      if (CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar12 >> 0x18) &
                   (byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar10 >> 0x18) &
                   (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                   CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar12 >> 0x10) &
                            (byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar10 >> 0x10) &
                            (byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                            CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar12 >> 8) &
                                     (byte)((uint)iVar14 >> 8) & (byte)((uint)iVar10 >> 8) &
                                     (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar13 >> 8),
                                     (byte)iVar15 & (byte)iVar12 & (byte)iVar14 & (byte)iVar10 &
                                     (byte)iVar16 & (byte)iVar13))) != 0) {
        iVar10 = (int)param_1[0xd];
        lVar5 = (long)iVar10;
        if ((int)(*(uint *)((long)param_1 + 0x6c) & 0x7fffffff) <= iVar10) {
          FUN_030fe6ec(param_1 + 0xc,lVar5 + 1);
          iVar10 = (int)param_1[0xd];
        }
        piVar1 = (int *)(param_1[0xc] + (long)iVar10 * 8);
        *(int *)(param_1 + 0xd) = (int)(lVar5 + 1);
        *piVar1 = iVar2;
        piVar1[1] = iVar4;
        FUN_030fcb70(*param_3,iVar2,iVar4);
      }
      piVar8 = piVar8 + 1;
      lVar9 = lVar9 + -4;
    } while (lVar9 != 0);
  }
  lVar9 = local_270;
  uVar6 = (ulong)local_270._4_4_;
  local_270 = (ulong)local_270._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_278 != (int *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_278,uVar6 << 2);
  }
  return;
}


