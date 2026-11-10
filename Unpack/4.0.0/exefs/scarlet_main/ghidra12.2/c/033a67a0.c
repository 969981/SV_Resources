/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a67a0; name: FUN_033a67a0
 */


void FUN_033a67a0(long *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint *__dest;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  uint local_48 [2];
  undefined4 local_28 [2];
  
  plVar5 = (long *)param_1[0x22];
  iVar3 = (int)param_1[1];
  lVar4 = (long)iVar3;
  lVar7 = plVar5[2];
  lVar8 = *plVar5;
  lVar6 = plVar5[4];
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar3) {
    FUN_033a6a40(param_1,PTR_PTR_047d1a50,lVar4 + 1);
    iVar3 = (int)param_1[1];
  }
  puVar1 = (undefined4 *)(*param_1 + (long)iVar3 * 0x10);
  *puVar1 = param_2;
  *(long *)(puVar1 + 2) = (lVar8 - lVar7) + lVar6;
  puVar10 = (undefined8 *)param_1[0x22];
  *(int *)(param_1 + 1) = (int)(lVar4 + 1);
  local_28[0] = 0xffffffff;
  puVar1 = (undefined4 *)*puVar10;
  if ((undefined4 *)puVar10[1] < puVar1 + 1) {
    plVar5 = (long *)puVar10[6];
    if (plVar5 == (long *)0x0) {
      memcpy(puVar1,local_28,(long)puVar10[1] - (long)puVar1);
      *puVar10 = puVar10[1];
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,puVar10,local_28,4);
    }
  }
  else {
    *puVar1 = 0xffffffff;
    *puVar10 = puVar1 + 1;
  }
  puVar9 = (ulong *)param_1[0x22];
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_48[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  __dest = (uint *)*puVar9;
  if ((uint *)puVar9[1] < __dest + 1) {
    plVar5 = (long *)puVar9[6];
    if (plVar5 == (long *)0x0) {
      memcpy(__dest,local_48,(long)puVar9[1] - (long)__dest);
      *puVar9 = puVar9[1];
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,puVar9,local_48,4);
    }
  }
  else {
    *__dest = local_48[0];
    *puVar9 = (ulong)(__dest + 1);
  }
  return;
}


