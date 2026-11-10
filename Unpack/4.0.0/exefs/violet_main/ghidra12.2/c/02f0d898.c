/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0d898; name: FUN_02f0d898
 */


void FUN_02f0d898(long param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  code *local_a0;
  uint *local_98;
  uint local_90 [2];
  uint *local_88;
  char *pcStack_80;
  int *local_78;
  code *local_58;
  int local_38;
  char local_34 [4];
  
  plVar7 = (long *)(param_3 + (long)(int)param_2 * 0x68);
  local_98 = local_90;
  local_a0 = FUN_02f0da94;
  puVar8 = (uint *)(*(long *)(param_1 + 0x18) + ((long)((ulong)param_2 << 0x20) >> 0x1d));
  pcStack_80 = local_34;
  local_34[0] = '\0';
  if (*plVar7 != param_4) {
    puVar8 = puVar8 + 1;
  }
  local_78 = &local_38;
  local_58 = FUN_02f0db10;
  local_90[0] = param_2;
  local_88 = puVar8;
  FUN_031c4cb4(param_1,param_4,&local_a0);
  puVar6 = local_98;
  if (local_98 != (uint *)0x0) {
    if (local_58 == (code *)0x1) {
      puVar4 = local_98 + -2;
      do {
        lVar5 = *(long *)puVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar3) {
          *(long *)puVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 != 0) goto LAB_02f0d994;
    }
    else if (local_58 != (code *)0x0) {
      (*local_58)(local_98,0);
      goto LAB_02f0d994;
    }
    puVar4 = puVar6 + -4;
    (**(code **)puVar4)(puVar6,0);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(ulong)puVar4 & 0xfffffffffffffff0,0);
  }
LAB_02f0d994:
  if (local_34[0] == '\0') {
    lVar5 = *(long *)(param_1 + 0x18);
    puVar6 = (uint *)(lVar5 + (long)local_38 * 8);
    if (*(long *)(param_3 + (long)local_38 * 0x68) != param_4) {
      puVar6 = puVar6 + 1;
    }
    while (uVar1 = *puVar6, uVar1 != param_2) {
      puVar6 = (uint *)(lVar5 + (long)(int)uVar1 * 8);
      if (*(long *)(param_3 + (long)(int)uVar1 * 0x68) != param_4) {
        puVar6 = puVar6 + 1;
      }
    }
    puVar8 = (uint *)(lVar5 + (long)(int)param_2 * 8);
    if (*plVar7 != param_4) {
      puVar8 = puVar8 + 1;
    }
    *puVar6 = *puVar8;
  }
  *puVar8 = 0x7fffffff;
  return;
}


