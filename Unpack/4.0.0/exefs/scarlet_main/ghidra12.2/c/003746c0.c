/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003746c0; name: FUN_003746c0
 */


void FUN_003746c0(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_30 [32];
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 == 0) {
    FUN_003673f0(auStack_30,"Metadata keys cannot be zero length");
    uVar2 = 0x44;
  }
  else if (uVar1 >> 0x20 == 0) {
    pcVar3 = (char *)param_1[2];
    if (*param_1 == 0) {
      pcVar3 = (char *)((long)param_1 + 9);
    }
    if (*pcVar3 != ':') {
      FUN_003747a0(param_1,&DAT_03cd7800,"Illegal header key");
      return;
    }
    FUN_003673f0(auStack_30,"Metadata keys cannot start with :");
    uVar2 = 0x4c;
  }
  else {
    FUN_003673f0(auStack_30,"Metadata keys cannot be larger than UINT32_MAX");
    uVar2 = 0x48;
  }
  FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/validate_metadata.cc",uVar2,
               auStack_30,0,0);
  return;
}


