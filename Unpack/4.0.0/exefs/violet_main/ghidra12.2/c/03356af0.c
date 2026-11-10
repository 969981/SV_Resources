/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03356af0; name: FUN_03356af0
 */


void FUN_03356af0(long *param_1,int param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *__s;
  undefined4 uVar7;
  undefined2 uVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *__n;
  ulong *puVar16;
  undefined1 *local_308;
  ulong local_300;
  undefined1 local_2f8 [128];
  undefined4 local_278;
  code *local_268;
  undefined *local_258;
  undefined *local_250;
  undefined1 *local_218;
  undefined *local_1d8;
  code *local_1c8;
  undefined *local_1c0;
  undefined *local_190;
  undefined *local_180;
  code *pcStack_178;
  long *local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  
  iVar2 = (int)param_1[0x6a];
  if ((iVar2 <= param_2) || (*(char *)(param_1[0x69] + (long)param_2) == '\0')) {
    iVar1 = param_2 + 1;
    if (0 < iVar1 - iVar2) {
      if ((int)(*(uint *)((long)param_1 + 0x354) & 0x7fffffff) <= param_2) {
        FUN_02e7fe28(param_1 + 0x69,PTR_PTR_047d1a50,(long)iVar1);
      }
      memset((void *)(param_1[0x69] + (long)iVar2),0,(ulong)(uint)(iVar1 - iVar2));
      *(int *)(param_1 + 0x6a) = iVar1;
    }
    *(undefined1 *)(param_1[0x69] + (long)param_2) = 1;
    if (param_4 == 0) {
      local_278 = 1;
      local_308 = local_2f8;
      local_2f8[0] = 0;
      local_300 = 0x8000008000000001;
      FUN_031e12d8(param_3[1],&local_308,0,0);
      puStack_70 = local_308 + (long)(int)local_300 + -1;
      local_78 = local_308;
      puVar10 = (ulong *)param_3[1];
      do {
        uVar15 = *puVar10;
        if (((uint)uVar15 >> 4 & 1) != 0) {
          uVar7 = (undefined4)puVar10[(ulong)(byte)POPCOUNT((byte)uVar15 & 0xf) + 2];
          goto LAB_03356c28;
        }
      } while (((uVar15 & 9) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
      uVar7 = 0;
LAB_03356c28:
      param_4 = (**(code **)(*param_1 + 8))(param_1,&local_78,uVar7);
      uVar15 = local_300;
      local_300 = local_300 & 0xffffffff00000000;
      if ((-1 < (long)uVar15) && (local_308 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
    }
    FUN_033690d4(param_4,param_2,0,0xffffffff);
    puVar16 = *(ulong **)(param_4 + 0x50);
    uVar4 = *param_3;
    puVar10 = (ulong *)param_3[1];
    puVar11 = puVar16;
    while( true ) {
      uVar6 = (uint)*puVar11;
      if ((uVar6 >> 0x14 & 1) != 0) break;
      if (((*puVar11 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
      goto LAB_03356ccc;
    }
    if (puVar11 != (ulong *)0x0) {
      uVar15 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
      __n = (undefined1 *)
            (ulong)(ushort)puVar11[(ulong)(byte)(POPCOUNT((char)uVar15) +
                                                 POPCOUNT((char)(uVar15 >> 8)) +
                                                POPCOUNT((char)(uVar15 >> 0x10))) + 2];
      goto LAB_03356cd0;
    }
LAB_03356ccc:
    __n = (undefined1 *)0x0;
LAB_03356cd0:
    local_308 = __n;
    __s = (undefined1 *)(**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,__n,&local_308);
    local_78 = __s;
    memset(__s,0,(size_t)__n);
    iVar5 = FUN_03357154(param_1 + 0x57,puVar16);
    iVar9 = (int)param_1[0x5b];
    iVar2 = iVar9;
    if (iVar9 <= iVar1) {
      iVar2 = iVar1;
    }
    if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < iVar2) {
      FUN_033277d4(param_1 + 0x5a,PTR_PTR_047d1a50,(long)iVar2);
      iVar9 = (int)param_1[0x5b];
    }
    if (iVar9 < iVar2) {
      puVar13 = (undefined8 *)(param_1[0x5a] + (long)iVar9 * 0x18);
      lVar12 = (long)iVar2 * 0x18 + (long)iVar9 * -0x18;
      *(int *)(param_1 + 0x5b) = iVar2;
      do {
        *(undefined4 *)((long)puVar13 + 0x14) = 0;
        lVar12 = lVar12 + -0x18;
        *(undefined1 *)(puVar13 + 2) = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13 = puVar13 + 3;
      } while (lVar12 != 0);
    }
    else if (iVar2 < iVar9) {
      *(int *)(param_1 + 0x5b) = iVar2;
    }
    puVar13 = (undefined8 *)(param_1[0x5a] + (long)param_2 * 0x18);
    uVar14 = *(undefined8 *)(param_1[0x58] + (long)iVar5 * 8);
    *puVar13 = __s;
    puVar13[1] = uVar14;
    *(undefined1 *)(puVar13 + 2) = 0;
    *(undefined4 *)((long)puVar13 + 0x14) = 0;
    if (puVar16 == puVar10) {
      uVar14 = FUN_031fa694(param_1 + 0x49,puVar10);
    }
    else {
      uVar14 = FUN_031fa91c(param_1 + 0x49,puVar10,puVar16);
    }
    plVar3 = param_1 + 0x79;
    uVar6 = FUN_033572a8(plVar3,&local_78);
    if (*(uint *)(param_1 + 0x7a) == uVar6) {
      iVar2 = uVar6 + 1;
      if ((int)(*(uint *)((long)param_1 + 0x3d4) & 0x7fffffff) <= (int)uVar6) {
        FUN_031d33d4(plVar3,PTR_PTR_047d1a50,(long)iVar2);
        uVar6 = *(uint *)(param_1 + 0x7a);
      }
      puVar13 = (undefined8 *)(param_1[0x79] + (long)(int)uVar6 * 0x10);
      *puVar13 = __s;
      *(int *)(puVar13 + 1) = param_2;
      *(int *)(param_1 + 0x7a) = iVar2;
    }
    else {
      *(int *)(*plVar3 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = param_2;
    }
    memset(&local_308,0,0x288);
    local_268 = FUN_03225a30;
    local_258 = PTR_LAB_047e5f00;
    local_1c8 = FUN_032259b8;
    local_1d8 = PTR_LAB_047e5f08;
    local_218 = &LAB_03225af8;
    local_250 = PTR_LAB_047e5f10;
    local_190 = PTR_FUN_047e5f18;
    local_1c0 = PTR_LAB_047e5f28;
    local_180 = PTR_FUN_047e5f20;
    pcStack_178 = FUN_03225a94;
    while( true ) {
      uVar6 = (uint)*puVar10;
      if ((uVar6 >> 0x14 & 1) != 0) break;
      if (((*puVar10 & 1) != 0) || (puVar10 = (ulong *)puVar10[1], puVar10 == (ulong *)0x0))
      goto LAB_03356f04;
    }
    if (puVar10 != (ulong *)0x0) {
      uVar15 = CONCAT44(uVar6,uVar6) & 0xfffff000fffff;
      uVar8 = (undefined2)
              puVar10[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                   POPCOUNT((char)(uVar15 >> 0x10))) + 2];
      goto LAB_03356f08;
    }
LAB_03356f04:
    uVar8 = 0;
LAB_03356f08:
    local_80 = param_1;
    FUN_033573c4(&local_308,uVar14,__s,uVar4,uVar8,__n,1);
  }
  return;
}


