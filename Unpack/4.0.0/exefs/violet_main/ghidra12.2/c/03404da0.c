/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03404da0; name: FUN_03404da0
 */


void FUN_03404da0(int *param_1,ushort param_2,long param_3,long *param_4,uint *param_5,
                 undefined8 param_6)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ushort *__dest;
  ulong uVar10;
  long lVar11;
  ushort *__src;
  undefined *puVar12;
  ulong __n;
  ulong uVar13;
  ushort *local_78;
  uint local_70;
  undefined1 local_68;
  
  iVar8 = param_1[8];
  uVar4 = param_1[0x1a];
  uVar13 = (ulong)uVar4;
  *param_1 = 0;
  __dest = (ushort *)0x0;
  uVar10 = 0;
  uVar5 = *(uint *)(*(long *)(param_1 + 10) + 4);
  piVar2 = param_1 + 4;
  do {
    if (uVar13 < uVar10 + 2) {
LAB_03404f80:
      puVar12 = PTR_DAT_047e2fd0;
      param_1[1] = 0x2e;
      param_1[3] = (int)uVar10;
      lVar9 = **(long **)(param_1 + 0xc);
      if (lVar9 != 0) {
        lVar11 = 0;
        while( true ) {
          uVar5 = *(uint *)(*(long *)(param_1 + 10) + (long)param_1[0x13] * 4);
          uVar4 = uVar5 + 3;
          if (-1 < (int)uVar5) {
            uVar4 = uVar5;
          }
          memcpy(*(void **)(*(long *)(param_1 + 0xe) + lVar11 * 8),
                 (void *)(lVar9 + (long)((int)uVar4 >> 2) * 4),(ulong)(uVar4 & 0xfffffffc));
          if ((long)param_1[8] <= lVar11 + 1) break;
          lVar9 = *(long *)(*(long *)(param_1 + 0xc) + lVar11 * 8 + 8);
          lVar11 = lVar11 + 1;
        }
        *(undefined1 *)(param_1 + 0x16) = 1;
      }
      goto LAB_0340509c;
    }
    iVar7 = param_1[0x1b];
    if (__dest != (ushort *)0x0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,__dest);
    }
    __src = (ushort *)(param_3 + uVar10) + 1;
    uVar6 = *(ushort *)(param_3 + uVar10);
    __n = (ulong)uVar6;
    if (param_2 < uVar6) {
LAB_03405004:
      param_1[0] = 0;
      param_1[1] = 2;
      __dest = (ushort *)0x0;
      puVar12 = PTR_DAT_047e2fd0;
      goto LAB_0340509c;
    }
    if ((param_1[2] == 4) || (uVar3 = uVar10 + 2 + __n, uVar13 < uVar3)) {
      __dest = (ushort *)0x0;
      goto LAB_03404f80;
    }
    if (uVar13 < uVar3 + 8) {
      __dest = (ushort *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,__n + 8);
      if (__dest == (ushort *)0x0) goto LAB_03405004;
      memcpy(__dest,__src,__n);
      local_78 = __dest;
    }
    else {
      __dest = (ushort *)0x0;
      local_78 = __src;
    }
    local_70 = (uint)uVar6;
    uVar1 = (int)uVar10 + local_70 + 2;
    uVar10 = (ulong)uVar1;
    local_68 = (char)iVar7 != '\0' && uVar1 == uVar4;
    if ((bool)local_68) {
      param_1[2] = 4;
    }
    FUN_03405410(piVar2,&local_78,param_6,(uVar5 >> 1) * iVar8 * 4 + 0xf & 0xfffffff0);
    iVar7 = param_1[0x11] - param_1[0x10];
  } while (iVar7 == 0);
  param_1[3] = uVar1;
  puVar12 = PTR_DAT_047e2fd0;
  iVar8 = param_1[8];
  uVar4 = iVar7 * iVar8 * 4;
  if ((*param_4 == 0) || (*param_5 < uVar4)) {
    if (*param_4 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    }
    lVar9 = (**(code **)(puVar12 + 0x18))(5,uVar4,0x10);
    *param_4 = lVar9;
    if (lVar9 == 0) {
      param_1[1] = 2;
      param_1[0x19] = 0;
      goto LAB_0340509c;
    }
    *param_5 = uVar4;
    iVar8 = param_1[8];
  }
  uVar4 = param_1[0x18];
  if ((uVar4 >> 0xf & 1) == 0) {
    iVar8 = iVar8 + 1;
  }
  else {
    iVar8 = (uVar4 >> 0xd & 1) + (uVar4 >> 0xc & 1) + (uVar4 >> 0xe & 1);
  }
  FUN_034051e0(piVar2,*param_4,iVar7,iVar8);
  iVar8 = 0x2d;
  param_1[0x19] = iVar7;
  *param_1 = iVar7;
  if (param_1[2] == 4) {
    iVar8 = FUN_034051e0(piVar2,0,0,0);
    if (iVar8 == 0) {
      param_1[1] = 0x11;
      goto LAB_0340509c;
    }
    iVar8 = 0x2d;
    if (*param_1 == 0) {
      iVar8 = 0x2e;
    }
  }
  param_1[1] = iVar8;
LAB_0340509c:
  if (__dest != (ushort *)0x0) {
    (**(code **)(puVar12 + 0x30))(5,__dest);
  }
  return;
}


