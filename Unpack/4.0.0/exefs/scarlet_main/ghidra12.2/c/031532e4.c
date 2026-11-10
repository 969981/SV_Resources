/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031532e4; name: FUN_031532e4
 */


void FUN_031532e4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  void *__dest;
  void *__src;
  void *pvVar10;
  int iVar11;
  
  puVar6 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x60);
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    pvVar10 = (void *)*param_1;
    __dest = pvVar7;
    __src = pvVar10;
    iVar11 = iVar3;
    do {
      memcpy(__dest,__src,0x30);
      *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
      *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
      uVar2 = *(undefined8 *)((long)__src + 0x48);
      *(undefined8 *)((long)__dest + 0x40) = *(undefined8 *)((long)__src + 0x40);
      *(undefined8 *)((long)__dest + 0x48) = uVar2;
      iVar11 = iVar11 + -1;
      *(undefined8 *)((long)__dest + 0x50) = *(undefined8 *)((long)__src + 0x50);
      *(undefined8 *)((long)__src + 0x50) = 0;
      __dest = (void *)((long)__dest + 0x60);
      __src = (void *)((long)__src + 0x60);
    } while (iVar11 != 0);
    iVar11 = 0;
    do {
      plVar8 = *(long **)((long)pvVar10 + 0x50);
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar9 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      iVar11 = iVar11 + 1;
      pvVar10 = (void *)((long)pvVar10 + 0x60);
    } while (iVar11 != iVar3);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = pvVar7;
  return;
}


