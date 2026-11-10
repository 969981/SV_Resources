/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080cd64; name: FUN_0080cd64
 */


void FUN_0080cd64(undefined8 param_1,long param_2,undefined8 param_3,byte param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0x58) = param_3;
  *(byte *)(param_2 + 0xb8) = param_4 & 1;
  uVar2 = *param_5;
  lVar6 = param_5[1];
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0x98) = uVar2;
  *(long *)(param_2 + 0xa0) = lVar6;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_007cd5e0(*(undefined8 *)PTR_DAT_047d0a08,0);
  thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  FUN_0080c2d4();
  local_38[0] = 0;
  FUN_007935cc(local_38);
  *(char **)(param_2 + 0x40) = "AttachMeshJob::GetGameSessionFixedData";
  puVar5 = PTR_FUN_047d17a0;
  *(ulong *)(param_2 + 0xe8) = local_38[0];
  *(undefined **)(param_2 + 0x30) = puVar5;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


