/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b120e0; name: FUN_00b120e0
 */


int FUN_00b120e0(void *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_158 [264];
  
  iVar2 = FUN_00b11db0();
  bVar1 = *(int *)((long)param_5 + 0x7c) < *(int *)((long)param_4 + 0x7c);
  if (*(int *)((long)param_5 + 0x100) != *(int *)((long)param_4 + 0x100)) {
    bVar1 = *(int *)((long)param_5 + 0x100) < *(int *)((long)param_4 + 0x100);
  }
  if (bVar1) {
    memcpy(auStack_158,param_4,0x108);
    memcpy(param_4,param_5,0x105);
    memcpy(param_5,auStack_158,0x105);
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
          iVar2 = iVar2 + 4;
        }
        else {
          iVar2 = iVar2 + 3;
        }
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


