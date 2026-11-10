/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ff454; name: FUN_030ff454
 */


void FUN_030ff454(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  void *__dest;
  void *__src;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  void *pvVar15;
  ulong local_68;
  
  plVar11 = (long *)PTR_PTR_047d1a50;
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar13 * 2;
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar9 * 0x60,&local_68);
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    pvVar15 = (void *)*param_1;
    __dest = pvVar7;
    __src = pvVar15;
    iVar14 = iVar4;
    do {
      memcpy(__dest,__src,0x30);
      *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
      *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
      uVar3 = *(undefined8 *)((long)__src + 0x48);
      *(undefined8 *)((long)__dest + 0x40) = *(undefined8 *)((long)__src + 0x40);
      *(undefined8 *)((long)__dest + 0x48) = uVar3;
      iVar14 = iVar14 + -1;
      *(undefined8 *)((long)__dest + 0x50) = *(undefined8 *)((long)__src + 0x50);
      *(undefined8 *)((long)__src + 0x50) = 0;
      plVar11 = (long *)PTR_PTR_047d1a50;
      __dest = (void *)((long)__dest + 0x60);
      __src = (void *)((long)__src + 0x60);
    } while (iVar14 != 0);
    iVar14 = 0;
    do {
      plVar8 = *(long **)((long)pvVar15 + 0x50);
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      iVar14 = iVar14 + 1;
      pvVar15 = (void *)((long)pvVar15 + 0x60);
    } while (iVar14 != iVar4);
  }
  uVar2 = uVar9 * 0x60 + 0x60;
  uVar12 = uVar9;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x60;
    uVar12 = uVar9 + 1;
    if (uVar2 <= local_68) {
      uVar12 = uVar12 + (local_68 + uVar9 * -0x60) / 0x60;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,*param_1,uVar13 * 0x60);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = pvVar7;
  return;
}


