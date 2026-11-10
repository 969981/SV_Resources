/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0337c444; name: FUN_0337c444
 */


void * FUN_0337c444(long param_1)

{
  byte *pbVar1;
  void *__src;
  ulong uVar2;
  byte bVar3;
  void *__dest;
  long *plVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_38 [4];
  byte local_34 [4];
  
  local_38[0] = 0xff;
  plVar7 = *(long **)(param_1 + 8);
  pbVar1 = (byte *)*plVar7;
  lVar6 = plVar7[1];
  if (lVar6 - (long)pbVar1 == 0 || lVar6 < (long)pbVar1) {
    plVar4 = (long *)plVar7[7];
    if (plVar4 == (long *)0x0) {
      memcpy(local_38,pbVar1,lVar6 - (long)pbVar1);
      *plVar7 = lVar6;
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,plVar7,local_38,1);
    }
  }
  else {
    local_38[0] = *pbVar1;
    *plVar7 = (long)(pbVar1 + 1);
  }
  bVar3 = local_38[0];
  uVar8 = (ulong)(local_38[0] >> 1) & 0x3f;
  if ((char)local_38[0] < '\0') {
    uVar9 = 6;
    do {
      local_34[0] = 0xff;
      plVar7 = *(long **)(param_1 + 8);
      pbVar1 = (byte *)*plVar7;
      lVar6 = plVar7[1];
      if (lVar6 - (long)pbVar1 == 0 || lVar6 < (long)pbVar1) {
        plVar4 = (long *)plVar7[7];
        if (plVar4 == (long *)0x0) {
          memcpy(local_34,pbVar1,lVar6 - (long)pbVar1);
          *plVar7 = lVar6;
        }
        else {
          (**(code **)(*plVar4 + 0x38))(plVar4,plVar7,local_34,1);
        }
      }
      else {
        local_34[0] = *pbVar1;
        *plVar7 = (long)(pbVar1 + 1);
      }
      uVar2 = uVar9 & 0x3f;
      uVar9 = (ulong)((int)uVar9 + 7);
      uVar8 = ((ulong)local_34[0] & 0x7f) << uVar2 | uVar8;
    } while ((char)local_34[0] < '\0');
  }
  uVar9 = -uVar8;
  if ((bVar3 & 1) == 0) {
    uVar9 = uVar8;
  }
  if ((int)uVar9 < 1) {
    return *(void **)(*(long *)(param_1 + 0x40) + ((long)-(uVar9 << 0x20) >> 0x1d));
  }
  __dest = (void *)(**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                             (*(long **)(param_1 + 0x68),(long)((int)uVar9 + 1));
  plVar7 = *(long **)(param_1 + 8);
  uVar8 = uVar9 & 0xffffffff;
  __src = (void *)*plVar7;
  if (plVar7[1] - (long)__src < (long)(uVar9 & 0xffffffff)) {
    plVar4 = (long *)plVar7[7];
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,plVar7,__dest,uVar8);
      goto LAB_0337c5dc;
    }
    memcpy(__dest,__src,plVar7[1] - (long)__src);
    lVar6 = plVar7[1];
  }
  else {
    memcpy(__dest,__src,uVar8);
    lVar6 = *plVar7 + uVar8;
  }
  *plVar7 = lVar6;
LAB_0337c5dc:
  *(undefined1 *)((long)__dest + uVar8) = 0;
  iVar5 = *(int *)(param_1 + 0x48);
  lVar6 = (long)iVar5;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) <= iVar5) {
    FUN_0337c330(param_1 + 0x40,lVar6 + 1);
    iVar5 = *(int *)(param_1 + 0x48);
  }
  *(void **)(*(long *)(param_1 + 0x40) + (long)iVar5 * 8) = __dest;
  *(int *)(param_1 + 0x48) = (int)(lVar6 + 1);
  return __dest;
}


