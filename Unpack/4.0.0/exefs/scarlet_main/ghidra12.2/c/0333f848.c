/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0333f848; name: FUN_0333f848
 */


void FUN_0333f848(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  void *pvVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  long lVar15;
  char *local_d8;
  undefined8 local_d0;
  char local_c8 [128];
  int local_48;
  
  puVar9 = (ulong *)*param_1;
  while (uVar11 = *puVar9, ((uint)uVar11 >> 3 & 1) == 0) {
    if (((uVar11 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
    goto LAB_0333f8b0;
  }
  if (puVar9 != (ulong *)0x0) {
    pcVar13 = (char *)puVar9[(ulong)(byte)POPCOUNT((byte)uVar11 & 7) + 2];
    goto LAB_0333f8b4;
  }
LAB_0333f8b0:
  pcVar13 = (char *)0x0;
LAB_0333f8b4:
  local_c8[0] = '\0';
  local_d8 = local_c8;
  local_d0 = 0x8000008000000001;
  local_48 = 1;
  pvVar8 = (void *)*param_2;
  sVar14 = param_2[1] - (long)pvVar8;
  if (pcVar13 == (char *)0x0) {
    bVar5 = sVar14 == 0;
LAB_0333f90c:
    FUN_031c6afc(&local_d8,*param_3,*(int *)(param_3 + 1) - (int)*param_3);
    if ((bVar5) || (pcVar13 == (char *)0x0)) goto LAB_0333f9e8;
  }
  else {
    sVar7 = strlen(pcVar13);
    if (sVar7 == sVar14) {
      iVar6 = memcmp(pvVar8,pcVar13,sVar14);
      bVar5 = iVar6 == 0;
      goto LAB_0333f90c;
    }
    FUN_031c6afc(&local_d8,*param_3,*(int *)(param_3 + 1) - (int)*param_3);
  }
  lVar15 = *param_2;
  lVar10 = param_2[1];
  sVar14 = strlen(pcVar13 + (lVar10 - lVar15));
  iVar3 = (int)local_d0;
  lVar12 = (long)(int)local_d0;
  iVar6 = (int)(lVar12 + -1) + (int)sVar14;
  iVar2 = (local_d0._4_4_ & 0x7fffffff) - 1;
  iVar1 = iVar6;
  if (iVar2 <= iVar6) {
    iVar1 = iVar2;
  }
  if (local_48 != 0) {
    iVar1 = iVar6;
  }
  iVar6 = iVar1 + 1;
  if ((int)(local_d0._4_4_ & 0x7fffffff) <= iVar1) {
    FUN_030b4a20(&local_d8,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
  }
  if (((int)local_d0 <= iVar1) || (iVar6 < (int)local_d0)) {
    local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  }
  local_d8[iVar1] = '\0';
  memmove(local_d8 + lVar12 + -1,pcVar13 + (lVar10 - lVar15),(long)((int)local_d0 - iVar3));
LAB_0333f9e8:
  pcVar13 = local_d8;
  lVar15 = param_1[3];
  if (local_d8 == (char *)0x0) {
    uVar11 = 0;
  }
  else {
    sVar14 = strlen(local_d8);
    sVar14 = (size_t)((int)sVar14 + 1);
    pvVar8 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar14);
    memcpy(pvVar8,pcVar13,sVar14);
    uVar11 = (ulong)pvVar8 | 1;
  }
  iVar6 = *(int *)(lVar15 + 0x70);
  lVar10 = (long)iVar6;
  if ((int)(*(uint *)(lVar15 + 0x74) & 0x7fffffff) <= iVar6) {
    FUN_03055ddc(lVar15 + 0x68,PTR_PTR_047d1a50,lVar10 + 1);
    iVar6 = *(int *)(lVar15 + 0x70);
  }
  uVar4 = local_d0;
  *(ulong *)(*(long *)(lVar15 + 0x68) + (long)iVar6 * 8) = uVar11;
  *(int *)(lVar15 + 0x70) = (int)(lVar10 + 1);
  *(ulong *)((undefined4 *)*param_1 +
            (ulong)(byte)POPCOUNT((byte)*(undefined4 *)*param_1 & 7) * 2 + 4) =
       *(ulong *)(*(long *)(param_1[3] + 0x68) + (long)*(int *)(param_1[3] + 0x70) * 8 + -8) &
       0xfffffffffffffffe;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((-1 < (long)uVar4) && (local_d8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return;
}


