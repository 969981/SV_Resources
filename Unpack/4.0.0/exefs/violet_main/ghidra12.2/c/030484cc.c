/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030484cc; name: FUN_030484cc
 */


void FUN_030484cc(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  void *__dest;
  void *__dest_00;
  void *__src;
  long lVar10;
  undefined8 local_38;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_047e4ec8 + 0x10);
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar6 = PTR_PTR_047d1a50;
  param_1[4] = 0;
  puVar7 = (undefined1 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,1);
  *puVar7 = 0;
  *(undefined1 *)(param_1 + 5) = 0x71;
  puVar5 = PTR_DAT_047e4ed0;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = (ulong)puVar7 | 1;
  *(undefined8 *)((long)param_1 + 0x44) = 0x422000003e4ccccd;
  *(undefined4 *)((long)param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x4248000042480000;
  *(undefined1 *)(param_1 + 0x11) = 0xc;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = param_3;
  puVar5 = PTR_DAT_047d1a08;
  *(undefined1 *)(param_1 + 3) = 1;
  if ((char *)((ulong)puVar7 & 0xfffffffffffffffe) != "BallGun") {
    puVar8 = (undefined8 *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,8);
    *puVar8 = 0x6e75476c6c6142;
    param_1[4] = (ulong)puVar8 | 1;
    (**(code **)(puVar5 + 8))(0,((ulong)puVar7 | 1) - 1,0);
  }
  local_38 = 0x18;
  plVar9 = (long *)(**(code **)puVar5)(0,&local_38,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar9,"hkQueue");
  }
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = 0;
  iVar1 = *(int *)((long)param_1 + 0x54);
  param_1[0xe] = (long)plVar9;
  if ((0 < iVar1) && ((int)plVar9[1] <= iVar1)) {
    uVar2 = (int)plVar9[1] * 2;
    if ((int)uVar2 <= iVar1) {
      uVar2 = iVar1 + 1;
    }
    __dest = (void *)(**(code **)(*(long *)puVar6 + 0x18))
                               (puVar6,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar2 << 3);
    if ((__dest != (void *)0x0) && (lVar10 = *plVar9, lVar10 != 0)) {
      if (*(int *)((long)plVar9 + 0x14) != 0) {
        iVar1 = *(int *)((long)plVar9 + 0xc);
        iVar4 = (int)plVar9[2];
        if (iVar1 < iVar4) {
          __src = (void *)(lVar10 + (long)iVar1 * 8);
          __dest_00 = __dest;
          iVar4 = *(int *)((long)plVar9 + 0x14);
        }
        else {
          uVar3 = (int)plVar9[1] - iVar1;
          memcpy(__dest,(void *)(lVar10 + (long)iVar1 * 8),
                 -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
          __src = (void *)*plVar9;
          __dest_00 = (void *)((long)__dest + (long)(int)uVar3 * 8);
        }
        memcpy(__dest_00,__src,(long)iVar4 << 3);
      }
      *(undefined4 *)((long)plVar9 + 0xc) = 0;
      *(undefined4 *)(plVar9 + 2) = *(undefined4 *)((long)plVar9 + 0x14);
    }
    if ((int)plVar9[1] != 0) {
      (**(code **)(puVar5 + 8))(puVar6[8],*plVar9,0);
      *(undefined4 *)(plVar9 + 1) = 0;
      *plVar9 = 0;
    }
    *plVar9 = (long)__dest;
    *(uint *)(plVar9 + 1) = uVar2;
  }
  return;
}


