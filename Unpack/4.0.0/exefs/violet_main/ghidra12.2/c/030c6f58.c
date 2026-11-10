/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c6f58; name: FUN_030c6f58
 */


void FUN_030c6f58(long param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x30) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffff;
  iVar2 = *(int *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(int *)(param_1 + 0x7c) = iVar2 >> 3;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  FUN_030bf52c(param_1 + 0x200,param_3);
  *(long *)(param_1 + 0x458) = param_1 + 0x468;
  *(undefined8 *)(param_1 + 0x460) = 0x8000003200000000;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x430) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  if (0x200 < *(int *)((long)param_2 + 0x14)) {
    pvVar10 = (void *)param_2[1];
    uVar4 = (*(int *)((long)param_2 + 0x14) - 0x200U) / 0x12;
    if (0x7fff < uVar4) {
      uVar4 = 0x8000;
    }
    pvVar9 = (void *)((long)pvVar10 + 0x200);
    *(void **)(param_1 + 0x10) = pvVar9;
    *(uint *)(param_1 + 0x28) = uVar4;
    *(ulong *)(param_1 + 0x18) = (long)pvVar9 + (ulong)(uVar4 << 4);
    *(void **)(param_1 + 0x20) = pvVar10;
    if (pvVar10 != (void *)0x0) {
      pvVar11 = pvVar10;
      if (((ulong)pvVar10 & 0xf) == 0) {
        pvVar12 = (void *)((long)pvVar10 + 0x200);
      }
      else {
        if (pvVar10 < (void *)((long)pvVar10 + (4 - (((ulong)pvVar10 & 0xf) >> 2)) * 4)) {
          memset(pvVar10,0xff,((ulong)~(uint)pvVar10 & 0xc) + 4);
          uVar5 = (ulong)pvVar10 >> 2 | 0xfffffffffffffffc;
          do {
            pvVar11 = (void *)((long)pvVar11 + 4);
            bVar3 = uVar5 != 0xffffffffffffffff;
            uVar5 = uVar5 + 1;
          } while (bVar3);
        }
        pvVar12 = (void *)((long)pvVar11 + 0x1f0);
      }
      pvVar1 = pvVar12;
      if (pvVar12 <= (void *)((long)pvVar11 + 0x10U)) {
        pvVar1 = (void *)((long)pvVar11 + 0x10U);
      }
      memset(pvVar11,0xff,(long)pvVar1 + ~(ulong)pvVar11 + 0x10 & 0xfffffffffffffff0);
      do {
        pvVar11 = (void *)((long)pvVar11 + 0x10);
      } while (pvVar11 < pvVar12);
      if (pvVar11 < pvVar9) {
        memset(pvVar11,0xff,(long)pvVar10 + (0x203 - (long)pvVar11) & 0xfffffffffffffffc);
      }
      pvVar9 = *(void **)(param_1 + 0x18);
      uVar5 = (ulong)(uVar4 >> 1);
      pvVar10 = pvVar9;
      if (((ulong)pvVar9 & 0xf) == 0) {
        uVar6 = uVar5;
      }
      else {
        uVar6 = 4 - (((ulong)pvVar9 & 0xf) >> 2);
        uVar7 = uVar5;
        if (uVar6 <= uVar5) {
          uVar7 = uVar6;
        }
        pvVar11 = (void *)((long)pvVar9 + uVar7 * 4);
        uVar6 = uVar5 - uVar7;
        if (pvVar9 < pvVar11) {
          memset(pvVar9,0xff,uVar7 * 4);
          uVar7 = uVar7 * 4 - 1;
          uVar4 = ((uint)(uVar7 >> 2) & 0x3fffffff) + 1;
          if ((uVar4 & 7) != 0) {
            lVar8 = -((ulong)uVar4 & 7);
            do {
              pvVar10 = (void *)((long)pvVar10 + 4);
              bVar3 = lVar8 != -1;
              lVar8 = lVar8 + 1;
            } while (bVar3);
          }
          if (0x1b < uVar7) {
            do {
              pvVar10 = (void *)((long)pvVar10 + 0x20);
            } while (pvVar10 < pvVar11);
          }
        }
        else {
        }
      }
      if ((3 < uVar6) && (0 < (long)(uVar6 & 0xfffffffffffffffc))) {
        pvVar11 = (void *)((long)pvVar10 + (uVar6 & 0xfffffffffffffffc) * 4);
        pvVar12 = pvVar11;
        if (pvVar11 <= (void *)((long)pvVar10 + 0x10U)) {
          pvVar12 = (void *)((long)pvVar10 + 0x10U);
        }
        memset(pvVar10,0xff,(long)pvVar12 + ~(ulong)pvVar10 + 0x10 & 0xfffffffffffffff0);
        do {
          pvVar10 = (void *)((long)pvVar10 + 0x10);
        } while (pvVar10 < pvVar11);
      }
      if (pvVar10 < (void *)((long)pvVar9 + uVar5 * 4)) {
        memset(pvVar10,0xff,(long)pvVar9 + ~(ulong)pvVar10 + uVar5 * 4 + 4 & 0xfffffffffffffffc);
      }
    }
  }
  return;
}


