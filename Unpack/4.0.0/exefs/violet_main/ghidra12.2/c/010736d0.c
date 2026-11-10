/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010736d0; name: FUN_010736d0
 */


void FUN_010736d0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  ulong *puVar11;
  
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  if (puVar5 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *puVar5 = 0;
    puVar5[1] = 0x8000000000000000;
    puVar3 = PTR_PTR_047d1a50;
    uVar2 = *(uint *)(param_3 + 1);
    if ((int)uVar2 < 1) {
      *puVar5 = 0;
      puVar5[1] = 0x8000000000000000;
    }
    else {
      pvVar10 = (void *)*param_3;
      pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
      *puVar5 = pvVar7;
      *(uint *)(puVar5 + 1) = uVar2;
      *(uint *)((long)puVar5 + 0xc) = uVar2;
      memcpy(pvVar7,pvVar10,0x34);
      *(undefined8 *)((long)pvVar7 + 0x38) = 0;
      pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x38) & 0xfffffffffffffffe);
      if (pcVar1 != (char *)0x0) {
        sVar8 = strlen(pcVar1);
        sVar8 = (size_t)((int)sVar8 + 1);
        pvVar9 = (void *)(**(code **)(*(long *)puVar3 + 0x18))(puVar3,sVar8);
        memcpy(pvVar9,pcVar1,sVar8);
        *(ulong *)((long)pvVar7 + 0x38) = (ulong)pvVar9 | 1;
      }
      if (uVar2 != 1) {
        memcpy((void *)((long)pvVar7 + 0x40),(void *)((long)pvVar10 + 0x40),0x34);
        *(undefined8 *)((long)pvVar7 + 0x78) = 0;
        pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x78) & 0xfffffffffffffffe);
        if (pcVar1 != (char *)0x0) {
          sVar8 = strlen(pcVar1);
          sVar8 = (size_t)((int)sVar8 + 1);
          pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
          memcpy(pvVar9,pcVar1,sVar8);
          *(ulong *)((long)pvVar7 + 0x78) = (ulong)pvVar9 | 1;
        }
        iVar4 = uVar2 - 2;
        if (iVar4 != 0) {
          pvVar10 = (void *)((long)pvVar10 + 0x80);
          puVar11 = (ulong *)((long)pvVar7 + 0xb8);
          do {
            memcpy(puVar11 + -7,pvVar10,0x34);
            *puVar11 = 0;
            pcVar1 = (char *)(*(ulong *)((long)pvVar10 + 0x38) & 0xfffffffffffffffe);
            if (pcVar1 != (char *)0x0) {
              sVar8 = strlen(pcVar1);
              sVar8 = (size_t)((int)sVar8 + 1);
              pvVar7 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                         (PTR_PTR_047d1a50,sVar8);
              memcpy(pvVar7,pcVar1,sVar8);
              *puVar11 = (ulong)pvVar7 | 1;
            }
            iVar4 = iVar4 + -1;
            puVar11 = puVar11 + 8;
            pvVar10 = (void *)((long)pvVar10 + 0x40);
          } while (iVar4 != 0);
        }
      }
    }
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_3 + 2);
    *param_1 = puVar5;
    param_1[1] = param_2;
    param_1[2] = 0x18;
    param_1[3] = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


