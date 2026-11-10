/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278ca7c; name: FUN_0278ca7c
 */


bool FUN_0278ca7c(undefined8 *param_1,void *param_2,uint param_3)

{
  int iVar1;
  void *__s;
  undefined4 *puVar2;
  long lVar3;
  ulong __n;
  uint *puVar4;
  long *plVar5;
  undefined8 local_70;
  long *local_68;
  ulong local_60;
  undefined8 local_58;
  
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    plVar5 = (long *)*param_1;
    __n = (ulong)param_3;
    __s = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,__n,1);
    if (__s == (void *)0x0) {
      local_60 = 0;
      local_58 = 0;
      local_68 = (long *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_01053840();
      lVar3 = nn::os::GetTlsValue(*puVar2);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      memset(__s,0,__n);
      local_58 = 1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_68 = plVar5;
      local_60 = __n;
    }
    local_70 = 0;
    FUN_0278cd3c(param_1 + 6,__s);
    param_1[8] = local_60;
    param_1[9] = local_58;
    param_1[7] = local_68;
    FUN_0278c8d0(&local_70);
    puVar4 = (uint *)(param_1 + 0x10);
    *puVar4 = param_3;
    param_1[0x11] = (void *)param_1[6];
    memcpy((void *)param_1[6],param_2,__n);
    *(uint *)(param_1 + 0x12) = *puVar4;
    param_1[0x13] = param_1[0x11];
    iVar1 = FUN_0278ca04(param_1[0xe],0x2f,1);
    if ((((iVar1 == 0) && (iVar1 = FUN_0278ca04(param_1[0xe],0x4e2c,&LAB_02bdda90), iVar1 == 0)) &&
        (iVar1 = FUN_0278ca04(param_1[0xe],0x2719,puVar4), iVar1 == 0)) &&
       ((iVar1 = FUN_0278ca04(param_1[0xe],0x3c,*(undefined4 *)(param_1 + 0x10)), iVar1 == 0 &&
        (iVar1 = FUN_0278ca04(param_1[0xe],0x4ec7,&LAB_02bddafc), iVar1 == 0)))) {
      iVar1 = FUN_0278ca04(param_1[0xe],0x27b8,puVar4);
      return iVar1 == 0;
    }
  }
  return false;
}


