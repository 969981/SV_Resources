/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b11db0; name: FUN_00b11db0
 */


char FUN_00b11db0(void *param_1,void *param_2,void *param_3,void *param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *__dest;
  char cVar4;
  undefined1 auStack_158 [264];
  
  iVar3 = *(int *)((long)param_2 + 0x100);
  bVar1 = *(int *)((long)param_2 + 0x7c) < *(int *)((long)param_1 + 0x7c);
  if (iVar3 != *(int *)((long)param_1 + 0x100)) {
    bVar1 = iVar3 < *(int *)((long)param_1 + 0x100);
  }
  bVar2 = *(int *)((long)param_3 + 0x7c) < *(int *)((long)param_2 + 0x7c);
  if (*(int *)((long)param_3 + 0x100) != iVar3) {
    bVar2 = *(int *)((long)param_3 + 0x100) < iVar3;
  }
  if (bVar1) {
    memcpy(auStack_158,param_1,0x108);
    if (bVar2) {
      memcpy(param_1,param_3,0x105);
      memcpy(param_3,auStack_158,0x105);
    }
    else {
      memcpy(param_1,param_2,0x105);
      memcpy(param_2,auStack_158,0x105);
      bVar1 = *(int *)((long)param_3 + 0x7c) < *(int *)((long)param_2 + 0x7c);
      if (*(int *)((long)param_3 + 0x100) != *(int *)((long)param_2 + 0x100)) {
        bVar1 = *(int *)((long)param_3 + 0x100) < *(int *)((long)param_2 + 0x100);
      }
      if (bVar1) {
        memcpy(auStack_158,param_2,0x108);
        memcpy(param_2,param_3,0x105);
        __dest = param_3;
LAB_00b11f6c:
        memcpy(__dest,auStack_158,0x105);
        cVar4 = '\x02';
        goto LAB_00b11f80;
      }
    }
  }
  else {
    cVar4 = '\0';
    if (!bVar2) goto LAB_00b11f80;
    memcpy(auStack_158,param_2,0x108);
    memcpy(param_2,param_3,0x105);
    memcpy(param_3,auStack_158,0x105);
    bVar1 = *(int *)((long)param_2 + 0x7c) < *(int *)((long)param_1 + 0x7c);
    if (*(int *)((long)param_2 + 0x100) != *(int *)((long)param_1 + 0x100)) {
      bVar1 = *(int *)((long)param_2 + 0x100) < *(int *)((long)param_1 + 0x100);
    }
    if (bVar1) {
      memcpy(auStack_158,param_1,0x108);
      memcpy(param_1,param_2,0x105);
      __dest = param_2;
      goto LAB_00b11f6c;
    }
  }
  cVar4 = '\x01';
LAB_00b11f80:
  bVar1 = *(int *)((long)param_4 + 0x7c) < *(int *)((long)param_3 + 0x7c);
  if (*(int *)((long)param_4 + 0x100) != *(int *)((long)param_3 + 0x100)) {
    bVar1 = *(int *)((long)param_4 + 0x100) < *(int *)((long)param_3 + 0x100);
  }
  if (bVar1) {
    memcpy(auStack_158,param_3,0x108);
    memcpy(param_3,param_4,0x105);
    memcpy(param_4,auStack_158,0x105);
    bVar1 = *(int *)((long)param_3 + 0x7c) < *(int *)((long)param_2 + 0x7c);
    if (*(int *)((long)param_3 + 0x100) != *(int *)((long)param_2 + 0x100)) {
      bVar1 = *(int *)((long)param_3 + 0x100) < *(int *)((long)param_2 + 0x100);
    }
    if (bVar1) {
      memcpy(auStack_158,param_2,0x108);
      memcpy(param_2,param_3,0x105);
      memcpy(param_3,auStack_158,0x105);
      bVar1 = *(int *)((long)param_2 + 0x7c) < *(int *)((long)param_1 + 0x7c);
      if (*(int *)((long)param_2 + 0x100) != *(int *)((long)param_1 + 0x100)) {
        bVar1 = *(int *)((long)param_2 + 0x100) < *(int *)((long)param_1 + 0x100);
      }
      if (bVar1) {
        memcpy(auStack_158,param_1,0x108);
        memcpy(param_1,param_2,0x105);
        memcpy(param_2,auStack_158,0x105);
        cVar4 = cVar4 + '\x03';
      }
      else {
        cVar4 = cVar4 + '\x02';
      }
    }
    else {
      cVar4 = cVar4 + '\x01';
    }
  }
  return cVar4;
}


