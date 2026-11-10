/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033478b8; name: FUN_033478b8
 */


void FUN_033478b8(undefined8 param_1,undefined8 *param_2)

{
  char *__s;
  int iVar1;
  void *__s1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  size_t sVar8;
  char *__s_00;
  long lVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [128];
  int local_70;
  ulong local_68;
  
  plVar7 = (long *)FUN_03346c00();
  FUN_031ca554(&local_68,*param_2,param_2[1]);
  if (plVar7 != (long *)0x0) {
    do {
      if (*plVar7 != plVar7[1]) {
        uVar3 = *(uint *)(plVar7 + 6);
        if (0 < (int)uVar3) {
          lVar10 = (ulong)uVar3 + 1;
          lVar11 = (ulong)uVar3 << 4;
          do {
            if ((*(char *)(plVar7[5] + lVar11 + -0x10) == '\a') &&
               (lVar9 = *(long *)(plVar7[5] + lVar11 + -8), lVar9 != 0)) {
              FUN_033478b8(param_1,lVar9,*(undefined4 *)(lVar9 + 0x10));
            }
            lVar10 = lVar10 + -1;
            lVar11 = lVar11 + -0x10;
          } while (1 < lVar10);
        }
        __s1 = (void *)plVar7[2];
        pvVar2 = (void *)plVar7[3];
        if ((__s1 != pvVar2) && (__s = (char *)(local_68 & 0xfffffffffffffffe), __s != (char *)0x0))
        {
          __n = (long)pvVar2 - (long)__s1;
          sVar8 = strlen(__s);
          if ((sVar8 != __n) || (iVar6 = memcmp(__s1,__s,__n), iVar6 != 0)) {
            sVar8 = strlen(__s);
            iVar6 = (int)sVar8;
            if ((iVar6 == 0) || (__s_00 = memchr(__s,0x3c,(long)iVar6), __s_00 == (char *)0x0)) {
              FUN_031ca644(&local_68,__s1,pvVar2);
            }
            else {
              local_70 = 1;
              local_f8._0_4_ = 0;
              local_f8._4_4_ = 0x80000080;
              local_100 = auStack_f0;
              FUN_031c6afc(&local_100,__s1,__n & 0xffffffff);
              iVar6 = ((int)__s + iVar6) - (int)__s_00;
              if (iVar6 < 0) {
                sVar8 = strlen(__s_00);
                iVar6 = (int)sVar8;
              }
              iVar5 = (int)local_f8;
              lVar10 = (long)(int)local_f8;
              iVar6 = (int)(lVar10 + -1) + iVar6;
              iVar4 = (local_f8._4_4_ & 0x7fffffff) - 1;
              iVar1 = iVar6;
              if (iVar4 <= iVar6) {
                iVar1 = iVar4;
              }
              if (local_70 != 0) {
                iVar1 = iVar6;
              }
              iVar6 = iVar1 + 1;
              if ((int)(local_f8._4_4_ & 0x7fffffff) <= iVar1) {
                FUN_030b4a20(&local_100,PTR_PTR_047d1a50 + 0x20,(long)iVar6);
              }
              if (((int)local_f8 <= iVar1) || (iVar6 < (int)local_f8)) {
                local_f8._0_4_ = iVar6;
              }
              local_100[iVar1] = 0;
              memmove(local_100 + lVar10 + -1,__s_00,(long)((int)local_f8 - iVar5));
              FUN_031ca768(&local_68,&local_100);
              uVar3 = local_f8._4_4_;
              local_f8 = (undefined1 *)((ulong)local_f8._4_4_ << 0x20);
              if ((-1 < (int)uVar3) && (local_100 != (undefined1 *)0x0)) {
                (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
              }
            }
          }
        }
      }
      if ((undefined1 *)plVar7[2] == (undefined1 *)plVar7[3]) break;
      local_100 = (undefined1 *)plVar7[2];
      local_f8 = (undefined1 *)plVar7[3];
      plVar7 = (long *)FUN_03346c00(param_1,&local_100,*(undefined4 *)((long)plVar7 + 0x24));
    } while (plVar7 != (long *)0x0);
  }
  if ((local_68 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_68 - 1,0);
  }
  return;
}


