/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bda24; name: FUN_015bda24
 */


void FUN_015bda24(long param_1,long *param_2,void *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  void *__dest;
  long *local_70;
  void *local_68;
  
  uVar5 = FUN_015bdcb0(param_2,param_3,param_4,param_5);
  lVar7 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  lVar6 = 0;
  if (lVar8 - lVar7 != 0) {
    lVar6 = (lVar8 - lVar7 >> 3) * 0x5d + -1;
  }
  uVar9 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  lVar1 = uVar5 - (lVar6 - uVar9);
  if (lVar6 - uVar9 <= uVar5 && lVar1 != 0) {
    FUN_015bebcc(param_1,lVar1);
    uVar9 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(param_1 + 0x10);
  }
  plVar11 = (long *)(lVar7 + (uVar9 / 0x5d) * 8);
  if (lVar8 == lVar7) {
    pvVar12 = (void *)0x0;
  }
  else {
    pvVar12 = (void *)(*plVar11 + (uVar9 % 0x5d) * 0x2c);
  }
  local_70 = plVar11;
  local_68 = pvVar12;
  FUN_015bdd14(&local_70,uVar5);
  pvVar3 = local_68;
  plVar2 = local_70;
  while( true ) {
    if (pvVar3 == pvVar12) {
      return;
    }
    pvVar13 = pvVar3;
    if (plVar11 != plVar2) {
      pvVar13 = (void *)(*plVar11 + 0xffc);
    }
    if (pvVar13 == pvVar12) {
      pvVar13 = pvVar12;
    }
    else {
      __dest = pvVar12;
      do {
        uVar10 = *(undefined8 *)(param_1 + 0x50);
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          memcpy(__dest,param_3,0x2c);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          memcpy(__dest,param_3,0x2c);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        param_3 = (void *)((long)param_3 + 0x2c);
        __dest = (void *)((long)__dest + 0x2c);
        if ((long)param_3 - *param_2 == 0xffc) {
          param_2 = param_2 + 1;
          param_3 = (void *)*param_2;
        }
      } while (pvVar13 != __dest);
    }
    *(long *)(param_1 + 0x48) =
         *(long *)(param_1 + 0x48) + ((long)pvVar13 - (long)pvVar12 >> 2) * 0x2e8ba2e8ba2e8ba3;
    if (plVar11 == plVar2) break;
    plVar11 = plVar11 + 1;
    pvVar12 = (void *)*plVar11;
  }
  return;
}


