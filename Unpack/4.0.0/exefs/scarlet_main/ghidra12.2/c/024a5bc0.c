/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a5bc0; name: FUN_024a5bc0
 */


void FUN_024a5bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long local_208;
  long lStack_200;
  undefined1 *local_1f8;
  long lStack_1f0;
  undefined8 local_1e8;
  long lStack_1e0;
  undefined1 *local_1d8;
  long lStack_1d0;
  undefined1 local_1c8 [8];
  undefined1 auStack_1c0 [152];
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  pthread_mutex_t *local_110;
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  undefined1 *local_70;
  long lStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined1 *local_50;
  long lStack_48;
  undefined8 local_28;
  
  local_90 = (long *)0x0;
  local_120 = local_1c8;
  local_98 = (long *)0x0;
  local_110 = *(pthread_mutex_t **)(param_1 + 0x18);
  local_128 = 10;
  local_118 = 0;
  uStack_88 = param_3;
  local_28 = param_2;
  pthread_mutex_lock(local_110);
  if ((*(long *)(param_1 + 8) != 0) && (*(int *)(*(long *)(param_1 + 8) + 8) == 1)) {
    FUN_024a5f18(param_1,local_1c8,0,1);
  }
  FUN_024a5f68(&local_98,param_1);
  pthread_mutex_unlock(local_110);
  if (local_120 != (undefined1 *)0x0) {
    FUN_024a5ff8(local_1c8,&local_60);
  }
  plVar5 = local_98;
  puStack_b8 = &local_28;
  puStack_c8 = auStack_1c0;
  local_1c8[0] = 0;
  local_c0 = 0;
  local_b0 = &uStack_88;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d0 = 10;
  lVar6 = *local_98;
  local_1e8 = *(undefined8 *)(lVar6 + 8);
  lStack_1e0 = lVar6;
  local_1d8 = local_1c8;
  lStack_1d0 = lVar6;
  FUN_024a6130(&local_1e8);
  local_208 = *plVar5;
  lStack_200 = local_208;
  local_1f8 = local_1c8;
  lStack_1f0 = local_208;
  FUN_024a6130(&local_208);
  local_60 = local_1e8;
  lStack_58 = lStack_1e0;
  local_50 = local_1d8;
  lStack_48 = lStack_1d0;
  local_80 = local_208;
  lStack_78 = lStack_200;
  local_70 = local_1f8;
  lStack_68 = lStack_1f0;
  FUN_024a62ac(&local_60,&local_80);
  if ((uint)local_a8 < local_a8._4_4_) {
    FUN_024a6318(param_1,lVar6);
  }
  FUN_024a6418(local_1c8);
  plVar5 = local_90;
  if (local_90 != (long *)0x0) {
    plVar1 = local_90 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      piVar7 = (int *)((long)local_90 + 0xc);
      (**(code **)(*local_90 + 0x10))(local_90);
      do {
        iVar4 = *piVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  return;
}


