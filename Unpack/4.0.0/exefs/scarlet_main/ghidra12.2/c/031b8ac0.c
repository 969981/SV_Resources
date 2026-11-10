/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031b8ac0; name: FUN_031b8ac0
 */


undefined4 FUN_031b8ac0(long *param_1,undefined8 *param_2)

{
  char *__src;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  size_t __n;
  char *pcVar6;
  char cVar7;
  undefined4 local_1e0 [2];
  long local_1d8;
  char local_1d0 [200];
  long local_108;
  short local_100;
  
  plVar5 = (long *)*param_1;
  lVar1 = param_1[1];
  __n = lVar1 - (long)plVar5;
  if ((long)__n < 10) {
    plVar4 = (long *)param_1[7];
    if (plVar4 == (long *)0x0) {
      memcpy(&local_108,plVar5,__n);
      *param_1 = lVar1;
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,&local_108,10);
    }
  }
  else {
    local_108 = *plVar5;
    local_100 = (short)plVar5[1];
    *param_1 = (long)plVar5 + 10;
  }
  if (local_108 == 0x4e41494441523f23 && local_100 == 0x4543) {
    pcVar6 = (char *)*param_1;
    lVar1 = param_1[1];
    if (lVar1 - (long)pcVar6 == 0 || lVar1 < (long)pcVar6) {
      plVar5 = (long *)param_1[7];
      if (plVar5 == (long *)0x0) {
        memcpy(local_1d0,pcVar6,lVar1 - (long)pcVar6);
        *param_1 = lVar1;
      }
      else {
        (**(code **)(*plVar5 + 0x38))(plVar5,param_1,local_1d0,1);
      }
    }
    else {
      local_1d0[0] = *pcVar6;
      *param_1 = (long)(pcVar6 + 1);
    }
    iVar2 = 200;
    cVar7 = '\0';
    do {
      pcVar6 = (char *)*param_1;
      lVar1 = param_1[1];
      if (lVar1 - (long)pcVar6 == 0 || lVar1 < (long)pcVar6) {
        plVar5 = (long *)param_1[7];
        if (plVar5 == (long *)0x0) {
          memcpy(local_1d0,pcVar6,lVar1 - (long)pcVar6);
          *param_1 = lVar1;
        }
        else {
          (**(code **)(*plVar5 + 0x38))(plVar5,param_1,local_1d0,1);
        }
      }
      else {
        local_1d0[0] = *pcVar6;
        *param_1 = (long)(pcVar6 + 1);
      }
      if ((cVar7 == '\n') && (local_1d0[0] == '\n')) break;
      iVar2 = iVar2 + -1;
      cVar7 = local_1d0[0];
    } while (iVar2 != 0);
    pcVar6 = local_1d0;
    do {
      __src = (char *)*param_1;
      lVar1 = param_1[1];
      if (lVar1 - (long)__src == 0 || lVar1 < (long)__src) {
        plVar5 = (long *)param_1[7];
        if (plVar5 == (long *)0x0) {
          memcpy(&local_1d8,__src,lVar1 - (long)__src);
          *param_1 = lVar1;
        }
        else {
          (**(code **)(*plVar5 + 0x38))(plVar5,param_1,&local_1d8,1);
        }
      }
      else {
        local_1d8._0_1_ = *__src;
        *param_1 = (long)(__src + 1);
      }
      *pcVar6 = (char)local_1d8;
      pcVar6 = pcVar6 + 1;
    } while ((char)local_1d8 != '\n');
    iVar2 = sscanf(local_1d0,"-Y %ld +X %ld",(long *)local_1e0,&local_1d8);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = 1;
      *(undefined4 *)(param_2 + 1) = 1;
      *(int *)((long)param_2 + 0xc) = (int)CONCAT71(local_1d8._1_7_,(char)local_1d8);
      *param_2 = 0x100000001;
      *(undefined4 *)(param_2 + 2) = local_1e0[0];
      *(undefined8 *)((long)param_2 + 0x14) = 0x1400000001;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


