/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e92b8; name: FUN_001e92b8
 */


/* WARNING: Removing unreachable block (ram,0x001e957c) */

int FUN_001e92b8(char *param_1,long *param_2,long *param_3,undefined1 *param_4,undefined1 *param_5,
                long param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char *__s2;
  char *pcVar11;
  char *__s1;
  char *__s1_00;
  int iVar12;
  undefined1 auStack_1070 [4096];
  undefined1 auStack_70 [16];
  
  __s1_00 = (char *)*param_2;
  __s1 = (char *)*param_3;
  if (__s1_00 == (char *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = *__s1_00 != '\0';
  }
  if (param_6 == 0) {
    lVar9 = FUN_001e96dc(&DAT_03c46eaa);
    if (lVar9 == 0) {
      return 1;
    }
    lVar10 = FUN_001ce400("%s%s%s",lVar9,&DAT_03bdfb3b,".netrc");
    FUN_001ec308(lVar9);
    if (lVar10 == 0) {
      return -1;
    }
    lVar9 = FUN_001ed3ec(lVar10,&DAT_03c53cd7);
    FUN_001ec308(lVar10);
  }
  else {
    lVar9 = FUN_001ed3ec(param_6,&DAT_03c53cd7);
  }
  if (lVar9 == 0) {
    return 1;
  }
  iVar7 = 0;
  bVar1 = false;
  iVar12 = 1;
  bVar3 = false;
  bVar4 = false;
  iVar8 = 0;
  bVar2 = false;
  do {
    do {
      lVar10 = FUN_001ed458(auStack_1070,0x1000,lVar9);
      if (lVar10 == 0) {
LAB_001e9588:
        if (iVar12 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          if (bVar3) {
            if (*param_2 != 0) {
              FUN_001ec308();
            }
            *param_2 = (long)__s1_00;
            *param_4 = 1;
          }
          if (bVar4) {
            if (*param_3 != 0) {
              FUN_001ec308();
            }
            iVar12 = 0;
            *param_3 = (long)__s1;
            *param_5 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          if (bVar3) {
            FUN_001ec308(__s1_00);
          }
LAB_001e959c:
          if (bVar4) {
            FUN_001ec308(__s1);
          }
        }
LAB_001e968c:
        FUN_001ed3c8(lVar9);
        return iVar12;
      }
      __s2 = (char *)FUN_001e0c9c(auStack_1070,&DAT_03c5abe0,auStack_70);
    } while ((__s2 == (char *)0x0) || (*__s2 == '#'));
    do {
      if ((__s1_00 != (char *)0x0) &&
         (((__s1 != (char *)0x0 && (*__s1_00 != '\0')) && (*__s1 != '\0')))) goto LAB_001e9588;
      if (iVar7 == 2) {
        if (bVar1) {
          if (bVar5) {
            iVar8 = FUN_001e0990(__s1_00,__s2);
          }
          else if ((__s1_00 == (char *)0x0) || (iVar7 = strcmp(__s1_00,__s2), iVar7 != 0)) {
            if (bVar3) {
              FUN_001ec308(__s1_00);
            }
            __s1_00 = (char *)FUN_001ec328(__s2);
            if (__s1_00 == (char *)0x0) {
              iVar12 = -1;
              goto LAB_001e959c;
            }
            bVar3 = true;
          }
          bVar1 = false;
        }
        else if (bVar2) {
          if ((bool)(iVar8 == 0 & bVar5)) {
            bVar1 = false;
            iVar8 = 0;
            bVar2 = false;
          }
          else {
            if ((__s1 == (char *)0x0) || (iVar7 = strcmp(__s1,__s2), iVar7 != 0)) {
              if (bVar4) {
                FUN_001ec308(__s1);
              }
              __s1 = (char *)FUN_001ec328(__s2);
              if (__s1 != (char *)0x0) {
                bVar2 = false;
                bVar1 = false;
                iVar7 = 2;
                bVar4 = true;
                goto LAB_001e955c;
              }
              if (bVar3) {
                FUN_001ec308(__s1_00);
              }
              iVar12 = -1;
              goto LAB_001e968c;
            }
            bVar1 = false;
            bVar2 = false;
          }
        }
        else {
          iVar7 = FUN_001e0990("login",__s2);
          if (iVar7 == 0) {
            iVar7 = FUN_001e0990("password",__s2);
            if (iVar7 == 0) {
              iVar6 = FUN_001e0990("machine",__s2);
              bVar1 = false;
              iVar7 = 1;
              if (iVar6 == 0) {
                iVar7 = 2;
              }
              else {
                iVar8 = 0;
              }
              bVar2 = false;
              goto LAB_001e955c;
            }
            bVar1 = false;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            bVar1 = true;
          }
        }
        iVar7 = 2;
      }
      else if (iVar7 == 1) {
        pcVar11 = param_1;
LAB_001e94d0:
        iVar7 = FUN_001e0990(pcVar11,__s2);
        if (iVar7 != 0) {
          iVar12 = 0;
        }
        iVar7 = (uint)(iVar7 != 0) << 1;
      }
      else if (iVar7 == 0) {
        iVar7 = FUN_001e0990("machine",__s2);
        if (iVar7 == 0) {
          pcVar11 = "default";
          goto LAB_001e94d0;
        }
        iVar7 = 1;
      }
LAB_001e955c:
      __s2 = (char *)FUN_001e0c9c(0,&DAT_03c5abe0,auStack_70);
    } while (__s2 != (char *)0x0);
  } while( true );
}


