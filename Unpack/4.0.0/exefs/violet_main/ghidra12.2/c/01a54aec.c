/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a54aec; name: FUN_01a54aec
 */


void FUN_01a54aec(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_130;
  ulong local_128;
  long local_120;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 local_72;
  undefined6 uStack_70;
  long *local_68 [4];
  int local_48 [2];
  
  FUN_01267a34(local_68,param_3,param_4);
  if (local_68[0] != (long *)0x0) {
    lVar5 = *local_68[0];
    lVar3 = local_68[0][2];
    lVar4 = lVar3 + 1;
    bVar1 = *(byte *)(lVar5 + lVar3);
    local_68[0][2] = lVar4;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar5 + lVar4);
        lVar4 = lVar3 + 2;
        local_68[0][2] = lVar4;
      }
      switch(bVar1) {
      case 1:
        memset(&local_130,0,0x8e);
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if ((cVar2 == -0x47) && (FUN_0289b594(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_019ceb70(param_1,param_2,&local_130);
        }
        break;
      case 2:
        local_48[0] = (uint)local_48[0]._1_3_ << 8;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289b63c(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            local_130 = *param_2;
            local_128 = CONCAT71(local_128._1_7_,(undefined1)local_48[0]);
            FUN_0289b700(param_1 + 0x238,&local_130);
          }
        }
        break;
      case 3:
        local_128 = local_128 & 0xffffffffffff0000;
        local_130 = 0;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if ((cVar2 == -0x47) && (FUN_019f49e8(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_01a81e94(param_1,param_2,&local_130);
        }
        break;
      case 4:
        local_48[0] = (uint)local_48[0]._1_3_ << 8;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289b754(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            local_130 = *param_2;
            local_128 = CONCAT71(local_128._1_7_,(undefined1)local_48[0]);
            local_120 = local_130;
            FUN_013fd4f0(param_1 + 0x2a8,&local_130);
          }
        }
        break;
      case 5:
        local_48[0] = (uint)local_48[0]._1_3_ << 8;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289b818(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            local_130 = *param_2;
            local_128 = CONCAT71(local_128._1_7_,(undefined1)local_48[0]);
            FUN_0289b8dc(param_1 + 0x2e0,&local_130);
          }
        }
        break;
      case 6:
        memset(&local_130,0,0x98);
        local_98 = 0xfd;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_72 = 0;
        uStack_70 = 0;
        cVar2 = *(char *)(*local_68[0] + local_68[0][2]);
        local_68[0][2] = local_68[0][2] + 1;
        if ((cVar2 == -0x47) && (FUN_0289b930(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_0289b9c4(param_1,&local_130);
        }
        break;
      case 7:
        memset(&local_130,0,0x98);
        local_98 = 0xfd;
        cVar2 = *(char *)(*local_68[0] + local_68[0][2]);
        local_68[0][2] = local_68[0][2] + 1;
        if ((cVar2 == -0x47) && (FUN_0289ba70(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_019b566c(param_1,&local_130);
        }
        break;
      case 8:
        local_48[0] = (uint)local_48[0]._1_3_ << 8;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289bb18(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            FUN_013fc644(param_1,param_2,local_48);
          }
        }
        break;
      case 9:
        local_130 = CONCAT62(local_130._2_6_,0xfd00);
        local_128 = 0;
        cVar2 = *(char *)(*local_68[0] + lVar4);
        local_68[0][2] = lVar4 + 1;
        if ((cVar2 == -0x47) && (FUN_0192ecb4(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_019b65c8(param_1,&local_130);
        }
        break;
      case 10:
        local_130 = (ulong)local_130._1_7_ << 8;
        local_128 = 0;
        cVar2 = *(char *)(*local_68[0] + lVar4);
        local_68[0][2] = lVar4 + 1;
        if ((cVar2 == -0x47) && (FUN_0289bbdc(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_01a45254(param_1,param_2,&local_130,0);
        }
        break;
      case 0xb:
        local_48[0] = (uint)local_48[0]._1_3_ << 8;
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289bc70(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            FUN_0289bd34(param_1,local_48);
          }
        }
        break;
      case 0xc:
        local_130 = (ulong)local_130._1_7_ << 8;
        local_128 = 0;
        cVar2 = *(char *)(*local_68[0] + lVar4);
        local_68[0][2] = lVar4 + 1;
        if ((cVar2 == -0x47) && (FUN_0289bfd4(local_48,&local_130,local_68[0]), local_48[0] == 0)) {
          FUN_0289c068(param_1,&local_130);
        }
        break;
      case 0xd:
        local_48[0] = CONCAT31(local_48[0]._1_3_,5);
        cVar2 = *(char *)(lVar5 + lVar4);
        local_68[0][2] = lVar4 + 1;
        if (cVar2 == -0x47) {
          FUN_0289c0e8(&local_130,local_48,local_68[0]);
          if ((int)local_130 == 0) {
            FUN_0289c1ac(param_1,local_48);
          }
        }
      }
    }
  }
  FUN_01267b4c(local_68);
  return;
}


