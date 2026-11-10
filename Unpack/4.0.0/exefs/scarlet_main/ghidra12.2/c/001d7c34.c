/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d7c34; name: FUN_001d7c34
 */


long FUN_001d7c34(long *param_1,void *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x1e8);
  lVar3 = FUN_001d7a50();
  if ((int)lVar3 != 0) {
    return lVar3;
  }
  param_1[0xb7] = param_1[0x4e];
  param_1[0xb6] = param_1[0x50];
  param_1[0x4e] = (long)FUN_001d7ec4;
  param_1[0x50] = (long)&LAB_001d81e0;
  plVar1 = param_1 + 0xaa;
  if (*(int *)(*param_1 + 0x19c) == 2) {
    *(undefined4 *)(lVar8 + 0x218) = 1;
    uVar4 = FUN_001f38f4(param_1[0xaa],param_1 + 0xab,param_1[0xb5],0);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001ed704();
      pcVar6 = "nghttp2_session_upgrade() failed: %s(%d)";
      goto LAB_001d7db0;
    }
    iVar2 = FUN_001f3790(*plVar1,*(undefined4 *)(lVar8 + 0x218),lVar7);
    if (iVar2 != 0) {
      FUN_001db818(lVar7,"http/2: failed to set user_data for stream %d!\n",
                   *(undefined4 *)(lVar8 + 0x218));
    }
  }
  else {
    param_1[0xbe] = 0x6400000003;
    param_1[0xbf] = 0x4000000000000004;
    *(undefined4 *)(param_1 + 0xc0) = 2;
    *(uint *)((long)param_1 + 0x604) = (uint)(*(long *)(*(long *)(*param_1 + 0xd8) + 0x70) != 0);
    param_1[0xc1] = 3;
    *(undefined4 *)(lVar8 + 0x218) = 0xffffffff;
    uVar4 = FUN_001fa208(param_1[0xaa],0,param_1 + 0xbe,param_1[0xc1]);
    if ((int)uVar4 != 0) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001ed704();
      pcVar6 = "nghttp2_submit_settings() failed: %s(%d)";
      goto LAB_001d7db0;
    }
  }
  uVar4 = FUN_001fa210(*plVar1,0,0,0x40000000);
  if ((int)uVar4 == 0) {
    if (0x8000 < param_3) {
      FUN_001db9c8(lVar7,
                   "connection buffer size is too small to store data following HTTP Upgrade response header: buflen=%zu, datalen=%zu"
                   ,0x8000,param_3);
      return 0x10;
    }
    FUN_001db818(*param_1,
                 "Copying HTTP/2 data in stream buffer to connection buffer after upgrade: len=%zu\n"
                 ,param_3);
    if (param_3 != 0) {
      memcpy((void *)param_1[0xb8],param_2,param_3);
    }
    param_1[0xb9] = param_3;
    uVar4 = FUN_001f12c0(param_1[0xaa],param_1[0xb8],param_3);
    iVar2 = FUN_001eda84();
    if (iVar2 == 0) {
      if (uVar4 == param_3) {
        param_1[0xb9] = 0;
        param_1[0xba] = 0;
      }
      else {
        param_1[0xba] = param_1[0xba] + uVar4;
      }
      uVar4 = FUN_001d88cc(lVar7,*plVar1);
      if ((int)uVar4 == 0) {
        iVar2 = FUN_001d8954(plVar1);
        return (ulong)(iVar2 != 0) << 4;
      }
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = FUN_001ed704();
      pcVar6 = "nghttp2_session_send() failed: %s(%d)";
    }
    else {
      uVar5 = FUN_001ed704(uVar4 & 0xffffffff);
      pcVar6 = "nghttp2_session_mem_recv() failed: %s(%d)";
      uVar4 = uVar4 & 0xffffffff;
    }
  }
  else {
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = FUN_001ed704();
    pcVar6 = "nghttp2_session_set_local_window_size() failed: %s(%d)";
  }
LAB_001d7db0:
  FUN_001db9c8(lVar7,pcVar6,uVar5,uVar4);
  return 0x10;
}


