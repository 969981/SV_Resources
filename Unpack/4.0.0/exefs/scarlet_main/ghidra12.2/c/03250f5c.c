/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03250f5c; name: FUN_03250f5c
 */


void FUN_03250f5c(long *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  void *__src;
  uint uVar3;
  undefined *puVar4;
  void *__dest;
  long lVar5;
  uint uVar6;
  undefined8 local_18;
  
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 2) {
    uVar6 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar3;
      uVar6 = uVar3;
    }
    puVar4 = PTR_DAT_047d1a08;
    uVar2 = uVar6 & 0x7fffffff;
    if ((int)(uVar6 & 0x7fffffff) <= (int)uVar3) {
      uVar2 = uVar3;
    }
    if ((int)uVar2 < 2) {
      local_18 = 0x100;
      __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_18,0);
      __src = (void *)0x0;
      if (*param_1 != 0) {
        __src = (void *)(*param_1 + (long)param_1);
      }
      memcpy(__dest,__src,(long)(int)param_1[1] << 7);
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar5 = 0;
        if (*param_1 != 0) {
          lVar5 = *param_1 + (long)param_1;
        }
        (**(code **)(puVar4 + 8))(0,lVar5,0);
      }
      lVar5 = 0;
      if (__dest != (void *)0x0) {
        lVar5 = (long)__dest - (long)param_1;
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0x80000002;
      *param_1 = lVar5;
    }
    else {
      lVar5 = *param_1;
    }
    *(undefined4 *)(param_1 + 1) = 2;
    puVar1 = (undefined8 *)(lVar5 + (long)param_1);
    *(undefined2 *)(puVar1 + 0xe) = 0;
    puVar1[1] = 0x7f7fffee7f7fffee;
    *puVar1 = 0x7f7fffee7f7fffee;
    puVar1[3] = 0xff7fffeeff7fffee;
    puVar1[2] = 0xff7fffeeff7fffee;
    puVar1[5] = 0x7f7fffee7f7fffee;
    puVar1[4] = 0x7f7fffee7f7fffee;
    puVar1[7] = 0xff7fffeeff7fffee;
    puVar1[6] = 0xff7fffeeff7fffee;
    puVar1[9] = 0x7f7fffee7f7fffee;
    puVar1[8] = 0x7f7fffee7f7fffee;
    puVar1[0xb] = 0xff7fffeeff7fffee;
    puVar1[10] = 0xff7fffeeff7fffee;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    lVar5 = *param_1;
    *(undefined8 *)((long)param_1 + lVar5 + 0xe0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0xe8) = 0;
    *(undefined2 *)((long)param_1 + lVar5 + 0xf0) = 0;
    *(undefined8 *)((long)param_1 + lVar5 + 0x88) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x98) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xa8) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 200) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd8) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)param_1 + lVar5 + 0xd0) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}


