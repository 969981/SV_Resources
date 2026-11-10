/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d60ac; name: FUN_033d60ac
 */


/* WARNING: Removing unreachable block (ram,0x033d630c) */

undefined8 FUN_033d60ac(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  size_t __nmemb;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint local_3f8 [16];
  float local_3b8 [16];
  undefined4 local_378 [64];
  undefined4 local_278 [64];
  float local_178 [66];
  
  lVar3 = (**(code **)(*param_2 + 0x10))
                    (param_2,(ulong)*(uint *)(param_1 + 0x128) * 0xa8,
                     "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/AkRoomVerb/AkRoomVerbFX.cpp"
                     ,0x1c2);
  *(long *)(param_1 + 0x140) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  uVar8 = *(uint *)(param_1 + 0x128);
  fVar16 = 1.0;
  if (uVar8 != 0) {
    lVar12 = 0;
    uVar13 = 1;
    while( true ) {
      if (lVar3 != 0) {
        memset((void *)(lVar3 + lVar12),0,0xa8);
        uVar8 = *(uint *)(param_1 + 0x128);
      }
      if (uVar8 <= uVar13) break;
      lVar3 = *(long *)(param_1 + 0x140);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0xa8;
    }
    if (1 < uVar8) {
      fVar16 = 1.0 / SQRT((float)uVar8);
    }
  }
  uVar8 = uVar8 * 4;
  *(float *)(param_1 + 0x124) = fVar16;
  if (uVar8 == 0) {
    __nmemb = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x158);
    fVar14 = *(float *)(lVar3 + 0x9c) +
             (*(float *)(lVar3 + 0xa0) - *(float *)(lVar3 + 0x9c)) * *(float *)(lVar3 + 0x6c) * 0.01
    ;
    fVar16 = (*(float *)(lVar3 + 0xa8) +
             (*(float *)(lVar3 + 0xac) - *(float *)(lVar3 + 0xa8)) * *(float *)(lVar3 + 0x70) * 0.01
             ) * fVar14;
    fVar14 = fVar14 - fVar16;
    uVar13 = 0;
    __nmemb = (size_t)uVar8;
    uVar11 = 0x6b4cc7;
    do {
      uVar11 = uVar11 * 0xbb38435 + 0x3619636b;
      fVar15 = fVar16 + (1.0 / (float)(uVar8 - 1)) *
                        (fVar14 + fVar14) * (float)(uVar13 & 0xffffffff);
      local_178[uVar13] = fVar15 + fVar15 * *(float *)(lVar3 + 0xa4) * 2.3283064e-12 * (float)uVar11
      ;
      uVar13 = uVar13 + 1;
    } while (__nmemb != uVar13);
  }
  qsort(local_178,__nmemb,4,(__compar_fn_t)&LAB_033e0d40);
  FUN_033e0c30(local_178,*(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x128) << 2,local_278);
  uVar8 = *(uint *)(param_1 + 0x128);
  uVar13 = (ulong)uVar8;
  if (uVar8 == 0) {
    return 1;
  }
  iVar6 = 0;
  uVar9 = 0;
  do {
    uVar1 = local_278[uVar8 + iVar6];
    local_378[uVar9 & 0xffffffff] = *(undefined4 *)((long)local_278 + uVar9);
    iVar7 = (int)uVar9;
    local_378[iVar7 + 1] = uVar1;
    local_378[iVar7 + 2] = local_278[uVar8 * 2 + iVar6];
    uVar11 = uVar8 * 3 + iVar6;
    iVar6 = iVar6 + 1;
    uVar9 = uVar9 + 4;
    local_378[iVar7 + 3] = local_278[uVar11];
  } while (uVar13 * 4 != uVar9);
  lVar3 = *(long *)(param_1 + 0x158);
  fVar16 = *(float *)(lVar3 + 0xc0) / (float)uVar8;
  fVar14 = *(float *)(lVar3 + 0xc4) * 2.3283064e-12 * fVar16;
  if (uVar8 == 1) {
    fVar15 = 8.483689e+07;
    uVar10 = 0;
  }
  else {
    uVar11 = 0x1bc0f99;
    uVar9 = 0;
    do {
      uVar2 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar11 = uVar2 * 0xbb38435 + 0x3619636b;
      uVar10 = uVar9 + 2;
      local_3b8[uVar9] = fVar16 + (float)uVar2 * fVar14;
      local_3b8[uVar9 + 1] = fVar16 + (float)uVar11 * fVar14;
      uVar9 = uVar10;
    } while ((uVar13 & 0xfffffffe) != uVar10);
    fVar15 = (float)(uVar11 * 0xbb38435 + 0x3619636b);
    if ((uVar8 & 1) == 0) goto LAB_033d6378;
  }
  local_3b8[uVar10] = fVar16 + fVar15 * fVar14;
LAB_033d6378:
  fVar16 = (float)*(uint *)(param_1 + 0x130) * 0.001;
  if (uVar8 == 1) {
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    do {
      fVar14 = local_3b8[uVar9 + 1];
      uVar10 = uVar9 + 2;
      local_3f8[uVar9] = (int)(fVar16 * local_3b8[uVar9]);
      local_3f8[uVar9 + 1] = (int)(fVar16 * fVar14);
      uVar9 = uVar10;
    } while ((uVar13 & 0xfffffffe) != uVar10);
  }
  if ((uVar8 & 1) != 0) {
    local_3f8[uVar10] = (int)(fVar16 * local_3b8[uVar10]);
  }
  uVar4 = FUN_033e0f08(*(undefined4 *)(lVar3 + 8),*(undefined4 *)(lVar3 + 0xc),
                       *(undefined8 *)(param_1 + 0x140),param_2,local_378);
  if ((int)uVar4 == 1) {
    lVar3 = 0;
    uVar13 = 0;
    uVar9 = 4;
    do {
      uVar8 = local_3f8[uVar13];
      if (uVar8 < 5) {
        uVar8 = 4;
      }
      lVar12 = *(long *)(param_1 + 0x140) + lVar3;
      *(uint *)(lVar12 + 0x90) = uVar8;
      lVar5 = (**(code **)(*param_2 + 0x10))
                        (param_2,uVar8 * 4 + 0xc & 0xfffffff0,
                         "C:/projects/middleware/wwise/SDK/source/SoundEngine/Plugins/Effects/Common/DelayLine.cpp"
                         ,0x2a);
      *(long *)(lVar12 + 0x98) = lVar5;
      if (lVar5 == 0) {
        return 0x34;
      }
      *(undefined4 *)(lVar12 + 0xa0) = 0;
      uVar13 = uVar13 + 1;
      if (*(uint *)(param_1 + 0x128) <= uVar13) {
        return 1;
      }
      lVar12 = *(long *)(param_1 + 0x140) + lVar3;
      uVar10 = uVar9 & 0xfffffffc;
      lVar3 = lVar3 + 0xa8;
      uVar9 = uVar9 + 4;
      uVar4 = FUN_033e0f08(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),lVar12 + 0xa8,param_2,
                           local_378 + uVar10,*(undefined4 *)(param_1 + 0x130));
    } while ((int)uVar4 == 1);
  }
  return uVar4;
}


