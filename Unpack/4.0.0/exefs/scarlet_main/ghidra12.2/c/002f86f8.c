/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f86f8; name: FUN_002f86f8
 */


void FUN_002f86f8(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [32];
  
  if (param_2 == 0) {
    FUN_003673f0(auStack_40,"Handshaker shutdown");
    param_2 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc"
                           ,0xb5,auStack_40,0,0);
    FUN_00352270(param_2);
    cVar1 = *(char *)(param_1 + 0x40);
  }
  else {
    FUN_00352270(param_2);
    cVar1 = *(char *)(param_1 + 0x40);
  }
  if (cVar1 == '\0') {
    FUN_0038c050(*(undefined8 *)(param_1 + 0x10));
    uVar4 = **(undefined8 **)(param_1 + 0x58);
    uVar2 = param_2;
    if (4 < param_2) {
      uVar2 = FUN_00350fb0(param_2,param_2);
    }
    FUN_00350f30(uVar4,uVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x48) = *puVar3;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0x50) = puVar3[2];
    puVar3[2] = 0;
    FUN_00343d90(puVar3[1]);
    *(undefined8 *)(*(long *)(param_1 + 0x58) + 8) = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  FUN_0035351c(auStack_40,*(undefined8 *)(param_1 + 0x60),param_2);
  return;
}


