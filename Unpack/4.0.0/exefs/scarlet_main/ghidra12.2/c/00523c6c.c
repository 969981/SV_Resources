/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00523c6c; name: FUN_00523c6c
 */


void FUN_00523c6c(long *param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  void *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *__src;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 1);
  if (0x100 < uVar6 || param_2 <= uVar6) {
    return;
  }
  do {
    uVar2 = (int)uVar6 << 2;
    if ((uVar6 & 0xffff) == 0) {
      uVar2 = 1;
    }
    uVar6 = (ulong)uVar2;
  } while ((uVar6 & 0xffff) < param_2);
  __src = (undefined4 *)param_1[2];
  uVar1 = *(ushort *)((long)param_1 + 10);
  *(short *)(param_1 + 1) = (short)uVar2;
  lVar7 = *param_1;
  if ((uVar2 & 0xffff) < 0x101) {
    lVar8 = (uVar6 & 0xffff) << 5;
    if (lVar7 == 0) {
      __dest = (void *)FUN_0049e6e0(lVar8);
      param_1[2] = (long)__dest;
    }
    else {
      if (*(long *)(lVar7 + 0x70) != 0) {
        FUN_00520d08(lVar7,0,lVar8);
      }
      __dest = (void *)FUN_00520c00(lVar7,lVar8);
      param_1[2] = (long)__dest;
    }
    if (uVar1 != 0) {
      memmove(__dest,__src,(ulong)uVar1 << 5);
    }
    goto LAB_00523e38;
  }
  if (lVar7 == 0) {
    plVar4 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (plVar4 != (long *)0x0) goto LAB_00523d38;
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_00520d08(lVar7,0,0x18);
    }
    plVar4 = (long *)FUN_00520544(lVar7,0x18,PTR_LAB_047cdc38);
LAB_00523d38:
    plVar4[2] = 0;
    plVar4[1] = 0;
    *plVar4 = (long)(plVar4 + 1);
  }
  param_1[2] = (long)plVar4;
  puVar3 = PTR_FUN_047cba38;
  if (uVar1 != 0) {
    puVar9 = (undefined8 *)*plVar4;
    puVar10 = __src;
    while( true ) {
      local_80 = *puVar10;
      uStack_70 = *(undefined8 *)(puVar10 + 4);
      uStack_78 = *(undefined8 *)(puVar10 + 2);
      local_68 = *(undefined8 *)(puVar10 + 6);
      puVar5 = (undefined8 *)FUN_0052ae38(plVar4,puVar9,&local_58,auStack_60,&local_80);
      puVar9 = (undefined8 *)*puVar5;
      if (puVar9 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_0049e770(puVar3,0x40);
        puVar9[5] = uStack_78;
        puVar9[4] = CONCAT44(uStack_7c,local_80);
        puVar9[7] = local_68;
        puVar9[6] = uStack_70;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = local_58;
        *puVar5 = puVar9;
        if (*(long *)*plVar4 == 0) {
          puVar5 = puVar9;
        }
        else {
          *plVar4 = *(long *)*plVar4;
          puVar5 = (undefined8 *)*puVar5;
        }
        FUN_010108e0(plVar4[1],puVar5);
        plVar4[2] = plVar4[2] + 1;
      }
      puVar10 = puVar10 + 8;
      if (puVar10 == __src + (ulong)uVar1 * 8) break;
      plVar4 = (long *)param_1[2];
    }
  }
  *(undefined2 *)((long)param_1 + 10) = 0;
LAB_00523e38:
  if ((__src != (undefined4 *)0x0) && (*param_1 == 0)) {
    FUN_0049e800(__src);
    FUN_0049e7e0(PTR_LAB_047cba48,__src);
  }
  return;
}


