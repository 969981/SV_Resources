/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003349b8; name: FUN_003349b8
 */


void FUN_003349b8(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *local_50;
  undefined1 auStack_48 [32];
  ulong local_28;
  
  local_28 = param_2;
  if (*(long *)(param_1 + 0x48) == 0) {
    if (4 < param_2) {
      FUN_00350fd0(param_2);
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x68) == 0) {
      FUN_003673f0(auStack_48,"Resolver transient failure");
      uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                           ,0xd6,auStack_48,&local_28,1);
      plVar3 = *(long **)(param_1 + 0x40);
      uVar2 = uVar1;
      if (4 < uVar1) {
        uVar2 = FUN_00350fb0(uVar1,uVar1);
      }
      (**(code **)(*plVar3 + 0x20))(plVar3,uVar2);
      plVar3 = *(long **)(param_1 + 0x28);
      local_50 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
      if (local_50 != (long *)0x0) {
        *local_50 = (long)(PTR_DAT_047cc560 + 0x10);
        local_50[1] = uVar1;
      }
                    /* try { // try from 00334a6c to 00334a7b has its CatchHandler @ 00334ae8 */
      (**(code **)(*plVar3 + 0x18))(plVar3,3,&local_50);
      plVar3 = local_50;
      local_50 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)*plVar3)(plVar3);
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
    }
    if (4 < local_28) {
      FUN_00350fd0();
    }
  }
  return;
}


