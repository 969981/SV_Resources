/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e5394; name: FUN_001e5394
 */


int FUN_001e5394(char *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  char *pcVar1;
  char *__n;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  void *__dest;
  int iVar5;
  char *pcVar6;
  size_t __n_00;
  void *__dest_00;
  void *__dest_01;
  
  if (param_4 == (undefined8 *)0x0) {
    pcVar3 = (char *)0x0;
    if (param_5 == (undefined8 *)0x0) goto LAB_001e5444;
LAB_001e53e8:
    pcVar4 = strchr(param_1,0x3b);
    if (param_1 + param_2 <= pcVar4) {
      pcVar4 = (char *)0x0;
    }
    if (pcVar3 != (char *)0x0) goto LAB_001e5404;
LAB_001e544c:
    pcVar6 = (char *)0x0;
    __n_00 = param_2;
    if (pcVar4 != (char *)0x0) {
      __n_00 = (long)pcVar4 - (long)param_1;
    }
  }
  else {
    pcVar3 = strchr(param_1,0x3a);
    if (param_1 + param_2 <= pcVar3) {
      pcVar3 = (char *)0x0;
    }
    if (param_5 != (undefined8 *)0x0) goto LAB_001e53e8;
LAB_001e5444:
    pcVar4 = (char *)0x0;
    if (pcVar3 == (char *)0x0) goto LAB_001e544c;
LAB_001e5404:
    pcVar6 = pcVar4;
    if ((pcVar4 == (char *)0x0) == pcVar4 < pcVar3) {
      pcVar6 = pcVar3;
    }
    __n_00 = (long)pcVar6 - (long)param_1;
    pcVar6 = pcVar4;
    if (pcVar4 <= pcVar3) {
      pcVar6 = param_1 + param_2;
    }
    pcVar6 = pcVar6 + ~(ulong)pcVar3;
  }
  pcVar1 = pcVar3;
  if (pcVar3 <= pcVar4) {
    pcVar1 = param_1 + param_2;
  }
  iVar5 = 0;
  __dest_00 = (void *)0x0;
  __n = (char *)0x0;
  if (pcVar4 != (char *)0x0) {
    __n = pcVar1 + ~(ulong)pcVar4;
  }
  bVar2 = true;
  if ((param_3 != (undefined8 *)0x0) && (__n_00 != 0)) {
    __dest_00 = (void *)FUN_001ec2f8(__n_00 + 1);
    bVar2 = __dest_00 != (void *)0x0;
    iVar5 = 0x1b;
    if (bVar2) {
      iVar5 = 0;
    }
  }
  __dest_01 = (void *)0x0;
  if ((((pcVar6 == (char *)0x0) || (param_4 == (undefined8 *)0x0)) || (!bVar2)) ||
     (__dest_01 = (void *)FUN_001ec2f8(pcVar6 + 1), __dest_01 != (void *)0x0)) {
    if (((__n == (char *)0x0) || (param_5 == (undefined8 *)0x0)) || (iVar5 != 0)) {
      if (iVar5 != 0) {
        return iVar5;
      }
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_001ec2f8(__n + 1);
      if (__dest == (void *)0x0) {
        FUN_001ec308(__dest_01);
        goto LAB_001e54f8;
      }
    }
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,param_1,__n_00);
      *(undefined1 *)((long)__dest_00 + __n_00) = 0;
      FUN_001ec308(*param_3);
      *param_3 = __dest_00;
    }
    if (__dest_01 != (void *)0x0) {
      memcpy(__dest_01,pcVar3 + 1,(size_t)pcVar6);
      *(char *)((long)__dest_01 + (long)pcVar6) = '\0';
      FUN_001ec308(*param_4);
      *param_4 = __dest_01;
    }
    if (__dest == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      memcpy(__dest,pcVar4 + 1,(size_t)__n);
      *(char *)((long)__dest + (long)__n) = '\0';
      FUN_001ec308(*param_5);
      iVar5 = 0;
      *param_5 = __dest;
    }
  }
  else {
LAB_001e54f8:
    FUN_001ec308(__dest_00);
    iVar5 = 0x1b;
  }
  return iVar5;
}


