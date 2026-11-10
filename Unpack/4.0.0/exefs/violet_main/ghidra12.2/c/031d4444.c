/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d4444; name: FUN_031d4444
 */


void FUN_031d4444(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  ulong *puVar10;
  ulong uVar11;
  size_t __n;
  char *pcVar12;
  void *__s1;
  void *__s2;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  
  puVar13 = *(ulong **)(param_2 + 8);
  puVar10 = puVar13;
  while (uVar11 = *puVar10, ((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
    goto LAB_031d44b4;
  }
  if (puVar10 != (ulong *)0x0) {
    __s2 = (void *)puVar10[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_031d44b8;
  }
LAB_031d44b4:
  __s2 = (void *)0x0;
LAB_031d44b8:
  puVar10 = puVar13;
  while (uVar11 = *puVar10, ((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
    goto LAB_031d44fc;
  }
  if (puVar10 != (ulong *)0x0) {
    pcVar12 = (char *)puVar10[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_031d4500;
  }
LAB_031d44fc:
  pcVar12 = (char *)0x0;
LAB_031d4500:
  pcVar8 = strrchr(pcVar12,0x3a);
  iVar6 = (int)pcVar8 - (int)pcVar12;
  __s1 = (void *)*param_3;
  lVar2 = param_3[1];
  iVar7 = iVar6 + 1;
  if (((pcVar8 != (char *)0x0) && (iVar6 != -1)) &&
     ((ulong)(long)iVar7 <= (ulong)(lVar2 - (long)__s1))) {
    iVar6 = memcmp(__s1,__s2,(long)iVar7);
    if (iVar6 == 0) {
      __s1 = (void *)((long)__s1 + (long)iVar7);
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if (0 < (int)uVar3) {
    lVar15 = *(long *)(param_2 + 0x18);
    lVar14 = 0;
    __n = lVar2 - (long)__s1;
    do {
      pcVar12 = *(char **)(lVar15 + lVar14);
      if (pcVar12 == (char *)0x0) {
        if (__n == 0) goto LAB_031d45cc;
      }
      else {
        sVar9 = strlen(pcVar12);
        if ((sVar9 == __n) && (iVar7 = memcmp(__s1,pcVar12,__n), iVar7 == 0)) {
LAB_031d45cc:
          *param_1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar14);
          param_1[1] = puVar13;
          goto joined_r0x031d45d8;
        }
      }
      lVar14 = lVar14 + 8;
    } while ((ulong)uVar3 * 8 != lVar14);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
joined_r0x031d45d8:
  if (puVar13 == (ulong *)0x0) {
    uVar11 = 0;
LAB_031d4608:
    param_1[2] = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar1 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return;
  }
  uVar11 = *puVar13;
  if (((uint)uVar11 >> 2 & 1) != 0) {
    uVar11 = puVar13[(uVar11 >> 1 & 1) + (uVar11 & 1) + 2];
    goto LAB_031d4608;
  }
  puVar13 = (ulong *)puVar13[1];
  goto joined_r0x031d45d8;
}


