/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031263dc; name: FUN_031263dc
 */


void FUN_031263dc(undefined8 *param_1,long param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_0464fe50;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x18);
    lVar4 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar7 * 0x90);
    lVar9 = 0;
    param_1[3] = lVar4;
    *(uint *)(param_1 + 4) = uVar1;
    *(uint *)((long)param_1 + 0x24) = uVar1;
    do {
      __dest = (void *)(lVar4 + lVar9);
      __src = (void *)(lVar8 + lVar9);
      memcpy(__dest,__src,0x38);
      *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
      uVar2 = *(undefined4 *)((long)__src + 0x3c);
      pvVar5 = (void *)((long)__dest + 0x50);
      *(void **)((long)__dest + 0x40) = pvVar5;
      *(undefined4 *)((long)__dest + 0x3c) = uVar2;
      *(undefined4 *)((long)__dest + 0x48) = 0;
      *(undefined4 *)((long)__dest + 0x4c) = 0x80000004;
      if (lVar4 != lVar8) {
        iVar3 = *(int *)((long)__src + 0x48);
        pvVar6 = *(void **)((long)__src + 0x40);
        if (4 < iVar3) {
          FUN_02f5f190((long)__dest + 0x40,PTR_PTR_047d1a50,(long)iVar3);
          pvVar5 = *(void **)((long)__dest + 0x40);
        }
        memcpy(pvVar5,pvVar6,(long)iVar3 << 2);
        *(int *)((long)__dest + 0x48) = iVar3;
      }
      pvVar5 = (void *)((long)__dest + 0x70);
      *(void **)((long)__dest + 0x60) = pvVar5;
      *(undefined4 *)((long)__dest + 0x68) = 0;
      *(undefined4 *)((long)__dest + 0x6c) = 0x80000004;
      if (__dest != __src) {
        iVar3 = *(int *)((long)__src + 0x68);
        pvVar6 = *(void **)((long)__src + 0x60);
        if (4 < iVar3) {
          FUN_02f5f190((long)__dest + 0x60,PTR_PTR_047d1a50,(long)iVar3);
          pvVar5 = *(void **)((long)__dest + 0x60);
        }
        memcpy(pvVar5,pvVar6,(long)iVar3 << 2);
        *(int *)((long)__dest + 0x68) = iVar3;
      }
      uVar2 = *(undefined4 *)((long)__src + 0x80);
      uVar1 = (int)uVar7 - 1;
      uVar7 = (ulong)uVar1;
      lVar9 = lVar9 + 0x90;
      *(undefined1 *)((long)__dest + 0x84) = *(undefined1 *)((long)__src + 0x84);
      *(undefined4 *)((long)__dest + 0x80) = uVar2;
    } while (uVar1 != 0);
  }
  return;
}


