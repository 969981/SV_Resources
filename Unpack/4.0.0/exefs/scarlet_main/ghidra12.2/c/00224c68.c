/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00224c68; name: FUN_00224c68
 */


void FUN_00224c68(ulong *param_1,char *param_2)

{
  int iVar1;
  void *__dest;
  size_t sVar2;
  void *__src;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  
  if (*param_2 == '\0') {
    uVar5 = *(ulong *)(param_2 + 8);
    if (uVar5 != 0) {
      uVar7 = 0;
      plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x20);
      do {
        if (plVar4[-4] == 0) {
          iVar1 = strncmp((char *)((long)plVar4 + -0x17),"grpc-status-details-bin",
                          (ulong)*(byte *)(plVar4 + -3));
        }
        else {
          iVar1 = strncmp((char *)plVar4[-2],"grpc-status-details-bin",plVar4[-3]);
        }
        if (iVar1 == 0) {
          if (*plVar4 == 0) {
            sVar2 = (size_t)*(byte *)(plVar4 + 1);
            __src = (void *)((long)plVar4 + 9);
          }
          else {
            sVar2 = plVar4[1];
            if (0xffffffffffffffef < sVar2) goto LAB_00224e54;
            __src = (void *)plVar4[2];
          }
          goto joined_r0x00224e4c;
        }
        uVar7 = uVar7 + 1;
        plVar4 = plVar4 + 0xd;
      } while (uVar7 < uVar5);
    }
LAB_00224e20:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  param_2 = param_2 + 0x28;
  pcVar6 = *(char **)param_2;
  if (pcVar6 == (char *)0x0) goto LAB_00224e20;
  pcVar3 = param_2;
  do {
    uVar5 = *(ulong *)(pcVar6 + 0x28);
    sVar2 = uVar5;
    if (0x16 < uVar5) {
      sVar2 = 0x17;
    }
    iVar1 = memcmp(*(void **)(pcVar6 + 0x20),"grpc-status-details-bin",sVar2);
    uVar8 = 0xffffffff;
    if (-1 < iVar1) {
      uVar8 = 0xffffffff;
      if (iVar1 != 0) {
        uVar8 = 1;
      }
      if ((0x16 < uVar5) && (iVar1 == 0)) {
        uVar8 = (uint)(0x17 < uVar5);
      }
    }
    if ((int)uVar8 >= 0) {
      pcVar3 = pcVar6;
    }
    pcVar6 = *(char **)(pcVar6 + (ulong)((int)uVar8 < 0) * 8);
  } while (pcVar6 != (char *)0x0);
  if (pcVar3 == param_2) goto LAB_00224e20;
  uVar5 = *(ulong *)(pcVar3 + 0x28);
  sVar2 = 0x17;
  if (uVar5 < 0x18) {
    sVar2 = uVar5;
  }
  iVar1 = memcmp("grpc-status-details-bin",*(void **)(pcVar3 + 0x20),sVar2);
  if ((iVar1 < 0) || (0x17 < uVar5 && iVar1 == 0)) goto LAB_00224e20;
  sVar2 = *(size_t *)(pcVar3 + 0x38);
  if (0xffffffffffffffef < sVar2) {
LAB_00224e54:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(pcVar3 + 0x30);
joined_r0x00224e4c:
  if (sVar2 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar2 << 1);
    if (sVar2 == 0) goto LAB_00224e18;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    param_1[1] = sVar2;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
  }
  memcpy(__dest,__src,sVar2);
LAB_00224e18:
  *(undefined1 *)((long)__dest + sVar2) = 0;
  return;
}


