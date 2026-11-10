/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03325d70; name: FUN_03325d70
 */


ulong FUN_03325d70(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  char *__s;
  long lVar11;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [128];
  int local_58;
  
  FUN_031ca554(&local_e8,*param_2,param_2[1]);
  puVar3 = local_e8;
  puVar6 = (undefined8 *)FUN_031e1c40(param_1,(ulong)local_e8 & 0xfffffffffffffffe,0);
  if (((ulong)puVar3 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar3 + -1,0);
  }
  if (puVar6 < (undefined8 *)0x2) {
    local_e8 = auStack_d8;
    local_e0 = 0x8000008000000000;
    local_58 = 1;
    FUN_031c6afc(&local_e8,&DAT_03be6449,0xffffffff);
    __s = (char *)*param_2;
    if (__s != (char *)0x0) {
      iVar5 = *(int *)(param_2 + 1) - (int)__s;
      if (iVar5 < 0) {
        sVar7 = strlen(__s);
        iVar5 = (int)sVar7;
      }
      iVar4 = (int)local_e0;
      lVar11 = (long)(int)local_e0;
      iVar5 = (int)(lVar11 + -1) + iVar5;
      iVar2 = (local_e0._4_4_ & 0x7fffffff) - 1;
      iVar1 = iVar5;
      if (iVar2 <= iVar5) {
        iVar1 = iVar2;
      }
      if (local_58 != 0) {
        iVar1 = iVar5;
      }
      iVar5 = iVar1 + 1;
      if ((int)(local_e0._4_4_ & 0x7fffffff) <= iVar1) {
        FUN_030b4a20(&local_e8,PTR_PTR_047d1a50 + 0x20,(long)iVar5);
      }
      if (((int)local_e0 <= iVar1) || (iVar5 < (int)local_e0)) {
        local_e0 = CONCAT44(local_e0._4_4_,iVar5);
      }
      local_e8[iVar1] = 0;
      memmove(local_e8 + lVar11 + -1,__s,(long)((int)local_e0 - iVar4));
    }
    puVar6 = (undefined8 *)FUN_031e1c40(param_1,local_e8,0);
    uVar9 = local_e0;
    local_e0 = local_e0 & 0xffffffff00000000;
    if ((-1 < (long)uVar9) && (local_e8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  uVar8 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                       *(int *)(param_2 + 1) - (int)*param_2,1);
  uVar10 = (uint)*puVar6;
  uVar9 = 0;
  puVar6[(ulong)(byte)(POPCOUNT((char)(uVar10 & 0xffff)) + POPCOUNT((char)((uVar10 & 0xffff) >> 8)))
         + 2] = uVar8;
  if (((undefined8 *)0x1 < puVar6) && ((uVar10 >> 0x11 & 1) != 0)) {
    uVar10 = uVar10 & 0x1ffff;
    uVar9 = (ulong)puVar6 &
            (long)(puVar6[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                       POPCOUNT((char)(uVar10 >> 0x10))) + 2] << 0x2a) >> 0x3f;
  }
  return uVar9;
}


