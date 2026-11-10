/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001e4250; name: FUN_001e4250
 */


/* WARNING: Removing unreachable block (ram,0x001e43c0) */

char * FUN_001e4250(char *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  char *__s2;
  char *__dest;
  
  sVar2 = strlen(param_1);
  pcVar3 = (char *)FUN_001ec2f8(sVar2 + 1);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  *pcVar3 = '\0';
  __s = (char *)FUN_001ec328(param_1);
  pcVar4 = pcVar3;
  if (__s == (char *)0x0) {
    __s = (char *)0x0;
  }
  else if (*__s != '\0') {
    pcVar4 = strchr(__s,0x3f);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    __s2 = __s;
    __dest = pcVar3;
LAB_001e42e8:
    while (iVar1 = strncmp("./",__s2,2), iVar1 != 0) {
      iVar1 = strncmp("../",__s2,3);
      if (iVar1 == 0) {
        __s2 = __s2 + 3;
        goto LAB_001e4420;
      }
      iVar1 = strncmp("/./",__s2,3);
      if (iVar1 == 0) break;
      iVar1 = strcmp("/.",__s2);
      if (iVar1 != 0) {
        iVar1 = strncmp("/../",__s2,4);
        pcVar6 = pcVar3;
        if (iVar1 == 0) {
          __s2 = __s2 + 3;
          if (__dest <= pcVar3) {
            pcVar6 = __dest;
          }
          do {
            if (__dest <= pcVar3) goto LAB_001e440c;
            __dest = __dest + -1;
          } while (*__dest != '/');
        }
        else {
          iVar1 = strcmp("/..",__s2);
          if (iVar1 == 0) {
            if (__dest <= pcVar3) {
              pcVar6 = __dest;
            }
            __s2 = __s2 + 2;
            *__s2 = '/';
            do {
              if (__dest <= pcVar3) goto LAB_001e440c;
              __dest = __dest + -1;
            } while (*__dest != '/');
          }
          else {
            iVar1 = strcmp(".",__s2);
            if ((iVar1 == 0) || (iVar1 = strcmp("..",__s2), iVar1 == 0)) {
              *__s2 = '\0';
              *pcVar3 = '\0';
              goto LAB_001e4420;
            }
            cVar5 = *__s2;
            pcVar6 = __dest;
            do {
              __dest = pcVar6 + 1;
              *pcVar6 = cVar5;
              __s2 = __s2 + 1;
              cVar5 = *__s2;
              if (cVar5 == '/') break;
              pcVar6 = __dest;
            } while (cVar5 != '\0');
          }
        }
        goto LAB_001e4410;
      }
      __s2 = __s2 + 1;
      *__s2 = '/';
    }
    __s2 = __s2 + 2;
    goto LAB_001e4420;
  }
LAB_001e446c:
  FUN_001ec308(pcVar4);
  return __s;
LAB_001e440c:
  __dest = pcVar6;
LAB_001e4410:
  *__dest = '\0';
LAB_001e4420:
  if (*__s2 == '\0') goto LAB_001e4428;
  goto LAB_001e42e8;
LAB_001e4428:
  if (pcVar4 != (char *)0x0) {
    sVar2 = strlen(param_1 + ((long)pcVar4 - (long)__s));
    memcpy(__dest,param_1 + ((long)pcVar4 - (long)__s),sVar2 + 1);
  }
  pcVar4 = __s;
  __s = pcVar3;
  goto LAB_001e446c;
}


