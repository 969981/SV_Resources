/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003602a0; name: FUN_003602a0
 */


undefined8 FUN_003602a0(long param_1,int param_2,long param_3,ulong param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [128];
  undefined4 local_38 [2];
  ulong local_28;
  
  local_28 = 0;
  if (param_2 < 0) {
LAB_003604d4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (((((param_4 & 1) == 0) || (iVar1 = FUN_00362300(param_3), iVar1 != 0)) ||
      (local_28 = FUN_0035ac70(param_2,1), local_28 == 0)) &&
     ((local_28 = FUN_0035a9f0(param_2,1), local_28 == 0 &&
      (local_28 = FUN_0035aab0(param_2,1), local_28 == 0)))) {
    iVar1 = FUN_00362300(param_3);
    if (iVar1 == 0) {
      local_28 = FUN_0035ae60(param_2,1);
      if (((local_28 != 0) || (local_28 = FUN_0035ab60(param_2,1), local_28 != 0)) ||
         (local_28 = FUN_0035af70(param_2,*(undefined8 *)(param_1 + 0x90),0), local_28 != 0))
      goto LAB_003603b8;
      local_28 = 0;
    }
    local_28 = FUN_0035aaa0(param_2);
    if ((local_28 == 0) &&
       (local_28 = FUN_0035b150(param_2,*(undefined8 *)(param_1 + 0x90)), local_28 == 0)) {
      iVar1 = nnsocketBind(param_2,param_3,*(undefined4 *)(param_3 + 0x80));
      if (iVar1 < 0) {
        piVar3 = __errno_location();
        iVar1 = *piVar3;
        pcVar6 = "bind";
        uVar5 = 0xc0;
      }
      else {
        FUN_0038dcd0(&DAT_047ef744,&LAB_003604e0);
        uVar2 = 0x80;
        if (DAT_047ef740 == '\0') {
          uVar2 = 0;
        }
        iVar1 = nnsocketListen(param_2,uVar2);
        if (iVar1 < 0) {
          piVar3 = __errno_location();
          iVar1 = *piVar3;
          pcVar6 = "listen";
          uVar5 = 0xc5;
        }
        else {
          local_38[0] = 0x80;
          iVar1 = nnsocketGetSockName(param_2,auStack_b8,local_38);
          if (-1 < iVar1) {
            uVar2 = FUN_0035a980(auStack_b8);
            *param_5 = uVar2;
            return 0;
          }
          piVar3 = __errno_location();
          iVar1 = *piVar3;
          pcVar6 = "getsockname";
          uVar5 = 0xcd;
        }
      }
      uVar4 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                           ,uVar5,iVar1,pcVar6);
      if (uVar4 == 0) goto LAB_003604d4;
      local_28 = uVar4;
    }
  }
LAB_003603b8:
  nnsocketClose(param_2);
  FUN_003673f0(auStack_d8,"Unable to configure socket");
  uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                       ,0xdb,auStack_d8,&local_28,1);
  uVar5 = FUN_00351770(uVar5,0xb,param_2);
  if (4 < local_28) {
    FUN_00350fd0();
  }
  return uVar5;
}


