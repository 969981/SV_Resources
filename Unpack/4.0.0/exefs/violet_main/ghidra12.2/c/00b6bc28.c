/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b6bc28; name: FUN_00b6bc28
 */


void FUN_00b6bc28(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  void *pvVar8;
  void *__src;
  void *pvVar9;
  
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4 >> 3) * -0x7063e7063e7063e7) < param_2) {
    lVar5 = param_1[1];
    lVar2 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 0x148,4);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    pvVar6 = (void *)(lVar2 + (lVar5 - lVar4 >> 3) * 8);
    pvVar8 = (void *)*param_1;
    __src = (void *)param_1[1];
    pvVar9 = pvVar6;
    if (__src != pvVar8) {
      do {
        lVar4 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        pvVar9 = (void *)((long)pvVar9 + -0x148);
        __src = (void *)((long)__src + -0x148);
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          memcpy(pvVar9,__src,0x148);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          memcpy(pvVar9,__src,0x148);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
      } while (pvVar8 != __src);
      pvVar8 = (void *)*param_1;
    }
    lVar4 = param_1[2];
    param_1[2] = lVar2 + param_2 * 0x148;
    *param_1 = (long)pvVar9;
    param_1[1] = (long)pvVar6;
    if (pvVar8 != (void *)0x0) {
      plVar7 = (long *)param_1[3];
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b6be28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))(plVar7,pvVar8,lVar4 - (long)pvVar8,4);
        return;
      }
      FUN_00c48fe8(plVar7,pvVar8,lVar4 - (long)pvVar8,4);
      return;
    }
  }
  return;
}


