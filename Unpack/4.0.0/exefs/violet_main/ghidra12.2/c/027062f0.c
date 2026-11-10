/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027062f0; name: FUN_027062f0
 */


void * FUN_027062f0(long *param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  pvVar4 = memset(param_1,0,0x50);
  if (DAT_04859d40 == 0) {
    pvVar4 = (void *)FUN_01671900();
  }
  if ((*(byte *)(param_2 + 0x370) >> 1 & 1) != 0) {
    uVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x378));
    pvVar4 = (void *)(ulong)uVar3;
    if (uVar3 != 0) {
      return pvVar4;
    }
  }
  if (*(ulong *)(param_2 + 0x28) != 0) {
    lVar5 = *(long *)(param_2 + 0x10);
    lVar6 = lVar5 + 0x50;
    puVar9 = (ulong *)(param_2 + 0x398);
    lVar8 = 1;
    lVar7 = lVar6;
    do {
      uVar1 = *puVar9;
      uVar10 = 0;
      if ((uVar1 + 0x10 & 0xf) != 0) {
        uVar10 = (ulong)(uint)-(int)(uVar1 + 0x10) & 0xf;
      }
      uVar10 = uVar1 + uVar10;
      do {
        if (((uVar1 + puVar9[1] <= uVar10) || (*(ulong *)(param_2 + 0x28) == uVar10)) ||
           (uVar11 = *(ulong *)(uVar10 + 8), uVar11 == 0xb)) break;
        uVar12 = uVar11 & 0xfffffffffffffff8;
        bVar2 = (uVar11 & 3) != 1;
        uVar11 = uVar12;
        if (bVar2) {
          uVar11 = 0;
        }
        uVar10 = uVar10 + uVar12;
        lVar6 = uVar12 + lVar6;
        if (!bVar2) {
          lVar8 = lVar8 + 1;
        }
        lVar7 = uVar11 + lVar7;
      } while (uVar1 <= uVar10);
      puVar9 = (ulong *)puVar9[2];
    } while (puVar9 != (ulong *)0x0);
    *param_1 = lVar6;
    param_1[1] = lVar8;
    lVar8 = *(long *)(param_2 + 0x358);
    param_1[4] = lVar8 - lVar6;
    param_1[5] = *(long *)(param_2 + 0x360);
    param_1[9] = lVar5;
    param_1[7] = lVar8 - lVar7;
    param_1[8] = lVar7;
  }
  if ((*(byte *)(param_2 + 0x370) >> 1 & 1) == 0) {
    return pvVar4;
  }
  uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x378));
  return (void *)(ulong)uVar3;
}


