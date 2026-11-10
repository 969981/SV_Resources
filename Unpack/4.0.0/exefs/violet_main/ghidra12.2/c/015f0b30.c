/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f0b30; name: FUN_015f0b30
 */


void FUN_015f0b30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  size_t sVar7;
  void *__dest;
  long *plVar8;
  ulong *puVar9;
  void *__src;
  ulong *puVar10;
  
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  if (puVar4 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    *puVar4 = 0;
    puVar4[1] = 0x8000000000000000;
    plVar8 = (long *)PTR_PTR_047d1a50;
    uVar2 = *(uint *)(param_3 + 1);
    if ((int)uVar2 < 1) {
      *puVar4 = 0;
      puVar4[1] = 0x8000000000000000;
    }
    else {
      __src = (void *)*param_3;
      pvVar6 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
      *puVar4 = pvVar6;
      *(uint *)(puVar4 + 1) = uVar2;
      *(uint *)((long)puVar4 + 0xc) = uVar2;
      memcpy(pvVar6,__src,0x34);
      *(undefined8 *)((long)pvVar6 + 0x38) = 0;
      pcVar1 = (char *)(*(ulong *)((long)__src + 0x38) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar7 = strlen(pcVar1);
        sVar7 = (size_t)((int)sVar7 + 1);
        __dest = (void *)(**(code **)(*plVar8 + 0x18))(plVar8,sVar7);
        memcpy(__dest,pcVar1,sVar7);
        plVar8 = (long *)PTR_PTR_047d1a50;
        *(ulong *)((long)pvVar6 + 0x38) = (ulong)__dest | 1;
      }
      iVar3 = uVar2 - 1;
      if (iVar3 != 0) {
        puVar10 = (ulong *)((long)__src + 0x78);
        puVar9 = (ulong *)((long)pvVar6 + 0x78);
        do {
          memcpy(puVar9 + -7,puVar10 + -7,0x34);
          *puVar9 = 0;
          pcVar1 = (char *)(*puVar10 & 0xfffffffffffffffe);
          if (pcVar1 != (char *)0x0) {
            sVar7 = strlen(pcVar1);
            sVar7 = (size_t)((int)sVar7 + 1);
            pvVar6 = (void *)(**(code **)(*plVar8 + 0x18))(plVar8,sVar7);
            memcpy(pvVar6,pcVar1,sVar7);
            *puVar9 = (ulong)pvVar6 | 1;
          }
          iVar3 = iVar3 + -1;
          puVar10 = puVar10 + 8;
          puVar9 = puVar9 + 8;
        } while (iVar3 != 0);
      }
    }
    *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_3 + 2);
    *param_1 = puVar4;
    param_1[1] = param_2;
    param_1[2] = 0x18;
    param_1[3] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


