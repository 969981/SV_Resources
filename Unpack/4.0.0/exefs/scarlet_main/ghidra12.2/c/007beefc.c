/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007beefc; name: FUN_007beefc
 */


void FUN_007beefc(undefined4 *param_1,long param_2,long param_3)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  ushort uVar5;
  int local_70 [4];
  undefined1 auStack_60 [24];
  short local_48;
  
  lVar4 = *(long *)(param_2 + 0x58);
  FUN_0078a1c0(auStack_60,lVar4 + 0x1238);
  if (*(short *)(param_3 + 0x12) == 0) {
    uVar3 = FUN_00796d04(param_2 + 8);
    *(undefined2 *)(param_3 + 0x12) = uVar3;
  }
  *(undefined2 *)(param_3 + 0xe) = 1;
  FUN_00796d24(param_3);
  local_70[0] = 0;
  *param_1 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_70);
  if (*(char *)(lVar4 + 0x1190) == '\0') {
    sVar1 = *(short *)(lVar4 + 0x12c4);
    sVar2 = *(short *)(lVar4 + 0x12c6) - sVar1;
    if (sVar2 != -1) {
      uVar5 = 0;
      while( true ) {
        local_48 = sVar1 + uVar5;
        FUN_007bf154(local_70,param_2,param_3,auStack_60);
        if (local_70[0] != 0) {
          FUN_018ff39c(param_1,local_70);
        }
        uVar5 = uVar5 + 1;
        if ((ushort)(sVar2 + 1U) <= uVar5) break;
        sVar1 = *(short *)(lVar4 + 0x12c4);
      }
    }
  }
  else {
    local_48 = -0x63c0;
    FUN_007bf154(local_70,param_2,param_3,auStack_60);
    FUN_018ff39c(param_1,local_70);
  }
  FUN_0284e3d4(auStack_60);
  return;
}


