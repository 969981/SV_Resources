/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d7a50; name: FUN_001d7a50
 */


undefined8 FUN_001d7a50(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 local_38;
  
  lVar6 = *(long *)(*param_1 + 0x1e8);
  *(undefined4 *)(lVar6 + 0x218) = 0xffffffff;
  if (*(long *)(lVar6 + 0x220) == 0) {
    lVar3 = FUN_001d4724();
    *(long *)(lVar6 + 0x220) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
  }
  ppuVar5 = (undefined **)param_1[0x84];
  if (ppuVar5 == &PTR_s_HTTPS_04484888) {
    return 0;
  }
  if (ppuVar5 == &PTR_DAT_04484910) {
    return 0;
  }
  ppuVar1 = &PTR_DAT_04484910;
  if ((*(uint *)((long)ppuVar5 + 0x84) & 1) != 0) {
    ppuVar1 = &PTR_s_HTTPS_04484888;
  }
  param_1[0x84] = (long)ppuVar1;
  if (param_1[0xaa] != 0) {
LAB_001d7ad0:
    FUN_001db818(*param_1,"Using HTTP2, server supports multi-use\n");
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x4000000;
    *(undefined4 *)(param_1 + 0x46) = 0x14;
    param_1[0xbc] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 0;
    *(undefined4 *)param_1[0xcc] = 2;
    FUN_001db818(*param_1,"Connection state changed (HTTP/2 confirmed)\n");
    *(undefined1 *)(*(long *)(*param_1 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  lVar3 = FUN_001ec2f8(0x8000);
  param_1[0xb8] = lVar3;
  if (lVar3 != 0) {
    iVar2 = FUN_001ed4a0(&local_38);
    if (iVar2 == 0) {
      FUN_001ed4dc(local_38,FUN_001d8db8);
      FUN_001ed4e4(local_38,FUN_001d8e2c);
      FUN_001ed4ec(local_38,FUN_001d9200);
      FUN_001ed4f4(local_38,FUN_001d930c);
      FUN_001ed4fc(local_38,FUN_001d93d0);
      FUN_001ed504(local_38,&LAB_001d9434);
      FUN_001ed50c(local_38,FUN_001d979c);
      iVar2 = FUN_001edb4c(param_1 + 0xaa,local_38,param_1);
      thunk_FUN_001ec308(local_38);
      if (iVar2 == 0) goto LAB_001d7ad0;
      lVar3 = *param_1;
      pcVar4 = "Couldn\'t initialize nghttp2!";
    }
    else {
      lVar3 = *param_1;
      pcVar4 = "Couldn\'t initialize nghttp2 callbacks!";
    }
    FUN_001db9c8(lVar3,pcVar4);
  }
  FUN_001d4730((long *)(lVar6 + 0x220));
  return 0x1b;
}


