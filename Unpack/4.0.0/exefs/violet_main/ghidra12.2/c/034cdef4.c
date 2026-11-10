/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034cdef4; name: FUN_034cdef4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_034cdef4(undefined4 param_1,ulong param_2,float *param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 auStack_440 [128];
  
  puVar2 = PTR_PTR_047e6fa8;
  uVar3 = (uint)param_2;
  uVar1 = uVar3 & 0xff;
  lVar9 = -((ulong)(uVar1 * 0xc + 0xf) & 0x1ff0);
  puVar8 = (undefined4 *)((long)auStack_440 + lVar9 + 0x400);
  fVar10 = *param_3;
  *(float *)((long)auStack_440 + lVar9 + 0x404) = fVar10;
  *(undefined8 *)((long)auStack_440 + lVar9 + 0x408) = 0x3f80000000000000;
  *puVar8 = 0x3f800000;
  *(float *)((long)auStack_440 + lVar9 + 0x410) = -fVar10;
  *(undefined4 *)((long)auStack_440 + lVar9 + 0x414) = 0;
  if ((uVar3 >> 0xe & 1) == 0) {
    uVar5 = 2;
  }
  else {
    *(undefined8 *)((long)auStack_440 + lVar9 + 0x418) = 0x3f800000;
    uVar5 = 3;
    *(undefined4 *)((long)auStack_440 + lVar9 + 0x420) = 0;
  }
  if ((param_2 >> 0xc & 0x210) != 0) {
    if (((uint)(param_2 >> 0xc) & 0x210) == 0x210) {
      fVar11 = param_3[2];
      puVar6 = puVar8 + uVar5 * 3;
      puVar6[2] = 0;
      *puVar6 = 0x3f800000;
      puVar6[1] = fVar11;
      puVar6 = puVar8 + (ulong)((int)uVar5 + 1) * 3;
      puVar6[1] = -fVar11;
      puVar6[2] = 0;
      *puVar6 = 0x3f800000;
      fVar11 = param_3[1];
      uVar5 = (ulong)((int)uVar5 + 2);
    }
    else {
      fVar11 = param_3[1] + (param_3[2] - param_3[1]) * 0.5;
    }
    puVar7 = puVar8 + uVar5 * 3;
    puVar6 = puVar8 + (ulong)((int)uVar5 + 1) * 3;
    uVar5 = (ulong)((int)uVar5 + 2);
    puVar7[1] = fVar11;
    puVar7[2] = 0;
    *puVar7 = 0x3f800000;
    puVar6[1] = -fVar11;
    puVar6[2] = 0;
    *puVar6 = 0x3f800000;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    lVar9 = uVar5 * 3;
    *(undefined4 *)((long)(puVar8 + lVar9) + 8) = 0x3fc90fdb;
    uVar5 = (ulong)((int)uVar5 + 1);
    *(undefined8 *)(puVar8 + lVar9) = 0x3f800000;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    puVar6 = puVar8 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar6[1] = fVar10;
    puVar6[2] = param_1;
    *puVar6 = 0x3f800000;
  }
  if ((uVar3 >> 0x19 & 1) != 0) {
    lVar9 = uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    *(undefined4 *)((long)(puVar8 + lVar9) + 8) = param_1;
    *(undefined8 *)(puVar8 + lVar9) = 0x3f800000;
  }
  if ((uVar3 >> 0x1a & 1) != 0) {
    puVar6 = puVar8 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar6[1] = -fVar10;
    puVar6[2] = param_1;
    *puVar6 = 0x3f800000;
  }
  fVar10 = param_3[2];
  if ((uVar3 >> 0x1b & 1) != 0) {
    puVar6 = puVar8 + uVar5 * 3;
    uVar5 = (ulong)((int)uVar5 + 1);
    puVar6[1] = fVar10;
    puVar6[2] = param_1;
    *puVar6 = 0x3f800000;
  }
  if ((uVar3 >> 0x1c & 1) != 0) {
    *(undefined4 *)((long)(puVar8 + uVar5 * 3) + 8) = param_1;
    *(undefined8 *)(puVar8 + uVar5 * 3) = 0x3f800000;
  }
  if ((uVar3 >> 0x1d & 1) != 0) {
    puVar6 = puVar8 + uVar5 * 3;
    puVar6[1] = -fVar10;
    puVar6[2] = param_1;
    *puVar6 = 0x3f800000;
  }
  lVar9 = *param_4;
  *param_4 = 0;
  __s = (void *)(**(code **)(*(long *)puVar2 + 0x10))(puVar2,0x60,"../Common/AkVBAP.h",0x1a1);
  if (__s != (void *)0x0) {
    memset(__s,0,0x60);
    puVar2 = PTR_PTR_047e6fa8;
    iVar4 = FUN_034e98e8(__s,PTR_PTR_047e6fa8,uVar1);
    if (iVar4 == 1) {
      FUN_034e9b74(__s,puVar8,uVar1);
      *param_4 = (long)__s;
      if (lVar9 == 0) {
        return;
      }
      FUN_034e9a70(lVar9,puVar2);
      (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar9);
      return;
    }
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,__s);
  }
  *param_4 = 0;
  return;
}


