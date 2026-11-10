/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f32ed0; name: FUN_02f32ed0
 */


void FUN_02f32ed0(long param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  size_t sVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 local_60;
  ulong local_58;
  
  lVar1 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    bVar3 = false;
    iVar10 = -1;
    bVar2 = false;
  }
  else {
    lVar9 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
      iVar8 = DAT_0486b380;
      iVar10 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar1 + 0x1000b8) = lVar6;
      }
    }
    else {
      iVar10 = (int)*(undefined8 *)(lVar6 + lVar9 * 8 + 1000);
      iVar8 = DAT_0486b380;
    }
    *(long *)(lVar6 + (long)iVar8 * 8 + 1000) = (long)(iVar10 + 1);
    bVar2 = *(long *)(param_1 + 0x800) != 0;
    bVar3 = iVar10 == 0;
  }
  if (((bool)(bVar3 & bVar2)) || (*(char *)(param_1 + 0x999) != '\0')) {
    local_60 = 0x2702000010;
    local_58 = 0;
    if (param_2 != (char *)0x0) {
      sVar4 = strlen(param_2);
      sVar4 = (size_t)((int)sVar4 + 1);
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4);
      memcpy(pvVar5,param_2,sVar4);
      local_58 = (ulong)pvVar5 | 1;
    }
    if ((bool)(bVar3 & bVar2)) {
      (**(code **)(**(long **)(param_1 + 0x800) + 0x20))(*(long **)(param_1 + 0x800),&local_60);
    }
    if ((local_58 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_58 - 1,0);
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x890);
  if ((char *)(uVar11 & 0xfffffffffffffffe) != param_2) {
    if (param_2 == (char *)0x0) {
      uVar7 = 0;
    }
    else {
      sVar4 = strlen(param_2);
      sVar4 = (size_t)((int)sVar4 + 1);
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4);
      memcpy(pvVar5,param_2,sVar4);
      uVar7 = (ulong)pvVar5 | 1;
    }
    *(ulong *)(param_1 + 0x890) = uVar7;
    if ((uVar11 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar11 - 1,0);
    }
  }
  if (iVar10 != -1) {
    lVar9 = (long)DAT_0486b380;
    lVar6 = *(long *)(lVar1 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar1 + 0x1000b8) = lVar6;
    }
    *(long *)(lVar6 + lVar9 * 8 + 1000) = (long)iVar10;
  }
  return;
}


