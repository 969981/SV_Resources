/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308360; name: FUN_00308360
 */


void FUN_00308360(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined1 auStack_50 [32];
  
  puVar3 = (ulong *)*param_3;
  *param_3 = 0;
  if (puVar3 == (ulong *)0x0) {
    if (4 < param_4) {
      FUN_00350fd0(param_4);
      return;
    }
  }
  else {
    *puVar3 = *puVar3 - 0x10000;
    if (PTR_DAT_047ccac0[0x10] != '\0') {
      FUN_00352270(param_4);
    }
    if (param_4 != 0) {
      uVar1 = puVar3[3];
      if (uVar1 == 0) {
        FUN_003673f0(auStack_50,"Error in HTTP transport completing operation");
        uVar1 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x4bb,auStack_50,0,0);
        puVar3[3] = uVar1;
        FUN_00367770(auStack_50,*(undefined8 *)(param_1 + 0x18));
        uVar1 = FUN_00351fa0(uVar1,4,auStack_50);
        puVar3[3] = uVar1;
      }
      uVar1 = FUN_00352130(uVar1,param_4);
      puVar3[3] = uVar1;
    }
    if (*puVar3 >> 0x10 == 0) {
      if (((*puVar3 & 1) == 0) || (*(int *)(param_1 + 0x38) == 0)) {
        FUN_0035351c(auStack_50,puVar3,puVar3[3]);
      }
      else {
        *puVar3 = 0;
        if (*(long *)(param_1 + 0x11d0) == 0) {
          puVar2 = (undefined8 *)(param_1 + 0x11d0);
        }
        else {
          puVar2 = *(undefined8 **)(param_1 + 0x11d8);
        }
        *puVar2 = puVar3;
        *(ulong **)(param_1 + 0x11d8) = puVar3;
      }
    }
  }
  return;
}


