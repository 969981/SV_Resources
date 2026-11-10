/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308260; name: FUN_00308260
 */


void FUN_00308260(long param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  if (4 < *(ulong *)(param_1 + 0xd80)) {
    FUN_00350fd0();
  }
  FUN_003673f0(auStack_40,"GOAWAY received");
  uVar3 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x433,auStack_40,0,0);
  uVar3 = FUN_00351770(uVar3,7,param_2);
  uVar3 = FUN_00351770(uVar3,3,0xe);
  uVar3 = FUN_00351fa0(uVar3,6,param_4);
  *(undefined8 *)(param_1 + 0xd80) = uVar3;
  if ((param_2 == 0xb) && (*(char *)(param_1 + 0xc48) != '\0')) {
    uStack_58 = param_4[1];
    local_60 = *param_4;
    uStack_48 = param_4[3];
    uStack_50 = param_4[2];
    iVar2 = FUN_00368200(&local_60,"too_many_pings");
    if (iVar2 == 0) {
      dVar4 = (double)*(long *)(param_1 + 0x1340);
      lVar1 = 0x7fffffffffffffff;
      if (*(long *)(param_1 + 0x1340) < 0x40000000) {
        lVar1 = (long)(dVar4 + dVar4);
      }
      *(long *)(param_1 + 0x1340) = lVar1;
    }
  }
  FUN_003752d8(param_1 + 0x288,3,"got_goaway");
  return;
}


