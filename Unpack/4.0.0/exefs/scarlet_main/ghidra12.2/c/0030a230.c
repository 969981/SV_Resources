/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0030a230; name: FUN_0030a230
 */


/* WARNING: Removing unreachable block (ram,0x0030a2b0) */
/* WARNING: Removing unreachable block (ram,0x0030a2bc) */

undefined8 FUN_0030a230(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_58 [32];
  ulong local_38 [3];
  
  uVar3 = *(ulong *)(param_2 + 0x1b8);
  if (uVar3 == 0) {
    uVar2 = *(ulong *)(param_2 + 0x1c0);
    if (uVar2 == 0) {
      if (param_1 == 0) {
        return 0;
      }
      lVar4 = 1;
      local_38[0] = param_1;
      goto LAB_0030a2d4;
    }
    lVar4 = 0;
LAB_0030a274:
    local_38[lVar4] = uVar2;
    lVar4 = lVar4 + 1;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x1c0);
    lVar4 = 1;
    local_38[0] = uVar3;
    if ((uVar2 != 0) && (uVar3 != uVar2)) goto LAB_0030a274;
  }
  if (((param_1 != 0) && (local_38[0] != param_1)) && ((lVar4 == 1 || (local_38[1] != param_1)))) {
    local_38[lVar4] = param_1;
    lVar4 = lVar4 + 1;
  }
LAB_0030a2d4:
  FUN_003673f0(auStack_58,param_3);
  uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x871,auStack_58,local_38,lVar4);
  if (4 < param_1) {
    FUN_00350fd0(param_1);
  }
  return uVar1;
}


