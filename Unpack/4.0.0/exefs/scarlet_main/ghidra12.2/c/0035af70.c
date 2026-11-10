/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035af70; name: FUN_0035af70
 */


undefined8 FUN_0035af70(undefined4 param_1,ulong *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong unaff_x22;
  ulong unaff_x24;
  char *pcVar7;
  ulong uVar8;
  undefined4 local_6c;
  undefined1 local_68 [4];
  int local_64;
  
  if (-1 < DAT_044964ec) {
    bVar4 = (param_3 & 1) == 0;
    pcVar7 = &DAT_047ef6f8;
    if (bVar4) {
      pcVar7 = &DAT_044964e0;
    }
    piVar3 = &DAT_044964e4;
    if (bVar4) {
      piVar3 = &DAT_044964e8;
    }
    bVar4 = *pcVar7 != '\0';
    local_64 = *piVar3;
    if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
      uVar6 = 0;
      uVar8 = 1;
      do {
        lVar2 = param_2[1] + uVar6 * 0x20;
        pcVar7 = *(char **)(lVar2 + 8);
        iVar5 = strcmp(pcVar7,"grpc.keepalive_time_ms");
        if (iVar5 == 0) {
          unaff_x24 = unaff_x24 & 0xffffffff00000000 | 0x7fffffff;
          iVar5 = FUN_00343f80(lVar2,0x100000000,unaff_x24);
          if (iVar5 != 0) {
            bVar4 = iVar5 != 0x7fffffff;
          }
        }
        else {
          iVar5 = strcmp(pcVar7,"grpc.keepalive_timeout_ms");
          if (iVar5 == 0) {
            unaff_x22 = unaff_x22 & 0xffffffff00000000 | 0x7fffffff;
            iVar5 = FUN_00343f80(lVar2,0x100000000,unaff_x22);
            if (iVar5 != 0) {
              local_64 = iVar5;
            }
          }
        }
        bVar1 = uVar8 < *param_2;
        uVar6 = uVar8;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (bVar1);
    }
    if (bVar4) {
      local_6c = 4;
      if (DAT_044964ec == 0) {
        iVar5 = nnsocketGetSockOpt(param_1,6,0,local_68,&local_6c);
        DAT_044964ec = -1;
        if (iVar5 == 0) {
          DAT_044964ec = 1;
        }
      }
      if ((0 < DAT_044964ec) && (iVar5 = nnsocketSetSockOpt(param_1,6,0,&local_64,4), iVar5 == 0)) {
        nnsocketGetSockOpt(param_1,6,0,local_68,&local_6c);
      }
    }
  }
  return 0;
}


