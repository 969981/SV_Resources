/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019dba7c; name: FUN_019dba7c
 */


void FUN_019dba7c(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  char local_48 [4];
  int local_44;
  int iStack_40;
  
  FUN_01e7b310(local_48);
  if (local_48[0] != '\0') {
    if (local_44 != 0) {
      *(int *)(param_1 + 4) = local_44;
      *param_1 = 1;
      param_1[8] = 0;
      param_1[0x20] = 0;
      param_1[0x30] = 0;
      param_1[0x3c] = 0;
      goto LAB_019dbacc;
    }
    local_48[0] = '\0';
  }
  FUN_01e94464(local_48,param_2);
  if (local_48[0] != '\0') {
    if (iStack_40 != 0) {
      *(ulong *)(param_1 + 0x48) = CONCAT44(iStack_40,local_44);
      *param_1 = 0;
      param_1[8] = 0;
      param_1[0x20] = 0;
      param_1[0x30] = 0;
      param_1[0x3c] = 0;
      param_1[0x44] = 1;
      return;
    }
    local_48[0] = '\0';
  }
  FUN_01e94688(local_48,param_2);
  if (local_48[0] != '\0') {
LAB_019dbb38:
    *param_1 = 0;
    param_1[8] = 0;
    FUN_00cbd7c0(param_1 + 0xc,(ulong)local_48 | 4);
    param_1[8] = 1;
    param_1[0x20] = 0;
    param_1[0x30] = 0;
LAB_019dbb5c:
    param_1[0x3c] = 0;
    param_1[0x44] = 0;
    return;
  }
  FUN_01e948c8(local_48,param_2);
  if (local_48[0] != '\0') {
    if (local_44 != 0) goto LAB_019dbb38;
    local_48[0] = '\0';
  }
  FUN_01e94b08(local_48,param_2);
  if (local_48[0] != '\0') {
    uVar1 = nn::err::ErrorCode::IsValid();
    if ((uVar1 & 1) != 0) {
      *param_1 = 0;
      param_1[8] = 0;
      param_1[0x20] = 0;
      param_1[0x30] = 1;
      *(ulong *)(param_1 + 0x34) = CONCAT44(iStack_40,local_44);
      goto LAB_019dbb5c;
    }
    if (local_48[0] != '\0') {
      local_48[0] = '\0';
    }
  }
  if (*(long **)(param_2 + 8) == (long *)0x0) {
LAB_019dbcc0:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xf02e379a0ca41141;
    param_1[0x20] = 1;
    param_1[0x3c] = 1;
    uVar3 = 0xb;
    param_1[8] = 0;
    param_1[0x30] = 0;
  }
  else {
    pcVar2 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar6 = 0;
    pcVar4 = "gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
          [lVar6 + 0x27] == 'T') {
        if (lVar6 == 0x4b) break;
        if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
            [lVar6 + 0x28] == ' ') {
          if (lVar6 == 0x4a) break;
          if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
              [lVar6 + 0x29] == '=') {
            if (lVar6 == 0x49) break;
            if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
                [lVar6 + 0x2a] == ' ') {
              if (lVar6 == 0x4c) {
                pcVar4 = 
                "gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]";
              }
              else {
                pcVar4 = "static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
                         + lVar6 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x4c);
    cVar5 = *pcVar2;
    if (cVar5 != '\0') {
      do {
        pcVar2 = pcVar2 + 1;
        if (*pcVar4 != cVar5) break;
        cVar5 = *pcVar2;
        pcVar4 = pcVar4 + 1;
      } while (cVar5 != '\0');
    }
    if (*pcVar4 != cVar5) goto LAB_019dbcc0;
    if (*(long **)(param_2 + 8) == (long *)0x0) {
      pcVar4 = (char *)FUN_01e92280("void>::n() [T = void]");
    }
    else {
      pcVar4 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    }
    lVar6 = 0;
    pcVar2 = "gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
          [lVar6 + 0x27] == 'T') {
        if (lVar6 == 0x4b) break;
        if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
            [lVar6 + 0x28] == ' ') {
          if (lVar6 == 0x4a) break;
          if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
              [lVar6 + 0x29] == '=') {
            if (lVar6 == 0x49) break;
            if ("static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
                [lVar6 + 0x2a] == ' ') {
              if (lVar6 == 0x4c) {
                pcVar2 = 
                "gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]";
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<gflnet::request::error::Timeout>::n() [T = gflnet::request::error::Timeout]"
                         + lVar6 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x4c);
    cVar5 = *pcVar4;
    if (cVar5 != '\0') {
      do {
        pcVar4 = pcVar4 + 1;
        if (*pcVar2 != cVar5) break;
        cVar5 = *pcVar4;
        pcVar2 = pcVar2 + 1;
      } while (cVar5 != '\0');
    }
    if (*pcVar2 != cVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xf031379a0ca64718;
    param_1[8] = 0;
    param_1[0x20] = 1;
    param_1[0x30] = 0;
    param_1[0x3c] = 1;
    uVar3 = 9;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar3;
LAB_019dbacc:
  param_1[0x44] = 0;
  return;
}


