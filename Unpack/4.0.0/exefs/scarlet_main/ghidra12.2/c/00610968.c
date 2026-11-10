/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00610968; name: FUN_00610968
 */


void * FUN_00610968(long param_1,void *param_2,long *param_3)

{
  byte *pbVar1;
  void *__src;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  long *plVar7;
  long *local_58;
  long *plStack_50;
  ulong local_48;
  
  plVar3 = *(long **)(param_1 + 0x20);
  lVar5 = *plVar3;
  if (lVar5 != 0) {
    if (lVar5 == 1 || *(char *)((long)param_3 + 0x3a) == '\0') {
      local_48 = plVar3[3];
      uVar6 = plVar3[1];
      plStack_50 = plVar3;
      if (local_48 < uVar6) {
        do {
          local_58 = *(long **)(plVar3[4] + local_48 * 8);
          if (local_58 != (long *)0x0) {
            if (local_58 == *(long **)(plVar3[4] + (local_48 ^ 1) * 8)) {
              local_58 = *(long **)(*local_58 + 0x20);
            }
            goto joined_r0x00610a54;
          }
          local_48 = local_48 + 1;
        } while (uVar6 != local_48);
        local_58 = (long *)0x0;
        local_48 = uVar6;
      }
      else {
        local_58 = (long *)0x0;
      }
joined_r0x00610a54:
      while (local_58 != (long *)0x0) {
        param_2 = (void *)FUN_00610bf0(1,local_58[1],local_58[1] + 0x18,param_2,param_3);
        pbVar4 = (byte *)local_58[1];
        if ((*pbVar4 & 1) == 0) {
          pbVar1 = pbVar4 + 1;
          uVar6 = (ulong)(*pbVar4 >> 1);
        }
        else {
          uVar6 = *(ulong *)(pbVar4 + 8);
          pbVar1 = *(byte **)(pbVar4 + 0x10);
        }
        FUN_00532960(pbVar1,uVar6);
        FUN_005e0c70(&local_58);
      }
    }
    else {
      plVar3 = (long *)FUN_0049e7b0(PTR_FUN_047cba38,lVar5 << 3);
      plStack_50 = *(long **)(param_1 + 0x20);
      local_48 = plStack_50[3];
      uVar6 = plStack_50[1];
      if (local_48 < uVar6) {
        do {
          local_58 = *(long **)(plStack_50[4] + local_48 * 8);
          if (local_58 != (long *)0x0) {
            if (local_58 == *(long **)(plStack_50[4] + (local_48 ^ 1) * 8)) {
              local_58 = *(long **)(*local_58 + 0x20);
            }
            goto LAB_00610ac4;
          }
          local_48 = local_48 + 1;
        } while (uVar6 != local_48);
        local_58 = (long *)0x0;
        local_48 = uVar6;
      }
      else {
        local_58 = (long *)0x0;
      }
LAB_00610ac4:
      lVar5 = 0;
      while (local_58 != (long *)0x0) {
        plVar3[lVar5] = local_58[1];
        FUN_005e0c70(&local_58);
        lVar5 = lVar5 + 1;
      }
      FUN_006182b0(plVar3,plVar3 + lVar5,&local_58);
      if (lVar5 == 0) {
        if (plVar3 == (long *)0x0) goto LAB_00610b70;
      }
      else {
        plVar7 = plVar3;
        do {
          param_2 = (void *)FUN_00610bf0(1,*plVar7,*plVar7 + 0x18,param_2,param_3);
          pbVar4 = (byte *)*plVar7;
          if ((*pbVar4 & 1) == 0) {
            pbVar1 = pbVar4 + 1;
            uVar6 = (ulong)(*pbVar4 >> 1);
          }
          else {
            uVar6 = *(ulong *)(pbVar4 + 8);
            pbVar1 = *(byte **)(pbVar4 + 0x10);
          }
          FUN_00532960(pbVar1,uVar6);
          lVar5 = lVar5 + -1;
          plVar7 = plVar7 + 1;
        } while (lVar5 != 0);
      }
      FUN_0049e800(plVar3);
      FUN_0049e7e0(PTR_LAB_047cba48,plVar3);
    }
  }
LAB_00610b70:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      __src = (void *)(uVar6 + 9);
      uVar2 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    else {
      uVar2 = *(ulong *)(uVar6 + 0x10);
      __src = *(void **)(uVar6 + 0x18);
    }
    __n = (size_t)(int)uVar2;
    if (*param_3 - (long)param_2 < (long)__n) {
      param_2 = (void *)FUN_0052c7dc(param_3,__src,uVar2,param_2);
    }
    else {
      memcpy(param_2,__src,__n);
      param_2 = (void *)((long)param_2 + __n);
    }
  }
  return param_2;
}


