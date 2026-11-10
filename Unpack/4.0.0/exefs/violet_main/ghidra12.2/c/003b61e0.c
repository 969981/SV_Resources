/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b61e0; name: FUN_003b61e0
 */


undefined8 FUN_003b61e0(uint *param_1,char *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  char *__s2;
  size_t __n;
  uint uVar8;
  
  if (param_2 == (char *)0x0) {
    FUN_004806c0(0x14,0x14e,0x181,"external/openssl/ssl/ssl_conf.c",0x323);
    return 0;
  }
  __s2 = *(char **)(param_1 + 2);
  if (__s2 == (char *)0x0) {
    uVar8 = *param_1;
    if ((uVar8 & 1) != 0) {
      if (*param_2 != '-') {
        return 0xfffffffe;
      }
      param_2 = param_2 + 1;
      if (*param_2 == '\0') {
        return 0xfffffffe;
      }
    }
  }
  else {
    sVar3 = strlen(param_2);
    __n = *(size_t *)(param_1 + 4);
    if (sVar3 <= __n) {
      return 0xfffffffe;
    }
    uVar8 = *param_1;
    if (((uVar8 & 1) != 0) && (iVar2 = strncmp(param_2,__s2,__n), iVar2 != 0)) {
      return 0xfffffffe;
    }
    if (((uVar8 >> 1 & 1) != 0) && (iVar2 = strncasecmp(param_2,__s2,__n), iVar2 != 0)) {
      return 0xfffffffe;
    }
    param_2 = param_2 + __n;
  }
  puVar4 = (undefined8 *)FUN_003b6420(param_1,param_2);
  if (puVar4 == (undefined8 *)0x0) {
    if ((uVar8 >> 4 & 1) != 0) {
      FUN_004806c0(0x14,0x14e,0x182,"external/openssl/ssl/ssl_conf.c",0x340);
      FUN_00481380(2,&DAT_03c5b564,param_2);
    }
    return 0xfffffffe;
  }
  if (*(short *)((long)puVar4 + 0x1a) == 4) {
    uVar6 = (long)(puVar4 + -0x894091) >> 5;
    if (uVar6 < 0x16) {
      puVar7 = param_1 + 10;
      if (*(long *)puVar7 == 0) {
        return 1;
      }
      uVar8 = *(uint *)(&DAT_03cdc8d0 + uVar6 * 0x10) & 0xf00;
      if (uVar8 != 0) {
        if (uVar8 == 0x200) {
          puVar7 = param_1 + 0x20;
        }
        else {
          if (uVar8 != 0x100) {
            return 1;
          }
          puVar7 = param_1 + 0x1e;
        }
      }
      uVar1 = **(uint **)puVar7;
      uVar8 = uVar1 | (uint)*(undefined8 *)(&DAT_03cdc8c8 + uVar6 * 0x10);
      if ((0x188080U >> (uVar6 & 0x3f) & 1) != 0) {
        uVar8 = uVar1 & ((uint)*(undefined8 *)(&DAT_03cdc8c8 + uVar6 * 0x10) ^ 0xffffffff);
      }
      **(uint **)puVar7 = uVar8;
      return 1;
    }
  }
  else {
    if (param_3 == 0) {
      return 0xfffffffd;
    }
    uVar5 = (*(code *)*puVar4)(param_1,param_3);
    if (0 < (int)uVar5) {
      return 2;
    }
    if ((int)uVar5 == -2) {
      return uVar5;
    }
    if (((byte)*param_1 >> 4 & 1) != 0) {
      FUN_004806c0(0x14,0x14e,0x180,"external/openssl/ssl/ssl_conf.c",0x339);
      FUN_00481380(4,&DAT_03c5b564,param_2,", value=",param_3);
      return 0;
    }
  }
  return 0;
}


