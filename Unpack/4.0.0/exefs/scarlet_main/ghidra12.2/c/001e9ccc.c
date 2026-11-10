/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e9ccc; name: FUN_001e9ccc
 */


undefined8
FUN_001e9ccc(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6,undefined8 *param_7,size_t *param_8,code *param_9
            ,code *param_10)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  size_t sVar8;
  char *pcVar9;
  undefined8 local_1a8;
  undefined8 local_1a0;
  char local_198 [68];
  undefined1 auStack_154 [68];
  undefined1 auStack_110 [68];
  char acStack_cc [68];
  undefined1 auStack_88 [40];
  
  local_1a8 = 0;
  local_1a0 = 0;
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
  }
  if (param_6[1] == 0) {
    uVar5 = FUN_001db2cc(param_1,acStack_cc,0x21);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    sVar8 = strlen(acStack_cc);
    uVar5 = FUN_001cae34(param_1,acStack_cc,sVar8,&local_1a0,&local_1a8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    param_6[1] = local_1a0;
  }
  pcVar6 = param_2;
  if ((*(byte *)((long)param_6 + 0x3c) >> 1 & 1) != 0) {
    lVar3 = FUN_001ce400("%s:%s",param_2,param_6[2]);
    if (lVar3 == 0) {
      return 0x1b;
    }
    (*param_10)(auStack_88,lVar3);
    FUN_001ec308(lVar3);
    (*param_9)(auStack_88,local_198);
    if ((*(byte *)((long)param_6 + 0x3c) & 2) != 0) {
      pcVar6 = local_198;
    }
  }
  lVar3 = FUN_001ce400("%s:%s:%s",pcVar6,param_6[2],param_3);
  if (lVar3 == 0) {
    return 0x1b;
  }
  (*param_10)(auStack_88,lVar3);
  FUN_001ec308(lVar3);
  (*param_9)(auStack_88,auStack_110);
  if ((*(uint *)(param_6 + 3) < 6) && ((1 << (ulong)(*(uint *)(param_6 + 3) & 0x1f) & 0x2aU) != 0))
  {
    lVar3 = FUN_001ce400("%s:%s:%s",auStack_110,*param_6,param_6[1]);
    if (lVar3 == 0) {
      return 0x1b;
    }
    (*param_10)(auStack_88,lVar3);
    FUN_001ec308(lVar3);
    (*param_9)(auStack_88,auStack_110);
  }
  lVar3 = FUN_001ce400("%s:%s",param_4,param_5);
  if (lVar3 == 0) {
    return 0x1b;
  }
  lVar4 = lVar3;
  if ((param_6[5] != 0) && (iVar2 = FUN_001e0990(param_6[5],"auth-int"), iVar2 != 0)) {
    (*param_10)(auStack_88,&DAT_03c886bc);
    (*param_9)(auStack_88,acStack_cc);
    lVar4 = FUN_001ce400("%s:%s",lVar3,acStack_cc);
    FUN_001ec308(lVar3);
    if (lVar4 == 0) {
      return 0x1b;
    }
  }
  (*param_10)(auStack_88,lVar4);
  FUN_001ec308(lVar4);
  (*param_9)(auStack_88,auStack_154);
  if (param_6[5] == 0) {
    lVar3 = FUN_001ce400("%s:%s:%s",auStack_110,*param_6,auStack_154);
  }
  else {
    lVar3 = FUN_001ce400("%s:%s:%08x:%s:%s:%s",auStack_110,*param_6,*(undefined4 *)(param_6 + 7),
                         param_6[1],param_6[5],auStack_154);
  }
  if (lVar3 == 0) {
    return 0x1b;
  }
  (*param_10)(auStack_88,lVar3);
  FUN_001ec308(lVar3);
  (*param_9)(auStack_88,acStack_cc);
  if ((*(byte *)((long)param_6 + 0x3c) & 2) != 0) {
    param_2 = local_198;
  }
  lVar3 = 1;
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\"') {
LAB_001e9f90:
      lVar3 = lVar3 + 2;
    }
    else {
      if (cVar1 == '\0') {
        pcVar6 = (char *)FUN_001ec2f8(lVar3);
        if (pcVar6 == (char *)0x0) {
          return 0x1b;
        }
        pcVar7 = pcVar6;
        do {
          cVar1 = *param_2;
          if ((cVar1 == '\"') || (cVar1 == '\\')) {
            pcVar9 = pcVar7 + 1;
            *pcVar7 = '\\';
            cVar1 = *param_2;
          }
          else {
            pcVar9 = pcVar7;
            if (cVar1 == '\0') {
              *pcVar7 = '\0';
              if (param_6[5] == 0) {
                pcVar7 = (char *)FUN_001ce400("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                              ,pcVar6,param_6[2],*param_6,param_5,acStack_cc);
              }
              else {
                pcVar7 = (char *)FUN_001ce400("username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                              ,pcVar6,param_6[2],*param_6,param_5,param_6[1],
                                              *(undefined4 *)(param_6 + 7),param_6[5],acStack_cc);
                iVar2 = FUN_001e0990(param_6[5],&DAT_03c08164);
                if (iVar2 != 0) {
                  *(int *)(param_6 + 7) = *(int *)(param_6 + 7) + 1;
                }
              }
              FUN_001ec308(pcVar6);
              if (pcVar7 == (char *)0x0) {
                return 0x1b;
              }
              pcVar6 = pcVar7;
              if (param_6[4] != 0) {
                pcVar6 = (char *)FUN_001ce400("%s, opaque=\"%s\"",pcVar7);
                FUN_001ec308(pcVar7);
                if (pcVar6 == (char *)0x0) {
                  return 0x1b;
                }
              }
              pcVar7 = pcVar6;
              if (param_6[6] != 0) {
                pcVar7 = (char *)FUN_001ce400("%s, algorithm=\"%s\"",pcVar6);
                FUN_001ec308(pcVar6);
                if (pcVar7 == (char *)0x0) {
                  return 0x1b;
                }
              }
              pcVar6 = pcVar7;
              if ((*(byte *)((long)param_6 + 0x3c) >> 1 & 1) != 0) {
                pcVar6 = (char *)FUN_001ce400("%s, userhash=true",pcVar7);
                FUN_001ec308(pcVar7);
                if (pcVar6 == (char *)0x0) {
                  return 0x1b;
                }
              }
              *param_7 = pcVar6;
              sVar8 = strlen(pcVar6);
              *param_8 = sVar8;
              return 0;
            }
          }
          param_2 = param_2 + 1;
          pcVar7 = pcVar9 + 1;
          *pcVar9 = cVar1;
        } while( true );
      }
      if (cVar1 == '\\') goto LAB_001e9f90;
      lVar3 = lVar3 + 1;
    }
    pcVar6 = pcVar6 + 1;
  } while( true );
}


