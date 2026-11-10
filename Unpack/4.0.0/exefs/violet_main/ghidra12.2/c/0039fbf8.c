/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039fbf8; name: FUN_0039fbf8
 */


void FUN_0039fbf8(undefined1 (*param_1) [16],long param_2,long *param_3)

{
  long lVar1;
  tm *ptVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  tm tStack_68;
  long local_28;
  
  *(undefined8 *)*param_1 = 0x7b2;
  (*param_1)[0xc] = 0;
  *(undefined4 *)(*param_1 + 8) = 0x101;
  *(undefined4 *)param_1[1] = 0;
  param_1[1][4] = 0;
  *(undefined **)(param_1[1] + 8) = &DAT_03c407cd;
  lVar1 = std::chrono::system_clock::from_time_t(0);
  lVar1 = SUB168(SEXT816(lVar1) * SEXT816(-0x431bde82d7b634db),8);
  lVar1 = ((lVar1 >> 0x12) - (lVar1 >> 0x3f)) + *param_3;
  local_28 = lVar1;
  if (*(char *)(param_2 + 8) == '\0') {
    ptVar2 = gmtime_r(&local_28,&tStack_68);
  }
  else {
    ptVar2 = localtime_r(&local_28,&tStack_68);
  }
  if (ptVar2 == (tm *)0x0) {
    if (lVar1 < 0) {
      auVar4._8_8_ = 0x101;
      auVar4._0_8_ = 0x8000000000000000;
    }
    else {
      auVar4 = FUN_003988b0(0x7fffffffffffffff,0xc,0x1f,0,0x17,0x3b,0x3b);
    }
    *param_1 = auVar4;
  }
  else {
    auVar4 = FUN_00398570((long)ptVar2->tm_year + 0x76c,(long)ptVar2->tm_mon + 1,
                          (long)ptVar2->tm_mday,(long)ptVar2->tm_hour,(long)ptVar2->tm_min,
                          (long)ptVar2->tm_sec);
    *param_1 = auVar4;
    *(int *)param_1[1] = (int)ptVar2->tm_gmtoff;
    if (*(char *)(param_2 + 8) == '\0') {
      pcVar3 = "UTC";
    }
    else {
      pcVar3 = ptVar2->tm_zone;
    }
    *(char **)(param_1[1] + 8) = pcVar3;
    param_1[1][4] = 0 < ptVar2->tm_isdst;
  }
  return;
}


