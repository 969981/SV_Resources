/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ece94; name: FUN_001ece94
 */


char * FUN_001ece94(char *param_1)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *__s;
  char *param5;
  char *__s_00;
  char *__dest;
  size_t sVar4;
  Fqdn *__dest_00;
  Fqdn *__src;
  ulong local_70 [2];
  
  local_70[0] = 0;
  local_70[1] = 0;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  sVar3 = strlen(param_1);
  sVar3 = sVar3 + 0x100;
  __s = (char *)FUN_001ec338(1,sVar3);
  if (__s == (char *)0x0) {
    __dest = (char *)0x0;
    __s_00 = (char *)0x0;
    param5 = (char *)0x0;
  }
  else {
    param5 = (char *)FUN_001ec338(1,sVar3);
    if (param5 == (char *)0x0) {
      __dest = (char *)0x0;
      __s_00 = (char *)0x0;
    }
    else {
      __s_00 = (char *)FUN_001ec338(1,sVar3);
      if (__s_00 == (char *)0x0) {
        __dest = (char *)0x0;
      }
      else {
        __dest = (char *)FUN_001ec338(1,sVar3);
        if (__dest != (char *)0x0) {
          iVar1 = sscanf(param_1,"%15[^\n:]://%[^\n/?:]%[^\n]",local_70,__s_00,param5);
          if (iVar1 < 2) {
            local_70[0] = local_70[0] & 0xffffffffffffff00;
            iVar1 = sscanf(param_1,"%[^\n/?:]%[^\n]",__s_00,param5);
            if (iVar1 < 1) goto LAB_001ed0bc;
          }
          sVar4 = strlen(__s_00);
          if (sVar4 < 0x101) {
            __dest_00 = (Fqdn *)FUN_001ec2f8(0x100);
            memset(__dest_00,0,0x100);
            __src = (Fqdn *)FUN_001ec2f8(0x100);
            memset(__src,0,0x100);
            if ((__dest_00 == (Fqdn *)0x0) || (__src == (Fqdn *)0x0)) {
              FUN_001ce618(*(undefined8 *)PTR_stderr_047cb8b8,
                           "\nError: Failed to allocate memory for nn::nsd::ResolveEx().\n\n",0);
              uVar2 = 0xffffffff;
            }
            else {
              strncpy((char *)__dest_00,__s_00,0xff);
              __dest_00[0xff] = (Fqdn)0x0;
              uVar2 = nn::nsd::ResolveEx(__src,__dest_00);
              if (uVar2 == 0) {
                strncpy(__dest,(char *)__src,0xff);
                uVar2 = 0;
                __dest[0xff] = '\0';
              }
              else {
                uVar2 = uVar2 >> 9 & 0x1fff;
                FUN_001ce618(*(undefined8 *)PTR_stderr_047cb8b8,
                             "\nError: nn::nsd::ResolveEx() failed. Err Desc: %d\n\n",uVar2);
              }
            }
            if (__src != (Fqdn *)0x0) {
              FUN_001ec308(__src);
            }
            if (__dest_00 != (Fqdn *)0x0) {
              FUN_001ec308(__dest_00);
            }
            if (uVar2 == 0) {
              if ((char)local_70[0] == '\0') {
                snprintf(__s,sVar3,"%s%s",__dest,param5);
              }
              else {
                snprintf(__s,sVar3,"%s://%s%s",(char *)local_70,__dest,param5);
              }
            }
          }
        }
      }
    }
  }
LAB_001ed0bc:
  if (*__s == '\0') {
    strcpy(__s,param_1);
  }
  FUN_001ec308(__dest);
  FUN_001ec308(__s_00);
  FUN_001ec308(param5);
  return __s;
}


