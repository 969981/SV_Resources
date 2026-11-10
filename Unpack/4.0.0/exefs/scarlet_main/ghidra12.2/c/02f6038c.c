/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6038c; name: FUN_02f6038c
 */


void FUN_02f6038c(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = 0;
  param_1[3] = -0x8000000000000000;
  uVar8 = (ulong)param_3;
  param_1[4] = 0;
  param_1[6] = (long)(param_1 + 10);
  param_1[7] = -0x7fffffe800000000;
  param_1[0x26] = (long)(param_1 + 0x2a);
  param_1[0x27] = -0x7fffffe800000000;
  param_1[0x46] = (long)(param_1 + 0x4a);
  param_1[0x66] = (long)(param_1 + 0x6a);
  param_1[0x86] = (long)(param_1 + 0x8a);
  param_1[0xaa] = (long)(param_1 + 0xae);
  param_1[0xa5] = -0x8000000000000000;
  param_1[0xa7] = -0x8000000000000000;
  param_1[0xca] = (long)(param_1 + 0xce);
  param_1[0x129] = -0x8000000000000000;
  param_1[0x12d] = -0x8000000000000000;
  param_1[0x12f] = -0x8000000000000000;
  param_1[0x131] = -0x8000000000000000;
  param_1[0x133] = -0x8000000000000000;
  param_1[0xea] = (long)(param_1 + 0xee);
  param_1[0x136] = (long)(param_1 + 0x13a);
  param_1[0x24] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = -0x7fffffe800000000;
  param_1[100] = 0;
  param_1[0x67] = -0x7fffffe800000000;
  param_1[0x84] = 0;
  param_1[0x87] = -0x7fffffe800000000;
  param_1[0xa4] = 0;
  param_1[0xa6] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = -0x7fffffe800000000;
  param_1[200] = 0;
  param_1[0xcb] = -0x7fffffe800000000;
  param_1[0xe8] = 0;
  param_1[0xeb] = -0x7fffffe800000000;
  param_1[0x108] = 0;
  param_1[0x10a] = (long)(param_1 + 0x10e);
  param_1[0x10b] = -0x7fffffe800000000;
  param_1[0x128] = 0;
  param_1[300] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  param_1[0x134] = 0;
  param_1[0x137] = -0x7fffffe800000000;
  param_1[0x156] = 0;
  param_1[0x158] = (long)(param_1 + 0x15c);
  param_1[0x159] = -0x7fffffe800000000;
  FUN_02f5fee0(param_1 + 4,param_2,"hknpCollisionCacheManager::m_existingCacheStream");
  FUN_02f5fee0(param_1 + 0x44,param_2,"hknpCollisionCacheManager::m_thisFrameOutput");
  plVar2 = (long *)*param_2;
  param_1[0x84] = (long)plVar2;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)((long)param_1 + 0x42c) = 0;
  uVar1 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar4 = param_2[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar9 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar1;
    puVar9 = (undefined8 *)(param_2[1] + (ulong)uVar1 * 8);
  }
  puVar9 = (undefined8 *)*puVar9;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(int *)((long)puVar9 + 4) = (int)param_1[0x87];
  iVar3 = (int)param_1[0x87];
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x43c) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(param_1 + 0x86,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = (int)param_1[0x87];
  }
  *(undefined8 **)(param_1[0x86] + (long)iVar3 * 8) = puVar9;
  *(int *)(param_1 + 0x87) = (int)(lVar4 + 1);
  param_1[0xa2] = (long)"hknpCollisionCacheManager::m_randomAccessCacheStream";
  FUN_02f5fee0(param_1 + 0xa8,param_2,"hknpCollisionCacheManager::m_newCacheStream");
  FUN_02f5fee0(param_1 + 0xe8,param_2,"hknpCollisionCacheManager::m_inactiveCacheStream");
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_1 + 0x135) = 0;
  param_1[0x134] = (long)plVar2;
  *(undefined1 *)((long)param_1 + 0x9ac) = 0;
  uVar1 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar4 = param_2[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar9 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar1;
    puVar9 = (undefined8 *)(param_2[1] + (ulong)uVar1 * 8);
  }
  puVar9 = (undefined8 *)*puVar9;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(int *)((long)puVar9 + 4) = (int)param_1[0x137];
  iVar3 = (int)param_1[0x137];
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0x9bc) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(param_1 + 0x136,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = (int)param_1[0x137];
  }
  *(undefined8 **)(param_1[0x136] + (long)iVar3 * 8) = puVar9;
  *(int *)(param_1 + 0x137) = (int)(lVar4 + 1);
  param_1[0x152] = (long)"hknpCollisionCacheManager::m_deferedManifolds";
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_1 + 0x157) = 0;
  param_1[0x156] = (long)plVar2;
  *(undefined1 *)((long)param_1 + 0xabc) = 0;
  uVar1 = *(int *)(param_2 + 0xb) - 1;
  if (*(int *)(param_2 + 0xb) < 1) {
    lVar4 = param_2[1];
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar4,6);
    *(undefined4 *)(param_2 + 0xb) = 5;
    puVar9 = (undefined8 *)(lVar4 + 0x28);
  }
  else {
    *(uint *)(param_2 + 0xb) = uVar1;
    puVar9 = (undefined8 *)(param_2[1] + (ulong)uVar1 * 8);
  }
  puVar9 = (undefined8 *)*puVar9;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  *(int *)((long)puVar9 + 4) = (int)param_1[0x159];
  iVar3 = (int)param_1[0x159];
  lVar4 = (long)iVar3;
  if ((int)(*(uint *)((long)param_1 + 0xacc) & 0x7fffffff) <= iVar3) {
    FUN_031c25b4(param_1 + 0x158,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = (int)param_1[0x159];
  }
  *(undefined8 **)(param_1[0x158] + (long)iVar3 * 8) = puVar9;
  param_1[0x174] = (long)"hknpCollisionCacheManager::m_lastFrameContactData";
  *(int *)(param_1 + 0x159) = (int)(lVar4 + 1);
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < (int)param_3) {
    FUN_02f61cbc(param_1,(long)(int)param_3);
  }
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_3) {
    lVar4 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4) + (long)iVar3 * -0x10;
    *(uint *)(param_1 + 1) = param_3;
    puVar6 = (undefined4 *)(*param_1 + (long)iVar3 * 0x10 + 0xc);
    do {
      lVar4 = lVar4 + -0x10;
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
    } while (lVar4 != 0);
  }
  else if ((int)param_3 < iVar3) {
    *(uint *)(param_1 + 1) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < (int)param_3) {
    FUN_02f61e30(param_1 + 2,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 3) != param_3) {
    *(uint *)(param_1 + 3) = param_3;
  }
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar7 = *param_1;
      *(undefined8 *)(lVar7 + lVar4) = 0;
      *(undefined4 *)(lVar7 + lVar4 + 0xc) = 0;
      lVar7 = *param_1 + lVar4;
      lVar4 = lVar4 + 0x10;
      *(long *)(param_1[2] + lVar5 * 8) = lVar7;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  if ((int)(*(uint *)((long)param_1 + 0x52c) & 0x7fffffff) < (int)param_3) {
    FUN_02f61cbc(param_1 + 0xa4,(long)(int)param_3);
  }
  iVar3 = (int)param_1[0xa5];
  if (iVar3 < (int)param_3) {
    lVar4 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4) + (long)iVar3 * -0x10;
    *(uint *)(param_1 + 0xa5) = param_3;
    puVar6 = (undefined4 *)(param_1[0xa4] + (long)iVar3 * 0x10 + 0xc);
    do {
      lVar4 = lVar4 + -0x10;
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
    } while (lVar4 != 0);
  }
  else if ((int)param_3 < iVar3) {
    *(uint *)(param_1 + 0xa5) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x53c) & 0x7fffffff) < (int)param_3) {
    FUN_02f61e30(param_1 + 0xa6,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0xa7) != param_3) {
    *(uint *)(param_1 + 0xa7) = param_3;
  }
  if (0 < (int)param_1[0xa5]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar7 = param_1[0xa4];
      *(undefined8 *)(lVar7 + lVar4) = 0;
      *(undefined4 *)(lVar7 + lVar4 + 0xc) = 0;
      lVar7 = param_1[0xa4] + lVar4;
      lVar4 = lVar4 + 0x10;
      *(long *)(param_1[0xa6] + lVar5 * 8) = lVar7;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0xa5]);
  }
  if ((int)(*(uint *)((long)param_1 + 0x96c) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a330(param_1 + 300,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  iVar3 = (int)param_1[0x12d];
  if (iVar3 < (int)param_3) {
    lVar4 = (-(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5) + (long)iVar3 * -0x20;
    *(uint *)(param_1 + 0x12d) = param_3;
    puVar9 = (undefined8 *)(param_1[300] + (long)iVar3 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar9 + -4) = 0;
      lVar4 = lVar4 + -0x20;
      *puVar9 = 0;
      puVar9 = puVar9 + 4;
    } while (lVar4 != 0);
  }
  else if ((int)param_3 < iVar3) {
    *(uint *)(param_1 + 0x12d) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x97c) & 0x7fffffff) < (int)param_3) {
    FUN_02f24060(param_1 + 0x12e,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0x12f) != param_3) {
    *(uint *)(param_1 + 0x12f) = param_3;
  }
  if (0 < (int)param_1[0x12d]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar9 = (undefined8 *)(param_1[300] + lVar4);
      *puVar9 = 0;
      *(undefined4 *)((long)puVar9 + 0xc) = 0;
      puVar9[2] = 0;
      lVar7 = param_1[300] + lVar4;
      lVar4 = lVar4 + 0x20;
      *(long *)(param_1[0x12e] + lVar5 * 8) = lVar7;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x12d]);
  }
  if ((int)(*(uint *)((long)param_1 + 0x98c) & 0x7fffffff) < (int)param_3) {
    FUN_02f0a330(param_1 + 0x130,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  iVar3 = (int)param_1[0x131];
  if (iVar3 < (int)param_3) {
    lVar4 = (-(ulong)(param_3 >> 0x1f) & 0xffffffe000000000 | uVar8 << 5) + (long)iVar3 * -0x20;
    *(uint *)(param_1 + 0x131) = param_3;
    puVar9 = (undefined8 *)(param_1[0x130] + (long)iVar3 * 0x20 + 0x10);
    do {
      *(undefined4 *)((long)puVar9 + -4) = 0;
      lVar4 = lVar4 + -0x20;
      *puVar9 = 0;
      puVar9 = puVar9 + 4;
    } while (lVar4 != 0);
  }
  else if ((int)param_3 < iVar3) {
    *(uint *)(param_1 + 0x131) = param_3;
  }
  if ((int)(*(uint *)((long)param_1 + 0x99c) & 0x7fffffff) < (int)param_3) {
    FUN_02f24060(param_1 + 0x132,PTR_PTR_047d1a50,(long)(int)param_3);
  }
  if (*(uint *)(param_1 + 0x133) != param_3) {
    *(uint *)(param_1 + 0x133) = param_3;
  }
  if (0 < (int)param_1[0x131]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar9 = (undefined8 *)(param_1[0x130] + lVar4);
      *puVar9 = 0;
      *(undefined4 *)((long)puVar9 + 0xc) = 0;
      puVar9[2] = 0;
      lVar7 = param_1[0x130] + lVar4;
      lVar4 = lVar4 + 0x20;
      *(long *)(param_1[0x132] + lVar5 * 8) = lVar7;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x131]);
  }
  return;
}


